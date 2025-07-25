#pragma once

#include "godot_cpp/core/object.hpp"

using namespace godot;

class Summator : public Object {
	GDCLASS(Summator, Object);
	int count;

public:
	void add(int p_value);
	void reset();
	int get_total() const;
	void say_hi() const;
	Summator();

protected:
	static void _bind_methods();
};

// this is just a test
class RandClass {
public:
	String say_hi_there();
};
