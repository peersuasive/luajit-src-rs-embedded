/**
 * @author      : Christophe Berbizier (cberbizier@naelabs.com)
 * @file        : extra_lib_init
 * @created     : Thursday Jun 06, 2024 10:38:59 CEST
 */

#include "extra_lualib.h"

static const luaL_Reg extra_lj_lib_load[] = {
  { LUA_LFSLIBNAME, luaopen_lfs },
  //{ LUA_REXTRELIBNAME, luaopen_rex_tre },
  { LUA_REXPOSIXLIBNAME, luaopen_rex_posix },
  { LUA_TZLIBNAME, luaopen_tz },

  { NULL,		NULL }
};
