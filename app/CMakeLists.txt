cmake_minimum_required(VERSION 3.0.0)
set (APP_SOURCES "main.cpp")
project(main VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(${EXECUTABLE_NAME} ${APP_SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
