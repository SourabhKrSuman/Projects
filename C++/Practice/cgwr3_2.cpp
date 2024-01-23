#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    float wxmin=10,wxmax=150,wymin=10,wymax=250;
    float vxmin=200,vxmax=600,vymin=10,vymax=250;
    int wx1=30,wy1=50,wx2=100,wy2=180;
    rectangle(wxmin,wymin,wxmax,wymax);
    rectangle(vxmin,vymin,vxmax,vymax);
    float sx=(vxmax-vxmin)/(wxmax-wxmin);
    float sy=(vymax-vymin)/(wymax-wymin);
    line(wx1,wy1,wx2,wy2);
    float vx1=sx*(wx1-wxmin)+vxmin;
    float vy1=sy*(wy1-wymin)+vymin;
    float vx2=sx*(wx2-wxmin)+vxmin;
    float vy2=sy*(wy2-wymin)+vymin;
    line(vx1,vy1,vx2,vy2);
    outtextxy(60,260,(char*)"Window");
    outtextxy(360,260,(char*)"Viewport");
    getch();
}