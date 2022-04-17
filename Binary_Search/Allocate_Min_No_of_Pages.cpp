bool isValid(int A[],int N, int M, int mid)
{
   int student=1, sum=0, i;
   for(i=0;i<N;i++)
   {
       sum+=A[i];
       
       if(sum>mid)
       {
           student++;
           sum=A[i];
       }
       
       if(student>M)    //students greater than given students M
           return 0;
   }
   return 1;
}
class Solution 
{
   public:
   //Function to find minimum number of pages.
   int findPages(int A[], int N, int M) 
   {
       
       if(N<M)
           return -1;
       int s,e,mid,i, sum=0, res=-1;
       
       int max=A[0];
       for(i=0;i<N;i++)
       {
           if(A[i]>max)
               max = A[i];
       }
       s=max;
       for(i=0;i<N;i++)
       {
           sum+=A[i];
       }
       e=sum;
       
       while(s<=e)
       {
           mid = s+(e-s)/2;
           
           if(isValid(A,N,M,mid)==1)
           {
               res = mid;
               e=mid-1;
           }
           else
           s=mid+1;
       }
       return res;
   }

