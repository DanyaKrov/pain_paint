#include "pain_paint.h"

void filledRect(vector<vector<string>>& matrix, int x, int y, int width, int height, string char_) {
	for (int i = x; i < x + width; i++) {
		for (int k = y; k < y + height; k++) {
			matrix[k][i] = char_;
		}
	}
}