#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int velicina=30000;
    char arr[velicina];
    int n,k,i=1,j;
    int num=0,sklj,oznaci=0;
    /// citaj...
    fgets(arr,velicina,stdin);
    sscanf(arr,"%d", &n);
    int a[100002],b[100002];
    while(n>0) {
        sklj=fread(arr,1,velicina,stdin);
        for(j=0; j<sklj; j++){
            if(arr[j]=='\n' || arr[j]==' ') {
                a[i]=num;
                b[a[i]]=i;
                i++;
            if(arr[j]=='\n') {
                if(oznaci==0){
                    for(k=1;k<=n;k++) {
                        if(a[k]!=b[k]) {
                            printf("not ambiguous\n");
                            break;
                        }
                        if(k==n)
                            printf("ambiguous\n");
                        }
                        oznaci=1;
                } else if(oznaci==1) {
                    i=1;
                    n=num;
                    if(n==0)
                        break;
                    oznaci=0;
                }
            }
            num=0;
            } else {
                num=(num*10)+(arr[j]-'0');
            }
        }
    }
    return 0;
}