#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int gd, gm;
    int x[100], y[100];
    int i, frame;

    char driver_path[] = "";

    initgraph(&gd, &gm, driver_path);

    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        x[i] = rand() % getmaxx();
        y[i] = rand() % getmaxy();
    }

    for (frame = 0; frame < 300; frame++)
    {
        cleardevice();
        setcolor(CYAN);

        for (i = 0; i < 100; i++)
        {
            line(x[i], y[i], x[i], y[i] + 10);

            y[i] += 8;

            if (y[i] > getmaxy())
            {
                y[i] = 0;
                x[i] = rand() % getmaxx();
            }
        }

        delay(50);
    }

    getch();
    closegraph();

    return 0;
}