/*
 * MyException.h
 *
 *  Created on: Mar 6, 2012
 *      Author: nis
 */

#ifndef OPDOCERROR_H_
#define OPDOCERROR_H_

#include <exception>
using std::exception;

class MyException : public exception {
public:
	MyException();
	MyException(int c);
//	virtual ~MyException();
	int getError();
private:
	int myerror;
};

#endif /* OPDOCERROR_H_ */
