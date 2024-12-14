#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Open the file in write mode
    ofstream outFile("input.txt");

    // Check if the file is open
    if (!outFile) {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    // Initialize the random seed
    srand(time(0));

    // Generate 10 million random numbers and save them to the file
    for (int i = 0; i < 400000000; ++i) {
        int randomNumber = rand() % 1000 + 1; // Random number between 1 and 100000000
        outFile << randomNumber << " ";
    }

    // Close the file
    outFile.close();

    cout << "10 million random numbers have been generated and saved in 'input.txt'." << endl;

    return 0;
}
