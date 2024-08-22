#include <iostream>
#include <vector>

void print_spiral(std::vector<std::vector<int>> &v, int r, int c)
{
    int top = 0;
    int bottom = r - 1;
    int left = 0;
    int right = c - 1;
    while (top <= bottom && left <= right)
    {
        // Print from left to right
        for (int i = left; i <= right; i++)
        {
            std::cout << v[top][i] << " ";
        }
        top++;

        // Print from top to bottom
        if (top <= bottom)
        {
            for (int i = top; i <= bottom; i++)
            {
                std::cout << v[i][right] << " ";
            }
            right--;
        }

        // Print from right to left
        if (left <= right)
        {
            for (int i = right; i >= left; i--)
            {
                std::cout << v[bottom][i] << " ";
            }
            bottom--;
        }

        // Print from bottom to top
        if (top <= bottom)
        {
            for (int i = bottom; i >= top; i--)
            {
                std::cout << v[i][left] << " ";
            }
            left++;
        }
    }
}

int main()
{
    std::vector<std::vector<int>> a = {{2, 3, 4, 5}, {5, 6, 7, 8}, {8, 9, 5, 4}, {2, 5, 7, 9}};
    print_spiral(a, a.size(), a[0].size());
    return 0;
}