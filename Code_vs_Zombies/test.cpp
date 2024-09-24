#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

struct Point {
    int x, y;
    Point(int x = 0, int y = 0) : x(x), y(y) {}
};

double distance(const Point& a, const Point& b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        Point ash, target;
        cin >> ash.x >> ash.y;

        int humanCount;
        cin >> humanCount;
        vector<Point> humans(humanCount);


        int zombieCount;
        cin >> zombieCount;
        
        double minDist = numeric_limits<double>::max();
        double minDist2= numeric_limits<double>::max();

        for (int i = 0; i < humanCount; i++) {
            int humanId;
            cin >> humanId >> humans[i].x >> humans[i].y;
            double dist = distance(ash, humans[i]);
            if (dist < minDist) {
                minDist = dist;
                target = humans[i];
            }
        }
                      
 for (int j = 0; j < zombieCount; j++) {
            Point zombie;
            int zombieId;
            cin >> zombieId >> zombie.x >> zombie.y;
            double dist = distance(zombie,humans[i]);
            if (dist < minDist2 ) {
                minDist2 = dist;
                if (minDist2 < minDist) {
                     minDist = minDist2;
                }
            }

 }

        for (int i = 0; i < zombieCount; i++) {
            Point zombie, zombieNext;
            int zombieId;
            cin >> zombieId >> zombie.x >> zombie.y >> zombieNext.x >> zombieNext.y;

            double dist1 = distance(target, zombie);
            if (dist1 < 1   && dist1 > 0) {
                target = zombie;
                break;
            }

            double dist2 = distance(target, zombieNext);
            if (dist2 < 1   && dist2 > 0) {
                target = zombieNext;
                break;
            }
        }

        cout << target.x << " " << target.y << endl;
    }
}