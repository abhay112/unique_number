#include<bits/stdc++.h>

using namespace std;

// a[ ] = {1,2,1,2,3,4,4,5}///// output 3 5
int main(){
	int n; cin >> n;
	int no,res = 0;
	int a[100005];
	for(int i = 0; i < n; i++){
		cin >> no;
		a[i] = no;
		res = res ^ no;

	}
	int temp = res;
	int pos = 0;
	while((temp&1) != 1){
		pos++;
		temp = temp >> 1;
	}

	
	int x = 0;
	int y = 0;
	int mask = 1 << pos;
	for(int i = 0; i < n; i++){
		if((mask & a[i]) > 0){
			x = a[i] ^ x;
		}
	}
	y = res ^ x;
	cout << min (x,y) << " " << max(x,y) <<endl; 
}