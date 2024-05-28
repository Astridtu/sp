# Multi-threaded Bank Account Simulation

This project demonstrates the effects of race conditions in a multi-threaded program and how to prevent them using mutexes.

## Files

- `race_condition.c`: Simulates deposit and withdrawal operations without mutexes, leading to race conditions.
- `no_race_condition.c`: Simulates deposit and withdrawal operations with mutexes, preventing race conditions.

## Compilation and Execution

### Compile

```sh
gcc -o race_condition race_condition.c -lpthread
gcc -o no_race_condition no_race_condition.c -lpthread
 Output
without Mutex
Final account balance: (varies, may not be 1000)
with Mutex
Final account balance: 1000

