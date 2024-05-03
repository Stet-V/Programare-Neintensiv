#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ifstream f("atestat.in");
ofstream g("atestat.out");

void uppercase(char s[], int i){
    if ((s[i] >= 'a') && (s[i] <= 'z'))
        s[i] = s[i] - 32;
}

int main(){
    char s[70], c[]="BCDFGHJKLMNPQRSTVWXYZ";
    int x = 0, y = 1;
    f.get(s, 70);
    for (int i = 0; i < strlen(s); i++){
        uppercase(s, i);
        cout << s[i];
        for (int j = 0; j < strlen(c); j++)
            if (s[i] == c[j]) x++;
        if (s[i] == ' ') y++;
    }
    cout << endl << x;
    g << y;
}