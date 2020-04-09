
LOVELY PROFESSIONAL UNIVERSITY
-
Academic Task-3 (Operating System)
-
School of Computer Science and Engineering  Faculty of Technology And Sciences
-
Name of the faculty member  Milanjit Kaur
-
Course Code: CSE 316 
-
Course Title: Operating System
-
     		
Question 6. Design a scheduling program that is capable of scheduling many processes that comes in at some time interval and are allocated the CPU not more that 10 time units. CPU must schedule processes having short execution time first. CPU is idle for 3 time units and does not entertain any process prior this time. Scheduler must maintain a queue that keeps the order of execution of all the processes. Compute average waiting and turnaround time.
-
Explanation:
-
1. For solving this problem the processes are scheduled considering their arrival and Wait time.
2. I have made 5 functions: readData(); Init(); getNextProcess(); dispTime(); computeSRT(); 
3. User will get to enter process burst time and arrival time. 
4. Depending on that ComputeSRT function will calculate the shortest run time of the processes and it will be entered in gantt chart
