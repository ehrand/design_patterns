add_executable(
    notifier_concepts
    ./main.cpp
)

target_include_directories(
    notifier_concepts
    PUBLIC
        ${PROJECT_BINARY_DIR}
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/inc>
)

install(
    TARGETS notifier_concepts
    DESTINATION bin
)
