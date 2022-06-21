#include<bits/stdc++.h>
using namespace std;

int compute_pow(int num, int raise_to){
	int res = 1;
	for(int i = 1; i <= raise_to; i++){
		res = res * num;
	}
	return res;
}

int main(){
	int num = 2, raise_to = 4;
	cout << compute_pow(num, raise_to);	
}