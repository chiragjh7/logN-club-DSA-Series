#include<bits/stdc++.h>
using namespace std;
/*
Given a binary array consisting 0s and 1s. You need to find out if the elements in the range (L to R) are same either 0 or 1 but consecutive.
like [0 0 0 0] or [1 1 1 1] then you need to print Yes else print No.
*/

int main(){
	int n, q;
	cin >> n >> q;
	int i;
	int a[n+4];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}	
	long long pre[n+4] = {0};
	long long sum = 0;
	
	for(int i = 0; i < n; i++){
		pre[i] = sum + a[i];
		sum += a[i];
	}
	while(q--){
		int l, r;
		cin >> l >> r;
		long long ans;
		ans = pre[r];
		if(l-1 > 0){
			ans = ans - pre[l-1];
		}
		int num_ele = r - l + 1;
		if(ans == 0){
			cout << "Yes" << endl;
		} else{
			if(num_ele == ans){
				cout << "Yes" << endl;
			} else{
				cout << "No" << endl;
			}
		}
	}
}