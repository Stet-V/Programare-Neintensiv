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
    int n, k = 0;
    float s = 0;
    f >> n;
    int A[n];
    for (int i = 1; i <= n; i++){
        f >> A[i];
        if (A[i] % 2 == 0){
            s = s + A[i];
            k++;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << A[i] << " ";
    cout << endl << s / k;
    int x = 0;
    for (int i = 1; i <= n; i++)
        if (A[i] == inverse(A[i])){
            g << A[i] << " ";
            x = 1;
        }
    if (x == 0) cout << endl << "NU EXISTA";
}