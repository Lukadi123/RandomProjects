# Користи Java официјален image
FROM openjdk:17-slim

# Копирај го Java кодот внатре во сликата
COPY ProductsManagement.java /ProductsManagement.java

# Компилирај го Java кодот
RUN javac /ProductsManagement.java

# Постави која апликација ќе се стартува
CMD ["java", "ProductsManagement"]

