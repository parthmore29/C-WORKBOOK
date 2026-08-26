#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define STARS 80

int main()
{
    int gd, gm;
    int x[STARS], y[STARS];
    int i, frame;

    char driver_path[] = "";

    initgraph(&gd, &gm, driver_path);

    srand(time(NULL));

    for (i = 0; i < STARS; i++)
    {
        x[i] = rand() % getmaxx();
        y[i] = rand() % getmaxy();
    }

    setbkcolor(BLUE);

    for (frame = 0; frame < 300; frame++)
    {
        cleardevice();

        /* Stars */
        for (i = 0; i < STARS; i++)
        {
            setcolor(YELLOW);
            putpixel(x[i], y[i], YELLOW);
        }

        /* Moon */
        setcolor(WHITE);
        setfillstyle(SOLID_FILL, WHITE);
        fillellipse(getmaxx() - 80, 70, 35, 35);

        /* Ground */
        setfillstyle(SOLID_FILL, DARKGRAY);
        bar(0, getmaxy() - 50, getmaxx(), getmaxy());

        delay(100);
    }

    getch();
    closegraph();

    return 0;
}