//Write a program that prompts the user to enter the area of the flat cardboard. 
//The program then outputs the length and width of the cardboard and the length of the side of 
//the square to be cut from the corner so that the resulting box is of maximum volume. 
//Calculate your answer to three decimal places. Your program must contain a function that takes
//as input the length and width of the cardboard and returns the side of the square that should 
//be cut to maximize the volume. The function also returns the maximum volume.
// Fig. 6-17
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double volume(double area)
{
    double len = sqrt(area);
    double wide = area / len;
    double height = (len + wide + sqrt(pow(len, 2) - len * wide + pow(wide, 2))) / 6;
    return len * wide * height;
}

int main()
{
    double area;
    string metric;
    cout << "Enter the area of the piece of cardboard: " << endl;
    cin >> area;
    cout << "What is the measurement? (inches): " << endl;
    cin >> metric;
    cout << "The maxium volume is: " << volume(area) << " " << metric << endl;
}
