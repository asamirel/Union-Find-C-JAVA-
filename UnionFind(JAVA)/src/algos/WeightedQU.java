package algos;

public class WeightedQU {
private int[] id;
private int[] size;

	public WeightedQU(int N) {
		id = new int[N];
		size = new int[N];
		for(int i = 0; i < N; i++) {
			id[i] = i;
			size[i] = 1;
		}
	}
	
	public int root(int i) {
		while(i != id[i]) {
			i = id[i]; //Climbing the tree till reach the root
		}
		return i;
	}
	
	public boolean connected(int p, int q) {
		return root(p) == root(q);
	}

	public void union(int p, int q) {
		int pR = root(p); 
		int qR = root(q);
		
		if(pR == qR) return;
		
		if(size[pR] > size[qR]) {
			id[pR] = qR;
			size[pR] += size[qR];
		}
		else {
			id[qR] = pR; 
			size[qR] += size[pR];
		}
	}
	
}
