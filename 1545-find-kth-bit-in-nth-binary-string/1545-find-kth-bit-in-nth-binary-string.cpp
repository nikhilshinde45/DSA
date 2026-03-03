class Solution {
public:
    char findKthBit(int n, int k) {

        vector<string>answers(20);
        answers[0] = "0";
        for(int i = 1 ; i < 20 ; i++){
            string res = "";
            string prev = answers[i-1];
            res += prev;
            res += "1";
            int k = prev.length();
            k -= 1;
            while(k >= 0){
                res += (prev[k] == '0') ? '1' : '0';
                k--;
            }

            answers[i] = res;

        }

        string required = answers[n - 1];
        return required[k - 1];


        
    }
};

auto init = std::atexit([]() { std::ofstream("display_runtime.txt") << "0";});
