#include "src/color.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	ansi_color_opts cyan_opts = { .color = ANSI_COLOR_CYAN };
	char *type = color(cyan_opts, "fetch");

	ansi_color_opts gray_opts = { .color = ANSI_COLOR_GRAY };
	const char *username = "modocache";
	const char *repo = "colors.c";
	char *msg = color(gray_opts,
					  "https://raw.github.com/%s/%s/master/package.json",
					  username, repo);


	fprintf(stderr, "%s : %s\n", type, msg);

	free(type);
	free(msg);
	return 0;
}
