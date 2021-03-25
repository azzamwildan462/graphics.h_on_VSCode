#include <graphics.h>

main()
{
    initwindow(300, 300);
    char string[10] = {'I', 'T', ' ', 'W', 'O', 'R', 'K', 'S', '!'};
    outtext(string);
    while (!kbhit())
    {
    }
    closegraph();
}
