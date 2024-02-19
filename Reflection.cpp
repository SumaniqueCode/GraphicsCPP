#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

char IncFlag;
int PolygonalPoints[3][2] = {{10, 100}, {110, 100}, {110, 200}};

void PolyLine()
{
    int iCnt;
    cleardevice();
    line(0, 240, 640, 240);
    line(320, 0, 320, 480);
    for (iCnt = 0; iCnt <= 2; iCnt++)
    {
        line(PolygonalPoints[iCnt][0], PolygonalPoints[iCnt][1],
             PolygonalPoints[(iCnt + 1) % 3][0], PolygonalPoints[(iCnt + 1) % 3][1]);
    }
}
void Reflect()
{
    float Angle;
    int iCnt;
    int Tx, Ty;
    for (iCnt = 0; iCnt <= 2; iCnt++)
    {
        PolygonalPoints[iCnt][1] = (480 - PolygonalPoints[iCnt][1]);
    }
}

void main()
{
    int gd = DETECT, gm;
    int iCnt;
    initgraph(&gd, &gm, "C:\\TUTBOC3\\BGI");
    for (iCnt = 0; iCnt <= 2; iCnt++)
    {
        PolygonalPoints[iCnt][0] += 320;
        PolygonalPoints[iCnt][1] += 240 - PolygonalPoints[iCnt][1];
    }
    PolyLine();
    getch();
    Reflect();
    PolyLine();
    getch();
}