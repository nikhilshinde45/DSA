class Solution {
public:
bool isvalid(string curr){
    if(curr.size() > 1 && curr[0] == '0') return false;
    int integ = stoi(curr);

    if(integ >255) return false;

    return true ;
}
void solve(string s , int idx ,string curr , int part , int n , vector<string>&ans){
    if(part > 4) return ;
    if(idx == n && part == 4){
        curr.pop_back();
        ans.push_back(curr);
        return ;

    }
    if(idx + 1 <= n){
       solve(s, idx + 1,curr+s.substr(idx,1)+"." , part + 1  , n , ans);
    }
    
    if(idx + 2 <= n && isvalid(s.substr(idx,2))){
        solve(s, idx + 2,curr+s.substr(idx,2)+"." , part + 1  , n , ans);
    }

    if(idx + 3 <= n && isvalid(s.substr(idx,3))){
        solve(s, idx + 3,curr+s.substr(idx,3)+"." , part + 1  , n , ans);
    }

    return ;

}
    vector<string> restoreIpAddresses(string s) {
        vector<string>ans;
        int n = s.length();

        if(n > 12) return {} ;

        int part = 0 ;
        string curr = "";

        solve(s , 0 , curr , part , n , ans);

        return ans ;

        

    }
};