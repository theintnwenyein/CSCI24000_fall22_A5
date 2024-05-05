//Blackbelt with float numbers and negative numbers

#include <fstream>
#include <sstream>
#include <iostream>
#include <cmath>

int main(){
	std::ifstream fFile; // the file to read the data from
	std::ofstream sFile; // the file to write the data to
	std::stringstream ss;
	std::string temp1,temp2,temp3; 
	std::string line;
	std::string text;
	int total;
	float num1,num2,num3; // variables to convert from string to float
	
	fFile.open("in.txt");
	sFile.open("ou.txt");
	while(getline(fFile,line)){
		ss.clear();
		ss.str(line);
		
		int comma = line.find(","); 
		if( comma != std::string::npos) // checking if the line has comma in it, if so, it is a set of digits
			
		{
			getline(ss, temp1, ',');
			getline(ss, temp2, ',');
			getline(ss, temp3);
			
			// Converting from strings to floats
			num1 = std::stof(temp1.c_str()); 
			num2 = std::stof(temp2.c_str());
		       	num3 = std::stof(temp3.c_str());
			
			// Rounding the floats
			num1 = floor(num1+0.5);
			num2 = floor(num2+0.5);
			num3 = floor(num3+0.5);
			
			// Adding all three digits together
			total = num1 + num2 + num3;
			
		}// end if

		// if the line doesn't have comma, it is the line of a string
	       else{
	       		getline(ss, line);
	 		text = line;
			
				for(int i = 0; i < total; i++){
					sFile<<text;
					if(i < total - 1){
						sFile<<",";
					}// end if

				}// end for
			sFile<<"\n";
	       }// end else		

	}// end wile

	// Closing all the files back
	fFile.close();
	sFile.close();
	return 0;
}// end main
