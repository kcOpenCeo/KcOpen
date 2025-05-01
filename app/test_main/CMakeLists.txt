# app/test_main/CMakeLists.txt

add_executable(KcOpenTest main.cpp)

target_link_libraries(KcOpenTest KcOpen)

target_include_directories(KcOpenTest PRIVATE
        ${PROJECT_SOURCE_DIR}/app/utils/include
)

set_target_properties(KcOpenTest PROPERTIES
        BUILD_RPATH "$ORIGIN/../../lib"
)
