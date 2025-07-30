#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N;
    cin >> N;

    queue<pair<int, int>> printerQueue;

    for (int i = 0; i < N; ++i)
    {
        char cmd;
        cin >> cmd;

        if (cmd == 'E')
        {
            int id, pages;
            cin >> id >> pages;
            printerQueue.push({id, pages});
        }
        else if (cmd == 'D')
        {
            if (!printerQueue.empty())
            {
                cout << printerQueue.front().first << endl;
                printerQueue.pop();
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}
