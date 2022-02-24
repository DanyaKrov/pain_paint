#include "pain_paint.h"

void parse(vector <string>& commands, vector<vector<string>>& matrix) {
	vector<string> startInfo = split(commands[0]);
	if (startInfo.size() == 3) {
		try
		{
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