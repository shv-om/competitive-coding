#include <bits/stdc++.h>
using namespace std;

#define li long int
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

	for(int a=2; a<=N; a++){

		li num = a*a;
		
		if(num > N){
			// cout << a << ", ";
			break;
		}

		else{
			int divisors = 0;

			for(int i=1; i <= sqrt(num); i++){
				if(num%i == 0){
					if (num/i == i){
						divisors = divisors + 1;
					}

					else{
						divisors = divisors + 2;
					}
				}
			}

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