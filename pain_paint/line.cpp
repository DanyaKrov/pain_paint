#include "pain_paint.h"

void line(vector<vector<string>>& matrix, int x1, int y1, int x2, int y2, string char_)
{
	if (x1 == x2 && y1 != y2) {
		while (y1 <= y2) {
			y1++;
			if (matrix.size() > y1)
				matrix[y1][x1] = char_;
		}
		return;
	}
	int x, y, dx = x2 - x1, dy = y2 - y1;
	int d = (dy << 1) - dx, d1 = dy << 1, d2 = (dy - dx) << 1;
	x = x1, y = y1;
	matrix[y1][x1] = char_;
	x2--;
	while (x <= x2)
	{
		x++;
		if (d < 0) 
			d += d1;
		else
		{
			y++;
			d += d2;
		}
		if (matrix.size() > y && matrix[0].size() > x)
			matrix[y][x] = char_;
	}
}