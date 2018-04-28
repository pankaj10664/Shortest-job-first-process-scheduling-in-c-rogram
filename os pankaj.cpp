#include<stdio.h>
#include<conio.h>
int main()
{
	int bt[10],p[10],av[10],n,temp,i,j,wt[10],ct[10],tat[10],ert, priority,sum=0;
	float  avgtat,avgwt;
	printf("Enter total no of proces:");
	scanf("%d",&n);
	printf("\n Enter burst time for each process:-");
	for(i=0;i<n;i++)
	{
		printf("\nBurst time of process P%d:",i);
		scanf("%d",&bt[i]);
		p[i]=i;
		printf("\nArrival time for each process P%d:",i);
		scanf("%d",&av[i]);
	
	}
	for(i=0;i<n-1;i++)
	{
	   for(j=i+1;j<n;j++)
		{ 
		  if(av[i]==0)
		

			{
				
				p[i]=bt[i];
				
		     }
		}
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{ 	
			
		 if(bt[i]>bt[j])
			
			{
				temp=bt[i];
				bt[i]=bt[j];
				bt[j]=temp;
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		
				
		 
		}
	}
	ct[0]=0;
	for(i=1;i<n;i++)
	{
	   ct[i]=ct[i-1]+bt[i-1];	
	}
	for(i=0;i<n;i++)
	{
		sum+=ct[i];
	}
	
	printf("\n completion time for each process:-");
	for(i=0;i<n;i++)
	{
		printf("\n completion time for process P%d is %d sec.",p[i],ct[i]);
		
	}
		tat[0]=0;
	for(i=1;i<n;i++)
	{
	   tat[i]=ct[i]-av[i];	
	}
	for(i=0;i<n;i++)
	{
		sum+=tat[i];
	}
	
	avgtat=(float)sum/n;
	printf("\n turn around time for each process:-");
	for(i=0;i<n;i++)
	{
		printf("\n turn around time for process P%d is %d sec.",p[i],tat[i]);
		
}
printf("\n Average turn around  time is %f sec.",avgtat);
wt[0]=0;
	for(i=1;i<n;i++)
	{
		wt[i]=tat[i]-bt[i];
	}
	for(i=0;i<n;i++)
	{
		sum+=wt[i];
	}
	avgwt=(float)sum/n;
	printf("\n Waiting time for each process:-");
	for(i=0;i<n;i++)
	{
		printf("\n Waiting time for process P%d is %d sec.",p[i],wt[i]);
		
	}
	printf("\n Average waiting time is %f sec.",avgwt);
		for(i=0;i<n;i++)
	{
		
		priority==int[wt/ert]+1;
	}

	printf("\nthe copmputed priority=%d",priority);

	getch();
	return 0;
}
