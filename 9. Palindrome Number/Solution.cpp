class Solution {
public:
    bool isPalindrome(int x) {
        bool isPalindrome;
        std::string input = to_string(x);
        std::string rev ="";

        for (int i = input.length() - 1;i >=0; i--){
            rev += input[i];
        }
        
        if (input == rev){
            isPalindrome = true;
            return isPalindrome;
        }else{
            isPalindrome = false;
            return isPalindrome;
        }


        
    }
};