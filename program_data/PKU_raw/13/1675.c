/*??
??n????n???????????????10-100??? 
???????????????????????????????????????????
????
??????? 
??????????n?1<=n<=20000?????????????????? 
???????????n????????????10???100?
????
???????????????????????????????????????*/
int main() {
	int n[101]={
		0
	};//n[i]????i??????
	int nin;//cin:nin
	cin >>nin;
	int N;int num[nin],count=0;//?? 
	for (int i=1;i<=nin;++i){
		cin >>N;
		if(!n[N]){
			num[count]=N;count++;
		}n[N]++;//????????????,??? 
	}
	for(int i=0;i<=count-2;++i)cout<<num[i]<<' ';
	cout<<num[count-1];
	return 0;
}
