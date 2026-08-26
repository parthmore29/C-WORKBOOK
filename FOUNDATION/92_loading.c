#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main()
{
    int gd, gm;
    int i;
    char driver_path[] = "";
    char text[20];

    initgraph(&gd, &gm, driver_path);

    setcolor(WHITE);
    outtextxy(250, 100, "LOADING");

    rectangle(150, 200, 500, 240);

    for (i = 0; i <= 100; i++)
    {
        setfillstyle(SOLID_FILL, GREEN);
        bar(152, 202, 152 + (i * 346 / 100), 238);

        sprintf(text, "%d%%", i);

        setfillstyle(SOLID_FILL, BLACK);
        bar(300, 260, 360, 285);

        setcolor(WHITE);
        outtextxy(310, 265, text);

        delay(50);
    }

    setcolor(GREEN);
    outtextxy(250, 320, "COMPLETE!");

    getch();
    closegraph();

    return 0;
}