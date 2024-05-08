#include <iostream>
#include <fstream>

using namespace std;

ifstream f("atestat.in");
ofstream g("atestat.out");

int evendigits(int n){
    while (n != 0) {
        if ((n % 10) % 2 != 0)
            return 0;
        n = n / 10;
    }
    return 1;
}

int main(){
    int n;
    f >> n;
    int A[n];
    for (int i = 1; i <= n; i++)
        f >> A[i];
    for (int i = 1; i <= n; i++)
        cout << A[i] << " ";
    cout << endl;
    int x = 0;
    for (int i = 1; i <= n; i++){
        if (evendigits(A[i]) == 1) {
        cout << A[i] << " ";
        x = 1;
        }
    }
    cout << endl;
    if (x == 0)
        cout << "NU EXISTA NUMERE NUMAI CU CIFRE PARE" << endl;
    int p1, p2;
    cin >> p1 >> p2;
    x = 1;
    while (x != 0){
        x = 0;
        for (int i = p1; i < p2; i++){
            if (A[i] < A[i + 1]){
                int t = A[i];
                A[i] = A[i + 1];
                A[i + 1] = t;
                x = 1;
            }
        }
    }
    for (int i = 1; i <= n; i++){
        g << A[i] << " ";
    }
}