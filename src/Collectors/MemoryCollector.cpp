#include "include/MemoryCollector.h"
#include "glog/logging.h"

#if defined(__linux__)
#include <sys/sysinfo.h>
#elif defined(_WIN32)
#include <windows.h>
#endif

void MemoryCollector::collect() {
    retrieveMemoryUsageStats();
}

void MemoryCollector::retrieveMemoryUsageStats() {
    LOG(INFO) << "Retrieving memory usage stats";
#if defined(__linux__)
    struct sysinfo memInfo;
    sysinfo(&memInfo);
    LOG(INFO) << "Total RAM: " << memInfo.totalram;
    LOG(INFO) << "Free RAM: " << memInfo.freeram;
    LOG(INFO) << "Shared RAM: " << memInfo.sharedram;
    LOG(INFO) << "Buffered RAM: " << memInfo.bufferram;
#elif defined(_WIN32)
    MEMORYSTATUSEX memInfo;
    memInfo.dwLength = sizeof(MEMORYSTATUSEX);
    GlobalMemoryStatusEx(&memInfo);
    LOG(INFO) << "Total RAM: " << memInfo.ullTotalPhys;
    LOG(INFO) << "Free RAM: " << memInfo.ullAvailPhys;
    LOG(INFO) << "Total Virtual Memory: " << memInfo.ullTotalVirtual;
    LOG(INFO) << "Free Virtual Memory: " << memInfo.ullAvailVirtual;
#endif
}