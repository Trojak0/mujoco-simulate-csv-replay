#include <iostream>
#include <fstream>
#include <string>

#include <regex>

using namespace std;

//Counts the number of lines in a file
int countLines(){
    int numLines = 0;
    string line;
    // Opens the file
    ifstream countLinesFile("data.csv");
    // Counts the number of lines in the data.csv file
    while(getline(countLinesFile, line)){
      numLines++;
    }
    // Closes the data.csv file
    countLinesFile.close();
    return numLines;
}

int main() {
    int num = countLines() - 2;
    string oldText = "{mjITEM_SLIDERINT, \"Time Slider\", 2, &settings.sld_time,  \"0 ";
    string newText = "{mjITEM_SLIDERINT, \"Time Slider\", 2, &settings.sld_time,  \"0 " + to_string(num) + "\"},";
    
    ifstream simulateFile("simulate.cc");
    ofstream tempFile("temp_simulate.cc");
    
    if (!simulateFile.is_open() || !tempFile.is_open()) {
        cout << "Error opening file." << endl;
        return 1;
    }

    string line;
    while (getline(simulateFile, line)) {
        // Check if the line contains the oldText
        size_t pos = line.find(oldText);
        if (pos != string::npos) {
            // Replace the old text with the new text
            line.replace(pos, oldText.length() + 7, newText);
        }
        tempFile << line << endl;
    }

    simulateFile.close();
    tempFile.close();

    // Replace original file with modified file
    remove("simulate.cc");
    rename("temp_simulate.cc", "simulate.cc");

    return 0;
}

