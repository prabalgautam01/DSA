   vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue< pair<int, vector<int>> > maxh;
        for(int i=0;i<points.size();i++)
        {
               maxh.push({square(points[i][0],points[i][1]),points[i]});    
               
            if(maxh.size()>k)
            {
                maxh.pop();
            }
        }
        vector<vector<int>>ans;
        while(maxh.size()>0)
        {
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        return ans;
    }
     int square(int a, int b)
    {
        return a*a + b*b;
    }
