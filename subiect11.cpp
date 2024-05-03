#include <iostream>
#include <fstream>

using namespace std;

ifstream f("atestat.in");
ofstream g("atestat.out");

int divisors(int n){
    int x = 0;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) 
            x++;
    }
    return x;
}

int main(){
    int n;
    f >> n;
    int A[n][n];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> A[i][j];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
    int x = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (i == j) A[i][j] = 22;
            cout << A[i][j] << " ";
            if (divisors(A[i][j]) == 0){
                g << A[i][j] << " ";
                x = 1;
            }
        }
        cout << endl;
    }
    if (x == 0) cout << "NU EXISTA NUMERE PRIME";
}