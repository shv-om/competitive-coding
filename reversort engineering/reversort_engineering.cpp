#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vll vector<long long int>

vi reverseng(int N, int C){

	vi res;

	int mini = N-1;
	int maxi = (N * (N+1) / 2) - 1;

	if(mini > C || maxi < C){
		cout << "IMPOSSIBLE";
		return res;
	}

	vi pos;
	vi arr;

	for(int j=0; j<N; j++){
		pos.push_back(j);
		arr.push_back(j+1);
	}

	vi cost;
	C = C - N + 1;

	for(int i=0; i<N-1; i++){
		int current = min(C, N-i-1);

		cost.push_back(current+1);

		reverse(pos.begin()+i, pos.begin()+i+cost[i]);

		C = C - current;
	}

	for(int k=0; k<N; k++){
		arr[pos[k]] = k+1;
	}


	return arr;

}

int main(){

	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif
	
	int T;

	cin >> T;

	for(int i=0; i<T; i++){
		
		int N;
		int C;

		cin >> N;
		cin >> C;

		vi A = reverseng(N, C);

		cout << "Case #" << i << ": ";

		for(auto& a: A){
			cout << a << " "; 
		}
		cout << endl;
	}

}