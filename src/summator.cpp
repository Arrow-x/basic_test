#include "summator.h"
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/input_event_mouse_motion.hpp>
#include <godot_cpp/classes/scene_tree.hpp>

using namespace godot;

Summator::Summator() {
	// print_line("constructed Summator");
	std::cout << "constructed Summators\n";
	count = 0;
}

void Summator::_input(const Ref<InputEvent> &p_event) {
	if (auto mouse_motion = Object::cast_to<InputEventMouseMotion>(*p_event)) {
		print_line(mouse_motion->get_relative());
	}
	if (p_event->is_action_pressed("ui_accept")) {
		print_line("hit enter");
		godot::SceneTree *scene_tree = godot::Object::cast_to<godot::SceneTree>(
				godot::Engine::get_singleton()->get_main_loop());
	} else if (p_event->is_action_pressed("left_click")) {
		print_line("you pressed left click");
	}
}

void Summator::add(int p_value) {
	count += p_value;
}

void Summator::reset() {
	count = 0;
}

int Summator::get_total() const {
	return count;
}

void Summator::say_hi() const {
	print_line("hello for vitnaaaaam");
}

void Summator::_bind_methods() {
	EXPORT_REG(Summator, Variant::INT, max_speed);
	EXPORT_REG(Summator, Variant::STRING, char_name);
	EXPORT_REG(Summator, Variant::INT, count);
	EXPORT_REG(Summator, Variant::FLOAT, my_angle);
}
