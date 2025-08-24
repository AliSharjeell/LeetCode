class Solution { 
public:
    bool isValid(string s) {
        stack<char> stk;
        for(auto i:s){
            if(i==')'){
                if(stk.empty()){
                    return false;
                }
                if(stk.top()!='('){
                    return false;
                }
                else{
                    stk.pop();
                }
            }
            else if(i=='}'){
                if(stk.empty()){
                    return false;
                }
                if(stk.top()!='{'){
                    return false;
                }
                else{
                    stk.pop();
                }
            }
            else if(i==']'){
                if(stk.empty()){
                    return false;
                }
                if(stk.top()!='['){
                    return false;
                }
                else{
                    stk.pop();
                }
            }
            else{
                stk.push(i);
            }
        }
        if(stk.empty()){
            return true;
        }
        return false;
    }
    //     for(auto i:s){
    //         if(i==')'){
    //             if(stk.empty()){
    //                 return false;
    //             }
    //             while(stk.top()!='('){
    //                 stk.pop();
    //                 if(stk.empty()){
    //                     return false;
    //                 }
    //             }
    //             stk.pop();
    //         }
    //         else if(i=='}'){
    //             if(stk.empty()){
    //                 return false;
    //             }
    //             while(stk.top()!='{'){
    //                 stk.pop();
    //                 if(stk.empty()){
    //                     return false;
    //                 }
    //             }
    //             stk.pop();
    //         }
    //         else if(i==']'){
    //             if(stk.empty()){
    //                 return false;
    //             }
    //             while(stk.top()!='['){
    //                 stk.pop();
    //                 if(stk.empty()){
    //                     return false;
    //                 }
    //             }
    //             stk.pop();
    //         }
    //         else{
    //             stk.push(i);
    //         }
    //     }
    //     if(stk.empty()){
    //         return true;
    //     }
    //     return false;
    // }
};