add_library(KcOpen SHARED
        source/CByte.cpp
        source/CString.cpp
)

target_include_directories(KcOpen PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# 빌드 후 .so + 헤더 복사
add_custom_command(TARGET KcOpen POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/out/lib
        COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE:KcOpen>
        ${CMAKE_SOURCE_DIR}/out/lib/libKcOpen.so

        COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/out/include
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_SOURCE_DIR}/out/include

        COMMENT "✅ Copying libKcOpen.so and headers to out/"
)
