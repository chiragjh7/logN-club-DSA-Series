#include<bits/stdc++.h>
using namespace std;

long long factorial(int n){
	long long fact = 1;
	for(int i = 2; i <= n; i++){
		fact = fact * i;
	}
	return fact;
}

int trailing_zeroes(int n){
	long long fact = factorial(n);
	int cnt = 0;
	while(fact % 10 == 0){
		cnt++;
		fact = fact / 10;
	}
	return cnt;
}

int main(){
	int n = 20;
	cout << trailing_zeroes(n);	
}