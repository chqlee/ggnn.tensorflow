/*??
?????????????????????????8,6,5,4,1?????1,4,5,6,8?
????
?????????????????n?1 < n < 100)?????n?????????????????
????
??????????????????????????????
????
5

8 6 5 4 1
????
1 4 5 6 8*/
int main()
{
	int n,i,x=0,t,a[99999],b[999999];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		b[i]=a[n+1-i];
	}
	for(i=1;i<=n;i++)
	{
		x++;
		if(x==1)
		{
		cout<<b[i];
		}
		else
		{
			cout<<" "<<b[i];
		}
	}
	return 0;

}
