#include "pain_paint.h"

void emptyCirc(vector<vector<string>>& matrix, int x, int y, int rad, string char_) {
    int x1 = rad;
    int y1 = 0;
    int radiusError = 1 - rad;
    while (x1 >= y1)
    {
        input_check(matrix, x1 + x, y1 + y, char_);
        input_check(matrix, y1 + x, x1 + y, char_);
        input_check(matrix, -x1 + x, y1 + y, char_);
        input_check(matrix, -y1 + x, x1 + y, char_);
        input_check(matrix, -x1 + x, -y1 + y, char_);
        input_check(matrix, -y1 + x, -x1 + y, char_);
        input_check(matrix, x1 + x, -y1 + y, char_);
        input_check(matrix, y1 + x, -x1 + y, char_);
        y1++;
        if (radiusError < 0)
        {
            radiusError += 2 * y1 + 1;
        }
        else
        {
            x1--;
            radiusError += 2 * (y1 - x1 + 1);
        }
    }
}