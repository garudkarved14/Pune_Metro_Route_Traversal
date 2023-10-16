// station_not_found.h

#ifndef STATION_NOT_FOUND_H
#define STATION_NOT_FOUND_H

#define MAX 91

extern int stack[50];
extern int top;
extern int stacksize;

extern float adj[MAX][MAX];

int StationNotFound(char *Name);
void push(int data);
int pop();

#endif // STATION_NOT_FOUND_H
