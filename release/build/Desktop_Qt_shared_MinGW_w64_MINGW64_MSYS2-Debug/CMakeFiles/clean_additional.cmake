# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\release_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\release_autogen.dir\\ParseCache.txt"
  "release_autogen"
  )
endif()
