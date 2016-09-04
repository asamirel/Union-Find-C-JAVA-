/*
 * QuickUnionUF.cpp
 *
 *  Created on: Sep 4, 2016
 *      Author: samir
 */

#include "QuickUnionUF.h"

QuickUnionUF::QuickUnionUF() {
}


QuickUnionUF::QuickUnionUF(int N) {
	id = new int[N];
	size = N;
	for(int i = 0; i < N; i++) {
		id[i] = i;
	}
}

int QuickUnionUF::root(int i) {
	while(i != id[i]) {
		i = id[i];
	}
	return i;
}

bool QuickUnionUF::connected(int p, int q) {
	return root(p) == root(q);
}

void QuickUnionUF::Union(int p, int q) {
	int pR = root(p);
	int qR = root(q);

	id[pR] = qR;
}


QuickUnionUF::~QuickUnionUF() {
}

