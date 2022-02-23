#include "pain_paint.h"

long long itc_len(string str) {
    int kol = 0;
    while (str[kol] != '\0') {
        kol += 1;
    } return kol;
}

bool itc_find_str(string str1, string str2) {
    if (itc_len(str2) > itc_len(str1))
        return -1;
    else
    {
        int answer = 1;
        for (int i = 0; i < itc_len(str1); i++)
        {
            if (str1[i] == str2[0] && itc_len(str1) - i >= itc_len(str2))
            {
                for (int j = 1; j < itc_len(str2); j++)
                {
                    if (str2[j] == str1[i + j])
                        answer++;
                    else
                    {
                        answer = 1;
                    }
                }
                if (answer == itc_len(str2))
                    return true;
            }
        }
        return false;
    }
}

void print_vector(const vector <string>& vector1)
{
    if (vector1.size() > 0) {
        cout << "[";
        for (int i = 0; i < vector1.size() - 1; i++) {
            cout << vector1[i] << ", ";
        }
        cout << vector1[vector1.size() - 1] << "]" << endl;
    }
}