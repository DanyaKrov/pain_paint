#include "pain_paint.h"
#include <cmath>;

void filledCirc(vector<vector<string>>& matrix, int x, int y, int rad, string char_) {
    if (rad <= 0 || rad > 300) {
        print_error("Error: wrong parameters");
        exit(-1);
    }
    for (int i = rad; i > 0; i--)
        emptyCirc(matrix, x, y, i, char_);
    for (int y1 = y - rad + 1; y1 <= y; y1++) {
        for (int x1 = x - rad + 1; x1 <= x; x1++) {
            int dx = abs(x - x1);
            int dy = abs(y - y1);
            int sqrt_ = sqrt(dy * dy + dx * dx);
            if (sqrt_ < rad & matrix.size() > x1 && matrix[0].size() > y1)
                matrix[x1][y1] = char_;
        }
    }
    for (int y1 = y - rad + 1; y1 <= y; y1++) {
        for (int x1 = x; x1 <= x + rad - 1; x1++) {
            int dx = abs(x - x1);
            int dy = abs(y - y1);
            int sqrt_ = sqrt(dy * dy + dx * dx);
            if (sqrt_ < rad & matrix.size() > x1 && matrix[0].size() > y1)
                matrix[x1][y1] = char_;
        }
    }
    for (int y1 = y; y1 <= y + rad - 1; y1++) {
        for (int x1 = x - rad + 1; x1 <= x; x1++) {
            int dx = abs(x - x1);
            int dy = abs(y - y1);
            int sqrt_ = sqrt(dy * dy + dx * dx);
            if (sqrt_ < rad & matrix.size() > x1 && matrix[0].size() > y1)
                matrix[x1][y1] = char_;
        }
    }
    for (int y1 = y; y1 <= y + rad - 1; y1++) {
        for (int x1 = x; x1 <= x + rad - 1; x1++) {
            int dx = abs(x - x1);
            int dy = abs(y - y1);
            int sqrt_ = sqrt(dy * dy + dx * dx);
            if (sqrt_ < rad & matrix.size() > x1 && matrix[0].size() > y1)
                matrix[x1][y1] = char_;
        }
    }
}