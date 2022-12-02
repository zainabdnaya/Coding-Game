#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

/*
his is a 2D bisection, or binary search, which completes in O (logn) O(logn). 
Let our bounding box be defined as x1 =0 , y1=0,x2=W−1,y2=H−1
x1=0,y1=0,x2=W−1,y2=H−1. After the update of the bounding box with the feedback we got, the coordinate  (x,y)
(x,y) of Batman can be calculated with the left coordinate, plus half the span of the bounding box:
(x,y)=(x1+1/2(x2−x1),y1+1/2(y2−y1))
*/
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int w; // width of the building.
    int h; // height of the building.
    cin >> w >> h; cin.ignore();
    int n; // maximum number of turns before game over.
    cin >> n; cin.ignore();
    int x;
    int y;
    cin >> x >> y;
    // cout << x << " " << y;
    int x1 = 0;
    int y1 = 0;
    int x2 = w - 1;
    int y2 = h - 1;
  while(1){
        string bomb_dir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> bomb_dir; cin.ignore();
        if (bomb_dir.find('U') != std::string::npos){
            y2 = y - 1;
        }else if (bomb_dir.find("D") != std::string::npos) {
        y1 = y + 1;
      }
      if (bomb_dir.find("L") != std::string::npos) {
        x2 = x - 1;
      } else if (bomb_dir.find("R") != std::string::npos) {
        x1 = x + 1;
      }

      x = x1 + (x2 - x1) / 2;
      y = y1 + (y2 - y1) / 2;
        cout <<x << " " << y << endl;
  }
}