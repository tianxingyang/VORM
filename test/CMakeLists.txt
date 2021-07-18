project(vorm_test)

include_directories(
  ${CMAKE_SOURCE_DIR}
)

add_executable(ReflectionTest ReflectionTest.cpp)

target_link_libraries(ReflectionTest absl::strings absl::any absl::flat_hash_map)