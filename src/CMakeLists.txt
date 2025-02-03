file(GLOB_RECURSE SOURCES *.cpp)

add_library(MultiplatformCollector ${SOURCES})

target_include_directories(MultiplatformCollector PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(collector main.cpp)

target_link_libraries(collector PRIVATE MultiplatformCollector glog::glog)

if(WIN32)
    # TODO
elseif(UNIX)
    # TODO
endif()