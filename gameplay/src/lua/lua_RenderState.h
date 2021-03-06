#ifndef LUA_RENDERSTATE_H_
#define LUA_RENDERSTATE_H_

namespace gameplay
{

// Lua bindings for RenderState.
int lua_RenderState__gc(lua_State* state);
int lua_RenderState_addParameter(lua_State* state);
int lua_RenderState_addRef(lua_State* state);
int lua_RenderState_getParameter(lua_State* state);
int lua_RenderState_getParameterByIndex(lua_State* state);
int lua_RenderState_getParameterCount(lua_State* state);
int lua_RenderState_getRefCount(lua_State* state);
int lua_RenderState_getStateBlock(lua_State* state);
int lua_RenderState_release(lua_State* state);
int lua_RenderState_removeParameter(lua_State* state);
int lua_RenderState_setNodeBinding(lua_State* state);
int lua_RenderState_setParameterAutoBinding(lua_State* state);
int lua_RenderState_setStateBlock(lua_State* state);

void luaRegister_RenderState();

}

#endif
