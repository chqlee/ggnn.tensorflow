int main()
{
	int a[22][22]={0};
	int m,n,i,j;
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;i++)
	for(j=1;j<=n;j++)
	cin>>a[i][j];
	for(i=1;i<=m;i++)
	for(j=1;j<=n;j++)
	if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
	cout<<i-1<<" "<<j-1<<endl;
	return 0;
}