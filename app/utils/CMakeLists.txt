add_library(KcOpen SHARED
        source/CByte.cpp
)

target_include_directories(KcOpen PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# 빌드 후 out/lib로 복사
add_custom_command(TARGET KcOpen POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_SOURCE_DIR}/out/lib
        COMMAND ${CMAKE_COMMAND} -E copy
        "$<TARGET_FILE:KcOpen>"
        "${CMAKE_SOURCE_DIR}/out/lib/libKcOpen.so"
        COMMENT "✅ Copying libKcOpen.so to ${CMAKE_SOURCE_DIR}/out/lib/"
)
