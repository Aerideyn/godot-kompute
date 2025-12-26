#include "godot_interface.h"

void GodotInterface::_bind_methods() {
	godot::ClassDB::bind_method(D_METHOD("print_type", "variant"), &GodotInterface::print_type);
	godot::ClassDB::bind_method(D_METHOD("test_kompute_interface"), &GodotInterface::test_kompute_interface);
}

void GodotInterface::test_kompute_interface()
{
	print_line("Kompute interface test - calling from Godot");
	print_line("Ready to integrate Kompute kernels!");
	// TODO: Add actual Kompute kernel execution here after building Kompute library
}

void GodotInterface::print_type(const Variant &p_variant) const {
	print_line(vformat("Type: %d", p_variant.get_type()));
}
