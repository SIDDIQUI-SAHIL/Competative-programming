#include <bits/stdc++.h>
using namespace std;
bool comp(const pair<int, int>&x, const pair<int, int>&y){
    return x.second < y.second;
}
int main() {
    int t;
    cin>>t;
    while(t!=0){
        int n,m,count=1;
        cin>>n;
        vector<pair<int,int>> v;
        m=n;
        int x,y;
        while(m!=0){
            cin>>x>>y;
            v.push_back(make_pair(x,y));
            m--;
        }
        sort(v.begin(), v.end(), comp);
        int first=v[0].first;
        int second=v[0].second;
        for(int i=1;i<n;i++){
            if(v[i].first>=second){
                count++;
                second=v[i].second;
                first=v[i].first;
            }
        }
        cout<<count<<endl;
        t--;
    }
    return 0;
}
