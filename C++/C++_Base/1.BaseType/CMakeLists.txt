# CMake最低版本要求
cmake_minimum_required(VERSION 3.10)
# 项目信息
project(BaseType)
# 查找当前目录下的所有源文件，并将名称保存到DIR_SRCS变量
aux_source_directory(. DIR_SRCS)
# 指定生成目标
add_executable(Demo ${DIR_SRCS})
