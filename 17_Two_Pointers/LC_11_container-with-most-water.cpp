class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxAreares=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int length=min(height[i],height[j]);
                int width=(j-1);
                int currArea=(length*width);
                maxAreares=max(maxAreares,currArea);
            }
        }
        return maxAreares;
    }
};