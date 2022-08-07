#define ll long long
int numSubarrayProductLessThanK(vector& a, int k) {
int n=a.size();
int l=0,r=0;
int res=0;
ll curr=1;
while(r<n)
{
curr*=a[r];
while(curr>=k && l<=r)
{
curr/=a[l];
l++;
}
res+=(r-l+1);
r++;
}
return res;
}
