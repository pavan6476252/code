#include <stdio.h>

#define MAX_PROCESSES 10

struct Process {
  int pid;
  int burst_time;
};

void schedule(struct Process processes[], int n) {
  int completion_time[MAX_PROCESSES];
  int waiting_time[MAX_PROCESSES];
  int turn_around_time[MAX_PROCESSES];
  int total_waiting_time = 0;
  int total_turn_around_time = 0;

  completion_time[0] = processes[0].burst_time;
  for (int i = 1; i < n; i++) {
    completion_time[i] = completion_time[i - 1] + processes[i].burst_time;
  }

  for (int i = 0; i < n; i++) {
    waiting_time[i] = completion_time[i] - processes[i].burst_time;
    total_waiting_time += waiting_time[i];
  }

  for (int i = 0; i < n; i++) {
    turn_around_time[i] = completion_time[i] - processes[i].burst_time;
    total_turn_around_time += turn_around_time[i];
  }

  printf("Process\tBurst Time\tCompletion Time\tWaiting Time\tTurn-Around Time\n");
  for (int i = 0; i < n; i++) {
    printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
           processes[i].pid, processes[i].burst_time, completion_time[i],
           waiting_time[i], turn_around_time[i]);
  }

  printf("\nAverage Waiting Time: %.2f\n", (float) total_waiting_time / n);
  printf("Average Turn-Around Time: %.2f\n", (float) total_turn_around_time / n);
}

int main() {
  struct Process processes[MAX_PROCESSES];
  int n;

  printf("Enter the number of processes: ");
  scanf("%d", &n);

  printf("Enter the burst time of each process:\n");
  for (int i = 0; i < n; i++) {
    processes[i].pid = i + 1;
    scanf("%d", &processes[i].burst_time);
  }

  schedule(processes, n);

  return 0;
}
