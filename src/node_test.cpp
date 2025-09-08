#include "node_test.h"

using namespace godot;

MySpecialNode::MySpecialNode() {
	// print_line("constructed MySpecialNode");
	std::cout << "constructed me MySpecialNode\n";
}
void MySpecialNode::_ready() {
	std::cout << "MySpecialNode is ready\n";
	std::cout << "soemthinkg";



}

void MySpecialNode::_bind_methods() {
}
