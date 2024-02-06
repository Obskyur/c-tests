#include "colors.h"
#include "quicksort.h"

void main() {
	runColors();
	int nums[] = { 8, 7, 4, 13, 12, 23, 2, 1, 5 };
	runQuickSort(nums, sizeof(nums)/sizeof(nums[0]));
}

