#include "pain_paint.h"

int main(int argc, string* argv[]) 
{
	string str;
	string path;
	vector <string> commands;
	cout << "Input file path:" << endl;
	getline(cin, str);
	if (check_path(str, path) && check_file(path)) {
		read_file(commands, path);
		print_vector(commands);
	}
	return 0;
}