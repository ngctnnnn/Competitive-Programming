#include <bits/stdc++.h>
using namespace std;

template<typename T> 
class Matrix {
private:
    T **p;
    int m, n;
public:
    Matrix(int row, int col) {
        m = row;
        n = col;
        p = new T *[m];
        for (int i = 0; i < m; i++)
            p[i] = new T[n];
    }

    void Input() {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> p[i][j];
            }
        }
    }

    void Output() {
        for (int i = 0; i < m; i++){ 
            for (int j = 0; j < n; j++)
                cout << p[i][j] << " ";
            cout << endl;
            }
    }

    Matrix<T> operator+(Matrix<T> m2)
    {
        Matrix<T> C(m, n);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                C.p[i][j] = p[i][j] + m2.p[i][j];
            }
        }
        return C;
    }

    Matrix<T> operator = (Matrix<T> eq)
    {
        m = eq.m;
        n = eq.n;
        p = eq.p;

        return *this;
    }

    friend Matrix<T> operator*(Matrix<T> a,  Matrix<T> b){
        Matrix<T> B(1, 1);
        if (a.n == b.m)
        {
            Matrix<T> C(a.m, b.n);
            for (int i = 0; i < a.m; i++)
            {
                for (int k = 0; k < b.n; k++)
                {
                    C.p[i][k] = 0;
                    for (int j = 0; j < a.n; j++)
                    {
                        C.p[i][k] += a.p[i][j] * b.p[j][k];
                    }
                }
            }
            B = C;
        }
        return B;
    }
};

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    Matrix<int> a(3, 3), b(3, 3);
    cin >> a;
    cin >> b;
    Matrix<int> c(3, 3);
    c = a + b;
    c.Output();
    return 0;
}


