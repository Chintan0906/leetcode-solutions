class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        for(int s:students){
            q.push(s);
        }
        int i=0,rot=0;
        while(!q.empty() && rot<q.size()){
            if(q.front()==sandwiches[i]){
                q.pop();
                i++;
                rot=0;
            }
            else{
                q.push(q.front());
                q.pop();
                rot++;
            }
        }
        return q.size();
    }
};