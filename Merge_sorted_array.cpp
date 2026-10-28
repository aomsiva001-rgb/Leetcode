//Leetcode 88. Merge Sorted Array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> num1=nums1;
        int i=0,j=0,k=0;
        while(i<m && j<n)
        {
            if(num1[i]<nums2[j])
            {
                nums1[k]=num1[i];
                i++;
            }
            else
            {
                nums1[k]=nums2[j];
                j++;
            }
            k++;

        }
        while(i<m)
        {
            nums1[k]=num1[i];
            i++;
            k++;
        }
        while(j<n)
        {
            nums1[k]=nums2[j];
            j++;
            k++;
        }
    }
};