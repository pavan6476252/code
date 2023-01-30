#include<stdio.h>

struct process {
   int pid;      // Process ID
   int burst;    // CPU burst time
   int arrival;  // Arrival time
};

int main() {
   int n, i;
   printf("Enter the number of processes: ");
   scanf("%d", &n);
   struct process p[n];

   for (i = 0; i < n; i++) {
      printf("Enter the arrival time and burst time of process %d: ", i + 1);
      scanf("%d%d", &p[i].arrival, &p[i].burst);
      p[i].pid = i + 1;
   }

   int completion[n], waiting[n];
   completion[0] = p[0].burst;
   waiting[0] = 0;

   for (i = 1; i < n; i++) {
      completion[i] = completion[i-1] + p[i].burst;
      waiting[i] = completion[i] - p[i].arrival - p[i].burst;
   }

   printf("Process ID\tArrival time\tBurst time\tCompletion time\tWaiting time\n");
   for (i = 0; i < n; i++) {
      printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", p[i].pid, p[i].arrival, p[i].burst, completion[i], waiting[i]);
   }

   return 0;
}
