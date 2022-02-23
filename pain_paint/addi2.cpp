#include "pain_paint.h"
int len(string str)
{
    int res = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        res += 1;
    }
    return res;
}
int str_to_int(string str) //convert string to integer
{
    int res = 0;
    int mult = 1;
    string rev_str = "";
    for (int i = len(str) - 1; i >= 0; i--) {
        res += (str[i] - 48) * mult;
        mult *= 10;
    }
    return res;
}

vector<string> split(string str)
{
    if (str == "")
        return {};
    bool issp = false;
    string word = "";
    vector<string> s;
    for (long long i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 32)
        {
            issp = true;
        }
        else if (str[i] != 32)
        {
            if (issp) {
                s.push_back(word);
                word = str[i];
            }
            else
                word += str[i];
            issp = false;
        }
    }
    s.push_back(word);
    return s;
}
