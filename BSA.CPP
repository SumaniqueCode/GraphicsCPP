#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
void main()
{
    int gdriver = DETECT, gmode, error, x0, y0, x1, y1;
    int dx, dy, p, x, y;
    initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
    printf("Enter the coordinates of the first point (x0, y0): ");
    scanf("%d,%d", &x0, &y0);
    printf("Enter the coordinates of the second point (x1, y1): ");
    scanf("%d,%d", &x1, &y1);
    dx = x1 - x0;
    dy = y1-y0;
    x = x0;
    y = y0;
    p = 2*dy-dx;
    printf("Coordinates of points on the line:\n");
    printf("(%d,%d)\n", x, y);
    while (x <= x1)
    {
	if (p >= 0)
	{   delay(50);
	    putpixel(x,y,7);
	    y = y + 1;
	    p = p + 2*dy - 2*dx;
	}
	else
	{   delay(50);
	    putpixel(x,y,7);
	    p = p+2*dy;
	}
	    x = x + 1;
    }
    getch();
    closegraph();
}