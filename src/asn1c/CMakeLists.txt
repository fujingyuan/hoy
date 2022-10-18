cmake_minimum_required(VERSION 3.0.0)
project(asn1c VERSION 0.1.0)

file(GLOB ASN1C_FILES "*.c" "*.h")
include_directories(${PROJECT_SOURCE_DIR})
add_library(asn1c ${ASN1C_FILES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
