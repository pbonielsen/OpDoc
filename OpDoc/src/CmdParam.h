/*
 * CmdParam.h
 *
 *  Created on: Mar 6, 2012
 *      Author: nis
 */

#ifndef CMDPARAM_H_
#define CMDPARAM_H_

#include <string>
using std::string;
#include <vector>
using std::vector;

class CmdParam {
public:
	enum Options {HELP, PACK, UNPACK, BIN, TIME, VERBOSE, FINAL };
	CmdParam();
	CmdParam(int argc, char ** argv);
//	virtual ~CmdParam();
	bool isSet(Options o);
	string getInFn();
	string getOutFn();
private:
	bool option[FINAL];
	int acount;
	string infile;
	string outfile;
};

#endif /* CMDPARAM_H_ */
