/*
 * QuickFindUF.h
 *
 *  Created on: Sep 4, 2016
 *      Author: samir
 */

#ifndef QUICKFINDUF_H_
#define QUICKFINDUF_H_

class QuickFindUF {

private:
	int *id;
	int size = -1;

public:
	QuickFindUF();
	QuickFindUF(int N);
	bool connected(int p, int q);
	void Union(int p, int q);
	virtual ~QuickFindUF();
};

#endif /* QUICKFINDUF_H_ */
