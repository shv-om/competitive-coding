// Getting started with competitive programming

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vll vector<long long int>

int printsum(vi A){

	int s = 0;

	for(auto& a: A){
		s = s + a;
	}

	return s;
}


int main(){

	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("inputs.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif
	
	int T;

	cin >> T;

	for(int i=0; i<T; i++){
		
		vi A;

		for(int j=0; j<2; j++){
			int e;
			cin >> e;

			A.push_back(e);
		}

		cout << "Case #" << i << ": " << printsum(A) << endl;

	}

}