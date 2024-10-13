#include<stdio.h>
#include<conio.h>

int main(){
    int d[]={1,8,6,2,5,4,8,3,7};
    int n=sizeof(d)/sizeof(d[0]);
    int lb=0,gb=n-1,area;
    int h,w,ans=0;
    while(lb<=gb){
        w = gb-lb;
        h=d[lb]>d[gb]?d[gb]:d[lb];
        area = h*w;
        ans = area>ans?area:ans;
        d[lb]>d[gb]?gb--:lb++;
    }
    printf("%d",ans);
    return 0;
}