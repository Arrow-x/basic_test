#include "node_test.h"

using namespace godot;

void MySpecialNode::_process(double p_delta) {
	print_line("hello");
}

void MySpecialNode::_bind_methods() {
}
