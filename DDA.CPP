#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <dos.h>
void main(){
    float x,y,x1,x2,y1,y2,dx,dy,step;
    int i , gd=DETECT, gm;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    printf("Enter the value of x1 and y1: ");
    scanf("%f,%f",&x1,&y1);
    printf("Enter the value of x2 and y2: ");
    scanf("%f,%f",&x2,&y2);
    dx = abs(x2-x1);
    dy = abs(y2-y1);
    if (dx>=dy)
    {
	step = dx;
    }
    else{
	step = dy;
    }
    dx = dx/step;
    dy = dy/step;
    x = x1;
    y = y1;
    for (i=0; i<=step; i++)
    {
	putpixel(x,y,15);
	x = x + dx;
	y = y + dy;
	delay(100);
    }
    getch();
    closegraph();
}