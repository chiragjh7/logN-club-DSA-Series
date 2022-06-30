#include<bits/stdc++.h>
using namespace std;

void palindrome_check(int n){
	int temp = n;
	int rev = 0;
	while(temp > 0){
		int last_digit = temp % 10;
		rev = rev * 10 + last_digit;
		temp = temp / 10;
	}
	if(rev == n){
		cout << "Palindrome" << endl;
	} else{
		cout << "Not Palindrome" << endl;
	}
}

int main(){
	int n;
	cin >> n;
	palindrome_check(n);	
}