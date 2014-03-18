# color.c

[![Build Status](https://travis-ci.org/modocache/color.c.png)](https://travis-ci.org/modocache/color.c)

```c
// Allocate a string "fetch" in cyan and underlined
ansi_color_opts cyan_opts = { .color = ANSI_COLOR_CYAN,
                              .effect = ANSI_EFFECT_UNDERLINE };
char *type = color(cyan_opts, "fetch");

// Allocate a string with variadic arguments, in gray
ansi_color_opts gray_opts = { .color = ANSI_COLOR_GRAY };
const char *username = "modocache";
const char *repo = "colors.c";
char *msg = color(gray_opts,
                  "https://raw.github.com/%s/%s/master/package.json",
                  username, repo);

// Print the strings
fprintf(stderr, "%s : %s\n", type, msg);

// Strings returned by `color` must be freed
free(type);
free(msg);
```
