#include <iostream>
#include <fstream>

using namespace std;

ifstream f("atestat.in");
ofstream g("atestat.out");

int inverse(int n){
    int x = 0;
    while (n != 0) {
        x = x * 10 + n % 10;
        n = n / 10;
    }
    return x;
}

int main(){
    int n, p = 1;
    f >> n;
    int A[n][n];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> A[i][j];
    int x = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << A[i][j] << " ";
            if (i < j) p = p * A[i][j];
            if (A[i][j] == inverse(A[i][j])){
                g << A[i][j];
                x = 1;
            }
        }
        cout << endl;
    }
    cout << p % 10;
    if (x == 0) g << "NU EXISTA NUMERE PALINDROM";
}