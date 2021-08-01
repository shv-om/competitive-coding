/*

Reversort Algorithm

Reversort(L):
	for i:= 1 to length(L)-1
		j = position of min element from i th position to the length of the list (inclusive)
		
		// Reverse teh list from i th position to the j th position (min element)
		Reverse(L[i : j])

*/

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vll vector<long long int>

int reversort(vi &A, int N){

	int C = 0;

	for(int i=0; i<N-1; i++){
		int min = *min_element(A.begin()+i, A.end());

		auto it = find(A.begin()+i, A.end(), min);

		int dist = it - (A.begin()+i) + 1;

		reverse(A.begin()+i, it+1);

		/*for(auto a: A){
			cout << a << " ";
		}
		cout << endl;*/

		C = C + dist;
	}

	return C;
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
		cin >> N;
		
		vi A;

		for(int j=0; j<N; j++){
			int e;
			cin >> e;

			A.push_back(e);
		}

		cout << "Case #" << i << ": " << reversort(A, N) << endl;
	}

}