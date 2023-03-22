
#include <graphics.h>
#include <conio.h>
#include <dos.h>

main()
{
int d,m;
int x,y=30;

d=DETECT;
initgraph(&d,&m,"c:\\tc\\bgi");


for(x=30;x<530;x++)
{

cleardevice();

setfillstyle(6,2);
circle(x,y,20);
floodfill(x,y,15);
delay(15);
}

for(x=530;x>30;x--)
{
cleardevice();

setfillstyle(6,2);
circle(x,y,20);
floodfill(x,y,15);
delay(15);
}
getch();
closegraph();
}