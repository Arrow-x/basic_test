#include "summator.h"
//--------------------------------------
using namespace godot;

Summator::Summator() {
	count = 0;
}

void Summator::add(int p_value) {
	count += p_value;
	print_line("hih");
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
	print_line("hello for vitnaaaaam");
}

void Summator::_bind_methods() {
	EXPORT_REG(Summator, Variant::INT, max_speed);
	EXPORT_REG(Summator, Variant::STRING, char_name);
	EXPORT_REG(Summator, Variant::INT, count);
	EXPORT_REG(Summator, Variant::FLOAT, my_angle);
}

String RandClass::say_hi_there() {
	return String("Hi there");
}
