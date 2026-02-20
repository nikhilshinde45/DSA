class Solution {
public:
string helper(string & s){
    int  n = s.length() ; 
    int su = 0;
    vector<string>vec;
    int st =0 ;
    for(int i =0  ;i  < n ; i++){
        su += (s[i] == '1')? 1 : -1;

        if(su == 0){
            string toadd  =  s.substr(st + 1 , i - st -1 );
            vec.push_back("1" + helper(toadd) + "0");
            st = i + 1;
        }

    }

    sort(vec.rbegin() , vec.rend());

    string res = "";
    for(auto i: vec) res+=i;

    return res ;
}
    string makeLargestSpecial(string s) {

        return helper(s);
        
    }
};