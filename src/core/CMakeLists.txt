# Core CMake config

add_executable("cse3330")

target_link_libraries( "cse3330"
	"connector")

target_include_directories("cse3330"
	PRIVATE
	"${CMAKE_CURRENT_SOURCE_DIR}")

target_sources("cse3330"
	PRIVATE
	"core.cc")