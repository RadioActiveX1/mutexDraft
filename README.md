# Mutex and Condition Variable Example

This repository provides an example of using mutex and condition variables in C++ to synchronize threads. The example demonstrates a scenario where one thread waits until a specific condition is met by another thread before proceeding.

- `include/`: Directory containing the header file `MyHeader.hpp`.
- `src/`: Directory containing the source code files `Main.cpp`, `MyManipulator.cpp`, and `MyWaiter.cpp`.
- `build/`: Directory where object files will be generated during compilation.
- `myprogram`: Compiled executable.

## Compilation and Running

To compile and run the example, follow these steps:

1. Open a terminal and navigate to the project directory.

2. Compile the source files using the following commands:

```bash
g++ -std=c++11 -c src/MyManipulator.cpp -o build/MyManipulator.o
g++ -std=c++11 -c src/MyWaiter.cpp -o build/MyWaiter.o
g++ -std=c++11 -c src/Main.cpp -o build/Main.o
g++ -std=c++11 build/MyManipulator.o build/MyWaiter.o build/Main.o -o myprogram
./myprogram
```
## Description
This example showcases how to use a condition variable and mutex to synchronize threads in C++. The scenario involves one thread waiting for a specific condition to be met by another thread before proceeding.

MyManipulator.cpp: Contains a function that manipulates a flag and signals the condition variable.

MyWaiter.cpp: Contains a function that waits for the condition variable until the required condition is satisfied.

Main.cpp: Integrates the functions from MyManipulator.cpp and MyWaiter.cpp to demonstrate the synchronization between threads.

## Notes
Ensure you have a C++ compiler (e.g., g++) installed on your system.

The example uses C++11 features. If your compiler doesn't support C++11, adjust the compilation flags accordingly.

The example assumes a Unix-like environment. Modify the commands as needed for your platform.

The code structure follows the header and source separation for better organization.

The example can be further extended to cover more advanced synchronization scenarios.


Feel free to modify and experiment with the code to gain a better understanding of how mutexes and condition variables work in C++. Happy coding!
Please replace the project directory structure, compilation commands, and other details as necessary to match your actual setup and platform.
