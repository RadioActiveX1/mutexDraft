#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

#include <mutex>
#include <condition_variable>

class MyVariables {
public:
    MyVariables();

    std::mutex cvMutex;
    std::condition_variable cv;
    int i;
};

extern MyVariables myVars;

#endif // MY_HEADER_HPP
