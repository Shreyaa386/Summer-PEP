class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

     heights.push_back(0);
     stack<int>st;
     int n= heights.size();
     int maxArea=0;
     for(int i=0;i<n;i++){
        //int currheight= (i=n?0:heights[i]);
        while(!st.empty() && heights[i]<heights[st.top()]){
            int height = heights[st.top()];
            st.pop();
            int width;
            if(st.empty())
            width=i;
            else
            width=i-st.top()-1;
            maxArea=max(maxArea,height*width);
        }
        //if(i<n)
        st.push(i);
     }
     return maxArea;   
    }
};