//Josiah Meyer comments: The program is slightly confusing. 
//I'd recommend either deleting the original instructions or 
//moving them to the bottom of the program. 
//I'd also recommend adding comments at each function 
//just to help assist in the debugging process if needed. 
//besides the confusing formatting, the code itself looks really good. Nice job!

//My comments on his code: the main function at the end is not necessary
// as it's located in maze_runner.c, I would also put the functions prototypes
// after declaring global variables and implement them after 
//runner_solve otherwise the code is clear and easy to read so it's a great job!

//Changes made after Josiah's comments:
//I added comments above my subroutines to explain what the function does in general

#include <stdio.h>
#include <stdbool.h>
#include "mazelib.h"

#define NORTH 0
#define EAST 1
#define SOUTH 2
#define WEST 3

//Declaring Global variables 
int row, col, direction;

//prototypes
void set_breadcrumb();
void change_position(int direction, int *row, int *col);
bool can_move(int row, int col);
int turn_left(int direction);
int turn_right(int direction);

//implementations
void runner_solve(void) {
  row = 1;
  col = 1;
  direction = EAST;

  while(maze_get_char(row, col) != 'E') {
    direction = turn_left(direction);

    while(can_move(row, col) == false) {
      direction = turn_right(direction);
    } 

    change_position(direction, &row, &col);
    set_breadcrumb();

    }
  }

//used to put a breadcrumb at each visited position according to the number of times 
//it went on
void set_breadcrumb() {
    char cell = maze_get_char(row, col);

    if (cell == ' ') {
        maze_set_char(row, col, '.');
    } else if (cell == '.') {
        maze_set_char(row, col, 'o');
    } else if (cell == 'o') {
        maze_set_char(row, col, 'O');
    } else if (cell == 'O') {
        maze_set_char(row, col, '@');
    }
}

//returns a boolean saying wether or not there's a wall in the current direction
bool can_move(int row, int col) {
  bool canMove = false;

  if (direction == NORTH) {
    if(maze_get_char(row-1, col) != '#') {
      canMove = true;
    } else {
      canMove = false;
    }

  } else if (direction == EAST) {
    if(maze_get_char(row, col+1) != '#') {
      canMove = true;
    } else {
      canMove = false;
    }

  } else if (direction == SOUTH) {
    if (maze_get_char(row+1, col) != '#') {
      canMove = true;
    } else {
      canMove = false;
    }

  } else {
    if(maze_get_char(row, col-1) != '#') {
      canMove = true;
    } else {
      canMove = false;
    }
  }
  
  return canMove;
}

//function to turn left using modulos properties
int turn_left(int direction) {
  direction = (direction + 3) % 4;
  return direction;
}

//same as turn left
int turn_right(int direction) {
  direction = (direction + 5) % 4;
  return direction;
}

//function to move in the current direction
void change_position(int direction, int *row, int *col) {
  if(direction == NORTH)
    {
     (*row) = (*row) - 1;
    }
  if(direction == EAST)
    {
     (*col) = (*col) + 1;
    }
  if(direction == SOUTH)
    {
     (*row) = (*row) + 1;
    }
  if(direction == WEST)
    {
     (*col) = (*col) - 1;
    }
}

