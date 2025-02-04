#include <iostream>
#include <memory>
#include "glog/logging.h"
#include "Collectors/include/CpuCollector.h"
#include "Collectors/include/MemoryCollector.h"

int main() {

    google::InitGoogleLogging("main");
    FLAGS_logtostderr = 1;

    LOG(INFO) << "Collecting...";
    
    LOG(INFO) << "Creating collectors";
    std::unique_ptr<Collector> cpuCollector = std::make_unique<CpuCollector>();
    std::unique_ptr<Collector> memoryCollector = std::make_unique<MemoryCollector>();

    LOG(INFO) << "Collecting CPU info";
    cpuCollector->collect();

    LOG(INFO) << "Collecting memory info";
    memoryCollector->collect();

    return 0;
}