#pragma once

#include "Collector.h"

class CpuCollector : public Collector {
    public:
        CpuCollector() = default;
        void collect() override;
    private:
        void retrieveCpuUsageStats();
};