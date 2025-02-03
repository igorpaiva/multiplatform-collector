#include "include/CpuCollector.h"
#include "glog/logging.h"

#include <iostream>
#if defined(__linux__)
#include <fstream>
#elif defined(_WIN32)
#include <windows.h>
#endif

void CpuCollector::collect() {
    retrieveCpuUsageStats();
}

void CpuCollector::retrieveCpuUsageStats() {
#if defined(__linux__)
    std::ifstream file("/proc/stat");

    if (!file.is_open()) {
        std::cerr << "Failed to open /proc/stat" << std::endl;
        return;
    }

    std::string line;
    std::getline(file, line);
    file.close();

    LOG(INFO) << "CPU stats: " << line;

#elif defined(_WIN32)
    std::cout << "Windows is not supported yet" << std::endl;
#endif
}