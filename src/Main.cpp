#include "../include/main.hpp"
#include <thread>

MyVariables myVars;

int main() {
    std::thread t1(waits), t2(waits), t3(waits), t4(signals);
    t1.join();
    t2.join();
    t3.join();
    t4.join();

    return 0;
}
