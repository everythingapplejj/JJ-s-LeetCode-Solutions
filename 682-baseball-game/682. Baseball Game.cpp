class Solution {
public:
    int calPoints(vector<string>& operations) {
        std::vector<int>tracker;
        for(unsigned int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                tracker.push_back(tracker[tracker.size() - 2] + tracker[tracker.size() - 1]);
                continue;
            }
            if(operations[i] == "C") {
                tracker.pop_back();
                continue; 
            }
            if(operations[i] == "D") {
                tracker.push_back(2 * tracker[tracker.size() - 1]);
                continue; 
            }
            std::cout << stoi(operations[i]) << std::endl;
            tracker.push_back(stoi(operations[i]));
        }
       
        int final = 0; 
        for(unsigned int i = 0; i < tracker.size(); i++) {
            final += tracker[i];
        }
        return final; 
    }
};