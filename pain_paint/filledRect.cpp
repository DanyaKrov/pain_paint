#include "pain_paint.h"

void filledRect(vector<vector<string>>& matrix, int x, int y, int width, int height, string char_) {
	if (width <= 0 || height <= 0) {
		print_error("Error: wrong parameters");
		exit(-1);
	}
	for (int i = x; i < x + width; i++) {
		for (int k = y; k < y + height; k++) {
			if (matrix.size() > k && matrix[0].size() > i)
				matrix[k][i] = char_;
		}
	}
}