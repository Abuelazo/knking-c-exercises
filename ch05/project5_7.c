#include <stdio.h>

#define MIDPOINT_800AM_943AM    531
#define MIDPOINT_943AM_1119AM   631
#define MIDPOINT_1119AM_1247PM  723
#define MIDPOINT_1247PM_200PM   803
#define MIDPOINT_200PM_345PM    892
#define MIDPOINT_345PM_700PM    1042
#define MIDPOINT_700PM_945PM    1222

int main(void)
{
    int hour, minute;
    int departureHour, departureMinute, arrivalHour, arrivalMinute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    int totalTime = hour * 60 + minute;

    if (totalTime <= MIDPOINT_800AM_943AM) {
        departureHour = 8;
        departureMinute = 00;
        arrivalHour = 10;
        arrivalMinute = 16;
        printf("Closest departure time is %d:%02d a.m., arriving at %d:%02d a.m.\n", departureHour, departureMinute, arrivalHour, arrivalMinute);
    }
    else if (totalTime <= MIDPOINT_943AM_1119AM) {
        departureHour = 9;
        departureMinute = 43;
        arrivalHour = 11;
        arrivalMinute = 52;
        printf("Closest departure time is %d:%02d a.m., arriving at %d:%02d a.m.\n", departureHour, departureMinute, arrivalHour, arrivalMinute);
    }
    else if (totalTime <= MIDPOINT_1119AM_1247PM) {
        departureHour = 11;
        departureMinute = 19;
        arrivalHour = 1;
        arrivalMinute = 31;
        printf("Closest departure time is %d:%02d a.m., arriving at %d:%02d p.m.\n", departureHour, departureMinute, arrivalHour, arrivalMinute);
    }
    else if (totalTime <= MIDPOINT_1247PM_200PM) {
        departureHour = 12;
        departureMinute = 47;
        arrivalHour = 3;
        arrivalMinute = 00;
        printf("Closest departure time is %d:%02d p.m., arriving at %d:%02d p.m.\n", departureHour, departureMinute, arrivalHour, arrivalMinute);
    }
    else if (totalTime <= MIDPOINT_200PM_345PM) {
        departureHour = 2;
        departureMinute = 00;
        arrivalHour = 4;
        arrivalMinute = 8;
        printf("Closest departure time is %d:%02d p.m., arriving at %d:%02d p.m.\n", departureHour, departureMinute, arrivalHour, arrivalMinute);
    }
    else if (totalTime <= MIDPOINT_345PM_700PM) {
        departureHour = 3;
        departureMinute = 45;
        arrivalHour = 5;
        arrivalMinute = 55;
        printf("Closest departure time is %d:%02d p.m., arriving at %d:%02d p.m.\n", departureHour, departureMinute, arrivalHour, arrivalMinute);
    }
    else if (totalTime <= MIDPOINT_700PM_945PM) {
        departureHour = 7;
        departureMinute = 00;
        arrivalHour = 9;
        arrivalMinute = 20;
        printf("Closest departure time is %d:%02d p.m., arriving at %d:%02d p.m.\n", departureHour, departureMinute, arrivalHour, arrivalMinute);
    }
    else {
        departureHour = 9;
        departureMinute = 45;
        arrivalHour = 11;
        arrivalMinute = 58;
        printf("Closest departure time is %d:%02d p.m., arriving at %d:%02d p.m.\n", departureHour, departureMinute, arrivalHour, arrivalMinute);
    }

    return 0;
}
