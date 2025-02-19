#include <Godot.hpp>
#include "Controller.h"
#include "Player.h"
#include "Enemy.h"

using namespace godot;

extern "C" void GDN_EXPORT godot_gdnative_init(godot_gdnative_init_options* o)
{
    Godot::gdnative_init(o);
}

extern "C" void GDN_EXPORT godot_gdnative_terminate(godot_gdnative_terminate_options* o)
{
    Godot::gdnative_terminate(o);
}

extern "C" void GDN_EXPORT godot_nativescript_init(void* handle)
{
    Godot::nativescript_init(handle);
    register_class<Controller>();
    register_class<Player>();
    register_class<Enemy>();
}