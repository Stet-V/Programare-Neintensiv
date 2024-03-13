#include <iostream>
#include <fstream>

using namespace std;

ifstream f("atestat.in");
ofstream g("atestat.out");

int divisors(int n){
    int x = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            x = x + i;
        }
    }
    return x;
}

int main(){
    int n, k = 1;
    f >> n;
    int A[n];
    for (int i = 1; i <= n; i++){
        f >> A[i];
        if (A[i] < A[k])
            k = i;
    }
    for (int i = 1; i <= n; i++)
        cout << A[i] << " ";
    cout << endl;
    cout << A[k] << endl << k;
    int x = 0;
    for (int i = 1; i <= n; i++)
        if (A[i] == divisors(A[i])){
            g << A[i] << " ";
            x = 1;
        }
    if (x == 0) cout << endl << "NU EXISTA NUMERE PERFECTE";
}