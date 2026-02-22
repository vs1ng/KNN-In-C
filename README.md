# K - Nearest Neighbor in C

## File purpose breakdown

verbose.c has debug statements for human readability.
model.c is designed to run on ATmega328P with ultra-fast performance and speed using inline assembly to calculate distances.

## Performance:

verbose.c speed:

<img width="296" height="120" alt="image" src="https://github.com/user-attachments/assets/415eaf7f-d2d9-4e74-91fe-690bc4b2054a" />

model.c speed:

<img width="296" height="128" alt="image" src="https://github.com/user-attachments/assets/f51cd6f1-cbdf-47d2-b968-2e2275045825" />

## Usage
1. Compile binaries using O3 optimizations with -ffast-math flag
2. run:
```
./a.out <Ultrasonic Sensor Reading> <Active IR sensor reading>
```
