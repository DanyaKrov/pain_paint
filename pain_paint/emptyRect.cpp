#include "pain_paint.h"

void emptyRect(vector<vector<string>>& matrix, int x, int y, int width, int height, string char_) {
	for (int j = 0; j < matrix.size(); j++) {
		for (int i = 0; i < matrix[j].size(); i++) {
			if (y == j || j == y + height - 1) {
				if (x <= i && i < x + width) {
					matrix[j][i] = char_;
				}
			}
			else if (y < j && j < y + height - 1) {
				if (i == x || i == x + width - 1)
					matrix[j][i] = char_;
			}
		}
	}
}