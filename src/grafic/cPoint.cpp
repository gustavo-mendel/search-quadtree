#include <iostream>

#include "cPoint.h"

/// ***********************************************************************
/// ** 
/// ***********************************************************************
cPoint::cPoint() {

	xCoord = 
	yCoord = 0.0;
}

/// ***********************************************************************
/// ** 
/// ***********************************************************************
cPoint::cPoint(float x, float y) {

	xCoord = x;
	yCoord = y;
	pColor	= cColor(WHITE);
}

/// ***********************************************************************
/// ** 
/// ***********************************************************************
cPoint::cPoint(float x, float y, cColor c) {

	xCoord 	= x;
	yCoord 	= y;
	pColor	= c;
}

/// ***********************************************************************
/// ** 
/// ***********************************************************************
cPoint::cPoint(float x, float y, eColor c) {

	xCoord 	= x;
	yCoord 	= y;
	pColor	= cColor(c);
}

/// ***********************************************************************
/// ** 
/// ***********************************************************************
void cPoint::setCoords(cPoint p) {

	xCoord 	= p.xCoord;
	yCoord 	= p.yCoord;
	pColor	= p.pColor; 
}

/// ***********************************************************************
/// ** 
/// ***********************************************************************
float cPoint::getX() {

	return xCoord; 
}

/// ***********************************************************************
/// ** 
/// ***********************************************************************
float cPoint::getY() {

	return yCoord; 
}

/// ***********************************************************************
/// ** 
/// ***********************************************************************
cColor cPoint::getColor() {

	return pColor;
}

/// ***********************************************************************
/// ** 
/// ***********************************************************************
std::ostream &operator<<( std::ostream &output, const cPoint &pt ) {

	output << "Pto = ( " << pt.xCoord << " , " << pt.yCoord << " ) - [ " << pt.pColor << " ]" << std::endl;

	return output;            
}

