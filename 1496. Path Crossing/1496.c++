class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<string> visited;
        int x = 0;
        int y = 0;
        visited.insert(to_string(x) + "," + to_string(y));
        for (char c : path) {
            if (c == 'N') y++;
            else if (c == 'S') y--;
            else if (c == 'E') x++;
            else x--;
            string key = to_string(x) + "," + to_string(y);
            if (visited.count(key)) return true;
            visited.insert(key);
        }
        return false;
    }  
};