#pragma once

#include "godot_cpp/classes/node.hpp"
#include "macros.h"

class Summator : public godot::Node {
	GDCLASS(Summator, Node);

	EXPORT_VAR(int, max_speed);
	EXPORT_VAR(godot::String, char_name);
	EXPORT_VAR(int, count);
	EXPORT_VAR(float, my_angle);

public:
	Summator();
	int get_total() const;
	void add(int p_value);
	void reset();
	void say_hi() const;

protected:
	static void _bind_methods();
};

// this is just a test
class RandClass {
public:
	godot::String say_hi_there();
};
