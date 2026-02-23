bool hasAllCodes(string s, int k) {
        unordered_set<string>st;
        int n = s.length();
        int codes = (1<<k);
        for(int i=k;i<=n;i++){
            string res = s.substr(i - k , k);
            if(!st.count(res)){
                st.insert(res);
                codes--;
            }
            if(codes==0) return true;
        }
        return false;
       
        
    }
};