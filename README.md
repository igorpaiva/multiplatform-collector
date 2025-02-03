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

### Building and running the project

#### On Linux
* This project uses CMake. To build it, open a terminal on the project's root and create a build folder:
  
    ``` bash
    mkdir build
    ```
    Then, go inside the `build` folder and run cmake:

    ``` bash
    cd build

    cmake ..
    ```
    Once CMake is finished generating the files, run

    ``` bash
    make
    ```

    a `collector` executable will be present inside the `build/src` folder. To run it, go inside this folder and run 

    ``` bash
    ./collector
    ```

#### On Windows
  * instructions coming soon