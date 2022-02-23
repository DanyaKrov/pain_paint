#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

//additional
long long itc_len(string str);
bool itc_find_str(string str1, string str2);
void print_vector(const vector <string>& vector1);

//check
bool check_path(string str, string& path);
bool check_file(string path);

//read
void read_file(vector <string>& commands, string& path);