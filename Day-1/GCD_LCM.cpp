#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(b == 0)
		return a;
	return gcd(b, a % b);
}

int lcm(int a, int b){
	return (a * b) / gcd(a, b);
}

int main(){
	int a = 10, b = 45;
	int gcd_of_two = gcd(a, b);
	int lcm_of_two = lcm(a, b);
	cout << gcd_of_two << endl;
	cout << lcm_of_two << endl;
	
	// there is a inbuilt gcd function in C++.
	cout << __gcd(10, 45); // __gcd(var_1, var_2);
}