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

Build two grids which are each X wide and Y long where X and Y are user inputs to determine the size of the grids.  Fill each cell of both grids with a ‘0’.  Randomly fill 1/3 of the grid’s cells with a ‘1’.  You must randomly fill each of the two grids separately so they do not have the all of the same squared filled with a ‘1’.  Compare the two grids (square by square comparison) to find squares which have a ‘1’ in both grids.  Create a third grid which contains a ‘1’ in squares where both of the compared grids contain a ‘1’ and has a ‘0’ in any other square.


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that calls sub-functions
   to read data from an input file, use the data to create two matrices,
   and compute and display their sum and product.

Name:  matrix.h
   Contains the definition for the class matrix.  

Name: matrix.cpp
   Defines and implements the matrix class for implementing a matrix.  
   This class provides routines to construct and get the matrix, as
   well as overloaded operators to add and multpliply two matrices.

Name: matrix_functions.h
   Contains the prototypes for the matrix program support functions.

Name: matrix_functions.cpp
   Includes functions to display a greeting, populate two arrays
   from a data file, and display the sum and product of two matrices.
   
   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.  
   
   The program was developed and tested on gnu g++ 4.4.2.  It was 
   compiled, run, and tested on gcc ouray.cudenver.edu.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [1234HW1]

   Now you should see a directory named homework with the files:
        main.cpp
        matrix.h
        matrix.cpp
	matrix_functions.h
	matrix_functions.cpp
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [1234HW1] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[matrix]

4. Delete the obj files, executables, and core dump by
   %./make clean
