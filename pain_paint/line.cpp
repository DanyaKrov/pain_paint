#include "pain_paint.h"

void line(vector<vector<string>>& matrix, int x1, int y1, int x2, int y2, string char_)
{
	if (y1 > y2)
		swap(y1, y2);
	if (x1 == x2 && y1 != y2) {
		while (y1 <= y2) {
			y1++;
			if (matrix.size() > y1)
				matrix[y1][x1] = char_;
		}
		return;
	}
	if (y1 == y2 && x1 != x2) {
		while (y1 <= y2) {
			x1++;
			if (matrix.size() > y1)
				matrix[y1][x1] = char_;
		}
		return;
	}

}