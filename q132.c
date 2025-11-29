#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight signal;

    // Example: try each signal
    for (signal = RED; signal <= GREEN; signal++) {
        switch(signal) {
            case RED:    printf("RED -> Stop\n"); break;
            case YELLOW: printf("YELLOW -> Wait\n"); break;
            case GREEN:  printf("GREEN -> Go\n"); break;
        }
    }
    return 0;
}
