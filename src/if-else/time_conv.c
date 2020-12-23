#include <stdio.h>

int main() {
    unsigned int hr, min;
    printf("Enter time in 24hr format: ");

    // handle invalid format
    // NOTE: uninitialized hr and min are not used because || is short circuiting
    if(scanf("%u:%u", &hr, &min) == -1 || hr > 23 || min > 59) {
        printf("Invalid format use hh:mm\n");
        // invalid input exit code
        // see more: https://www.freebsd.org/cgi/man.cgi?query=sysexits
        return 65;
    }
    
    char* am_pm = (hr < 12) ? "AM" : "PM";
    
    // NOTE: using hr %= 12 is not same for hr = 12
    if (hr > 12) {
        // wouldn't underflow because hr > 12
        hr -= 12;
    }

    printf("%02u:%02u %s\n", hr, min, am_pm);
    return 0;
}
