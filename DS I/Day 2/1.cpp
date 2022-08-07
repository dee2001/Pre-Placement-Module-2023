class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i =0,temp,j=0,k=0;
        vector<int> a(m+n);
        while(m!=0 && n!=0){
            if(nums1[j] < nums2[k]){
                a[i] = nums1[j];
                j++;
                i++;
                m--;
            }
            else{
                a[i] = nums2[k];
                k++;
                i++;
                n--;
            }
        }
        if(m>0){
            while(m--){
                a[i] = nums1[j];
                i++;
                j++;
            }
        }
        else{
            while(n--){
                a[i] = nums2[k];
                i++;
                k++;
            }
        }
        i=0;
        for(int x : a){
            nums1[i] = x;
            i++;
        }
    }
};
