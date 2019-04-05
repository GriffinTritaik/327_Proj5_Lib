/*
 * Cmalltalk.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: Griffin
 */

#include "./includes/Functions.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Smalltalk.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"

Smalltalk::Smalltalk(std::string myNationality) : Smalltalk(myNationality){

}

std::string Smalltalk::getTime(){
	return "";
}

bool Smalltalk::giveWatch(Watch *pWatch){
	return false;
}

std::string Smalltalk::saySomething(){
	return "";
}

Watch* Smalltalk::takeWatch(){
	return pWatch;
}

Smalltalk::~Smalltalk(){

}
