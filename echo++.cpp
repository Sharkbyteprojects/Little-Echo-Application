#include <string>
#include <iostream>
int main(int argc, char *argv[]){
	if(argc > 1){
		std::string appl="";
		for(int x = 0; x<argc; x++){
			std::cout<<appl<<argv[x+1];
			appl=" ";
		}
		std::cout<<std::endl;
		//std::cout<<std::flush; //Uncommit this line and commit the line 10 to Dont make a newline after printing the args
	}else{
		std::cout<< "Sharkbyteprojects Echo Application\nVersion 0.0.1\n\n";
		std::string scurl;
		std::cout<< "Input Text:" <<std::endl;
	    std::cin>>scurl;
   	    std::cout<<"\nEcho:\n"<<scurl<<std::flush;
	}
	return 0;
}