extends Node


func _ready() -> void:
	var example := GodotInterface.new()
	example.print_type(example)
	example.test_kompute_interface()
