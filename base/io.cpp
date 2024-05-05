#include <sstream>
#include <fstream>
#include <iostream>
#include <string>

int main(){
	std::ifstream fFile;  //File to read the data from
	std::ofstream sFile; //File to write the new data to
	std::stringstream ss;
	std::string temp1, temp2, temp3; // Temporary variables to hold the digits
	std::string line;
	std::string text;
	int num1, num2, num3; // Variables to hold the integers
	int total; // Sum of the three integers
	int line_no; // Variable to keep the current line number 

	fFile.open("input.txt"); // open the input.txt file to read the data from
	sFile.open("output.txt"); // open the output.txt file to write the data to
	line_no = 0; 
	while(getline(fFile,line)){
		ss.clear(); // clear the stream
		ss.str(line);

		// Uncomment the following two lines to alternate the if else loop by finding comma
		//int comma = line.find(","); 
		//if(comma != std::string::npos){

		// if the line_no is even, the line has three set of integers
		if(line_no % 2 == 0){
			getline(ss, temp1, ',');
			getline(ss, temp2, ',');
			getline(ss, temp3); // After the third digit, there is no comma, so just leave it with the default delimeter which is a new line
			total = atoi(temp1.c_str()) + atoi(temp2.c_str()) + atoi(temp3.c_str()); // convert into integers and add them together

		}// end if		
		
		// if the line_no is odd, it is the line with the word
		else{
			getline(ss, line); // get the whole line
			text = line;	// and put it in a variable

			// Write the word into output.txt for the total number of times
			for(int i = 0; i < total; i++){
				sFile<<text;
				if(i < total - 1){
					sFile<<",";
				}// end second for
			}// end for

			sFile<<"\n";

		}// end else
		line_no++; // increase the line_no by one after each loop
		
		
	}// end while

	// Close the files back
	fFile.close(); 
	sFile.close();
	return 0;
}// end main
