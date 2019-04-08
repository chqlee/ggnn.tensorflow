int main(){
    int a[11][11],b[11][11];
    int i,j,k,m,n,day;
    for(i=0;i<=10;i++){
        for(j=0;j<=10;j++){
            a[i][j]=b[i][j]=0;
        }
    }
    scanf("%d %d",&m,&n);
    a[5][5]=m;
    for(day=1;day<=n;day++){
        for(i=1;i<=9;i++){
            for(j=1;j<=9;j++){
                b[i][j] += a[i][j];
                b[i+1][j] += a[i][j];
                b[i-1][j] += a[i][j];
                b[i][j+1] += a[i][j];
                b[i][j-1] += a[i][j];
                b[i+1][j+1] += a[i][j];
                b[i+1][j-1] += a[i][j];
                b[i-1][j+1] += a[i][j];
                b[i-1][j-1] += a[i][j];
            }
        }
        for(i=1;i<=9;i++){
            for(j=1;j<=9;j++){
                a[i][j] += b[i][j];
                b[i][j] = 0;
            }
        }
    }
    for(i=1;i<=9;i++){
        for(j=1;j<=8;j++){
            printf("%d ",a[i][j]);
        }
        printf("%d\n",a[i][9]);
    }
    return 0;

}
