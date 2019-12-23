class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        else if(x<10){
            return true;
        }
        else{
            int xx = x;
            long ans = 0;
            while(xx!=0){
                
                int pop = xx % 10;
                xx = xx / 10;
                ans = ans*10 + pop;
            }
            if(x==ans){
                return true;
            }
            else{
                return false;
            }
        }
    }
};
