#include "example_class.h"
#include "godot_cpp/variant/array.hpp"
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
		print_line("how it's going dudes lol");
		Summator *summonator_instance = memnew(Summator);

		Node *root = gutils::get_scene_root();
		if (root) {
			root->add_child(summonator_instance);
		}
		summonator_instance->add(3);
		summonator_instance->add(8);
		summonator_instance->add(4);
		
		
		print_line(summonator_instance->get_total());
	}
}

void ExampleClass::_bind_methods() {
}
