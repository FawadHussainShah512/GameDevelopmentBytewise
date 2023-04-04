#include <graphics.h>
int main(){
initwindow(1200,700);
int i=0,j,midy;
midy=getmaxy()/2;
pieslice(50,500,0,90,30);
while(1)
{
i++;
if(i==1000){
i=0;
}
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
pieslice(0+i,500,0-i,90-i,30);
pieslice(0+i,500,180-i,270-i,30);
circle(0+i,500,30);
arc(0+i,500,0,180,40);
pieslice(300+i,500,0-i,90-i,30);
pieslice(300+i,500,180-i,270-i,30);
circle(300+i,500,30);
arc(0+i,500,0,180,40);
line(40+i,500,260+i,500);//center line
line(-200+i,500,-40+i,500);//back line
line(340+i,500,540+i,500);//front line
line(-200+i,500,-200+i,400);//back height
line(-200+i,400,-110+i,300);//back body
line(-110+i,380,-40+i,270);//back glass
line(-30+i,270,210+i,270);//ceiling
line(210+i,270,320+i,380);//front glass
line(320+i,380,500+i,410);//front body
floodfill(5+i,midy+20,YELLOW);

setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
line(-90+i,38,-20+i,280);
line(-20+i,280,80+i,280);
line(80+i,280,80+i,380);
line(-90+i,380,80+i,380);
floodfill(30+i,midy-20,BLACK);
line(200+i,280,300+i,380);
line(100+i,280,200+i,280);
line(100+i,280,100+i,380);
line(100+i,380,300+i,380);
floodfill(230+i,midy-20,BLACK);
setcolor(YELLOW);
line(0,531,1260,531);
line(0,400,1260,400);
delay(10);
cleardevice();
}
getch();
closegraph();
return 0;
}
