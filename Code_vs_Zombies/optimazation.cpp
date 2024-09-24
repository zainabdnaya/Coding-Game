#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {

  // game loop
  while (1) {
    int x;
    int y;
    cin >> x >> y;
    cin.ignore();
    int humanCount;
    cin >> humanCount;
    cin.ignore();
    int minx = 0;
    int diffx = 0;
    int diffy = 0;
    int targetX = 0;
    int targetY = 0;
    bool immediateThreat = false;
    int zombdfrx = 0;
    int zombdfry = 0;
    int min1 = 0;
    int min2 = 0;
    int zombieCount;
    int zombieId;
    int zombieX;
    int zombieY;
    int zombieXNext;
    int zombieYNext;
  
    for (int i = 0; i < humanCount; i++) {
      int humanId;
      int humanX;
      int humanY;
      cin >> humanId >> humanX >> humanY;
      cin.ignore();
      diffx = pow(x - humanX,2);
      diffy = pow(y - humanY,2);
      if (i == 0) {
        minx = sqrt(diffx + diffy);
        targetX = humanX;
        targetY = humanY;
      }else if (minx > sqrt(pow(diffx, 2) + pow(diffy, 2))) {
        minx = sqrt(pow(diffx, 2) + pow(diffy, 2));
        targetX = humanX;
        targetY = humanY;
      }
    }
    cin >> zombieCount;
    cin.ignore();
    for (int i = 0; i < zombieCount; i++) {
      cin >> zombieId >> zombieX >> zombieY >> zombieXNext >> zombieYNext;
      zombdfrx = pow((targetX - zombieX), 2);
      zombdfry = pow((targetY - zombieY), 2);
      min1 = sqrt(zombdfrx + zombdfry);
      if (min1  < 1 &&  min1 > 0)
      {
        targetX = zombieX;
        targetX = zombieY;
        break;
      }
      zombdfrx = pow((targetX - zombieXNext), 2);
      zombdfry = pow((targetY - zombieYNext), 2);
      min2 = sqrt(zombdfrx + zombdfry);
        if (  min2  <= 1 &&  min2 > 0)
        {
          targetX =  zombieXNext;
          targetX = zombieYNext;
          break;
        }
      cin.ignore();
    }

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << targetX <<  " "  << targetY << endl; // Your destination coordinates
  }
