add_executable(
    notifier_crtp
    ./main.cpp
    ./src/NotifierEmail.cpp
    ./src/NotifierNull.cpp
    ./src/NotifierStdOut.cpp
)

target_include_directories(
    notifier_crtp
    PUBLIC
        ${PROJECT_BINARY_DIR}
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/inc>
)

install(
    TARGETS notifier_crtp
    DESTINATION bin
)
