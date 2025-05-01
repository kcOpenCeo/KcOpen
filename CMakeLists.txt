cmake_minimum_required(VERSION 3.15)
project(KcOpen CXX)

set(CMAKE_CXX_STANDARD 17)

# 출력 디렉토리 설정
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/bin)

# include 디렉토리 등록
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src/include)

# 공유 라이브러리 생성
add_library(KcOpen SHARED
        src/source/CByte.cpp
)

# 테스트 실행 파일
add_subdirectory(src/test_main)
