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
    int n, s = 0;
    f >> n;
    int A[n];
    for (int i = 1; i <= n; i++){
        f >> A[i];
        if (A[i] % 3 == 0) s = s + A[i];
    }
    for (int i = n; i >= 1; i--)
        cout << A[i] << " ";
    cout << endl;
    int x = 0;
    for (int i = 1; i <= n; i++)
        if (divisors(A[i]) == 0){
            cout << A[i] << " ";
            x = 1;
        }
    if (x == 0) cout << endl << "NU EXISTA";
    if (s == 0) g << "NU EXISTA NUMERE DIVIZIBILE CU 3";
        else g << s;
}