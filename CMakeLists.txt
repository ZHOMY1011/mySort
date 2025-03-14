cmake_minimum_required(VERSION 3.10)
set(PROJECT_NAME MySort)
project(${PROJECT_NAME})
# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 查找所有 .cpp 文件
file(GLOB SOURCES 
    "Base.cpp"
    "main.cpp"
    "window.cpp"
    "Insert.cpp"
    "Heap.cpp"
    "Bubble.cpp"
    "Select.cpp"
    "Quick.cpp"
    "Shell.cpp"
    "Radix.cpp"
    "Merge.cpp"
)
add_executable(Sorting ${SOURCES})

# 包含头文件目录
target_include_directories(Sorting PRIVATE ${PROJECT_SOURCE_DIR})
