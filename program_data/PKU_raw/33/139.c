int main()
{
	int n,i,j;
	scanf("%d",&n);
	char zfc[1000][300];
	int k[1000];
	for(i=0;i<n;i++)
	{
		scanf("%s",zfc[i]);
		k[i]=strlen(zfc[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<k[i];j++)
		{
			if(zfc[i][j]=='A')
			{
				zfc[i][j]='T';
			}
			else if(zfc[i][j]=='T')
			{
				zfc[i][j]='A';
			}
			else if(zfc[i][j]=='G')
			{
				zfc[i][j]='C';
			}
			else if(zfc[i][j]=='C')
			{
				zfc[i][j]='G';
			}
		}
		printf("%s\n",zfc[i]);
	}
	return 0;
}