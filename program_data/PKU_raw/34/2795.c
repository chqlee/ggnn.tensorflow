/*
 * ??????????????????3?1??????????2?????????????????????????1??????????5????????16?8?4?2?1?
??????????????????1????????

????
????

????
??????1???????????????????????????7??????
7*3+1=22
22/2=11
11*3+1=34
34/2=17
17*3+1=52
52/2=26
26/2=13
13*3+1=40
40/2=20
20/2=10
10/2=5
5*3+1=16
16/2=8
8/2=4
4/2=2
2/2=1
??????"End"??????1?????"End"

 *
 */

int main()
{
	int n,i;
	int a[200];
	cin>>n;
	a[0]=n;
	for(i=0;a[i]!=1;i++){
		if(a[i]%2==0)
		{

			cout<<a[i]<<"/2="<<a[i]/2<<endl;
			a[i+1]=a[i]/2;
		}
		else
		{
			cout<<a[i]<<"*3+1="<<3*a[i]+1<<endl;
			a[i+1]=3*a[i]+1;
		}
	}
		cout<<"End"<<endl;
	return 0;
}



