using namespace std;
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return 1;
        }
        typedef struct ElementInfo {
            int l;
            int r;
            int deg;
        } node;
        // key: value, int[0] = l, int[1] = r, int[2] = deg.
        unordered_map<int, node> m_map;
        int max_deg = 0;
        int min_length = 1;
        // go through nums
        for (int i = 0; i < n; i++) {
            int value = nums[i];
            // if not currently hashed
            if (!m_map.count(value)) {
                m_map[value] = {i, i, 1};
            // alr hashed, increment
            } else {
                m_map[value].r = i;
                (m_map[value].deg)++;
            }
            int deg = m_map[value].deg;
            int length = m_map[value].r - m_map[value].l + 1;
            // updated max
            if (deg > max_deg) {
                max_deg = deg;
                min_length = length;
            } else if (deg == max_deg) {
                min_length = min(min_length, length);
            }
        }
        return min_length;
    }
};