/**
*@file		1000012767_5.cpp
*@author	??
*@date		2010.11.24
*@description
*			???????????
*/

int len;	//???? len ?????

void palindrome(char[], int);	//???????????????????

void palindrome(char p[], int lenth)
{								//p ??????????????lenth ???????
	int j, k, final, judge;		//j ??????????????k ?????????
								//final ???????????judge ???????????
	final = lenth / 2;			//???????????????????????????????
	for (j = 0; j <= len - lenth; j++)		//?????????????
	{
		judge = 0;				//judge ? 0 ???????1 ????
		for (k = 1; k <= final; k++)	//??????????????
		{
			if (p[j + k - 1] != p[j + lenth - k])
			{
				judge = 1;				//????????????????????????????
				break;
			}
		}
		if (judge == 0)					//??????????????????
		{
			for (k = j; k <= j + lenth - 1; k++)
				cout << p[k];
			cout << endl;		
		}
	}
}

int main()			//???
{
	char a[501];	//a ???????????
	int i;
	cin >> a;
	len = strlen (a);
	for (i = 2; i <= len; i++)
					//i ????????????
		palindrome(a, i);	//??????????????????????????????
	return 0;
}