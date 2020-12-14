#include<bits/stdc++.h>
#define ll long long 
#define ff first
#define ss second
using namespace std;
char a[1001][1001];
pair<long long, long long> initpos;
pair<long long, long long> endpos;
long long m_size, n_size;
long long random(long long min, long long max){
	long long ans = min + rand() % (max + 1 - min);
	return ans;
}
void print_matrix(long long min, long long max){
	for (long long i = 1; i <= m_size; ++i){
		for (long long j = 1; j <= n_size; ++j)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
bool cmp(long long a, long long b){
	return a < b ? 1 : 0;
}
void puzzle(long long min, long long max){
	m_size = random(min, max); n_size = random(min, max);
	swap(m_size, n_size);
	initpos.first = random(m_size, n_size); initpos.second = random(m_size, n_size);
	endpos.first = random(m_size, n_size); endpos.second = random(m_size, n_size);
	cout << "m = " << m_size << "  " << "n = " << n_size << "\n" << "init_x = " << initpos.ff << "  " << "init_y = " << initpos.ss << endl;
	cout << "end_x = " << endpos.ff << "  " << "end_y = " << endpos.ss << endl;
	for (long long i = 1; i <= m_size; ++i)
		for (long long j = 1; j <= n_size; ++j)
			a[i][j] = '-';
	a[initpos.first][initpos.second] = '0';
	a[endpos.first][endpos.second] = 'X';
}
int main () {
	long long min, max;
	cin >> min >> max;
	puzzle(min, max);
	print_matrix(min, max);
	return 0;	
}
