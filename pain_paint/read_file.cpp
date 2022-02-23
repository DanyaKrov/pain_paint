#include "pain_paint.h"

void read_file(vector <string>& commands, string& path)
{
	ifstream file;
	string str;

	file.open(path);
	if (file.is_open()) {
		while (getline(file, str))
			commands.push_back(str);
	}
	else {
		cout << "Error: Operation file corrupted" << endl;
		return;
	}
	file.close();
	parse(commands);
}