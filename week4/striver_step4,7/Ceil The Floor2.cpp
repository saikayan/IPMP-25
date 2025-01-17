pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int low=0,high=a.size()-1;
	pair<int,int> ans({-1,-1});
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(x<=a[mid])
		{
			ans.second=a[mid];
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	low=0;high=a.size()-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(x>=a[mid])
		{
			ans.first=a[mid];
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return ans;
	
}