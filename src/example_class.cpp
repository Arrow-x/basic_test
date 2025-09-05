#include "example_class.h"
#include "gutils.hpp"
#include "summator.h"

using namespace godot;

void ExampleClass::print_type(const Variant &p_variant) const {
	print_line(vformat("Type: %d", p_variant.get_type()));
}
void ExampleClass::hello_something(const Array &ex_array) const {
	if (!ex_array.is_empty()) {
		print_line_rich(ex_array.back());
	} else {
		Summator *s = memnew(Summator);
		Node *root = gutils::get_scene_root();
		if (root) {
			root->add_child(s);
		}

		s->add(3);
		s->add(8);
		s->add(4);
		RandClass *c = memnew(RandClass);
		print_line(c->say_hi_there());

		print_line("this array is empty");
		print_line(s->get_total());
		memfree(c);
	}
}

void ExampleClass::_bind_methods() {
	ClassDB::bind_method(D_METHOD("print_type", "variant"), &ExampleClass::print_type);
	ClassDB::bind_method(D_METHOD("hello_something", "array"), &ExampleClass::hello_something);
}
