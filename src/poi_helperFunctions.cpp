#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <sstream>
#include <iostream>


#include "poi_helperFunctions.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

/* computes Euclidean distance between two points */
double distance2D(Point x0, Point x1) {
    return sqrt(pow(x1.x - x0.x, 2) + pow(x1.y - x0.y, 2));
}
/* Computes Euclidean Distance Squared between two points */
double distance2DSq(Point x0, Point x1) {
    return pow(x1.x - x0.x, 2) + pow(x1.y - x0.y, 2);
}

/*! Splits a line of text on white space and returns
*a of strings with the words in the line
*/
vector<std::string> splitOnWhiteSpace(std::string line) {
    vector<std::string> result;
    std::istringstream line_stream(line);
    
    for (std::string s; line_stream >> s;) {
        result.push_back(s);
    }
    
    return result;
}



/*! Print point information to screen
*/
void printPoint(Point point) {
    cout << "Point - x " << point.x;
    cout << " -y: " << point.y;
    cout << " -ix: " << point.ix;
    cout << " -iy: " << point.iy;
    cout << " -r: " << point.radius;
    cout << " -node #: " << point.nodeNum << endl;
}
