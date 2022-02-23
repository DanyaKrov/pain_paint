#include "pain_paint.h"

int main(int argc, string* argv[]) 
{
	string path;
	vector <string> commands;
	cin >> path;

	read_file(commands, path);
	print_vector(commands);
}