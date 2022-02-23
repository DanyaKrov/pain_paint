#include "pain_paint.h"

int main(int argc, string* argv[])
{
	string str;
	string path;
	vector <string> commands;
	vector<vector<string>> matrix; //drawing
	cout << "Input file path:" << endl;
	getline(cin, str);
	if (check_path(str, path) && check_file(path)) {
		read_file(commands, path);
		if (commands.size() == 0) {
			cout << "Error: no commands" << endl;
			return 0;
		}
		parse(commands, matrix);
	}
	return 0;
}