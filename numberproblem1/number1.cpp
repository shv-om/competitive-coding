/*
Problem Statement:
Swayam wants to play a game with you. He has an integer with him, S, but he has hid it from you. Instead, he has shared some information about S.
In particular, for every i such that 1 ≤ i ≤ N, he has told you the value ⌊(i*S)/K⌋. This is given to you as the array A1, A2, ..., AN, where Ai = ⌊(i*S)/K⌋. He has also told you the value of K. But since he has not shared the value of S, you want to find the largest possible range [L,R] in which S could lie. That is, find the largest possible range [L,R] such that, for any integer P ∈ [L,R], Ai is equal to ⌊(i*P)/K⌋ for all i.
It is guaranteed that such a range always exists and is unique.
Note that ⌊x⌋ denotes floor(x), which is largest integer which is ≤ x. 
*/


#include <bits/stdc++.h>
using namespace std;

#define li long int
#define vli vector<long int>

void numgame(vli A, li K, int n){

	li temp;

	bool flag = false;
	vli range;

	li max = *max_element(A.begin(), A.end());
	
	li start = floor((max * K)/A.size());
	li end = start + floor(K/A.size());

	for(li q=start; q<=end; q++){
		for(li i=n-1; i>=0; i--){
			temp = floor(((i+1) * q) / K);
			
			if(temp != A[i]){
				flag = false;
				break;
			}
			else{
				flag = true;
			}
		}

		if(flag){
			range.push_back(q);
		}

	}
	
	cout << *range.begin() << " " << *(range.end()-1) << endl;

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

		int n;
		vli A;
		long int K;

		cin >> n;
		cin >> K;

		for(int e=0; e < n; e++){
			li a;

			cin >> a;
			A.push_back(a);
		}

		numgame(A, K, n);

		//cout << "Case #" << i << ": " << numgame(A, K, n) << endl;

	}

}