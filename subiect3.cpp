#include <iostream>
#include <fstream>

using namespace std;

ifstream f("atestat.in");
ofstream g("atestat.out");

int gcd(int x, int y){
    while (y != 0){
        int z = x % y;
        x = y;
        y = z;
    }
    return x;
}

int main(){
    int n, a, b;
    f >> n;
    int A[n];
    f >> A[1];
    a = A[1];
    b = A[1];
    for (int i = 2; i <= n; i++){
        f >> A[i];
        if (A[i] < a)
            a = A[i];
        if (A[i] > b)
            b = A[i];
    }
    for (int i = 1; i <= n; i++)
        cout << A[i] << " ";
    cout << endl << a << endl << b;
    g << gcd(a, b);
}