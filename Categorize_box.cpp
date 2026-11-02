//Leetcode 2525. Categorize Box According to Criteria
class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long volume=(long long)length*width*height;
        if(length>=pow(10,4)||width>=pow(10,4)||height>=pow(10,4)||mass>=pow(10,4)||volume>=pow(10,9) )
        {   if(mass>=100)
                return "Both";
            else
                return "Bulky";
        }
        else{

        if(mass>=100)
        {
            return "Heavy";
        }
        else 
            return "Neither";
        }

    }
};