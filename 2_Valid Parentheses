#include <stack>

class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                    temp.push(s[i]);
                }else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                    if(temp.empty() == true){
                        return false;
                    }
                    switch(s[i]){
                        
                        case ')':
                            if(temp.top() != '('){
                                return false;
                            }
                            break;
                        case '}':
                            if(temp.top() != '{'){
                                return false;
                            }
                            break;
                        case ']':
                            if(temp.top() != '['){
                                return false;
                            }
                            break;
                        default:
                            break;
                        
                    }
                    temp.pop();
                }
            }
            return temp.empty();
    }
};
