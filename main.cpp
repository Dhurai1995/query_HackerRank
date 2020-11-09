#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num, temp = 0;
    std::cin >> num;
    std::vector<int> numList;
    int qNum;
    std::vector<int> queryList;

    for (int i = 0; i < num; i++)
    {
        std::cin >> temp;
        numList.push_back(temp);
    }

    std::cin >> num;
    for (int i = 0; i < num; i++)
    {
        std::cin >> temp;
        queryList.push_back(temp);
    }
    std::vector<int>::iterator it;
    for (int i = 0; i < queryList.size(); i++)
    {
        it = std::find(numList.begin(), numList.end(), queryList[i]);
        if (it != numList.end())
            std::cout << "Yes" << " " << (it - numList.begin())+1 << std::endl;
        else
        {
            for (int j = 0; j < numList.size(); j++)
            {
                if (queryList[i] < numList[j])
                {
                    std::cout << "No" << " " << j+1 << std::endl;
                    break;
                }
            }
        }
    }

    return 0;
}
