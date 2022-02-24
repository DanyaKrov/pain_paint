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
	if (!(itc_find_str(path, "operation"))) {
		print_error("Error: name file");
		return false;
	}
	if (!(itc_find_str(path, ".it"))) {
		print_error("Error: file has not correct extension");
		return false;
	}
	return true;
}