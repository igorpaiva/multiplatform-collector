#include <iostream>
#include <memory>
#include "glog/logging.h"
#include "Collectors/include/CpuCollector.h"

int main() {

    google::InitGoogleLogging("main");
    FLAGS_logtostderr = 1;

    LOG(INFO) << "Collecting...";
    
    std::unique_ptr<Collector> cpuCollector = std::make_unique<CpuCollector>();

    cpuCollector->collect();

    return 0;
}