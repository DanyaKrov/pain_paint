#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

//additional
int len(string str);
bool itc_find_str(string str1, string str2);
void print_vector(const vector <string>& vector1);
int str_to_int(string str);
vector<string> split(string str);

//check
bool check_path(string str, string& path);
bool check_file(string path);

//read
void read_file(vector <string>& commands, string& path);

//parse
void parse(vector <string>& commands, vector<vector<string>>& matrix);


//draw
void emptyRect(vector<vector<string>>& matrix, int x, int y, int width, int height, string char_);
void filledRect(vector<vector<string>>& matrix, int x, int y, int width, int height, string char_);

void emptyCirc(vector<vector<string>>& matrix, int x, int y, int rad, string char_);
void filledCirc(vector<vector<string>>& matrix, int x, int y, int rad, string char_);

void line(vector<vector<string>>& matrix, int x, int y, int x1, int y1, string char_);
