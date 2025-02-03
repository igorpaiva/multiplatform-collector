## Multiplatform Collector

* Collects system information either in Windows or Unix-based systems

### Project structure:

```
MultiplatformCollector/
├── CMakeLists.txt
├── src/
│   ├── main.cpp
│   ├── CMakeLists.txt
│   ├── Collectors/
│   │   ├── include/
│   │   │   ├── CpuCollector.h
│   │   │   ├── MemoryCollector.h
│   │   ├── CpuCollector.cpp
│   │   └── MemoryCollector.cpp
└── tests/
    └── CMakeLists.txt
```