#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    int i, j, is = 51, ie = 0, js= 51, je = 0, n,m;
    cin >> n >> m;
    char s[n][m];

    for(i= 0 ; i<n ; i++){
        for(j=0 ; j<m ; j++){
            cin >> s[i][j];
            if(s[i][j] == '*'){
                is = min(i, is);
                ie = max(i, ie);
                js = min(j, js);
                je = max(j, je);
            }
        }
    }

    for(i = is; i <= ie; i++){
        for(j= js ; j <= je ; j++){
            cout << s[i][j];
        }
        cout << endl;
    }

    return 0;
}
