/*

Problem Statement:
Swayam is a farmer and a pet lover. He has a lot of his favorite pets cats and dogs in the barn. He knows that there are C cats and D dogs in the barn. Also, one day went to field and found that there were L legs of the animals touching the ground. Swayam knows that cats love to ride on the dogs. So, they might ride on the dogs, and their legs won't touch the ground and Swayam would miss counting their legs. Swayam's dogs are strong enough to ride at max two cats on their back.
It was a cold foggy morning, when Swayam did this counting. So he is now wondering whether he counted the legs properly or not. Specifically, he is wondering whether it is possible that he counted correctly. Please help Swayam in finding it.

*/


#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vll vector<long long int>

bool countlegs(vi A){

	int C, D, L;

	C = A[0];
	D = A[1];
	L = A[2];

	int maxlegs = (C * 4) + (D * 4);

	int minlegs = (D * 4) + ((C - (2 * D)) * 4);

	if(L >= minlegs and L <= maxlegs and L % 4 == 0){
		return true;
	}
	else{
		return false;
	}

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
		
		vi A;

		for(int j=0; j<3; j++){
			int e;
			cin >> e;

			A.push_back(e);
		}

		if(countlegs(A)){
			cout << "Case #" << i << ": " << "Yes" << endl;
		}
		else{
			cout << "Case #" << i << ": " << "No" << endl;
		}

	}

}