#include "pain_paint.h"

bool check_path(string str, string& path)
{
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ')
			path += str[i];
		else {
			path = "";
			cout << "Error: a lot of arguments";
			return false;
		}
	}
	return true;
}

bool check_file(string path)
{
	if (!(itc_find_str(path, "operation"))) {
		cout << "Error: name file" << endl;
		return false;
	}
	if (!(itc_find_str(path, ".txt"))) {
		cout << "Error: file has not correct extension" << endl;
		return false;
	}
}