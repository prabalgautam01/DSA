  vector<int> topKFrequent(vector<int>& nums, int k) {
        //We have to sort acc to freq as jinki kam hogi woh upr rhke hat jayenge
        // that means we have to have  MAX HEAP
        int n=nums.size();
        map<int,int>m1;
        vector<int>ans;
 priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> >minHeap;
        for(auto it:nums)
        {
            m1[it]++;
        }
        for(auto it1:m1)  //map has (//Key //Value)
         {                  //but in maxheap pair we want to sort by value i.e freq //map has (//Value //key)
            minHeap.push(make_pair(it1.second,it1.first));  //yh apne re heapify hojata hai acc to maxHeap.first
            if(minHeap.size()>k)
            {
                minHeap.pop();
            }
        }
        while(!minHeap.empty())
        {
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    }
