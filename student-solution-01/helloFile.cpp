#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
	//Potential error: student typo.
	ofstream f("helloo.txt");
	f << "Hello, file!" << endl;
	f.close();
	return 0;
}