*******************************************************
*  Name      :  Kevin Shaffer
*  Student ID:  106069743
*  Class     :  CSCI 2312-001        
*  HW#       :  2     
*  Due Date  :  Sep 12th, 2013
*******************************************************

## Read Me


*******************************************************
*  Description of the program
*******************************************************

Build two grids which are each X wide and Y long where 
X and Y are user inputs to determine the size of the 
grids.  Fill each cell of both grids with a ‘0’.  
Randomly fill 1/3 of the grid’s cells with a ‘1’.  
You must randomly fill each of the two grids separately 
so they do not have the all of the same squared filled 
with a ‘1’.  Compare the two grids (square by square 
comparison) to find squares which have a ‘1’ in both 
grids.  Create a third grid which contains a ‘1’ in 
squares where both of the compared grids contain a 
‘1’ and has a ‘0’ in any other square.


*******************************************************
*  Source files
*******************************************************
Name:  main.h
  Contains the definitions for the main methods.

Name:  main.cpp
  Main program.  This is the driver program that takes
  the user's input and uses it to create the grid
  objects and handles the output.

Name:  grid.h
  Contains the definitions for the Grid class.

Name:  grid.cpp
  Grid class.  This class contains a 2d Vector<int>
  and supporting functions such as ToString(), 
  Randomize(), and some operator overloads.
   
   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.
   
   The program was developed using the sublime text
   editor and compiled using gcc version egcs-2.91.57.

   The program was also tested by compiling and running
   on CSEGrid.

   This application lives in an open source repository
   at https://github.com/KevinSShaffer/grid


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip ShafferHW2.zip

   Now you should see a directory named 'grid' with the files:
        main.h
        main.cpp
        grid.h
        grid.cpp
        makefile
        README.md

2. Build the program.
    Change to the directory that contains the file by:
    % cd grid 

    Compile the program by:
    % make

3. Run the program by:
   % ./grid

4. Delete the obj files, executables, and core dump by
   % make clean
