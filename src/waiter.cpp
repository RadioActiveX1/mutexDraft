#include "../include/main.hpp"
#include <iostream>

void waits() {
    std::unique_lock<std::mutex> lk(myVars.cvMutex);
    std::cerr << "Waiting... \n";
    myVars.cv.wait(lk, [] { return myVars.i == 1; });
    std::cerr << "...finished waiting. i == 1\n";
}