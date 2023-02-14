#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
   std::ifstream inputFile;
   inputFile.open("racedat.txt");

   char athlete;
   int runningTime, swimmingTime, bikingTime;
   int totalTime = 0;
   int numberOfAthletes = 0;

   std::cout << "Athlete\tRunning\tSwimming\tBiking\tTotal\n";
   std::cout << "-------\t-------\t--------\t------\t-----\n";

   while (inputFile >> athlete >> runningTime >> swimmingTime >> bikingTime) {
      int athleteTotalTime = runningTime + swimmingTime + bikingTime;
      totalTime += athleteTotalTime;
      numberOfAthletes++;
      std::cout << athlete << "\t\t" << runningTime << "\t\t" << swimmingTime << "\t\t" << bikingTime << "\t\t" << athleteTotalTime << "\n";
   }

   int averageTime = totalTime / numberOfAthletes;
   std::cout << "\nAverage Total Time: " << averageTime << " minutes\n";

   inputFile.close();

   return 0;
}

