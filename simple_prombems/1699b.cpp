#include<iostream>

int main()
{
    int t = 0;
    std::cin>>t;
    for (int k = 0; k < t; k += 1){
        int n = 0;
        int m = 0;
        std::cin >> n >> m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                std::cout<<((i%4<=1)!=(j%4<=1))<< ' ';
            }
            std::cout << '\n';
        }
    }
    return 0;
}
