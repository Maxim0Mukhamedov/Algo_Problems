#include <vector>

int gcd(int a,int b) {
	return b ? gcd(b,a%b) : a;
}

class Solution {
public:
    int minimumLines(vector<vector<int>>& stockPrices) {
	stockPrices.sort();
	int ans = 1;
    	int point_cnt = std::size(stockPrices);
	int dx = abs(stockPrices[0][0]-stockPrices[1][0]);
	int dy = abs(stockPrices[0][1]-stockPrices[1][1]);
	int gcd_result = gcd(dx,dy);
	vector<int> last_fraq = {dx/gcd_result,dy/gcd_result};
	for (int i = 1; i < point_cnt - 1; i++) {
		dx = abs(stockPrices[i][0]-stockPrices[i + 1][0]);
		dy = abs(stockPrices[i][1]-stockPrices[i + 1][1]);
		gcd_result = gcd(dx,dy);
        if (gcd_result == 0) gcd_result = 1;
		vector<int> new_fraq = {dx/gcd_result,dy/gcd_result};
		if (new_fraq != last_fraq) {
			ans += 1;
		}
		last_fraq = new_fraq;
	}
	return ans;
    }
};
