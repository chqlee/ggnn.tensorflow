int main(){
    int n=0,i=0,j=0,k=0,s=0; //??3???????????0
    cin>>n; //??n
    int a[n],b[n],c[n+1]; //??????????????????????
    for(;i<n;i++){ //????
        cin>>a[i]>>b[i]; //?????????
        c[i]=0; //c[i]???0
        if (a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90) //??????
            c[k]=c[k]+1; //???????c?1
        else k=k+1; //?????c????????
    }
    c[n] = 0;
    c[n+1]=0; //?c[n+1]???????????
    for(;j<=k;j++){ //????
        if (s<c[j]) s=c[j]; //????????????????????????
    }
    cout<<s; //?????????
    return 0;
}
