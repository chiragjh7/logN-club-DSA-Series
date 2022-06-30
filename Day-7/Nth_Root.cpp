#include<bits/stdc++.h>
using namespace std;

double eps = 1e-6;

double multiply(double mid, int n){
	double ans = 1;
	for(int i = 0; i < n; i++){
		ans *= mid;
	}
	return ans;
}

void sqRoot(double x, int n){
	double lo = 1, hi = x, mid;
	while(hi - lo > eps){
		mid = (hi+lo) / 2;
		if(multiply(mid, n) < x){
			lo = mid;
		} else{
			hi = mid;
		}
	}
	cout << lo << "\n" << hi << endl;
	// how to do it using pow() function
	cout << pow(x, 1.0/n) << endl;
}

int main(){
	double x; 
	int n;
	cin >> x >> n;
	sqRoot(x, n);	
}