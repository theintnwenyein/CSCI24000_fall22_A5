Goal:
To read each line from input.txt file which contains the line of 3 integers seperated by comma follwed by the line with a word/sentence, and add the integers and write the word into a new file output.txt for the number of sum times of the integers

Input: Input.txt file
	1,2,3
	ham
	2,3,0
	ice
	1,0,3
	pen
	0,1,2
	all
	1,1,0
	cat

Output: Output.txt file (Following is the expected output.)
	ham,ham,ham,ham,ham,ham,
	ice,ice,ice,ice,ice,
	pen,pen,pen,pen,
	all,all,all
	cat,cat

Steps:  - Inside the main function; do all of the following.

	- Include all the required libraries <iostream>, <fstream>, <sstream>
	- Call the input filestream and output filestream
	- Declear all the required variables: string => line,text,temp1,temp2,temp3
		int => total, line_no
	- Open the input.txt file to read the data from, and output.txt to write the 		data to
	- Initialize the line_no = 0
	- While get each line from input.txt
		- clear the stringstream
		- Take the whole as a string using ss
		- Check if the line_no is even or odd
			- If it is even, it is the set of integers
				- Take each integer seperated by comma, convert them 					into int data type and add them as total
			- If it is odd, it is the line of word
				- Take the whole line and keep it in "text" variable				    - Use for loop to write that word for the "total" nu				mbers of times into output.txt
		- Increase the line_no by 1 after each line
	- Close all the files back
	- Return 0 for the main function
	


	- Create a file called makefile
	- Inside makefile, there will be two targets in addition to clean and run
		- Target:file	Dependencies: io.o	
			g++ io.o -o file
		- Target: io.o	Dependicies: io.cpp
			g++ -c io.cpp
		- clean		rm *.o and rm file
		- run	./file
