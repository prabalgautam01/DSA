int InfiniteArr(vector<int>& arr,target)
{
int start=0;
int end=1;

while(target>arr[end])
{
 start=end;
 end=end*2;
 }
while(start<=end)
{ 
 int mid=start+(end-start)/2;
 if(target==arr[mid])
 {
  return arr[mid];
  }
 else if(target<arr[mid])
 {
  end=mid-1;
  }
 else
  start=mid+1;
  
}  
 
