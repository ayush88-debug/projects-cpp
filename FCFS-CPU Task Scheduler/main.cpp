#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Task {
public:
    string name;
    int burst_time;
    int start_time;
    int finish_time;

    Task(string name, int burst_time) 
        : name(name), burst_time(burst_time), start_time(-1), finish_time(-1) {}
};

// Your task: Implement the FCFS function below
void fcfs(vector<Task>& tasks) {
    int current_time = 0;  // Track current execution time

    for (Task& task : tasks) {
        // assign start_time
        task.start_time=current_time;
        // update current_time
        current_time=task.start_time+task.burst_time;
        // assign finish_time
        task.finish_time=current_time;
        // Print the start and finish times for each task
        cout<<task.name<<": "<<"start at "<<task.start_time<<", finish at "<<task.finish_time<<endl;
    }
}

// Sample test case to check your implementation
int main() {
    vector<Task> tasks = {
        Task("Task1", 5),
        Task("Task2", 3),
        Task("Task3", 8)
    };

    cout << "FCFS Scheduling:" << endl;
    fcfs(tasks);

    return 0;
}
