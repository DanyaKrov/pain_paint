#include "pain_paint.h"
#include <math.h>

void line(vector<vector<string>>& matrix, int x1, int y1, int x2, int y2, string char_)
{
    if ((x1 < 0 || y1 < 0) || (x1 >= matrix[0].size() || y1 >= matrix.size()) || (x2 < 0 || y2 < 0)) {
        print_error("Error: wrong parameters");
        exit(-1);
    }
    int length = max(abs(x2 - x1), abs(y2 - y1));
    double dx = (x2 - x1) / (double)length, dy = (y2 - y1) / (double)length, x = x1, y = y1;
    if (length > 0) {
        length++;
        while (length--) {
            if (roundf(x) >= 0 && roundf(y) >= 0 && roundf(x) < matrix.size() && roundf(y) < matrix[roundf(x)].size())
                matrix[roundf(y)][roundf(x)] = char_;
            x += dx;
            y += dy;
        }
    }
    else {
        length--;
        while (length++) {
            if (roundf(x) >= 0 && roundf(y) >= 0 && roundf(x) < matrix.size() && roundf(y) < matrix[roundf(x)].size())
                matrix[roundf(y)][roundf(x)] = char_;
            x += dx;
            y += dy;
        }
    }
}