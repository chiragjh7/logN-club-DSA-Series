#include<bits/stdc++.h>
using namespace std;

vector<int> fact(int n){
	vector<int> factors;
	for(int i = 1; i * i <= n; i++){
		if(n % i == 0){
			factors.push_back(i);
			if(i != n / i) // this check because we're checking upto root(n)
				factors.push_back(n / i);
		}
	}
	// you can sort the factors by using - sort(factors.begin(), factors.end());
	return factors;
}

int main(){
	int n;
	cin >> n;
	vector<int> factors = fact(n);
	for(auto it: factors){
		cout << it << " ";
	}	
}