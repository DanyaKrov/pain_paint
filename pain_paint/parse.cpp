#include "pain_paint.h"

void parse(vector <string>& commands, vector<vector<string>>& matrix) {
	vector<string> startInfo = split(commands[0]);
	if (startInfo.size() == 3) {
		try
		{
			if (str_to_int(startInfo[0]) < 0 || str_to_int(startInfo[0]) > 300) {
				print_error("Error: width out of range");
				return;
			}
			if (str_to_int(startInfo[1]) < 0 || str_to_int(startInfo[1]) > 300) {
				print_error("Error: height out of range");
				return;
			}
			if (len(startInfo[2]) != 1) {
				print_error("Error: wrong symbol");
				return;
			}
			vector<string> list;
			for (int i = 0; i < str_to_int(startInfo[1]); i++) {
				list = {};
				for (int j = 0; j < str_to_int(startInfo[0]); j++)
					list.push_back(startInfo[2]);
				matrix.push_back(list);
			}
		}
		catch (const std::exception&)
		{
			print_error("Error: wrong types");
			return;
		}
	}
	else {
		print_error("Error: wrong number of parameters");
		return;
	}
}