cmake_minimum_required(VERSION 3.8)

PROJECT(dmbigint)

LIST(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
INCLUDE(cmake/ModuleImport.cmake)
INCLUDE(cmake/ModuleCompileOptions.cmake)
ModuleSetCompileOptions()
ModuleSetWinCompilerFlags()

SET(DMBIGINT_VERSION_MAJOR "1")
SET(DMBIGINT_VERSION_MINOR "0")
SET(DMBIGINT_VERSION_PATCH "1")
SET(DMBIGINT_VERSION "${DMBIGINT_VERSION_MAJOR}.${DMBIGINT_VERSION_MINOR}.${DMBIGINT_VERSION_PATCH}")

MESSAGE(STATUS "VERSION: ${DMBIGINT_VERSION}")

OPTION(USE_DMBIGINT "use dmbigint" OFF)

ModuleImportAll("thirdparty")
LibImport("dmbigint" "src/dmbigint")
ExeImport("test" "dmbigint;dmtest")

#ADD_CUSTOM_COMMAND(
#TARGET dmbiginttest
#PRE_BUILD
#COMMAND ${CMAKE_COMMAND} -E copy_if_different
#${CMAKE_CURRENT_SOURCE_DIR}/config/test.csv
#$<TARGET_FILE_DIR:dmbiginttest>
#)

#INSTALL(DIRECTORY include/ DESTINATION include)
#INSTALL(TARGETS dmbigint
#        RUNTIME DESTINATION bin
#        LIBRARY DESTINATION lib
#        ARCHIVE DESTINATION lib)

#SET(DMBIGINT_LIBS "dmbigint")
#MARK_AS_ADVANCED(${DMBIGINT_LIBS})