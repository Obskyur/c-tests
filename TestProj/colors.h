#pragma once

#define WHITE "\033[0m"
#define RED "\033[31m"
#define ORANGE "\033[38;5;208m"
#define RGB "\033[38;2;113;234;160m"

#include <stdio.h>

/// Prints text to console in varying colors and locations to test ANSI codes in #define statements
void runColors() {
	printf(WHITE);
	printf("Hello World!\n");
	printf("%sRed?", RED);
	printf(ORANGE);
	printf("\033[8;42HTest in weird spot?\n");
	printf("%sRGB Check", RGB);
	printf(WHITE);
}