#include<bits/stdc++.h>
using namespace std;
#define int long long // using macros int act as shadow of long long now. 

vector<bool> isPrime(1e6+1, true); 
vector<int> primes;

// sieve of eratosthenes.
void sieve(){
	isPrime[0] = false;
	isPrime[1] = false;
	for(int i = 2; i <= 1e6; i++){
		if(isPrime[i]){
			primes.push_back(i);
			for(int j = i*i; j <= 1e6; j += i){
				isPrime[j] = false;
			}
		}
	}
}

vector<int> prime_factors(int n){
	vector<int> factors; // don't dare to use array. you cannot return array from a function.
	int pf_idx = 0, pf = primes[pf_idx];
	while(pf * pf <= n){
		while(n % pf == 0){
			n = n / pf;
			factors.push_back(pf);
		}
		pf = primes[++pf_idx];
	}
	if(n != -1){
		factors.push_back(n);
	}
	return factors;
}

signed main(){
	sieve();
	int n;
	cin >> n;
	vector<int> factors = prime_factors(n); // vector function returns vector of factors.
	for(auto it: factors){
		cout << it << " ";
	}	
}