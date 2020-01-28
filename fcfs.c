#include<stdio.h>
int main()
{
	int n,k,bt[10],p[10],wt[10],tat[10],pri[10],i,wtw,ttat;
	float avgwt,avgtat;
	printf("Enter no.");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p[i]=i;
		printf("Enter bts and priority\n");
		scanf("%d%d",&bt[i],&pri[i]);
	}
	for(i=0;i<n;i++)
	{
		for(k=i+1;k<n;k++)
		{
			if(pri[i]>pri[k])
			{
				int temp=bt[i];
				bt[i]=bt[k];
				bt[k]=temp;
				/*temp=p[i];
				p[i]=p[k];
				p[k]=temp;*/
				temp=pri[i];
				pri[i]=pri[k];
				pri[k]=temp;
			}
		}
	}
	wtw=wt[0]=0;
	ttat=tat[0]=bt[0];
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
		tat[i]=tat[i-1]+bt[i];
		wtw=wtw+wt[i];
		ttat=ttat+tat[i];
	}
	printf("process\tBT\tpriority\tWT\tTAT\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%d\t%d\t%d\t%d\n",i,bt[i],pri[i],wt[i],tat[i]);
	}
	printf("Avg wt = %f\n",(float)wtw/n);
	printf("Avg tat = %f",(float)ttat/n);
}
