cmake_minimum_required(VERSION 3.15)
project(KcOpen CXX)

set(CMAKE_CXX_STANDARD 17)

# 출력 디렉토리 설정
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out/bin)

# 하위 모듈 추가
add_subdirectory(app/utils)
add_subdirectory(app/test_main)
