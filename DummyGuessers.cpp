#include "DummyGuessers.hpp"
#include <stdlib.h>

std::string RandomGuesser::guess() {
	std::string r="";
	for (uint i=0; i<this->length; ++i) {
		char c = '0' + (rand()%10);
		r += c;
	}
	return r;
}

void RandomGuesser::startNewGame(int length1){
	
}

void ConstantGuesser::startNewGame(int length1){
	
}

void ConstantGuesser::learn(string replay){
    
}

void RandomGuesser::learn(string replay){

}


