#define ELAPSED_H
#define __time_inst std::chrono::_V2::steady_clock::time_point

#include <iostream>
#include <chrono>
#include <unistd.h>

inline __time_inst getMoment()
{
    return std::chrono::steady_clock::now();
};

inline void printInNanoseconds(__time_inst start, __time_inst end)
{
    std::cerr << std::endl
              << "Elapsed time in nanoseconds: "
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count()
              << " ns" << std::endl;
}

inline void printInMicroseconds(__time_inst start, __time_inst end)
{
    std::cerr << std::endl
              << "Elapsed time in microseconds: "
              << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count()
              << " µs" << std::endl;
}

inline void printInMilliseconds(__time_inst start, __time_inst end)
{
    std::cerr << std::endl
              << "Elapsed time in milliseconds: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms" << std::endl;
}

inline void printInSeconds(__time_inst start, __time_inst end)
{
    std::cerr << std::endl
              << "Elapsed time in seconds: "
              << std::chrono::duration_cast<std::chrono::seconds>(end - start).count()
              << " sec";
}