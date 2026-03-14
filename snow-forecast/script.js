// Mock Weather Data Mode (No API Key Required)
// This version uses simulated weather data for demonstration

// DOM Elements
const cityInput = document.getElementById('cityInput');
const searchBtn = document.getElementById('searchBtn');
const locationBtn = document.getElementById('locationBtn');
const loading = document.getElementById('loading');
const error = document.getElementById('error');
const errorMessage = document.getElementById('errorMessage');
const weatherDisplay = document.getElementById('weatherDisplay');
const snowEmoji = document.getElementById('snowEmoji');
const snowMessage = document.getElementById('snowMessage');
const location = document.getElementById('location');
const temperature = document.getElementById('temperature');
const condition = document.getElementById('condition');
const forecastDate = document.getElementById('forecastDate');

// Initialize: Show welcome message
document.addEventListener('DOMContentLoaded', () => {
    // Don't auto-load on page load, let user search or use location
    console.log('Snow Forecast Website - Mock Data Mode');
});

// Event Listeners
searchBtn.addEventListener('click', () => {
    const city = cityInput.value.trim();
    if (city) {
        getWeatherByCity(city);
    } else {
        showError('Please enter a city name');
    }
});

locationBtn.addEventListener('click', getLocationWeather);

// Allow Enter key to trigger search
cityInput.addEventListener('keypress', (e) => {
    if (e.key === 'Enter') {
        searchBtn.click();
    }
});

/**
 * Get weather forecast using user's geolocation
 * Uses mock data for demonstration
 */
function getLocationWeather() {
    if (!navigator.geolocation) {
        // If geolocation not available, use default mock data
        showLoading();
        setTimeout(() => {
            const mockData = generateMockWeatherData('Your Location');
            displayWeather(mockData.forecast, mockData.cityName, mockData.date);
        }, 1500);
        return;
    }

    showLoading();
    
    navigator.geolocation.getCurrentPosition(
        (position) => {
            // Simulate API delay
            setTimeout(() => {
                const mockData = generateMockWeatherData('Your Location');
                displayWeather(mockData.forecast, mockData.cityName, mockData.date);
            }, 1500);
        },
        (err) => {
            // If geolocation fails, use default mock data
            showLoading();
            setTimeout(() => {
                const mockData = generateMockWeatherData('Your Location');
                displayWeather(mockData.forecast, mockData.cityName, mockData.date);
            }, 1500);
        }
    );
}

/**
 * Get weather forecast by city name
 * Uses mock data for demonstration
 * @param {string} city - City name
 */
async function getWeatherByCity(city) {
    showLoading();
    
    // Simulate API delay
    setTimeout(() => {
        try {
            const mockData = generateMockWeatherData(city);
            displayWeather(mockData.forecast, mockData.cityName, mockData.date);
        } catch (err) {
            showError(err.message || 'Failed to fetch weather data. Please try again.');
            console.error('Error fetching weather:', err);
        }
    }, 1500);
}

/**
 * Generate mock weather data for demonstration
 * Creates realistic weather data with some cities having snow
 * @param {string} cityName - City name
 * @returns {Object} Mock weather data object
 */
function generateMockWeatherData(cityName) {
    // Get tomorrow's date
    const tomorrow = new Date();
    tomorrow.setDate(tomorrow.getDate() + 1);
    tomorrow.setHours(12, 0, 0, 0); // Set to noon for display
    
    // Cities that typically have snow (for more realistic mock data)
    const snowCities = ['alaska', 'anchorage', 'oslo', 'stockholm', 'helsinki', 'moscow', 
                       'toronto', 'montreal', 'denver', 'minneapolis', 'chicago', 'boston',
                       'buffalo', 'seattle', 'vancouver', 'calgary', 'edmonton', 'winnipeg',
                       'reykjavik', 'copenhagen', 'warsaw', 'prague', 'vienna', 'zurich',
                       'geneva', 'innsbruck', 'salt lake', 'milwaukee', 'detroit'];
    
    // Normalize city name for comparison
    const cityLower = cityName.toLowerCase();
    const hasSnow = snowCities.some(snowCity => cityLower.includes(snowCity));
    
    // Randomly decide snow (70% chance for snow cities, 20% for others)
    const snowChance = hasSnow ? 0.7 : 0.2;
    const willHaveSnow = Math.random() < snowChance;
    
    // Generate weather conditions
    let weatherCondition, description, temp;
    
    if (willHaveSnow) {
        const snowTypes = [
            { main: 'Snow', desc: 'light snow', temp: -5 },
            { main: 'Snow', desc: 'moderate snow', temp: -2 },
            { main: 'Snow', desc: 'heavy snow', temp: -8 },
            { main: 'Snow', desc: 'snow showers', temp: -3 },
            { main: 'Snow', desc: 'blizzard', temp: -12 }
        ];
        const snowType = snowTypes[Math.floor(Math.random() * snowTypes.length)];
        weatherCondition = snowType.main;
        description = snowType.desc;
        temp = snowType.temp + Math.floor(Math.random() * 8) - 4; // Add some variation
    } else {
        const weatherTypes = [
            { main: 'Clear', desc: 'clear sky', temp: 15 },
            { main: 'Clouds', desc: 'partly cloudy', temp: 12 },
            { main: 'Clouds', desc: 'cloudy', temp: 10 },
            { main: 'Rain', desc: 'light rain', temp: 8 },
            { main: 'Rain', desc: 'moderate rain', temp: 7 },
            { main: 'Clouds', desc: 'overcast clouds', temp: 9 }
        ];
        const weatherType = weatherTypes[Math.floor(Math.random() * weatherTypes.length)];
        weatherCondition = weatherType.main;
        description = weatherType.desc;
        temp = weatherType.temp + Math.floor(Math.random() * 10) - 5; // Add some variation
    }
    
    // Create mock forecast data matching OpenWeatherMap API structure
    const mockForecast = {
        dt: Math.floor(tomorrow.getTime() / 1000),
        main: {
            temp: temp,
            feels_like: temp - 2,
            temp_min: temp - 3,
            temp_max: temp + 2,
            pressure: 1013,
            humidity: willHaveSnow ? 85 : 65
        },
        weather: [
            {
                main: weatherCondition,
                description: description,
                icon: willHaveSnow ? '13d' : '01d'
            }
        ],
        clouds: {
            all: willHaveSnow ? 90 : 40
        },
        wind: {
            speed: willHaveSnow ? 5.5 : 3.2,
            deg: 180
        },
        snow: willHaveSnow ? { '3h': 2.5 } : undefined
    };
    
    return {
        forecast: mockForecast,
        cityName: cityName,
        date: tomorrow
    };
}

/**
 * Check if weather condition indicates snow
 * @param {Object} weatherData - Weather data object
 * @returns {boolean} - True if snow is expected
 */
function willSnow(weatherData) {
    // Check main weather condition
    const mainCondition = weatherData.weather[0].main.toLowerCase();
    if (mainCondition === 'snow') {
        return true;
    }
    
    // Check weather description for snow-related keywords
    const description = weatherData.weather[0].description.toLowerCase();
    const snowKeywords = ['snow', 'sleet', 'blizzard', 'flurries'];
    if (snowKeywords.some(keyword => description.includes(keyword))) {
        return true;
    }
    
    // Check if there's snow in the forecast (some APIs provide this)
    if (weatherData.snow && weatherData.snow['3h'] > 0) {
        return true;
    }
    
    return false;
}

/**
 * Display weather information on the page
 * @param {Object} forecastData - Forecast data for tomorrow
 * @param {string} cityName - City name
 * @param {Date} date - Forecast date
 */
function displayWeather(forecastData, cityName, date) {
    hideLoading();
    hideError();
    
    const isSnowing = willSnow(forecastData);
    
    // Set emoji and message
    if (isSnowing) {
        snowEmoji.textContent = '☃️';
        snowMessage.textContent = 'It will snow tomorrow!';
        snowMessage.style.color = '#2b6cb0';
    } else {
        snowEmoji.textContent = '😢';
        snowMessage.textContent = 'No snow tomorrow';
        snowMessage.style.color = '#4a5568';
    }
    
    // Set location
    location.textContent = `📍 ${cityName}`;
    
    // Set temperature
    const temp = Math.round(forecastData.main.temp);
    temperature.textContent = `${temp}°C`;
    
    // Set condition
    condition.textContent = forecastData.weather[0].description
        .split(' ')
        .map(word => word.charAt(0).toUpperCase() + word.slice(1))
        .join(' ');
    
    // Set date
    const dateOptions = { weekday: 'long', year: 'numeric', month: 'long', day: 'numeric' };
    forecastDate.textContent = date.toLocaleDateString('en-US', dateOptions);
    
    // Show weather display
    weatherDisplay.classList.remove('hidden');
}

/**
 * Show loading state
 */
function showLoading() {
    loading.classList.remove('hidden');
    weatherDisplay.classList.add('hidden');
    error.classList.add('hidden');
}

/**
 * Hide loading state
 */
function hideLoading() {
    loading.classList.add('hidden');
}

/**
 * Show error message
 * @param {string} message - Error message to display
 */
function showError(message) {
    hideLoading();
    weatherDisplay.classList.add('hidden');
    errorMessage.textContent = message;
    error.classList.remove('hidden');
}

/**
 * Hide error message
 */
function hideError() {
    error.classList.add('hidden');
}

