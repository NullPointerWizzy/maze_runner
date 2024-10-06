In this project, you will fill in the code necessary to solve a maze.  I have
already written the code which is capable of generating and displaying the
maze, as well as a few function that will let you interact with the maze.  All
you have to do is write the code that actually marks the path through the maze.

I have outlined an algorithm in English by which you might accomplish this in
the file "runner.c" which is the *only* file that you should edit and submit
for this assignment.

Since this program will consist of multiple files that all need to be connected
together to work, I have provided a Makefile to assist with compiling it.  If
you are on Mac, you should already have the "make" program installed.  If you
are on WSL, execute the command "sudo apt-get install build-essential" to gain
access to "make".

To build the project, open up a shell, move to the directory containing the
project files, and simply issue the command 'make'.  This will build the
project and show any compiler warnings and/or errors.  If the build is
successful, you will be able to execute the program via the command
"./maze_runner".  Do this once now to see the usage text which tells you how
the program ought to be invoked.

Now, all that's left for you to do is to open up the various code files and
explore them and then to write your part of the code in runner.c.

The point of this assignment is for you to get practice breaking a larger
problem down into subproblems via functions, so make sure that you try to do
that.  For reference, in my solution to this problem, I created 7 other
functions that are called by runner_solve().  While it is possible to complete
this project with fewer functions, you should probably have at least 4.

Again, don't edit any files except runner.c as I will be testing your
submission with the "stock" version of all the other project files.  Should you
accidentally modify another file, you can always just unzip the archive they
came in again. But, ***BE CAREFUL*** that you don't accidentally override the
file you've done all your work in if you do that.

When you are satisfied with your work, simply upload *only* your runner.c file
to the BBLearn assignment submission.  Good luck!
