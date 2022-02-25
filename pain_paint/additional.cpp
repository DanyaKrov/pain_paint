#include "pain_paint.h"

int itc_find_str(string str1, string str2) {
    if (len(str2) > len(str1))
        return -1;
    else
    {
        int answer = 1;
        for (int i = 0; i < len(str1); i++)
        {
            if (str1[i] == str2[0] && len(str1) - i >= len(str2))
            {
                for (int j = 1; j < len(str2); j++)
                {
                    if (str2[j] == str1[i + j])
                        answer++;
                    else
                    {
                        answer = 1;
                    }
                }
                if (answer == len(str2))
                    return i;
            }
        }
        return -1;
    }
}

void print_vector(const vector <string>& vector1)
{
    if (vector1.size() > 0) {
        for (int i = 0; i < vector1.size() - 1; i++) {
            cout << vector1[i];
        }
        cout << vector1[vector1.size() - 1] << endl;
    }
}