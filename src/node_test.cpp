#include "node_test.h"
#include "godot_cpp/core/print_string.hpp"

void MySpecialNode::_process(double p_delta) {
	print_line("hello");
}

void MySpecialNode::_bind_methods() {
}
