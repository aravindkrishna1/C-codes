#include <stdio.h>

int main()
{
    int size,i,temp,j,element,Middle,Front,Last;
    printf("Enter the size of the array :   ");
    scanf("%d",&size);
    int AR[size];
    printf("Enter the elements in the array :   \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&AR[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<(size-i-1);j++)
        {
            if(AR[j]>AR[j+1])
            {
                temp=AR[j];
                AR[j]=AR[j+1];
                AR[j+1]=temp;
            }
        }
    }
    printf("Sorted array is : \n");
    for(i=0;i<size;i++)
    {
        printf("%d  ",AR[i]);
    }
    
    printf("\nEnter the element to be searched :	");
    scanf("%d",&element);
    Front=0;
   
    Last=size-1;
    while(Front<=Last)
    {
		Middle=Front+(Last-Front)/2;
		//printf("Front = %d  Last = %d ",Front,Last);

		if(element==AR[Middle])
		{
			printf("The element is found at position %d",Middle+1);
			break;
		}
		else if(element<AR[Middle])
		{
			Last=Middle-1;
		}
		else
		{
			Front=Middle+1;
		
		}
	}
    
    
    
    return 0;
}
