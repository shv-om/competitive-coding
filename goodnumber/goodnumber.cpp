#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vll vector<long long int>


bool isprime(int divisors){

	bool prime = true;

	for(int j=2; j <= sqrt(divisors); j++ ){
		if(divisors%j == 0){
			prime = false;
			break;
		}
	}

	return prime;

}


int goodnumber(int N){

	int count = 0;

	for(int a=4; a<=N; a++){
		
		if(a%10 == 0){
			continue;
		}

		else{
			int divisors = 0;

			for(int i=2; i <= a/2; i++){
				if(a%i == 0){
					divisors = divisors + 1;
				}
			}

			// to Add 1 and the number itself in divisors count
			divisors = divisors + 2;

			bool isoddprime;

			// Checking the number of divisors is odd prime or not
			if(divisors > 2){
				isoddprime = isprime(divisors);
			}

			else{
				isoddprime = false;
			}

			if(isoddprime){
				count = count+1;
				// cout << a << "->" << divisors << ", " ;
			}
		}

	}

	return count;

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

		cout << "Case #" << i << ": " << goodnumber(N) << endl;
	}

}