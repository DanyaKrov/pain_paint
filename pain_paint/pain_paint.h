#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

long long itc_len(string str);
int itc_find_str(string str1, string str2);
void print_vector(const vector <string>& vector1);

void read_file(vector <string>& commands, string& path);