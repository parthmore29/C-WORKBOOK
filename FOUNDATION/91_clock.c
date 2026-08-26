#include <graphics.h>
#include <conio.h>
#include <time.h>
#include <stdio.h>

int main()
{
    int gd, gm;
    char driver_path[] = "";
    time_t now;
    struct tm *current_time;
    char clock_text[20];

    initgraph(&gd, &gm, driver_path);

    setbkcolor(BLACK);

    while (1)
    {
        now = time(NULL);
        current_time = localtime(&now);

        sprintf(clock_text, "%02d:%02d:%02d",
                current_time->tm_hour,
                current_time->tm_min,
                current_time->tm_sec);

        cleardevice();

        setcolor(CYAN);
        settextstyle(DEFAULT_FONT, HORIZ_DIR, 5);

        outtextxy(200, 180, clock_text);

        delay(1000);

        if (kbhit())
            break;
    }

    getch();
    closegraph();

    return 0;
}