# Connector CMake config

add_library("connector" STATIC)

target_include_directories("connector"
	PUBLIC
	"${CMAKE_CURRENT_SOURCE_DIR}")

target_sources("connector"
	PRIVATE
	"connector.cc")