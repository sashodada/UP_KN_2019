#include <iostream>
using namespace std;
int main()
{
    int x1, y1, h1, w1;
    int x2, y2, h2, w2;

    cin >> x1 >> y1 >> h1 >> w1;
    cin >> x2 >> y2 >> h2 >> w2;

    if (x1 > x2)
    {
        int swapHelper;

        swapHelper = x1;
        x1 = x2;
        x2 = swapHelper;
        swapHelper = y1;
        y1 = y2;
        y2 = swapHelper;
        swapHelper = h1;
        h1 = h2;
        h2 = swapHelper;
        swapHelper = w1;
        w1 = w2;
        w2 = swapHelper;
    }

    if (y1 <= y2)
    {
        if (x1 + w1 <= x2)
        {
            cout << "Not intersecting" << endl;
        }
        else
        {
            if (y1 + h1 <= y2)
            {
                cout << "Not intersecting" << endl;
            }
            else
            {
                int intersectionX = x2;
                int intersectionY = y2;
                int intersectionHeight, intersectionWidth;

                if (y1 + h1 >= y2 + h2)
                {
                    intersectionHeight = h2;
                }
                else
                {
                    intersectionHeight = y1 + h1 - y2;
                }

                if (x1 + w1 >= x2 + w2)
                {
                    intersectionWidth = w2;
                }
                else
                {
                    intersectionWidth = x1 + w1 - x2;
                }

                cout << "Intersection point: (" << intersectionX << ", " << intersectionY << ")" << endl;
                cout << "Height: " << intersectionHeight << ", width: " << intersectionWidth << endl;
            }
        }
    }
    else
    {
        if (x1 + w1 < x2)
        {
            cout << "Not intersecting" << endl;
        }
        else
        {
            if (y2 + h2 < y1)
            {
                cout << "Not intersecting" << endl;
            }
            else
            {
                int intersectionX = x2;
                int intersectionY = y1;
                int intersectionWidth, intersectionHeight;

                if (y2 + h2 > y1 + h1)
                {
                    intersectionHeight = h1;
                }
                else
                {
                    intersectionHeight = y2 + h2 - y1;
                }

                if (x1 + w1 > x2 + w1)
                {
                    intersectionWidth = w2;
                }
                else
                {
                    intersectionWidth = x1 + w1 - x2;
                }

                cout << "Intersection point: (" << intersectionX << ", " << intersectionY << ")" << endl;
                cout << "Height: " << intersectionHeight << ", width: " << intersectionWidth << endl;
            }
        }
    }
}