#include <bits/stdc++.h>
using namespace std;
int n;
int i = 0;
long double s = 1;
void LD1(int n){
	while (i < n){
		s += sqrt(s/2);
		++i;
	}
	cout << s << endl;
}
void LD2(int n){
	s = 1, i = 0;
	while (i < n){
		s = 5/sqrt(s);
	//	cout << i << " " << s << endl;
		++i;
	}
	cout << s << endl;
}
void LD3(int n){
	s = 1, i = 0;
	int a = 5, b = 2;
	while (i < n){
		s *= (a + b)/sqrt(a + b);
		++i;
		--a;
		b++;
	}
	cout << s << endl;
}
void executive(int n){
	cout << "Gia tri cua luu do 1 la: ";
	LD1(n);
	cout << "Gia tri cua luu do 2 la: ";
	LD2(n);
	cout << "Gia tri cua luu do 3 la: ";
	LD3(n);
}
int main () {
	for (int n = 3; n <= 7; n += 2){
	cout << n << endl;
	if (n == 3)
		executive(n);		
	else if (n == 5)
		executive(n);
	else 
		executive(n);
	}
	return 0;

}
