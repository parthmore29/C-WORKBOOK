#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    char driver_path[] = "";

    initgraph(&gd, &gm, driver_path);

    setcolor(BLUE);

    // Solid filled rectangle
    setfillstyle(SOLID_FILL, BLUE);
    bar(50, 50, 200, 150);

    // Solid filled circle
    setfillstyle(SOLID_FILL, BLUE);
    fillellipse(300, 100, 50, 50);

    // Line-filled ellipse
    setfillstyle(LINE_FILL, BLUE);
    fillellipse(500, 100, 80, 40);

    // Blue line
    line(100, 250, 500, 250);

    getch();
    closegraph();

    return 0;
}