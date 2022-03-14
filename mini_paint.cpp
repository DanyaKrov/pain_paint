
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
	if (str == "default")
		str = "C:/Users/uchenik/Desktop/operation.it";
	if (check_path(str, path) && check_file(path)) {
		read_file(commands, path);
		if (commands.size() == 0) {
			print_error("Error: no commands");
			return 0;
		}
		parse(commands, matrix);
		if (matrix.size() == 0) {
			return -1;
		}
		if (matrix[0].size() == 0) {
			return -1;
		}
		for (int i = 1; i < commands.size(); i++) {
			if (split(commands[i]).size() == 0)
				continue;
			list1 = split(commands[i]);
			if (str_to_int(list1[1]) < 0 || str_to_int(list1[2]) < 0 || str_to_int(list1[3]) < 0 || str_to_int(list1[4]) < 0){
				print_error("Error: negative parameter");
				return -1;
			}
			if (list1[0] == "r") {
				if (list1.size() != 6) {
					print_error("Error: wrond number of parameters");
					return -1;
				}
				emptyRect(matrix, str_to_int(list1[1]), str_to_int(list1[2]), str_to_int(list1[3]), str_to_int(list1[4]), list1[5]);
			}
			else if (list1[0] == "R") {
				if (list1.size() != 6) {
					print_error("Error: wrond number of parameters");
					return -1;
				}
				filledRect(matrix, str_to_int(list1[1]), str_to_int(list1[2]), str_to_int(list1[3]), str_to_int(list1[4]), list1[5]);
			}
			else if (list1[0] == "c") {
				if (list1.size() != 5) {
					print_error("Error: wrond number of parameters");
					return -1;
				}
				emptyCirc(matrix, str_to_int(list1[1]), str_to_int(list1[2]), str_to_int(list1[3]), list1[4]);
			}
			else if (list1[0] == "C") {
				if (list1.size() != 5) {
					print_error("Error: wrond number of parameters");
					return -1;
				}
				filledCirc(matrix, str_to_int(list1[1]), str_to_int(list1[2]), str_to_int(list1[3]), list1[4]);
			}
			else if (list1[0] == "L") {
				if (list1.size() != 6) {
					print_error("Error: wrond number of parameters");
					return -1;
				}
				line(matrix, str_to_int(list1[1]), str_to_int(list1[2]), str_to_int(list1[3]), str_to_int(list1[4]), list1[5]);
			}
			else {
				print_error("Unknown command");
				return -1;
			}
		}
		print_matrix(matrix);
	}
	return 0;
}