#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){

    int m,n , area_board , num;
    double domino_area = 2.0;

    cin >> m >> n; 

    area_board = m * n;

    num = area_board / domino_area;

    cout << num; 

    return 0;
}
