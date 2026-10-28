class Solution {
public:
    bool isHappy(int n) {
        if(n<10)
        {
            if(n==1 || n==7)
            {
                return true;
            }
            else
                return false;

        }
        else
        {
            int digit=0;
            while(n>0)
            {
                digit+=(pow(n%10,2));
                n/=10;
            }
            return isHappy(digit);
        }
        
    }
};