#!/bin/sh

g++ -g -c -fPIC -Igodot-cpp/include -Igodot-cpp/gdextension -Igodot-cpp/gen/include src/example_class.cpp -o src/example_class.o &
g++ -g -c -fPIC -Igodot-cpp/include -Igodot-cpp/gdextension -Igodot-cpp/gen/include src/node_test.cpp -o src/node_test.o &
g++ -g -c -fPIC -Igodot-cpp/include -Igodot-cpp/gdextension -Igodot-cpp/gen/include src/register_types.cpp -o src/register_types.o &
g++ -g -c -fPIC -Igodot-cpp/include -Igodot-cpp/gdextension -Igodot-cpp/gen/include src/summator.cpp -o src/summator.o

g++ -shared -o bin/linux/libTEST_LIB.linux.template_debug.x86_64.so src/example_class.o src/node_test.o src/register_types.o src/summator.o godot-cpp/gen/src/classes/*.o godot-cpp/gen/src/variant/*.o godot-cpp/src/variant/*.o godot-cpp/src/classes/*.o godot-cpp/src/core/*.o godot-cpp/src/*.o
