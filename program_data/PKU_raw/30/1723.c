//****************************
//**Title:?7??????? **
//**Author:???1300017687 **
//**Date?2013.10.9         **
//**File?3.cpp             **
//**No Function				**
//****************************

int main()
{
	int n;					//n???????
	int sum = 0;			//sum?????7???????

	cin >> n;				//??n

	for (int af = 1; af <= n ; af++)	//??????af,af?1?n
	{
		//??af??7?0(?af??7??)???af??10?7(?af???7)
		//??af??10??????7(?af???7),???7??
		if (((af % 7 == 0)||(af % 10 == 7)||(af / 10 == 7)) == 0)		
			sum += af * af;			//sum ?? sum ? af*af
	}

	cout << sum << endl;			//??sum
	return 0;
	cin.get();
	cin.get();
}


