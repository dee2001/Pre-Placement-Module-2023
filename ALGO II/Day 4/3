int maxArea(vector<int>& arr) {
        int n = arr.size();
        int i = 0, j = n-1,ans = INT_MIN;
        vector<int> v;
        while(i != j) {
            int area = min(arr[i], arr[j])*(j-i);
            ans = max(ans, area);
            if(arr[i] <= arr[j]) i++;
            else j--;
        }
        return ans;
