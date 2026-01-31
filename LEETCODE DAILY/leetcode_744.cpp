class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        //sort(letters.begin(),letters.end());
        int n=letters.size();
        int i=0;
       for(int k=0;k<n;k++){
          if(letters[k]==target) continue;
          if(letters[k]>target){
            i=k;
            break;
          }
       }
        return letters[i];
    }
};