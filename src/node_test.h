#pragma once

#include "godot_cpp/classes/node.hpp"

class MySpecialNode : public godot::Node {
	GDCLASS(MySpecialNode, Node);

public:
	virtual void _process(double p_delta) override;

protected:
	static void _bind_methods();
};
