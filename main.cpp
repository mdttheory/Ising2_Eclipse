/*
 * File:   main.cpp
 * Author: Mark Wittekind
 *
 * Created on March 5, 2015, 6:03 PM
 */

#include <cstdlib>
#include "CLattice.h"
#include <fstream>
#include <streambuf>
#include <iostream>
#include <vector>
#include "CObject.h"

using namespace std;

/*
 *
 */
int main(int argc, char** argv) {

	//CONSTANTS
	const unsigned short WIDTH = 50;
	const unsigned short HEIGHT = 70;
		//output stream for debugging
		streambuf * buf;
		buf = cout.rdbuf();
		ostream debug_stream(buf);
		//constants that will be command line params
		short MAXTIMESTEPS = 100;
		float TIMESTEP = 1;
		float kB = 1;
		float T = 1;
		//"calculated" constants



	vector<CObject> objects;
	CLattice lattice(WIDTH,HEIGHT);
	objects.push_back(lattice);

	for(int t = 0; t<MAXTIMESTEPS; t+=TIMESTEP)

	lattice.print_all(debug_stream);




    return 0;
}
