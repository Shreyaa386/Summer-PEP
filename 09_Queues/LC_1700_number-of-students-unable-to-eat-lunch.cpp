class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
         queue<int>q;

        for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }
        int i =0;
        int rotation=0;
        while(!q.empty()){
            if(q.front()==sandwiches[i]){
            q.pop();
            i++;
            rotation=0;
            }
            else{
                int student=q.front();
                q.pop();
                q.push(student);
                rotation++;
            }
        
        if(rotation==q.size()){
            return q.size();
        }
        }
        return 0;
    }
};