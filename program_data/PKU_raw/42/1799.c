//**************************
//*???????????  **
//*?????? 1200012888 **
//*???2013.10.30**
//**************************
int main()
{
	int a[100000] = {0} ;				//??????a
	int n , k ;							//????????n??????k
	cin >> n ;							
	for (int i = 0 ; i < n ; i++)		//?n???????
	{
		cin >> a[i] ;
	}
	cin >> k ;							//????????
	for (int i = 0 ; i < n ; i++)
	{
		if (k == a[i])					//??a[i] == k
		{
			int count = 0 ;				//??count ?????????k????????
			int I = i ;					//I = i ??????
			for (int j = i ; j < n ; j ++)
			{
				if (k == a[j])			//???????
				{
					count ++ ;
				}
				else					//??????????? k ? ????
				{
					break ;
				}
			}
			while ( (I + count) < n)	//????
			{
				a[I] = a[I+count] ;
				I ++ ;
			}
			n = n - count ;				//???????count???
		}
	}
	for (int i = 0 ; i < n ; i ++)		//??????????
	{
		if(i != n-1)					//??????????????
		cout << a[i] << " " ;
		else
		cout << a[i] ;				
	}
	return 0;
}
