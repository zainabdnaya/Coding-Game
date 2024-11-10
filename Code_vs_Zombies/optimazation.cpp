#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    while (true) {
        int x, y;
        cin >> x >> y;
        cin.ignore();

        int humanCount;
        cin >> humanCount;
        cin.ignore();

        int targetX = 0, targetY = 0;
        double minDistance = numeric_limits<double>::max();

        for (int i = 0; i < humanCount; ++i) {
            int humanId, humanX, humanY;
            cin >> humanId >> humanX >> humanY;
            cin.ignore();

            double distance = sqrt(pow(humanX - x, 2) + pow(humanY - y, 2));
            if (distance < minDistance) {
                minDistance = distance;
                targetX = humanX;
                targetY = humanY;
            }
        }

        int zombieCount;
        cin >> zombieCount;
        cin.ignore();

        for (int i = 0; i < zombieCount; ++i) {
            int zombieId, zombieX, zombieY, zombieXNext, zombieYNext;
            cin >> zombieId >> zombieX >> zombieY >> zombieXNext >> zombieYNext;

            double distanceCurrent = sqrt(pow(targetX - zombieX, 2) + pow(targetY - zombieY, 2));
            double distanceNext = sqrt(pow(targetX - zombieXNext, 2) + pow(targetY - zombieYNext, 2));

            if (distanceCurrent > distanceNext) {
                x = zombieX;
                y = zombieY;
            }else{
                x = zombieXNext;
                y = zombieYNext;
            }

            cin.ignore();
        }

        cout << targetX << " " << targetY << endl;
    }
