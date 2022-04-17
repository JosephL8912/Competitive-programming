class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int preference[] = { 0,0 };
        int ableEat = 0;
        for (int student : students) {
            preference[student]++;
        }
        for (int sandwich : sandwiches)
        {
            if (preference[sandwich] > 0)
            {
                preference[sandwich]--;
                ableEat++;
            }
            else {
                break;
            }
        }
        return (students.size() - ableEat);
    }
};