#include <bits/stdc++.h>
using namespace std;
template<typename T> class Matrix{
private:
    int row, col;
    T **value;
public:
    
    Matrix(){
        row = 1, col = 1;
        value = new T *[row]; 
        for (int i = 0; i < row; i++)
            value[i] = new T[col];
    }

    Matrix(int m, int n){
        row = m;
        col = n;
        value = new T *[row];
        for (int i = 0; i < row; i++)
            value[i] = new T[col];
    }

    //Copy constructor
    Matrix(const Matrix &a){
        row = a.row;
        col = a.col;
        for (T i = 0; i < a.row; ++i)
            for (T j = 0; j < a.col; ++j)
                this->value[i][j] = a.value[i][j];
    }

    //Destructor
    ~Matrix(){
        if (value == NULL)
            return;
        for (int i = 0; i < row; i++)
        {
            delete [] value[i];
            value[i] = NULL;
        }
        delete [] value;
        value = NULL;
    }

    //Input matrix
    void Input();
    void Output();
    friend Matrix<T> operator+ (Matrix<T> b);

};
//Input a matrix
template<typename T>
void Matrix<T>::Input(){
    cin >> row >> col;
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j){ 
            cin >> value[i][j];
        }
}

//Print a matrix
template<typename T>
void Matrix<T>::Output(){
    for (T i = 0; i < row; ++i){
        for (T j = 0; j < col; ++j)
            cout << value[i][j] << " ";
        cout << endl;
    }
}

//Sum 2 matrices
template<typename T>
Matrix<T> Matrix<T>::operator+ (Matrix<T> a, Matrix<T> b){
    Matrix<T> ans(b.row, b.col);

    for (T i = 0; i < b.row; ++i)
        for (T j = 0; j < b.col; ++j)
            ans.value[i][j] = value[i][j] + b.value[i][j];
        
    return ans;
}

int main () {
    freopen("DEBUG.INP", "r", stdin);
    freopen("DEBUG.OUT", "w", stdout);

    Matrix<int> a(2, 3), b(2, 3);
    a.Input();
    b.Input();
    (a + b).Output();
    return 0;
}


