# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/Project5/files/mongodb/build/libmongocxx

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/Project5/files/mongodb/build/libmongocxx-build

# Utility rule file for examples.

# Include the progress variables for this target.
include examples/CMakeFiles/examples.dir/progress.make

examples/CMakeFiles/examples: examples/mongocxx/aggregate
examples/CMakeFiles/examples: examples/mongocxx/bulk_write
examples/CMakeFiles/examples: examples/mongocxx/change_streams
examples/CMakeFiles/examples: examples/mongocxx/client_session
examples/CMakeFiles/examples: examples/mongocxx/connect
examples/CMakeFiles/examples: examples/mongocxx/create
examples/CMakeFiles/examples: examples/mongocxx/document_validation
examples/CMakeFiles/examples: examples/mongocxx/exception
examples/CMakeFiles/examples: examples/mongocxx/get_values_from_documents
examples/CMakeFiles/examples: examples/mongocxx/gridfs
examples/CMakeFiles/examples: examples/mongocxx/index
examples/CMakeFiles/examples: examples/mongocxx/inserted_id
examples/CMakeFiles/examples: examples/mongocxx/instance_management
examples/CMakeFiles/examples: examples/mongocxx/aggregation_examples
examples/CMakeFiles/examples: examples/mongocxx/runcommand_examples
examples/CMakeFiles/examples: examples/mongocxx/index_examples
examples/CMakeFiles/examples: examples/mongocxx/documentation_examples
examples/CMakeFiles/examples: examples/mongocxx/usage_overview
examples/CMakeFiles/examples: examples/mongocxx/query_projection
examples/CMakeFiles/examples: examples/mongocxx/query
examples/CMakeFiles/examples: examples/mongocxx/remove
examples/CMakeFiles/examples: examples/mongocxx/tailable_cursor
examples/CMakeFiles/examples: examples/mongocxx/update
examples/CMakeFiles/examples: examples/mongocxx/view_or_value_variant
examples/CMakeFiles/examples: examples/mongocxx/pool
examples/CMakeFiles/examples: examples/bsoncxx/builder_core
examples/CMakeFiles/examples: examples/bsoncxx/builder_basic
examples/CMakeFiles/examples: examples/bsoncxx/builder_stream
examples/CMakeFiles/examples: examples/bsoncxx/builder_stream_customization
examples/CMakeFiles/examples: examples/bsoncxx/decimal128
examples/CMakeFiles/examples: examples/bsoncxx/getting_values
examples/CMakeFiles/examples: examples/bsoncxx/view_and_value


examples: examples/CMakeFiles/examples
examples: examples/CMakeFiles/examples.dir/build.make

.PHONY : examples

# Rule to build all files generated by this target.
examples/CMakeFiles/examples.dir/build: examples

.PHONY : examples/CMakeFiles/examples.dir/build

examples/CMakeFiles/examples.dir/clean:
	cd /root/Project5/files/mongodb/build/libmongocxx-build/examples && $(CMAKE_COMMAND) -P CMakeFiles/examples.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/examples.dir/clean

examples/CMakeFiles/examples.dir/depend:
	cd /root/Project5/files/mongodb/build/libmongocxx-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/Project5/files/mongodb/build/libmongocxx /root/Project5/files/mongodb/build/libmongocxx/examples /root/Project5/files/mongodb/build/libmongocxx-build /root/Project5/files/mongodb/build/libmongocxx-build/examples /root/Project5/files/mongodb/build/libmongocxx-build/examples/CMakeFiles/examples.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/examples.dir/depend

