#include <graphics.h>
#include <conio.h>

int main()
{
    int gd, gm;
    char driver_path[] = "";

    initgraph(&gd, &gm, driver_path);

    // Sky
    setfillstyle(SOLID_FILL, LIGHTRED);
    bar(0, 0, getmaxx(), getmaxy());

    // Sun
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(500, 120, 50, 50);

    // Mountains
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL, DARKGRAY);

    int mountain1[] = {0, 350, 180, 170, 350, 350, 0, 350};
    fillpoly(4, mountain1);

    int mountain2[] = {250, 350, 450, 130, 640, 350, 250, 350};
    fillpoly(4, mountain2);

    // Ground
    setfillstyle(SOLID_FILL, GREEN);
    bar(0, 350, getmaxx(), getmaxy());

    getch();
    closegraph();

    return 0;
}