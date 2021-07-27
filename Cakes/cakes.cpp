/*
Problem Statement:

Next week is Swayam's birthday party and he plans to have a chocolate cake for his friends.The cake has been cut into N slices
In total Swayam has X friends and can choose to invite any number of them. Since he doesn't want to feel lonely he will invite at least one of them. Everyone likes cake and since Swayam doesn't want any fights between his friends, he will give them the same amount of cake. And he will given each of them the maximum number of slices possible, under the condition that each of the invited friends gets the same number of slices. It can happen that no friend gets even a single piece of cake.
The remaining cake (if any) is left for Swayam to enjoy. Given N and X, find the maximum amount of cake Swayam can get by inviting a positive number of friends not greater than X.

*/

#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vll vector<long long int>

int max_slice(vi A){

	int N, X, max = 0;

	N = A[0];
	X = A[1];

	for(int i=1; i <= X; i++){
		int temp = floor(N/i);

		int p = N - (i * temp);

		if(p > max){
			max = p;
		}

	}

	return max;

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

		for(int j=0; j<2; j++){
			int e;
			cin >> e;

			A.push_back(e);
		}

		cout << "Case #" << i << ": " << max_slice(A) << endl;
	}

}