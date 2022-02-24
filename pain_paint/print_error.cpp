#include "pain_paint.h"

void SetColor(int a, int bg) {
    HANDLE pr = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(pr, (WORD)((bg << 4) | a));
}

void print_error(string error) {
    SetColor(12, 0);
    cout << error <<endl;
    SetColor(7, 0);
}