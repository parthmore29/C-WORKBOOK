#include <graphics.h>
#include <conio.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    char driver_path[] = "";

    initgraph(&gd, &gm, driver_path);

    int x = 320;
    int ground = 330;
    int radius = 25;

    float y;
    float t;

    setbkcolor(BLACK);
    cleardevice();

    /* Ground */
    setcolor(WHITE);
    line(50, ground + radius, 590, ground + radius);

    /* Jumping animation */
    for (t = 0; t <= 2 * 3.14159; t += 0.08)
    {
        /* Sin wave creates the jumping motion */
        y = ground - 130 * fabs(sin(t));

        /* Erase previous ball */
        setcolor(BLACK);
        setfillstyle(SOLID_FILL, BLACK);
        fillellipse(x, (int)y, radius + 2, radius + 2);

        /* Redraw ground */
        setcolor(WHITE);
        line(50, ground + radius, 590, ground + radius);

        /* Draw ball */
        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
        fillellipse(x, (int)y, radius, radius);

        delay(40);
    }

    getch();
    closegraph();

    return 0;
}