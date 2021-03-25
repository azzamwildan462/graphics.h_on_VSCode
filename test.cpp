#include <graphics.h>

main()
{
    int gd = DETECT, gm, x, y, angle = 0;
    struct arccoordstype a;
    char driver[] = " ";
    initgraph(&gd, &gm, driver);
    delay(1000);
    do
    {
        setcolor(BLACK);
        arc(getmaxx() / 2, getmaxy() / 2, angle, angle + 2, 50);
        getarccoords(&a);
        setcolor(YELLOW);
        circle(a.xstart, a.ystart, 25);

        setcolor(BLACK);
        arc(getmaxx() / 2, getmaxy() / 2, angle, angle + 2, 100);
        setcolor(RED);
        getarccoords(&a);
        circle(a.xstart, a.ystart, 25);

        setcolor(BLACK);
        arc(getmaxx() / 2, getmaxy() / 2, angle, angle + 2, 150);
        getarccoords(&a);
        setcolor(BLUE);
        circle(a.xstart, a.ystart, 25);

        angle = angle + 5;

        delay(50);
    } while (angle <= 360);

    getch();
    closegraph();
}
