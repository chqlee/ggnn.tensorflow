/*
 * BrotherCharaters.cpp
 *  ???????
 *  Created on: 2013-12-5
 *      Author: 111
 */

int main()
{
char str[102];
gets(str);
char *p = NULL;
for (p=str;p<str+strlen(str)-1;p++)              //??strlen??????????char???????????????
cout << (char)(*p+*(p+1));
cout << (char)(str[0]+str[strlen(str)-1]);       //??????????????
	return 0;
}
