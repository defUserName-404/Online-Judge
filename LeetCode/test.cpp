#include <iostream>
#include <queue>

int main()
{
    std::priority_queue<int> arr;

    int x;

    for (int i = 0; i < 10; i++)
    {
        std::cin >> x;

        arr.push(x);
    }

    while (!arr.empty())
    {
        std::cout << arr.top() << std::endl;
        arr.pop();
    }

    return 0;
}