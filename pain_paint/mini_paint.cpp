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
			if (list1[0] == "r")
				emptyRect(matrix, str_to_int(list1[1]), str_to_int(list1[2]), str_to_int(list1[3]), str_to_int(list1[4]), list1[5]);
			if ((split(commands[i]))[0] == "R")
				filledRect(matrix, str_to_int(list1[1]), str_to_int(list1[2]), str_to_int(list1[3]), str_to_int(list1[4]), list1[5]);
			if ((split(commands[i]))[0] == "c")
				emptyCirc(matrix, str_to_int(list1[1]), str_to_int(list1[2]), str_to_int(list1[3]), list1[4]);
			if ((split(commands[i]))[0] == "C")
				filledCirc(matrix, str_to_int(list1[1]), str_to_int(list1[2]), str_to_int(list1[3]), list1[4]);
			if ((split(commands[i]))[0] == "L")
				line(matrix, str_to_int(list1[1]), str_to_int(list1[2]), str_to_int(list1[3]), str_to_int(list1[4]), list1[5]);
		}
	}
	return 0;
}