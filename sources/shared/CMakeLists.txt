add_library(cpp2json-shared INTERFACE)
target_include_directories(cpp2json-shared INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}")
cpp2json_private_stuff(cpp2json-shared INTERFACE)
