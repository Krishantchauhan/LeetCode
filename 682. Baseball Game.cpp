class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
        stack<int>st;

        for(int i=0;i<operations.size();i++){
            if(operations[i] == "C")
                st.pop();
            else if(operations[i]=="D")
                st.push(st.top()*2);
            else if(operations[i]=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.push(a);
                st.push(a+b);
            }else
                st.push(stoi(operations[i]));
        }

        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }

        return sum;
    }
};