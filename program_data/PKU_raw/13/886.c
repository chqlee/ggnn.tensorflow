int main(){
	int n,i,j,k=0,h=0;	//???????n?????????i?j??????k??????????h??????????
	cin>>n;	//??n
	int a[n],b[n];	//??a?b????
	for (i=0;i<=(n-1);i++)	//????????a????
		cin>>a[i];
	for (i=0;i<=(n-1);i++){
		if (a[i]!=-1){	//?a?????-1?
			for (j=i+1;j<=(n-1);j++){	//????????????
				if (a[i]==a[j]){	//????????
					a[j]=-1;	//?????????-1
					k=k+1;	//?????
				}
	      }
		}
	}
	for (i=0;i<=(n-1);i++)	//?a?????????b?
		b[i]=a[i];
	for (i=0;i<=(n-1);i++){	//????????
		if (b[i]!=-1){	//?b?????-1?
			cout<<b[i];	//??????
			h++;	//?????
			}
		if (h==1)	//???????-1???
			break;	//????
	}
    for (i=i+1;i<=n-1;i++){	//?????-1?????????
    	if (b[i]!=-1){	//?b?????-1?
    	    		cout<<" "<<b[i];	//??????
    	    		h++;	//?????
            }
    	if (h==n-k)	//?????????????????????????
    		break;	//????
    }

	return 0;
}
