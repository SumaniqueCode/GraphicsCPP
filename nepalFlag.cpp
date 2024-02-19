#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <dos.h>
void main()
{
    float x, y, x1, x2, y1, y2, dx, dy, step, height, originX, originY;
    int i,j,thick, gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");
    printf("Enter the height of flag: ");
    scanf("%f", &height);
    printf("Enter the thickness of border: ");
    scanf("%d", &thick);
    x1 = 100;
    y1 = 100;
    x2 = 2*height;
    y2 = 2*height;
    originX = x1;
    for (i = 1; i <= thick; i++)
    {
        originY = y1-i+1;
        dx = abs(x2 - x1);
        dy = abs(y2 - y1);
        if (dx >= dy){
            step = dx;
        }
        else{
            step = dy;
        }
        dx = dx / step;
        dy = dy / step;
        x = x1;
        y = y1;
        for (j = 0; j <= step; j++)
        {
            putpixel(x, y+i, 15);
            x = x + dx;
            y = y + dy;
            delay(10);
        }
        for (j = 0; j <= step/1.5; j++)
        {
            putpixel(x, y+i, 15);
            x = x--;
            delay(10);
        }
        for (j = 0; j <= step/1.2; j++)
        {
            putpixel(x, y+i, 15);
            x = x + dx;
            y = y + dy;
            delay(10);
        }
        for (j = 0; j <= step*1.2; j++)
        {
            putpixel(x, y+i, 15);
            x = x--;
            delay(10);
        }
         for (j = 0; j <= step*2.25; j++)
        {
            putpixel(originX, originY, 15);
            originY++;
            delay(10);
        }
        originX--;
    }
getch();
closegraph();
}