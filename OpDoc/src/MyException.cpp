/*
 * MyException.cpp
 *
 *  Created on: Mar 6, 2012
 *      Author: nis
 */

#include "MyException.h"

MyException::MyException() {
	// TODO Auto-generated constructor stub

}

MyException::MyException(int c) {
	// TODO Auto-generated constructor stub
	myerror = c;
	throw this;
}

int MyException::getError() {
	// TODO Auto-generated constructor stub
	return myerror;
}
/*
MyException::~MyException() {
	// TODO Auto-generated destructor stub
}
*/
