#pragma once

#define EXPORT_REG(CLASS, TYPE, NAME)                                             \
	ClassDB::bind_method(D_METHOD("get_" #NAME), &CLASS::get_##NAME);             \
	ClassDB::bind_method(D_METHOD("set_" #NAME, "p_" #NAME), &CLASS::set_##NAME); \
	ADD_PROPERTY(PropertyInfo(TYPE, #NAME), "set_" #NAME, "get_" #NAME);

#define EXPORT_VAR(TYPE, NAME)                           \
private:                                                 \
	TYPE NAME;                                           \
                                                         \
public:                                                  \
	void set_##NAME(const TYPE &value) { NAME = value; } \
	TYPE get_##NAME() const { return NAME; }
