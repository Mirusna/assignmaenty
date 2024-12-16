#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};
struct Time inputTime() {
    struct Time time;
    printf("Enter time in HH:MM:SS: ");
    scanf("%d:%d:%d", &time.hours, &time.minutes, &time.seconds);
    return time;
}
struct Time calculateTimeDifference(struct Time startTime, struct Time endTime) {
    struct Time timeDifference;
    int totalSecondsStart = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    int totalSecondsEnd = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;
    int timeDifferenceInSeconds = totalSecondsEnd - totalSecondsStart;
    timeDifference.hours = timeDifferenceInSeconds / 3600;
    timeDifference.minutes = (timeDifferenceInSeconds % 3600) / 60;
    timeDifference.seconds = timeDifferenceInSeconds % 60;
    return timeDifference;
}
void printTime(struct Time time) {
    printf("%02d:%02d:%02d", time.hours, time.minutes, time.seconds);
}
int main() {
    struct Time startTime = inputTime();
    struct Time endTime = inputTime();
    struct Time timeDifference = calculateTimeDifference(startTime, endTime);
    printf("Time difference is: ");
    printTime(timeDifference);
    printf("\n");
    return 0;
}

