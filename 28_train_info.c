#include <stdio.h>
#include <string.h>

struct TIME { int hour; int minute; };
struct TRAIN_INFO {
    int train_no;
    char train_name[50];
    struct TIME departure;
    struct TIME arrival;
    char start_station[50];
    char end_station[50];
};

int timeToMinutes(struct TIME t) { return t.hour * 60 + t.minute; }

void listTrainsFromStation(struct TRAIN_INFO trains[], int n, char station[]) {
    int i, j;
    struct TRAIN_INFO temp;
    for (i = 0; i < n - 1; ++i)
        for (j = i + 1; j < n; ++j)
            if (trains[i].train_no > trains[j].train_no) {
                temp = trains[i]; trains[i] = trains[j]; trains[j] = temp;
            }
    printf("\nTrains departing from station '%s':\n", station);
    int found = 0;
    for (i = 0; i < n; ++i) {
        if (strcmp(trains[i].start_station, station) == 0) {
            printf("%d - %s (%02d:%02d)\n", trains[i].train_no, trains[i].train_name,
                   trains[i].departure.hour, trains[i].departure.minute);
            found = 1;
        }
    }
    if (!found) printf("No trains found from this station.\n");
}

void listTrainsAtTime(struct TRAIN_INFO trains[], int n, char station[], struct TIME time) {
    int i, found = 0;
    printf("\nTrains departing from '%s' at %02d:%02d:\n", station, time.hour, time.minute);
    for (i = 0; i < n; ++i) {
        if (strcmp(trains[i].start_station, station) == 0 &&
            trains[i].departure.hour == time.hour && trains[i].departure.minute == time.minute) {
            printf("%d - %s\n", trains[i].train_no, trains[i].train_name);
            found = 1;
        }
    }
    if (!found) printf("No trains found at that time.\n");
}

void listTrainsWithinOneHour(struct TRAIN_INFO trains[], int n, char station[], struct TIME time) {
    int i, found = 0;
    int givenTime = timeToMinutes(time);
    printf("\nTrains departing from '%s' within next 1 hour of %02d:%02d:\n", station, time.hour, time.minute);
    for (i = 0; i < n; ++i) {
        if (strcmp(trains[i].start_station, station) == 0) {
            int depTime = timeToMinutes(trains[i].departure);
            if (depTime >= givenTime && depTime <= givenTime + 60) {
                printf("%d - %s (%02d:%02d)\n", trains[i].train_no, trains[i].train_name,
                       trains[i].departure.hour, trains[i].departure.minute);
                found = 1;
            }
        }
    }
    if (!found) printf("No trains found in the next 1 hour.\n");
}

void listTrainsBetweenStations(struct TRAIN_INFO trains[], int n, char start[], char end[]) {
    int i, found = 0;
    printf("\nTrains between '%s' and '%s':\n", start, end);
    for (i = 0; i < n; ++i) {
        if (strcmp(trains[i].start_station, start) == 0 && strcmp(trains[i].end_station, end) == 0) {
            printf("%d - %s (Dep: %02d:%02d, Arr: %02d:%02d)\n",
                   trains[i].train_no, trains[i].train_name,
                   trains[i].departure.hour, trains[i].departure.minute,
                   trains[i].arrival.hour, trains[i].arrival.minute);
            found = 1;
        }
    }
    if (!found) printf("No trains found between these stations.\n");
}

int main() {
    int n, i, choice;
    struct TRAIN_INFO trains[50];
    char station[50], start[50], end[50];
    struct TIME time;
    printf("Enter number of trains: ");
    if (scanf("%d", &n) != 1) return 0;
    for (i = 0; i < n; ++i) {
        printf("\nEnter details for Train %d:\n", i + 1);
        printf("Train Number: "); scanf("%d", &trains[i].train_no);
        printf("Train Name: "); scanf(" %[^\n]", trains[i].train_name);
        printf("Start Station: "); scanf(" %[^\n]", trains[i].start_station);
        printf("End Station: "); scanf(" %[^\n]", trains[i].end_station);
        printf("Departure Time (HH MM): "); scanf("%d %d", &trains[i].departure.hour, &trains[i].departure.minute);
        printf("Arrival Time (HH MM): "); scanf("%d %d", &trains[i].arrival.hour, &trains[i].arrival.minute);
    }
    do {
        printf("\n\n--- TRAIN INFORMATION MENU ---\n");
        printf("1. List all trains from a station (sorted by train number)\n");
        printf("2. List trains from a station at a particular time\n");
        printf("3. List trains from a station within next 1 hour\n");
        printf("4. List trains between two stations\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) break;
        switch (choice) {
            case 1:
                printf("Enter station name: ");
                scanf(" %[^\n]", station);
                listTrainsFromStation(trains, n, station);
                break;
            case 2:
                printf("Enter station name: ");
                scanf(" %[^\n]", station);
                printf("Enter time (HH MM): "); scanf("%d %d", &time.hour, &time.minute);
                listTrainsAtTime(trains, n, station, time);
                break;
            case 3:
                printf("Enter station name: ");
                scanf(" %[^\n]", station);
                printf("Enter time (HH MM): "); scanf("%d %d", &time.hour, &time.minute);
                listTrainsWithinOneHour(trains, n, station, time);
                break;
            case 4:
                printf("Enter start station: ");
                scanf(" %[^\n]", start);
                printf("Enter end station: ");
                scanf(" %[^\n]", end);
                listTrainsBetweenStations(trains, n, start, end);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default: printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);
    return 0;
}