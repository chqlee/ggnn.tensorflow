/*
 * ????dz.cpp
 * ??????
 * ????:2012-10-13
 * ????????????
 */

int main(){
	float a=0,b=0,c=0;                                       //????a,b,c
	int i,n;                                                 //????n
	double d,e;                                              //????d,e
	cin>>n;                                                  //?????????n
	for(i=1;i<=n;i=i+1)                                      //?for???n???
	{
		cin>>a>>b>>c;                                        //????a,b,c
		if(b*b-4*a*c>0)                                      //????????
		{
			d=(-b + sqrt(b*b-4*a*c))/(2*a);                  //??x1??
			e=(-b - sqrt(b*b-4*a*c))/(2*a);                  //??x2??
			if(d>-0.00001)                                   //???????????5????-0????????
				d=fabs(d);
			if(e>-0.00001)                                   //???????????5????-0????????
				e=fabs(e);
			cout<<"x1="<<fixed<<setprecision(5)<<d           //???x1=...;x2=...(???????5?)
				<<";x2="<<fixed<<setprecision(5)<<e<<endl;
		}
		else if(b*b-4*a*c==0)                                //???????
		{
			d=-b/(2*a);                                      //?????x1,x2??
			if(d>-0.00001)                                   //???????????5????-0????????
				d=fabs(d);
			cout<<"x1=x2="<<fixed<<setprecision(5)<<d<<endl; //???x1=x2=...(???????5?)
		}
		else                                                 //????????
		{
			d=-b/(2*a);                                      //????x1,x2?????
			if(d>-0.00001)                                   //???????????5????-0????????
				d=fabs(d);
			cout<<"x1="<<fixed<<setprecision(5)<<d<<"+"      //???x1=??+??i;x2=??-??i
				<<fixed<<setprecision(5)<<sqrt(-b*b+4*a*c)/(2*a)<<"i"
				<<";x2="<<fixed<<setprecision(5)<<d<<"-"
				<<fixed<<setprecision(5)<<sqrt(-b*b+4*a*c)/(2*a)<<"i"<<endl;
		}
	}
	return 0;                                                //?????
}