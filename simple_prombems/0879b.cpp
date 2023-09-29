#include<iostream>
#include<deque>
#include<algorithm>

int main()
{
    int n = 0;
    long long k = 0;
    std::cin >> n >> k;
    std::deque<int> a(n,0);
    int maximum = -1;
    int ai = 0;
    
    for (int i = 0; i < n; i += 1) {
        std::cin >> ai;
        maximum = std::max(maximum,ai);
        a.push_back(ai);
    }
    
    int winner = a.deque::front();
    int loser = 0;
    int CntOfWin = 0;
    bool notfind = true;
    while (a.deque::front() != maximum) {
        a.pop_front();

        if (a.deque::front() < winner) {
            CntOfWin += 1;
            loser = a.deque::front();
        } else {
            CntOfWin = 1;
            loser = winner;
            winner = a.deque::front();
        }

        a.pop_front();

        a.push_front(winner);
        a.push_back(loser);
        
        if (CntOfWin == k) {
            notfind = false;
            std::cout << winner;
            break;
        }
    }

    if (notfind) {
        std::cout << maximum;
    }

}
