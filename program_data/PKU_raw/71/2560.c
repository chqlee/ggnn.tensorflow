int main()
{
	int n,i,a[300];
	int cra,crb,rnd,sdx,year,jy1,nl1,yue1,month2,l,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	
	scanf("%d %d %d",&year,&yue1,&month2);
	rnd=((year-1)/4-(year-1)/100+(year-1)/400)*(366%7);
    sdx=(year-1-((year-1)/4-(year-1)/100+(year-1)/400))*(365%7);
	if((year%400)==0||((year%4)==0&&(year%100)!=0))
	{
		if(yue1==1){jy1=0;}
		if(yue1==2){jy1=31;}
		if(yue1==3){jy1=31+29;}
		if(yue1==4){jy1=31+29+31;}
		if(yue1==5){jy1=31+29+31+30;}
		if(yue1==6){jy1=31+29+31+30+31;}
		if(yue1==7){jy1=31+29+31+30+31+30;}
		if(yue1==8){jy1=31+29+31+30+31+30+31;}
		if(yue1==9){jy1=31+29+31+30+31+30+31+31;}
		if(yue1==10){jy1=31+29+31+30+31+30+31+31+30;}
		if(yue1==11){jy1=31+29+31+30+31+30+31+31+30+31;}
		if(yue1==12){jy1=31+29+31+30+31+30+31+31+30+31+30;}
	
	}
	
	else
	{
		if(yue1==1){jy1=0;}
		if(yue1==2){jy1=31;}
		if(yue1==3){jy1=31+28;}
		if(yue1==4){jy1=31+28+31;}
		if(yue1==5){jy1=31+28+31+30;}
		if(yue1==6){jy1=31+28+31+30+31;}
		if(yue1==7){jy1=31+28+31+30+31+30;}
		if(yue1==8){jy1=31+28+31+30+31+30+31;}
		if(yue1==9){jy1=31+28+31+30+31+30+31+31;}
		if(yue1==10){jy1=31+28+31+30+31+30+31+31+30;}
		if(yue1==11){jy1=31+28+31+30+31+30+31+31+30+31;}
		if(yue1==12){jy1=31+28+31+30+31+30+31+31+30+31+30;}
	}
	if((year%400)==0||((year%4)==0&&(year%100)!=0))
	{
		if(month2==1){nl1=0;}
		if(month2==2){nl1=31;}
		if(month2==3){nl1=31+29;}
		if(month2==4){nl1=31+29+31;}
		if(month2==5){nl1=31+29+31+30;}
		if(month2==6){nl1=31+29+31+30+31;}
		if(month2==7){nl1=31+29+31+30+31+30;}
		if(month2==8){nl1=31+29+31+30+31+30+31;}
		if(month2==9){nl1=31+29+31+30+31+30+31+31;}
		if(month2==10){nl1=31+29+31+30+31+30+31+31+30;}
		if(month2==11){nl1=31+29+31+30+31+30+31+31+30+31;}
		if(month2==12){nl1=31+29+31+30+31+30+31+31+30+31+30;}
	
	}
	
	else
	{
		if(month2==1){nl1=0;}
		if(month2==2){nl1=31;}
		if(month2==3){nl1=31+28;}
		if(month2==4){nl1=31+28+31;}
		if(month2==5){nl1=31+28+31+30;}
		if(month2==6){nl1=31+28+31+30+31;}
		if(month2==7){nl1=31+28+31+30+31+30;}
		if(month2==8){nl1=31+28+31+30+31+30+31;}
		if(month2==9){nl1=31+28+31+30+31+30+31+31;}
		if(month2==10){nl1=31+28+31+30+31+30+31+31+30;}
		if(month2==11){nl1=31+28+31+30+31+30+31+31+30+31;}
		if(month2==12){nl1=31+28+31+30+31+30+31+31+30+31+30;}
	}
	cra=jy1+rnd+sdx+1;
    crb=nl1+rnd+sdx+1;
	l=cra%7;
	k=crb%7;
	if(l==k)
		{
			a[i]=1;
		}
		else
		{
			a[i]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
