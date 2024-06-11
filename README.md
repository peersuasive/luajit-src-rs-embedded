# luajit-src-embedded

This a fork of [luajit-src](https://github.com/mlua-rs/luajit-src-rs) to allow embedding of C modules.

Set up `Makefile.extra`, `extra_lib_init.c` and `extra_lualib.h`

and compile with:

```
make WITH_EMBEDDED_MODULES=1
```

[![Build Status]][github-actions]

[Build Status]: https://github.com/khvzak/luajit-src-rs/workflows/CI/badge.svg
[github-actions]: https://github.com/khvzak/luajit-src-rs/actions

This crate contains the sources of [LuaJIT] 2.1 (from Mike Pall) and logic to build it.
Intended to be consumed by the [mlua-sys] crate.

[LuaJIT]: https://github.com/LuaJIT/LuaJIT
[mlua-sys]: https://crates.io/crates/mlua-sys

# License

This project is licensed under [MIT license](http://opensource.org/licenses/MIT)
