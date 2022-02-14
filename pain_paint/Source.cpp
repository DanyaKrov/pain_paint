#include "pain_paint.h"

int main(int argc, string argv[]) {
	if (argc != 1) {
		cout << "Error: a lot" <<endl;
		return 0;
	}
	string way = argv[0];
	if (incorrect_name(way)) {
		cout << "error: name file" << endl;
		return 0;
	}
	return 0;
}
