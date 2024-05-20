class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int i = 0;
        int m = f.size();
        while (n > 0 && i < m) {
            if (f[i] == 0) {
                int l = i;
                if (l - 1 != -1) {
                    l -= 1;
                }
                int r = i;
                if (r + 1 != m) {
                    r += 1;
                }
                if (!f[r] && !f[l]) {
                    n--;
                    f[i] = 1;
                }
            }
            i++;
        }
        return !n;
    }
};