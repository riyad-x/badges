#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k , s, next=0;
    cin>>n>>k;
    vector<int>scrore;

    for(int i=0; i<n; i++){
        cin>>s;
        scrore.push_back(s);
    }
    for(int i=0; i<n; i++){
        if(scrore[i]>=scrore[k-1] && scrore[i]>0){
            next++;
        }
    }
    cout<<next<<endl;
}