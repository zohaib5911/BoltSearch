cmake_minimum_required(VERSION 3.10)
project(BoltSearch)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include headers from include/
include_directories(include)

# Add source files
add_executable(BoltSearch src/main.cpp)

# Add nlohmann/json (header-only library)
include(FetchContent)
FetchContent_Declare(
  json
  GIT_REPOSITORY https://github.com/nlohmann/json.git
  GIT_TAG v3.11.3
)
FetchContent_MakeAvailable(json)

target_link_libraries(BoltSearch PRIVATE nlohmann_json::nlohmann_json)
