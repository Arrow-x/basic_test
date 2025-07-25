extends Node


func _ready() -> void:
	var example := ExampleClass.new()
	example.print_type(example)
	example.hello_something(["greetings", "from"])
	example.hello_something([])
	var s := MySpecialNode.new()
	add_child(s)
