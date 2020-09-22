#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    vector<int> vec;
    cin >> t;
 
    while (t!=0){
        int size;
        cin >> size;
        int even = 0, odd = 0;
        for (int i = 0; i < size; i++)
        {
            int x;
            cin >> x;
            if (i %2 != x%2){
                if(x % 2 == 0){
                    even = even + 1;
                }
                else{
                    odd = odd + 1;
                }     
            }    
        }
        if(odd == 0 & even ==0){
            vec.push_back(0);
        }
        else if (odd != even){
            vec.push_back(-1);
        }
        else{
            vec.push_back(even);
        }
        t = t-1;     
    }
 
    for(auto i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
    
    return 0;
}
