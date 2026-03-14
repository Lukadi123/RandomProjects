# ❄️ Tomorrow's Snow Forecast

A simple, clean website that displays tomorrow's snow forecast with emoji reactions.

## Features

- 🌍 **Location-based**: Automatically detects your location or search for any city
- ❄️ **Snow Detection**: Checks if tomorrow's forecast includes snow
- 😊 **Emoji Reactions**: 
  - ☃️ Happy emoji if it WILL snow tomorrow
  - 😢 Sad emoji if it will NOT snow tomorrow
- 📱 **Responsive Design**: Works on both mobile and desktop
- 🌡️ **Weather Details**: Shows temperature, condition, and date
- ⚡ **Loading States**: Smooth loading animations
- 🛡️ **Error Handling**: Graceful error messages

## Setup Instructions

### 1. Get a Free API Key

1. Go to [OpenWeatherMap](https://openweathermap.org/api)
2. Sign up for a free account
3. Navigate to the API keys section
4. Copy your API key

### 2. Configure the API Key

1. Open `script.js`
2. Find the line: `const API_KEY = 'YOUR_API_KEY';`
3. Replace `'YOUR_API_KEY'` with your actual API key:
   ```javascript
   const API_KEY = 'your-actual-api-key-here';
   ```

### 3. Open the Website

Simply open `index.html` in your web browser. No build process or server required!

## Usage

1. **Use Your Location**: Click the "📍 Use My Location" button to automatically detect your location
2. **Search a City**: Enter a city name in the search box and click "Search"
3. **View Forecast**: The website will display:
   - An emoji reaction (☃️ for snow, 😢 for no snow)
   - A clear message about tomorrow's snow forecast
   - Location name
   - Temperature
   - Weather condition
   - Forecast date

## Technical Details

- **HTML5**: Semantic markup
- **CSS3**: Modern styling with gradients, animations, and responsive design
- **JavaScript**: Vanilla JS with Fetch API for weather data
- **API**: OpenWeatherMap 5-day forecast API

## Browser Compatibility

Works in all modern browsers that support:
- ES6 JavaScript
- Fetch API
- Geolocation API
- CSS Grid and Flexbox

## Notes

- The free OpenWeatherMap API has rate limits (60 calls/minute)
- The forecast checks for snow in tomorrow's weather conditions
- Snow detection looks for: "snow" in weather condition, snow-related keywords in description, or snow precipitation data

## License

Free to use and modify as needed!

