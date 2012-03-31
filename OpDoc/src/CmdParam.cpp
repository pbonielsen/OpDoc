/*
 * CmdParam.cpp
 *
 *  Created on: Mar 6, 2012
 *      Author: nis
 */

#include <string>

using std::string;

#include "CmdParam.h"
#include "MyException.h"

CmdParam::CmdParam() {
	// TODO Auto-generated constructor stub

}
CmdParam::CmdParam(int argc, char** argv){
	// TODO Auto-generated constructor stub
	int ncount = 0;
	acount = argc;
	for (int i=0; i<FINAL; i++) option[i]=false;
	for (int i=1; i<acount; i++){
		string sp(argv[i]);
//		args.push_back(sp);
		if (sp.size()==2) {
			if (sp[0]=='-') {
				switch (sp[1]) {
				case 'h':
				case 'H':
					option[HELP]=true;
					break;
				case 'p':
				case 'P':
					option[HELP]=true;
					break;
				case 'u':
				case 'U':
					option[HELP]=true;
					break;
				case 'b':
				case 'B':
					option[HELP]=true;
					break;
				case 't':
				case 'T':
					option[HELP]=true;
					break;
				case 'v':
				case 'Y':
					option[HELP]=true;
					break;
				default:
					throw MyException(1);
					break;
				}
			}
		} else {
			switch (ncount++) {
			case 0:
				infile = string(argv[i]);
				break;
			case 1:
				outfile = string(argv[i]);
				break;
			default:
				throw MyException(2);
				break;
			}
		}
	}
}

/*
CmdParam::~CmdParam() {
	// TODO Auto-generated destructor stub
}*/

bool CmdParam::isSet(Options o) {
	return option[o];
}
