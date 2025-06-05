class Solution {
public:
    string simplifyPath(string path) {
          vector<string> stack;
        stringstream ss(path);
        string dir;
        
        while (getline(ss, dir, '/')) {
            if (dir == "" || dir == ".") continue;
            if (dir == "..") {
                if (!stack.empty()) stack.pop_back();
            } else {
                stack.push_back(dir);
            }
        }
        
        string result = "/";
        for (int i = 0; i < stack.size(); i++) {
            if (i > 0) result += "/";
            result += stack[i];
        }
        
        return result;
    }
};
