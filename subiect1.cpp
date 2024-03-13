#include <iostream>
#include <fstream>

using namespace std;

ifstream f("atestat.in");
ofstream g("atestat.out");

int absolute(int n) {
    if (n >= 0) return n;
    return -n;
}

int divisors(int n){
    int x = 0;
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            x++;
        }
    }
    return x;
}

void bubble(int A[], int n){
    int x = 1;
    while (x != 0){
        x = 0;
        for (int i = 1; i < n; i++){
            if (A[i] > A[i + 1]){
                int t = A[i];
                A[i] = A[i + 1];
                A[i + 1] = t;
                x = 1;
            }
        }
    }
}

int main(){
    int n;
    f >> n;
    int A[n];
    for (int i = 1; i <= n; i++)
        f >> A[i];
    for (int i = 1; i <= n; i++)
        cout << absolute(A[i]) << " ";
    for (int i = 1; i <= n; i++)
        cout << divisors(absolute(A[i])) << " ";
    bubble(A, n);
    for (int i = 1; i <= n; i++)
        if (absolute(A[i]) % 2 == 1)
            g << A[i] << " ";
}