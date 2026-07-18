class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());
        int size = arr.size();
        vector<int>unique;
        int ans = 0;

        for(int i = 0; i<size; ){
            int count = 0;
            int check = arr[i];
            while(i<size && check == arr[i] ){
                count ++;
                i++;
            }
            unique.push_back(count);
        }
        sort(unique.begin(), unique.end());
        int n = unique.size();
        for(int i = 1; i<n; i++){
            if(unique[i] == unique[i-1]){
                return 0;
            }
        }
        return 1;
    }
};