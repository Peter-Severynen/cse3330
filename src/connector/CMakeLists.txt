# Connector CMake config

add_library("connector" STATIC)

target_include_directories("connector"
	PUBLIC
	"${CMAKE_CURRENT_SOURCE_DIR}"
	PRIVATE
	"C:/Program Files/MySQL/Connector C++ 1.1/include")

target_sources("connector"
	PRIVATE
	"connector.cc")

# Link with MySQL Connector C++ Library
target_link_libraries("connector" "mysqlcppconn.lib")