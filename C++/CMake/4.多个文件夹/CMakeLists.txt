# CMake 最低版本要求
cmake_minimum_required(VERSION 3.10)

# 项目信息
project(Demo)

# 查找当前目录下的所有源文件; 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 添加子目录
add_subdirectory(hello)

# 指定生成目标
add_executable(Demo ${DIR_SRCS})

# 添加链接库
target_link_libraries(Demo Hello)