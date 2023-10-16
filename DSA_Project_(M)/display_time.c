#include<time.h>
#include<stdio.h>
#include "display_time.h"
void display_time(int src, int station1, int station2)
{
    time_t t = time(NULL);
    struct tm Time = *localtime(&t);
    if (Time.tm_hour >= 8 && Time.tm_hour <= 22)
    {
        if (station1 - station2 == -1)
        {
            if (src == 0 || src == 20 || src == 49 || src == 69)
            {
                if (Time.tm_min == 0)
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour % 12 == 0) ? 12 : Time.tm_hour % 12, 00);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", Time.tm_hour, 00);
                    }
                }
                else
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour + 1) % 12, 00);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", (Time.tm_hour + 1) % 12, 00);
                    }
                }
            }

            else if ((src >= 1 && src <= 4) || (src >= 21 && src <= 25) || (src >= 50 && src <= 52) || (src >= 70 && src <= 73))
            {
                if (Time.tm_min <= 5)
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour % 12 == 0) ? 12 : Time.tm_hour % 12, 05);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", Time.tm_hour, 05);
                    }
                }
                else
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour + 1) % 12, 05);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", (Time.tm_hour + 1) % 12, 05);
                    }
                }
            }
            else if ((src >= 5 && src <= 8) || (src >= 26 && src <= 31) || (src >= 53 && src <= 56) || (src >= 74 && src <= 77))
            {
                if (Time.tm_min <= 10)
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour % 12 == 0) ? 12 : Time.tm_hour % 12, 10);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", Time.tm_hour, 10);
                    }
                }
                else
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour + 1) % 12, 10);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", (Time.tm_hour + 1) % 12, 10);
                    }
                }
            }
            else if ((src >= 9 && src <= 11) || (src >= 32 && src <= 37) || (src >= 57 && src <= 60) || (src >= 78 && src <= 81))
            {
                if (Time.tm_min <= 15)
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour % 12 == 0) ? 12 : Time.tm_hour % 12, 15);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", Time.tm_hour, 15);
                    }
                }
                else
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour + 1) % 12, 15);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", (Time.tm_hour + 1) % 12, 15);
                    }
                }
            }
            else if ((src >= 12 && src <= 15) || (src >= 38 && src <= 42) || (src >= 61 && src <= 64) || (src >= 82 && src <= 85))
            {
                if (Time.tm_min <= 20)
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour % 12 == 0) ? 12 : Time.tm_hour % 12, 20);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", Time.tm_hour, 20);
                    }
                }
                else
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour + 1) % 12, 20);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", (Time.tm_hour + 1) % 12, 20);
                    }
                }
            }
            else if ((src >= 16 && src <= 18) || (src >= 43 && src <= 47) || (src >= 65 && src <= 67) || (src >= 86 && src <= 89))
            {
                if (Time.tm_min <= 25)
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour % 12 == 0) ? 12 : Time.tm_hour % 12, 25);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", Time.tm_hour, 25);
                    }
                }
                else
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour + 1) % 12, 25);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", (Time.tm_hour + 1) % 12, 25);
                    }
                }
            }
        }

        else if (station1 - station2 == 1)
        {
            if (src == 19 || src == 48 || src == 68 || src == 90)
            {
                if (Time.tm_min == 30)
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour % 12 == 0) ? 12 : Time.tm_hour % 12, 30);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", Time.tm_hour, 30);
                    }
                }
                else
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour + 1) % 12, 30);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", (Time.tm_hour + 1) % 12, 30);
                    }
                }
            }
            else if ((src >= 1 && src <= 4) || (src >= 21 && src <= 25) || (src >= 50 && src <= 52) || (src >= 70 && src <= 73))
            {
                if (Time.tm_min <= 25)
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour % 12 == 0) ? 12 : Time.tm_hour % 12, 25);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", Time.tm_hour, 25);
                    }
                }
                else
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour + 1) % 12, 25);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", (Time.tm_hour + 1) % 12, 25);
                    }
                }
            }
            else if ((src >= 5 && src <= 8) || (src >= 26 && src <= 31) || (src >= 53 && src <= 56) || (src >= 74 && src <= 77))
            {
                if (Time.tm_min <= 20)
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour % 12 == 0) ? 12 : Time.tm_hour % 12, 25);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", Time.tm_hour, 25);
                    }
                }
                else
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour + 1) % 12, 25);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", (Time.tm_hour + 1) % 12, 25);
                    }
                }
            }
            else if ((src >= 9 && src <= 11) || (src >= 32 && src <= 37) || (src >= 57 && src <= 60) || (src >= 78 && src <= 81))
            {
                if (Time.tm_min <= 15)
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour % 12 == 0) ? 12 : Time.tm_hour % 12, 15);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", Time.tm_hour, 15);
                    }
                }
                else
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour + 1) % 12, 15);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", (Time.tm_hour + 1) % 12, 15);
                    }
                }
            }
            else if ((src >= 12 && src <= 15) || (src >= 38 && src <= 42) || (src >= 61 && src <= 64) || (src >= 82 && src <= 85))
            {
                if (Time.tm_min <= 10)
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour % 12 == 0) ? 12 : Time.tm_hour % 12, 10);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", Time.tm_hour, 10);
                    }
                }
                else
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour + 1) % 12, 10);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", (Time.tm_hour + 1) % 12, 10);
                    }
                }
            }
            else if ((src >= 16 && src <= 18) || (src >= 43 && src <= 47) || (src >= 65 && src <= 67) || (src >= 86 && src <= 89))
            {
                if (Time.tm_min <= 5)
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour % 12 == 0) ? 12 : Time.tm_hour % 12, 05);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", Time.tm_hour, 05);
                    }
                }
                else
                {
                    if (Time.tm_hour >= 12) {
                        printf("The Metro is scheduled to arrive at %2d:%02d PM\n", (Time.tm_hour + 1) % 12, 05);
                    } else {
                        printf("The Metro is scheduled to arrive at %2d:%02d AM\n", (Time.tm_hour + 1) % 12, 05);
                    }
                }
            }
        }
    }
    else
    {
        printf("Metro isnot available now\n");
    }
}