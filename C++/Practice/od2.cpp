#include <graphics.h>
#include <conio.h>
 
main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	circle(200,200,100);
	getch();
	closegraph();
} 