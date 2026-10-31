//Leetcode-2544  Alternative Digit Sum
class Solution {
public:
    int alternateDigitSum(int n) {
        long long m=n;
        int sign=1;
        int sum=0;
        int digit=0;
        while(m>0)
        {
            digit++;
            m/=10;
        }
        if(digit%2==0)
        {
            sign=-1;
        }
        //cout<<digit<<endl;;
        while(n>0)
        {   
            sum+=(n%10)*sign;
            if(sign==1)
            {
                sign=-1;
            }
            else
                sign=1;
            n/=10;
            cout<<sum<<endl;

            //cout<<sum<<" ";
            
           
            
        }
        return sum;
        
    }
};