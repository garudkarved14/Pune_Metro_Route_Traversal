# Pune Metro Route Traversal Application

Welcome to the Pune Metro Route Traversal System implemented in C programming language. This application assists you with planning your metro journey in Pune. Whether you're a local commuter or a visitor, this application will help you navigate the metro network efficiently.

## Features

1. **Suggests Closest Real-Time Metro**: This application will suggest the closest real-time metro along with its timing details, making it easier for you to catch the next train.

2. **Suggests Metro Line**: It recommends the metro line you should board to reach your destination.

3. **Suggests Metro Change**: If required, the application will suggest a metro change, helping you plan your journey smoothly.

4. **Displays Complete Path**: The application will provide you with a complete path along with intermediate stations, so you know what to expect during your journey.

5. **Shortest Path Calculation**: We utilize Dijkstra's Algorithm to find the shortest path, minimizing your travel distance (in kilometers).

6. **Fare Calculation**: Get an estimate of the fare required for your journey, helping you budget your metro trips.

## How to Use

To use this application, follow these steps:

### Cloning the Repository

1. Open your terminal or command prompt.
2. Use the following command to clone the repository to your local machine:

    ```shell
    git clone https://github.com/nachiket-15/Pune_Metro_Route_Traversal.git
    ```
### Going to Desired Directory

   ```shell
   cd Pune_Metro_Route_Traversal/DSA_Project_\(M\)/
   ```

### Compiling the Code

1. Navigate to the directory where you cloned the repository.

2. Use a C compiler, such as GCC, to compile the source code. For example, you can use the following command to compile the necessary source files:

    ```shell
    gcc -o myprogram DSA_Project_final.c check_station.c creategraph.c display_time.c station.c station_not_found.c station_names.c
    ```

### Running the Application

After successfully compiling the source code, you can run the application by executing the following command in your terminal:

```shell
./myprogram

