#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void print_george() {  // Function to print "George" every second
    while (1) {
        printf("George\n");
        sleep(1);
    }
}

void print_mary() {  // Function to print "Mary" every two seconds
    while (1) {
        printf("Mary\n");
        sleep(2);
    }
}

int main() {
    pid_t pid1, pid2;

    pid1 = fork();  // Create first child process

    if (pid1 < 0) {  // Check if fork failed
        perror("Fork failed");
        exit(1);
    }

    if (pid1 == 0) {  // Child process 1
        print_george();
        exit(0);  // Child process 1 exits after function completes (it won't actually complete)
    } else {
        pid2 = fork();  // Create second child process

        if (pid2 < 0) {  // Check if fork failed
            perror("Fork failed");
            exit(1);
        }

        if (pid2 == 0) {  // Child process 2
            print_mary();
            exit(0);  // Child process 2 exits after function completes (it won't actually complete)
        } else {
            while (1) {  // Main process prints separator line every second
                printf("----------------\n");
                sleep(1);
            }
        }
    }

    return 0;
}
