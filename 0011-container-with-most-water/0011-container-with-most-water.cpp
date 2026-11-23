class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int lp = 0, rp = height.size() - 1, maxWater = 0; // left pointer | right pointer | max Water
	    while (lp < rp)
	    {
		    int w = rp - lp;						  // width
		    int h = std::min(height[lp], height[rp]); // hight
		    maxWater = std::max(maxWater, w * h);
		    if (height[lp] < height[rp])
			    lp++;
		    else
			    rp--;
	    }
	    return maxWater;
    }
};