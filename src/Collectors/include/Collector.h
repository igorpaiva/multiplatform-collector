#pragma once

class Collector {
    public:
        virtual ~Collector() = default;
        virtual void collect() = 0;
};