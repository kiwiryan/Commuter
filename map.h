#ifndef MAP_H
#define MAP_H

#include <curses.h>
#include <stdio.h>
#include <stdlib.h>

struct Point
{
    int x;
    int y;
};

void setMap(int,int,int,int);
void setPlayer();
void setNodeCoordinates(int,int);

int getBoundaryX();
int getBoundaryY();

int getNodeCoordinate(int);
int getPlayerStartX();
int getPlayerStartY();
bool isAvailable(int,int);
bool atWork(char);
//int checkWin();

#endif /*MAP_H*/
