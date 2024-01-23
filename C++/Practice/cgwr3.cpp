#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

main()
{
    int x[4],y[4],i;
    double put_x,put_y,t;
    int gr=DETECT,gm;
    initgraph(&gr,&gm,NULL);
    cout<<"Enter 4 control points:-\n";
    for(i=0;i<4;i++)
    {
        cout<<"(x"<<i+1<<","<<"y"<<i+1<<")"<<": ";
        scanf("%d%d",&x[i],&y[i]);
        putpixel(x[i],y[i],3);
    }
    for(t=0.0;t<=1.0;t=t+0.001)
    {
        put_x =x[0]*pow(1-t,3)+x[1]*3*t*pow(1-t,2) +x[2]*pow(t,2)*3*(1-t) +x[3]*pow(t,3);
        put_y =y[0]*pow(1-t,3)+y[1]*3*t*pow(1-t,2) +y[2]*pow(t,2)*3*(1-t) +y[3]*pow(t,3);
        putpixel(put_x,put_y, WHITE);
    }
    getch();
    closegraph();
}