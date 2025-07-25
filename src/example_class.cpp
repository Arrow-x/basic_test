#include "godot_cpp/core/print_string.hpp"
#include "godot_cpp/variant/packed_byte_array.hpp"
//===========================================================
#include "summator.h"
//===========================================================
#include "example_class.h"

void ExampleClass::print_type(const Variant &p_variant) const {
	print_line(vformat("Type: %d", p_variant.get_type()));
}
void ExampleClass::hello_something(const Array &ex_array) const {
	if (!ex_array.is_empty()) {
		print_line_rich(ex_array.back());
	} else {
		Summator *s = memnew(Summator);
		s->add(3);
		s->add(8);
		s->add(4);

		print_line("this array is empty");
		print_line(s->get_total());
		memfree(s);
	}
}

void ExampleClass::_bind_methods() {
	godot::ClassDB::bind_method(D_METHOD("print_type", "variant"), &ExampleClass::print_type);
	godot::ClassDB::bind_method(D_METHOD("hello_something", "array"), &ExampleClass::hello_something);
}
