#include "pain_paint.h"

void filledCirc(vector<vector<string>>& matrix, int x, int y, int rad, string char_) {
    if (rad <= 0) {
        print_error("Error: wrong parameters");
        exit(-1);
    }
    for (int i = rad; i > 0; i--)
        emptyCirc(matrix, x, y, i, char_);
    if (rad > 2)
        filledRect(matrix, x - 2, y - 2, rad + 1, rad + 1, char_);
}