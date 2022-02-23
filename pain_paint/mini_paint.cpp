#include "pain_paint.h"

int main(int argc, string* argv[])
{
	string str;
	string path;
	vector<string> list1;
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
		for (int i = 1; i < commands.size(); i++) {
			list1 = split(commands[i]);
			if ((list1[0] == "r")
				emptyRect(matrix, list1[1], list1[2], list1[3], list1[4]);
			if ((split(commands[i]))[0] == "R")
				filledRect(matrix, list1[1], list1[2], list1[3], list1[4]);
			if ((split(commands[i]))[0] == "c")
				emptyRect(matrix, list1[1], list1[2], list1[3]);
			if ((split(commands[i]))[0] == "C")
				filledRect(matrix, list1[1], list1[2], list1[3];
			if ((split(commands[i]))[0] == "L")
				line(matrix, list1[1], list1[2], list1[3], list1[4]);
		}
	}
	return 0;
}