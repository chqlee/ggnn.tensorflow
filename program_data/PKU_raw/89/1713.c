main()
{
	int n,i,j,a,b,k=0;
	int x[10000],y[10000];
	scanf("%d",&n);
	for(i=0;i<n*(n-1);i++)
	{
		scanf("%d %d",&a,&b);
		if(a==0&&b==0)
		{break;}
		else
		{
		x[a]++;
		y[b]++;
	}
	}
	for(j=0;j<n;j++)
	{
		
		if(x[j]==0&&y[j]==n-1)
		{printf("%d",j);
		k+=1;}
	}
	if(k==0)
	printf("NOT FOUND");
}
