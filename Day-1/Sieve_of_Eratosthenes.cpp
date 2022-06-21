#include<bits/stdc++.h>
using namespace std;
#define int long long // using macros int act as shadow of long long now. 

vector<bool> isPrime(1e6+1, true); 
vector<int> primes; // Note - int here is actually long long by using macros

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

// don't use int main here instead use "int32_main" or "signed main()"
signed main(){
	sieve();
	int n;
	cin >> n;
	cout << isPrime[n];
}