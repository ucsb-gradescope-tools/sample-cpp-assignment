#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	if (argc < 2) {
		cerr << "usage: ./countToN int_to_count_to" << endl;
		return 0;
	}

	try {
		int n = stoi(argv[1]);

		//Potential student error: uninitialized variable.
		//This will cause the test checking for compilation warnings
		//to fail.
		int i;
		while (i <= n) {
			cout << i << endl;
			i++;
		}
	} catch(invalid_argument e ) {
		cerr << "usage: ./countToN int_to_count_to" << endl;
	}

	return 0;
}