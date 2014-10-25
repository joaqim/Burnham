#pragma once

extern "C" {
	#include <Lua/lua.h>
	#include <Lua/lualib.h>
	#include <Lua/lauxlib.h>
}

class LuaManager
{
public:
	LuaManager();
	~LuaManager();
private:
	lua_State *_L;
};

