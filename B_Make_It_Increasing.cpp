#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
   
        while(t--){
            int n;
            cin>>n;
            bool flag=true;
            vector<int>a(n);
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            int cnt=0;
            for(int i=n-1;i>0;i--){
                if(a[i]==0){
                    flag=false;
                    break;
                }
                while(a[i-1]>0&&a[i-1]>=a[i]){
                    a[i-1]/=2;
                    cnt++;
                }
            }
            if(flag==false){
                cout<<-1<<endl;
            }else{
                cout<<cnt<<endl;

            }
        }
    
    return 0;
}