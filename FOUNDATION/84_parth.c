#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    int i, colors[] = {RED, GREEN, YELLOW, CYAN, MAGENTA};
    char driver_path[] = "";
    char text[] = "Parth";

    initgraph(&gd, &gm, driver_path);

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);

    for (i = 0; i < 5; i++)
    {
        setcolor(colors[i]);

        outtextxy(250, 200, text);

        delay(700);

        cleardevice();

        delay(400);
    }

    getch();
    closegraph();

    return 0;
}