// Simple Digital Clock in C
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int hour, minute, second;
    hour = minute = second = 0;

    while (1)
    {
        // Print the current time
        printf("\r%02d : %02d : %02d", hour, minute, second);
        fflush(stdout);

        // Wait for one second
        sleep(1);
        second++;

        // Update seconds, minutes, and hours accordingly
        if (second == 60)
        {
            second = 0;
            minute++;
            if (minute == 60)
            {
                minute = 0;
                hour++;
                if (hour == 24)
                {
                    hour = 0;
                }
            }
        }
    }

    return 0;
}
