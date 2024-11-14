#include <stdio.h>

typedef struct time_stamp
{
    int s;
    int mins;
    int hrs;
    int date;
    int month;
    int year;
} time;

time DateCmp(time *p1, time *p2)
{
    if (p1->year > p2->year)
    {
        return *p1;
    }
    else if (p1->year < p2->year)
    {
        return *p2;
    }
    else if (p1->year == p2->year)
    {
        if (p1->month > p2->month)
        {
            return *p1;
        }
        else if (p1->month > p2->month)
        {
            return *p2;
        }
        else if (p1->month == p2->month)
        {
            if (p1->date > p2->date)
            {
                return *p1;
            }
            else if (p1->date < p2->date)
            {
                return *p2;
            }
            else if (p1->date == p2->date)
            {
                if (p1->hrs > p2->hrs)
                {
                    return *p1;
                }
                else if (p1->hrs < p2->hrs)
                {
                    return *p2;
                }
                else if (p1->hrs == p2->hrs)
                {
                    if (p1->mins > p2->mins)
                    {
                        return *p1;
                    }
                    else if (p1->mins < p2->mins)
                    {
                        return *p2;
                    }
                    else if (p1->mins == p2->mins)
                    {
                        if (p1->s > p2->s)
                        {
                            return *p1;
                        }
                        else if (p1->s < p2->s)
                        {
                            return *p2;
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    time t1 = {34, 26, 8, 8, 5, 2017}, t2 = {59, 26, 8, 8, 5, 2017};

    // t1 = {8, 5, 2017}; // this is wrong way !!
    // t2 = {9, 5, 2017}; // this is wrong way !!

    time t3 = DateCmp(&t1, &t2);

    printf("The greater time-stamp is: %d-%d-%d, %d:%d:%d", t3.date, t3.month, t3.year, t3.hrs, t3.mins, t3.s);

    return 0;
}