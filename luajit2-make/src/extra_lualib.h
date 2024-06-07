/**
 * @author      : Christophe Berbizier (cberbizier@naelabs.com)
 * @file        : extra_lualib
 * @created     : Thursday Jun 06, 2024 10:39:09 CEST
 */

#ifndef EXTRA_LUALIB_H
#define EXTRA_LUALIB_H

#include "lua.h"

// ? #include "modules/luafilesystem/src/lfs.h"
#define LUA_LFSLIBNAME "lfs"
LUALIB_API int luaopen_lfs(lua_State *L);

// lrexlib-posix
#define LUA_REXPOSIXLIBNAME "rex_posix"
LUALIB_API int luaopen_rex_posix(lua_State *L);

// lrexlib-tre
//#define LUA_REXTRELIBNAME "rex_tre"
//LUALIB_API int luaopen_rex_tre(lua_State *L);

#define LUA_TZLIBNAME "tz"
LUALIB_API int luaopen_tz(lua_State *L);

#endif /* end of include guard EXTRA_LUALIB_H */
