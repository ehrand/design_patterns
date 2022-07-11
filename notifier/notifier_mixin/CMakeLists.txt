add_executable(
    notifier_mixin
    ./main.cpp
)

target_include_directories(
    notifier_mixin
    PUBLIC
        ${PROJECT_BINARY_DIR}
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/inc>
)

install(
    TARGETS notifier_mixin
    DESTINATION bin
)
