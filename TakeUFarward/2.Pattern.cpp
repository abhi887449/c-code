#include <iostream>
#include<algorithm>
using namespace std;

void rectangularStarPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

// Output
/*

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

void rightAngledTrianglePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

// Output
/*

*
* *
* * *
* * * *
* * * * *

*/

void rightAngledNumberPyramid1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << "\n";
    }
}

// Output
/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

void rightAngledNumberPyramid2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << "\n";
    }
}

// Output
/*

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/

void invertedRightPyramid(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

// Output
/*

* * * * *
* * * *
* * *
* *
*

*/

void invertedNumberedRightPyramid(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << "\n";
    }
}

// Output
/*

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

void starPyramid(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - 1 - count; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= count; j++)
        {
            cout << "* ";
        }
        cout << "* ";
        for (int j = 1; j <= count; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= n - 1 - count; j++)
        {
            cout << "  ";
        }
        count++;
        cout << "\n";
    }
}

// Output
/*

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/

void invertedStarPyramid(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= n - 1 - count; j++)
        {
            cout << "* ";
        }
        cout << "* ";
        for (int j = 1; j <= n - 1 - count; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= count; j++)
        {
            cout << "  ";
        }
        count++;
        cout << "\n";
    }
}

// Output
/*

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

*/

void diamondStarPattern(int n)
{
    starPyramid(n);
    invertedStarPyramid(n);
}

// Output
/*

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

*/

void halfDiamondStarPattern(int n)
{
    rightAngledTrianglePattern(n);
    invertedRightPyramid(n - 1);
}

// Output
/*

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/

void binaryNumberTrianglePattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 == 0)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << 0 << " ";
                }
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 == 0)
                {
                    cout << 0 << " ";
                }
                else
                {
                    cout << 1 << " ";
                }
            }
        }
        cout << "\n";
    }
}

// Output
/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

void numberCrownPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

// Output
/*

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

*/

void increasingNumberTrianglePattern(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << "\n";
    }
}

// Output
/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

void increasingLetterTrianglePattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char('A' + j - 1) << " ";
        }
        cout << "\n";
    }
}

// Output
/*

A
A B
A B C
A B C D
A B C D E

*/

void reverseLetterTrianglePattern(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char('A' + j - 1) << " ";
        }
        cout << "\n";
    }
}

// Output
/*

A B C D E
A B C D
A B C
A B
A

*/

void alphaRampPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char('A' + i - 1) << " ";
        }
        cout << "\n";
    }
}

// Output
/*

A
B B
C C C
D D D D
E E E E E

*/

void alphaHillPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= (i * 2 - 1) / 2 + 1; j++)
        {
            cout << char('A' + count) << " ";
            count++;
        }
        count -= 2;
        for (int j = 1; j <= (i * 2 - 1) / 2; j++)
        {
            cout << char('A' + count) << " ";
            count--;
        }
        cout << "\n";
    }
}

// Output
/*

        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A

*/

void alphaTrianglePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + n - i + j - 1) << " ";
        }
        cout << "\n";
    }
}

// Output
/*

E
D E
C D E
B C D E
A B C D E

*/

void symmetricVoidPattern(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "  ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j <= n - i - 2; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= n - i - 2; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

// Output
/*

* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *

*/

void symmetricButterflyPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = n; j > i; j--)
        {
            cout << "  ";
        }
        for (int j = n; j > i; j--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

// Output
/*

*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *

*/

void hollowRectanglePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "* ";
    }
    cout << "\n";
    for (int j = 0; j < n - 2; j++)
    {
        cout << "* ";
        for (int i = 0; i < n - 2; i++)
        {
            cout << "  ";
        }
        cout << "* ";
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        cout << "* ";
    }
}

// Output
/*

* * * * *
*       *
*       *
*       *
* * * * *

*/

void theNumberedPattern(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int left = j;
            int top = i;
            int bottom = 2*n-2-i;
            int right = 2*n-2-j;
            cout<<max(max(left,right),max(top,bottom))-n+2<<" ";
        }
        cout<<"\n";
    }
}

// Output
/*

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5

*/


int main()
{
    // rectangularStarPattern(5);
    // rightAngledTrianglePattern(5);
    // rightAngledNumberPyramid1(5);
    // rightAngledNumberPyramid2(5);
    // invertedRightPyramid(5);
    // invertedNumberedRightPyramid(5);
    // starPyramid(5);
    // invertedStarPyramid(5);
    // diamondStarPattern(5);
    // halfDiamondStarPattern(5);
    // binaryNumberTrianglePattern(5);
    // numberCrownPattern(5);
    // increasingNumberTrianglePattern(5);
    // increasingLetterTrianglePattern(5);
    // reverseLetterTrianglePattern(5);
    // alphaRampPattern(5);
    // alphaHillPattern(5);
    // alphaTrianglePattern(5);
    // symmetricVoidPattern(5);
    // symmetricButterflyPattern(5);
    // hollowRectanglePattern(5);
    theNumberedPattern(5);
    return 0;
}