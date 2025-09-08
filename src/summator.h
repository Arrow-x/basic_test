#pragma once
#include "macros.h"
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/node.hpp>

class Summator : public godot::Node {
	GDCLASS(Summator, godot::Node);

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

	// void _physics_process(double p_delta) override;
	void _input(const godot::Ref<godot::InputEvent> &p_event) override;

protected:
	static void _bind_methods();
};
