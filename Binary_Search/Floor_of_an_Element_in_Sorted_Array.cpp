int floor(vector<int>& arr,target)
{
  int start=0;
  int end =arr.size()-1;
  while(start<=end)
  {
    int mid=start+(end-start)/2;
    if(arr[mid]==target)
    {
      return arr[mid];
    }
    else if(arr[mid]<target)
    {
      int res=arr[mid];
      start=mid+1;
    }
    else if(arr[mid]>target)
    {
      end=mid-1;
    }
    else
      return -1;
    
  }
  return res;
}
    
