#include "godot_interface.h"

void GodotInterface::_bind_methods() {
	godot::ClassDB::bind_method(D_METHOD("print_type", "variant"), &GodotInterface::print_type);
}

void GodotInterface::print_type(const Variant &p_variant) const {
	print_line(vformat("Type: %d", p_variant.get_type()));
}
