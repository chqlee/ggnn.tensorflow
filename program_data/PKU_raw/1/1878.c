int sum=0;//???????????
void fact(int a,int i)//?????;??????????a?????i?????
{
    if(a==1) sum++;//???????N=1????????N????????1
    while(i<=a)//????i???N
    {
        if(a%i==0) fact(a/i,i);//??N??i?????????????N/i??
        i++;//??N???i???i?1
    }
}
int main()//???
{
    int n;//?????????
    cin>>n;//??????
    while(n--)//??
    {
        int a;//??????????
        cin>>a;//????
        int i=2;//???????2?
		int result=1;//????????a??????
        while(i<=a/2)//??i???a???
        {
            if(a%i==0)//??i?a???
            {
                sum=0;//sum??
                fact(a/i,i);//????????/i
                result+=sum;//????????i????
            }
            i++;//i?1
        }
        cout<<result<<endl;//??????
    }
    return 0;
}
