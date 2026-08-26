#include <graphics.h>
#include <conio.h>

int main()
{
    int gd, gm;
    int midx, i;

    char driver_path[] = "";

    initgraph(&gd, &gm, driver_path);

    midx = getmaxx() / 2;

    setbkcolor(BLACK);

    for (i = 0; i <= midx; i += 10)
    {
        cleardevice();

        setfillstyle(SOLID_FILL, RED);

        // Left curtain
        bar(0, 0, midx - i, getmaxy());

        // Right curtain
        bar(midx + i, 0, getmaxx(), getmaxy());

        delay(50);
    }

    getch();
    closegraph();

    return 0;
}