int main()
{
int a[3]={0},b[12]={31,28,31,30,31,30,31,31,30,31,30,31},sum=0,i;
cin>>a[0]>>a[1]>>a[2];
if (a[0] % 4 == 0 && a[0] %100 !=0 || a[0]%400 ==0) b[1]=29;
for (i=0;i<a[1]-1;i++) sum+=b[i];
sum+=a[2];
cout<<sum;



}