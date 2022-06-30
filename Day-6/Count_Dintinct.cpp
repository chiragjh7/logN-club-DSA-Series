#include <bits/stdc++.h>
using namespace std;

// Count distincts/freq in number array.
void count_nums(){
	int n;
	cin >> n;
	int i;
	int a[n+1];
	for(i = 0; i < n; i++){
		cin >> a[i];
	}	
	int cnt[n+1] = {0};
	for(i = 0; i < n; i++){
		cnt[a[i]]++;
	}
	for(i = 0; i < n+1; i++){
		if(cnt[i] > 0){
			cout << i << " " << cnt[i] << "\n";
		}
	}
}

// Count distincts/freq in char array / string.

void count_chars(){
	// reading a character array.
	int n;
	cin >> n;
	int i;
	char a[n+4];
	cin >> a;
	
	// You can use string class also. 
	/*
	string str;
	cin >> str;
	*/
	
	int cnt[26] = {0};
	for(i = 0; i < n; i++){
		cnt[a[i] - 'a']++; // refer ascii values then you get the pattern.
	}
	for(i = 0; i < 26; i++){
		if(cnt[i] > 0){
			char ch = 'a' + i; // once get above count logic you can easily get this statement also.
			cout << ch << " " << cnt[i] << endl;
		}
	}
}

int main(){
	// count_nums();
	count_chars();
}