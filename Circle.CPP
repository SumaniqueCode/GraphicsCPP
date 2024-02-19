#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
void main(){
    int gd = DETECT, gm, err, x, y, r, x0, y0;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    printf("Enter the radius of circle: ");
    scanf("%d", &r);
    printf("ENTER coordinates of center x and y: ");
    scanf("%d,%d", &x0, &y0);
    x = 0;
    y = r;
    err = 1-r;
    while (x<=y)
    {
	putpixel(x0+x, y0-y, 5);
    delay(10);
	putpixel(x0+y, y0-x, 7);
    delay(10);
	putpixel(x0+y, y0+x, 6);
    delay(10);
	putpixel(x0+x, y0+y, 7);
    delay(10);
	putpixel(x0-x, y0+y, 8);
    delay(10);
	putpixel(x0-y, y0+x, 5);
    delay(10);
	putpixel(x0-y, y0-x, 4);
    delay(10);
	putpixel(x0-x, y0-y, 9);
	delay(10);

	if (err<0)
        {
        x++;
        err += 2*x+1;
        }
        else
        {
            x++;
            y--;
            err += 2*x+1-2*y;
        }
    }
    getch();
    closegraph();
}