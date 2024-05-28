#include <stdio.h>
#include <pthread.h>
//using chatgpt
#define LOOPS 100000
int account_balance = 1000;

void *deposit(void *arg) {
    for (int i = 0; i < LOOPS; i++) {
        account_balance += 1;
    }
    return NULL;
}

void *withdraw(void *arg) {
    for (int i = 0; i < LOOPS; i++) {
        account_balance -= 1;
    }
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    pthread_create(&thread1, NULL, deposit, NULL);
    pthread_create(&thread2, NULL, withdraw, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Final account balance: %d\n", account_balance);

    return 0;
}
