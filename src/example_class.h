#pragma once

#include "godot_cpp/classes/ref_counted.hpp"

class ExampleClass : public godot::RefCounted {
	GDCLASS(ExampleClass, RefCounted)

protected:
	static void _bind_methods();

public:
	ExampleClass() = default;
	~ExampleClass() override = default;
	void print_type(const godot::Variant &p_variant) const;
	void hello_something(const godot::Array &ex_array) const;
};
