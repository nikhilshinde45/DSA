class Solution {
public:
bool issame(string &word,int st,int m,string& str2){
     for(int i = 0;i<m;i++){
        if(word[st] != str2[i]) return false;
        st++;
     }

     return true;
}
    string generateString(string str1, string str2) {
        int n = str1.length();
        int m = str2.length();

        int N = n + m  -1;
        string word(N,'*');

        vector<bool>canchange(N,false);

        for(int i = 0 ; i < n ; i++){
            if(str1[i] == 'T'){
                int k = i;
                for(int j = 0 ; j < m ; j++){

                    //overlapping TTS

                    if(word[k]!='*' && word[k]!=str2[j]) {
                        return "";
                    }
                   word[k] = str2[j];
                   k++;



                }
            }
        }
        for(int i = 0 ; i < N ; i++){
            if(word[i] == '*'){
                 word[i] = 'a';
                 canchange[i] = true;
            }

        }

        for(int i = 0 ; i < n ; i++){
            if(str1[i] == 'F'){
                if(issame(word,i,m,str2)){
                    //if substring is same then traverse from backward to get lgs
                    int f = 0;
                    for(int k = i+m-1;k>=i;k--){
                        if(canchange[k]){
                            word[k] = 'b';
                            f=1;
                            break;
                        }
                    }
                    if(f==0) return "";
                }
            }
        }

        return word;
        
    }
};