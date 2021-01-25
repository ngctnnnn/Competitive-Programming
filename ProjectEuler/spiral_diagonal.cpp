#include <bits/stdc++.h>
using namespace std;
int size = 5, mid = size/2+1;
int a[1002][1002];
void init(){
	//up-right diagonal
	a[mid][mid] = 1;
	int t = 1;
	for (int i = 1; i <= size/2 ; ++i){
		t+=2;
		a[mid - i][mid + i] = t*t;
		a[mid - i][mid - i] = a[mid - i][mid + i] - t + 1;
		a[mid + i][mid - i] = a[mid - i][mid - i] - t + 1;
		a[mid + i][mid + i] = a[mid + i][mid - i] - t + 1;
	}
	
	for (int i = 2; i <= size; ++i){
		a[1][i] = a[1][i - 1] + 1;
		a[i][1] = a[i - 1][1] - 1;
	}
	
	for (int i = 1; i <= size; ++i)
		for (int j = i + 1; j <= size - i; ++j){
			a[i][j] = a[i][j - 1] + 1;
			a[j][i] = a[j - 1][i] - 1;
			a[size - i + 1][j] = a[size - i + 1][j - 1] - 1;
		}
}


int main () {
	for (int i = 1; i <= size; ++i)
		for (int j = 1; j <= size; ++j)
			a[i][j] = 0;
	init();
	for (int i = 1; i <= size; ++i){
		for (int j = 1; j <= size; ++j)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}
