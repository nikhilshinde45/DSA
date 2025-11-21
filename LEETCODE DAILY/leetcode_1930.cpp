class Solution {
public:
// int check(string s,int n,char ch){
//      for(int i=n-1;i>=0;i--){
//         if(s[i]==ch){
//             return i;
//         }
         
//      }
//      return -1;
// }

    int countPalindromicSubsequence(string s) {
        int n=s.length();
       
        int cnt=0;
        vector<int>f(26,-1);
        vector<int>l(26,-1);
        for(int i=0;i<n;i++){
             int charind=s[i]-'a';
             if(f[charind]==-1){
                 f[charind]=i;
             }
             l[charind]=i;
        }
        for(int i=0;i<26;i++){
             set<int>sts;
             for(int j=f[i]+1;j<l[i];j++){
                sts.insert(s[j]);
             }
             cnt+=sts.size();

            // int ind=check(s,n,s[i]);
            // if( ind!=-1){
            //   for(int st=i+1;st<ind;st++){
            //     string str="";
            //     str+=s[i];
            //     str+=s[st];
            //     str+=s[ind];
            //     sts.insert(str);



            //   }
            }
        
    
          
        return cnt;
        
    }
};