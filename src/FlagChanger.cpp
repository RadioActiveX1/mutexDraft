#include "../include/main.hpp"
#include <thread>
#include <chrono>
#include <iostream>

void signals() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    {
        std::lock_guard<std::mutex> lk(myVars.cvMutex);
        std::cerr << "Notifying...\n";
    }
    myVars.cv.notify_all();

    std::this_thread::sleep_for(std::chrono::seconds(1));

    {
        std::lock_guard<std::mutex> lk(myVars.cvMutex);
        myVars.i = 1;
        std::cerr << "Notifying again...\n";
    }
    myVars.cv.notify_all();
}
