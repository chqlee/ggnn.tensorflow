//************************************************************************
//* ??? ????????.cpp                                          *
//* ?? ????                                                        *
//* ???? ?2010?11?26?                                            *
//************************************************************************
int main()
{
	char a[100];                                  //????????
	gets( a );                                    //??????
	char*p;
	p=a;                                          //??????p,?????????????
	int i;
	for ( i=0; a[i]!='\0' ; i++ )
	{
		if ( *(p+i)==' '&&*(p+i-1)==' ' )         //??i?????i+1???????,?????i???
			continue;
		cout<<*(p+i);
	}
	cout<<endl;
	return 0;
}
