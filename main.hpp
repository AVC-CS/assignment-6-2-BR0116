//

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
        return rand() % 100;
        /***************************************************
         * Code your program here
         ***************************************************/
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
        double meanValue = (rdnum1 + rdnum2 + rdnum3) / 3.0;
        int closestValue = rdnum1;
        double minDifference = abs(meanValue - rdnum1);

        double difference2 = abs(meanValue - rdnum2);
        if (difference2 < minDifference) {
                minDifference = difference2;
                closestValue = rdnum2;
        }

        double difference3 = abs(meanValue - rdnum3);
        if (difference3 < minDifference) {
                closestValue = rdnum3;
        }

        return closestValue;
        /***************************************************
         * Code your program here
         ***************************************************/
}