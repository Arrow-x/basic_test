#include "godot_cpp/core/class_db.hpp"
#include "godot_cpp/core/print_string.hpp"
//--------------------------------------
#include "summator.h"
//--------------------------------------

void Summator::add(int p_value) {
	count += p_value;
	print_line("hi");
}

void Summator::reset() {
	print_line("ho");
	count = 0;
}

int Summator::get_total() const {
	print_line("ha");
	return count;
}

void Summator::say_hi() const {
	print_line("hi");
}

Summator::Summator() {
	count = 0;
}

void Summator::_bind_methods() {
	ClassDB::bind_method(D_METHOD("add", "value"), &Summator::add);
	ClassDB::bind_method(D_METHOD("reset"), &Summator::reset);
	ClassDB::bind_method(D_METHOD("say_hi"), &Summator::say_hi);
	ClassDB::bind_method(D_METHOD("get_total"), &Summator::get_total);
}

String RandClass::say_hi_there() {
	return String("Hi there");
}
