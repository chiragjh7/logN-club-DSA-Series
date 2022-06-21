#include<bits/stdc++.h>
using namespace std;

int count_digits(int n){
	int res = 0;
	while(n > 0){
		res++;
		n = n / 10;
	}
	return res;
}

int main(){
	int n = 253;
	cout << count_digits(n);
}