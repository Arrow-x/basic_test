#pragma once

// #include "godot_cpp/core/object.hpp"
#include "godot_cpp/classes/node.hpp"

using namespace godot;

class MySpecialNode : public Node {
	GDCLASS(MySpecialNode, Node);

public:
	virtual void _process(double p_delta) override;

protected:
	static void _bind_methods();
};
