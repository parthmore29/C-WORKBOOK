#include <graphics.h>
#include <conio.h>

int main()
{
    int gd, gm, x, y;

    char *driver_path = "";

    initgraph(&gd, &gm, driver_path);

    setbkcolor(BLACK);
    cleardevice();

    setcolor(YELLOW);

    for (y = 30; y < getmaxy() - 30; y += 70)
    {
        for (x = 30; x < getmaxx() - 30; x += 70)
        {
            // Face
            circle(x, y, 25);

            // Left eye
            circle(x - 8, y - 7, 3);

            // Right eye
            circle(x + 8, y - 7, 3);

            // Smile
            arc(x, y + 3, 200, 340, 12);
        }
    }

    getch();
    closegraph();

    return 0;
}