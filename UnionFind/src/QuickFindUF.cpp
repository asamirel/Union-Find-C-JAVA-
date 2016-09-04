/*
 * QuickFindUF.cpp
 *
 *  Created on: Sep 4, 2016
 *      Author: samir
 */
#include <bits/stdc++.h>
#include "QuickFindUF.h"

QuickFindUF::QuickFindUF() {
}

QuickFindUF::QuickFindUF(int N) {
	id = new int[N];
	size = N;
	for(int i = 0; i < N; i++) {
		id[i] = i;
	}
}

bool QuickFindUF::connected(int p, int q) {
	return id[p] == id[q];
}

void QuickFindUF::Union(int p, int q) {
	int pid = id[p];
	int qid = id[q];

	for(int i = 0; i < size ; i++) {
		if(id[i] == pid) {
			id[i] = qid;
		}
	}
}

QuickFindUF::~QuickFindUF() {
}

