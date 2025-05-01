add_library(KcOpen SHARED
        source/CByte.cpp
        source/CString.cpp
)

target_include_directories(KcOpen PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# 빌드 후 .so + 헤더 복사
set(KCOPEN_OUT_BASE ${CMAKE_SOURCE_DIR}/out/amd64/KcOpen)

add_custom_command(TARGET KcOpen POST_BUILD
        # lib 복사
        COMMAND ${CMAKE_COMMAND} -E make_directory ${KCOPEN_OUT_BASE}/lib
        COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_FILE:KcOpen>
        ${KCOPEN_OUT_BASE}/lib/libKcOpen.so

        # include 복사
        COMMAND ${CMAKE_COMMAND} -E make_directory ${KCOPEN_OUT_BASE}/include
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${KCOPEN_OUT_BASE}/include

        COMMENT "✅ Copying libKcOpen.so and headers to out/amd64/KcOpen/"
)
