/*

Problem Statement
You are given an integer N, an integer M, and an array A1, A2, ..., AN of size N. You need to find the smallest positive integer K, such that ceil(A1/K) + ceil(A2/K) + ... + ceil(AN/K) is less than or equal to M.

Note that ceil(x) refers to the ceiling function.

Input

    The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
    The first line of each test case contains two integers N and M.
    The second line of each test case contains N space separated integers, A1, A2, ..., AN.


Below is just a normal approach to the solution of this problem...

*/


#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vll vector<long long int>

int sum_ceil(vi A, int M){

	int i=1;

	if(M==1){
		return accumulate(A.begin(), A.end(), 0);
	}

	while(true){

		int K = 0;

		for(auto& a: A){
			float temp = (float)a / (float)i;
			K = K + ceil(temp);
		}

		if(K <= M){
			break;
		}

		i += 1;
	}

	return i;
}

int main(){

	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif
	
	int T;

	scanf("%i", &T);

	for(int i=0; i<T; i++){

		int N, M;

		scanf("%i", &N);
		scanf("%i", &M);
		
		vi A;

		for(int j=0; j<N; j++){
			int e;
			scanf("%d", &e);

			A.push_back(e);
		}

		printf("Case #%i: %i\n", i, sum_ceil(A, M));
	}

}