//============================================================================
// Name        : main.cpp
// Author      : Nis
// Version     : 1.0
// Copyright   : Your copyright notice, NDA required!
// Description :
//============================================================================

#include <iostream>
#include <string>

using namespace std;

#include "CmdParam.h"
#include "MyException.h"
#include "OpDoc.h"

int main(int argc, char **argv) {
	int ec=0;
	try {
		CmdParam cmd(argc,argv);			// get command line
		OpDoc od(cmd);
		od.run();
		ec = od.returnError();				// we need this later
	} catch (MyException *ode) {
		int error = (*ode).getError();
		cout << "My exception : " << error << endl;
		ec = 1;
	} catch (exception *e) {
		cout << "The blues mon ami, the blues ..." << endl;
		ec = 7;
	}
	return ec;
}
