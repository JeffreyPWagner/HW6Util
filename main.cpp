// generate big, random matrix
//
// gw

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main (int argc, char *argv[])
{
	// setup/initialize
	if (argc != 2) {
		cerr<< "usage: gen_matrix dim(NxN)" << endl;
		exit (-1);
	}

    ofstream output("C:/Users/jeffp/CLionProjects/HW6/matB.dat");

	int dim = atoi (argv[1]);
	for (int i=0; i < dim; i++)
		for (int j=0; j < dim; j++)
			output << rand() % 100 << " ";

    output.close();
}