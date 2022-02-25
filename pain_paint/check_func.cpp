#include "pain_paint.h"

bool check_path(string str, string& path)
{
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ')
			path += str[i];
		else {
			path = "";
			print_error("Error: a lot of arguments");
			return false;
		}
	}
	return true;
}

bool check_file(string path)
{
	if (itc_find_str(path, "operation") == -1) {
		print_error("Error: name file");
		return false;
	}
	if (itc_find_str(path, ".it") == -1 || itc_find_str(path, ".it") != len(path) - 3) {
		print_error("Error: file has not correct extension");
		return false;
	}
	if (itc_find_str(path, "operation") != len(path) - 12) {
		print_error("Error: name file");
		return false;
	}
	return true;
}

void input_check(vector<vector<string>>& matrix, int x, int y, string char_) {
	if ((x < matrix[0].size() && x >= 0) && (y < matrix.size() && y >= 0))
		matrix[x][y] = char_;
}