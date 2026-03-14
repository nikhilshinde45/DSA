class Solution {
public:
void solve(int n , vector<string>&ans , string s,int pos){
    if(s.length() == n){
      
        ans.push_back(s);
        return ;
    }

    for(char ch = 'a' ; ch <= 'c' ; ch++){
        if(s.empty() || s.back() != ch){
            solve(n , ans , s+ch , pos);
        }
    }
    //return;
}
    string getHappyString(int n, int k) {

       int maxi =3 * ( pow(2,n-1) );

       if(k > maxi) return "";
       string s = "";
       vector<string>ans;
       int pos = 0;

       solve(n , ans , s , pos);

       sort(ans.begin() , ans.end());

    //    for(auto i : ans){
    //     cout<<i<<" ";
    //    };
    //    cout<<endl;

       return ans[k - 1];

        
    }
};