#include <iostream>
#include <fstream>

using namespace std;

ifstream f("atestat.in");
ofstream g("atestat.out");

int digitcount(int n){
    int x = 0;
    while (n !=0) {
        x++;
        n = n / 10;
    }
    return x;
}

int main(){
    int n, s = 0;
    f >> n;
    int A[n];
    for (int i = 1; i <= n; i++){
        f >> A[i];
        if (A[i] % 2 != 0) s = s + A[i];
    }
    for (int i = n; i >= 1; i--)
        cout << A[i] << " ";
    cout << endl;
    for (int i = 1; i <= n; i++)
        cout << digitcount(A[i]) << " ";
    g << s;
}