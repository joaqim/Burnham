#include "LuaManager.h"


LuaManager::LuaManager()
{
	_L = lua_open();
}


LuaManager::~LuaManager()
{
	lua_close(_L);
}
