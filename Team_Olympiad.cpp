#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n , c = 0, m = 0, p = 0;
    vector<int> skills;
    vector<int> coding;
    vector<int> gonit;
    vector<int> pe;
    vector<int> extra;
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        skills.push_back(t);
    }
 
    for (auto i = 0; i < skills.size(); i++){
        if(skills[i] == 1){
            c = c + 1;
            coding.push_back(i+1);
        }
        else if(skills[i] == 2){
            m = m + 1;
            gonit.push_back(i+1);
        }
        else if(skills[i] == 3){
            p = p + 1;
            pe.push_back(i+1);
        }
    }
    extra.push_back(c);
    extra.push_back(m);
    extra.push_back(p);
 
    int min = *min_element(extra.begin() , extra.end());
 
    cout << min << endl;
    for (int i = 0; i < min; i++)
    {
        cout << coding[i] << " " << gonit[i] << " " << pe[i] << endl;
    }
    
    return 0;
}
