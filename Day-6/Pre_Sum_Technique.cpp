#include<bits/stdc++.h>
using namespace std;

/*Range based queries - L to R
  PreSum technique:
  example:
  	arr[1, 2, 3, 4] => pre_sum[1, 3, 6, 10]
  	L = 1 to R = 3 => 10 - 1 = 9 (Ans)
  	L = 0 to R = 3 => 10 (Ans) (edge case on line 32)
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
		cout << ans << "\n";
	}
}