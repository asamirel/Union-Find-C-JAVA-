/*
 * QuickUnionUF.h
 *
 *  Created on: Sep 4, 2016
 *      Author: samir
 */

#ifndef QUICKUNIONUF_H_
#define QUICKUNIONUF_H_

class QuickUnionUF {

private:
	int *id;
	int size = -1;

public:
	QuickUnionUF();
	QuickUnionUF(int N);
	int root(int i);
	bool connected(int p, int q);
	void Union(int p, int q);
	virtual ~QuickUnionUF();
};

#endif /* QUICKUNIONUF_H_ */
