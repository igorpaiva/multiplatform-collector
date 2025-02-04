#pragma once

#include "Collector.h"

class MemoryCollector : public Collector {
    public:
        MemoryCollector() = default;
        void collect() override;
    private:
        void retrieveMemoryUsageStats();
};