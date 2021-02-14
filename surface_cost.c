//Total surface cost of the interior and exterior walls
//interior cost=18 per square feet and exterior cost = 12 per square feet

#include <stdio.h>

int main()
{
    int in,ex;
    float in_cost=0.0,ex_cost=0,surf;
    scanf("%d %d",&in,&ex);
    if(in==0 && ex==0)
    {
        printf("%0.1f",0.0);
    }
    for(int i=0;i<in;i++)
    {
        scanf("%f",&surf);
        in_cost+=surf;
    }
    in_cost*=18;
    
    for(int i=0;i<ex;i++)
    {
        scanf("%f",&surf);
        ex_cost+=surf;
    }
    ex_cost*=12;
    
    printf("%0.1f",in_cost+ex_cost);

    return 0;
}

/*output
6 
3
12.3
15.2
12.3
15.2
12.3
15.2
10.10
10.10
10.00
1847.4  */