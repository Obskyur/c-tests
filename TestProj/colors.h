#pragma once

#define RESET "\033[0m"
#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN  "\033[36m"
#define WHITE "\033[37m"
#define ORANGE "\x1B[38;5;208m"
#define RGB "\x1B[38;2;113;234;160m"

#include <stdio.h>

/// Prints text to console in varying colors and locations to test ANSI codes in #define statements
void runColors() {
	printf("Hello World!\n");
	printf("%sRed?", RED);
	printf("%s\033[8;42HTest in weird spot?\n", ORANGE);
	printf("%sRGB Check%s", RGB, RESET);
}