# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\PWManager_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\PWManager_autogen.dir\\ParseCache.txt"
  "PWManager_autogen"
  )
endif()
