#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    int x = 320;
    int y;
    int ground = 350;
    int radius = 25;
    int i;

    initgraph(&gd, &gm, "");

    setcolor(WHITE);
    line(0, ground + radius, getmaxx(), ground + radius);

    while (!kbhit())
    {
        /* Jump upward */
        for (i = 0; i <= 140; i += 5)
        {
            y = ground - i;

            cleardevice();

            setcolor(WHITE);
            line(0, ground + radius, getmaxx(), ground + radius);

            setcolor(YELLOW);
            setfillstyle(SOLID_FILL, YELLOW);
            fillellipse(x, y, radius, radius);

            delay(30);
        }

        /* Fall downward */
        for (i = 140; i >= 0; i -= 5)
        {
            y = ground - i;

            cleardevice();

            setcolor(WHITE);
            line(0, ground + radius, getmaxx(), ground + radius);

            setcolor(YELLOW);
            setfillstyle(SOLID_FILL, YELLOW);
            fillellipse(x, y, radius, radius);

            delay(30);
        }
    }

    getch();
    closegraph();

    return 0;
}