/*
 * OpDoc.h
 *
 *  Created on: Mar 6, 2012
 *      Author: nis
 */

#ifndef OPDOC_H_
#define OPDOC_H_

class OpDoc {
public:
	OpDoc();
	OpDoc(CmdParam &p);
	int run();
//	virtual ~OpDoc();
private:
	CmdParam param;
};

#endif /* OPDOC_H_ */
