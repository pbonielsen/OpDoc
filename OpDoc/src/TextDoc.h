/*
 * TextDoc.h
 *
 *  Created on: 1 Apr 2012
 *      Author: pbo
 */

#ifndef TEXTDOC_H_
#define TEXTDOC_H_

class TextDoc
{
public:
	TextDoc();
	TextDoc(string fn, bool readonly);
	int load();
	int save();
	TextContent getTC();
	int setTC(TextContent tc);

private:
	bool readonly;
	string filename;
	int filesize;
	TextContent tc;
};


#endif /* TEXTDOC_H_ */
