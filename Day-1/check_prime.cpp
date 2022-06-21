#include<bits/stdc++.h>
using namespace std;

bool check_prime(int n){
	bool is_prime = true;
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0){
			is_prime = false;
			break;
		}
	}
	return is_prime;
}

int main(){
	int n;
	cin >> n;
	if(check_prime(n)){
		cout << "Prime number";
	} else {
		cout << "Not Prime number";
	}
}