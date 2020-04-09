#include<stdio.h>
int main()
{
  int count,j,n;
  int time,remaining;
  int flag=0,time_quantum=10;
  int waiting_time=0,turn_around_time=0,arrival_time[10],burst_time[10],rt[10];
  printf("\n\nEnter the Total number of Process:\t ");
  scanf("%d",&n);
  remaining=n;
  for(count=0;count<n;count++)
  {
    printf("Enter Arrival Time and Burst Time for Process Process Number %d :",count+1);
    scanf("%d",&arrival_time[count]);
    scanf("%d",&burst_time[count]);
    rt[count]=burst_time[count];
  }
  printf("Enter Time Quantum:%d\t",time_quantum);
 
  printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n");
  for(time=0,count=0;remaining!=0;)
  {
    if(rt[count]<=time_quantum && rt[count]>0)
    {
      time+=rt[count];
      rt[count]=0;
      flag=1;
    }
    else if(rt[count]>0)
    {
      rt[count]-=time_quantum;
      time+=time_quantum;
    }
    if(rt[count]==0 && flag==1)
    {
      remaining--;
      printf("P[%d]\t|\t%d\t|\t%d\n",count+1,time-arrival_time[count],time-arrival_time[count]-burst_time[count]);
      waiting_time+=time-arrival_time[count]-burst_time[count];
      turn_around_time+=time-arrival_time[count];
      flag=0;
    }
    if(count==n-1)
      count=0;
    else if(arrival_time[count+1]<=time)
      count++;
    else
      count=0;
  }
  printf("\nAverage Waiting Time= %f\n",waiting_time*1.0/n);
  printf("Avg Turnaround Time = %f",turn_around_time*1.0/n);
 
  return 0;
}
