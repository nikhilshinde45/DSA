#include <bits/stdc++.h>
using namespace std;
// int maxi(vector<int>&a){
//     int max=INT_MIN;
//     for(int i=0;i<a.size();i++){
//         if(a[i]>max){
//             max=a[i];
//         }
//     }
//     return max;
  
// }
// int sum(vector<int>&a){
//     int sum=0;
//     for(int i=0;i<a.size();i++){
//         sum+=a[i];
//     }
//     return sum;
// }
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);

       // vector<pair<int,int>>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
           
        }
        vector<pair<int,int>>ans;
        // while(sum(a)>0){
        //     int maximum=maxi(a);
        //     maximum-=k;
        //     if(maximum<=0){
        //         ans.push_back()
        //     }
        // }
        
        for(int i=0;i<n;i++){
            if(a[i]%k==0){
                
            ans.push_back({k,-i});
            }else{
                ans.push_back({a[i]%k,-i});
            }
        }
        sort(ans.begin(),ans.end());
        for(int i=n-1;i>=0;i--){
            cout<<abs(ans[i].second)+1<<" ";
        }

       cout<<endl;
    }
    return 0;
}