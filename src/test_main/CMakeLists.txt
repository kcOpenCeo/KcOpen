add_executable(KcOpenTest main.cpp)

target_link_libraries(KcOpenTest KcOpen)
target_include_directories(KcOpenTest PRIVATE ${PROJECT_SOURCE_DIR}/src/include)

# 런타임시 .so 인식용 rpath
set_target_properties(KcOpenTest PROPERTIES
        BUILD_RPATH "$ORIGIN/../../lib"
)
