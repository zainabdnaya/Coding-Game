#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last
 *actions.
 **/

int main() {

  stringstream input;
  int tst = 0;
  int index = 0;
  int i;
  while (1) {
    for (i = 0; i < 8; i++) {
      int mountainH[i]; // represents the height of one mountain.
      cin >> mountainH[i];
      if (i == 0)
        tst = mountainH[i];
      if (mountainH[i] >= tst) {
        tst = mountainH[i];
        index = i;
      }
      cin.ignore();
    }
    // cout << "Input  "  << index << endl;

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << index << endl; // The index of the mountain to fire on.
  }
}