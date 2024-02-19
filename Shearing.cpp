#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>

void main()
{
    int gd = DETECT, gm;
    float shx, shy;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    printf("Enter shear factor shx along x-axis: ");
    scanf("%f", &shx);
    line(100, 50, 200, 50);
    line(200, 50, 200, 200);
    line(200, 200, 100, 200);
    line(100, 200, 100, 50);
    printf("X-Shear");
    setcolor(12);
    line((100 + (50 * shx)), 50, (200 + (50 * shx)), 50);
    line((200 + (50 * shx)), 50, (200 + (200 * shx)), 200);
    line((200 + (200 * shx)), 200, (100 + (200 * shx)), 200);
    line((100 + (200 * shx)), 200, 100 + (50 * shx), 50);
    getch();
}