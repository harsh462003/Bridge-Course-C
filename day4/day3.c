
void swap_two_numbers(int* a, int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

}

find_max_min(int arr[], int s, int *m, int *n)
{
    if(s==0)
    {
        return 0;
    }
    *m=*n=arr[0];
    for (int i =0;i<s;i++)
    {
        if(arr[i]>*m)
        {
            *m=arr[i];
        }
        if(arr[i]<*n)
        {
            *n=arr[i];
        }
    }
    printf("\nmax %d min%d ",*m,*n);
    return 1;
}


int checkifexist(int arr[],int s,int a)
{
    for(int i=0;i<s;i++)
    {
        if (arr[i]==a)
            return 1;
    }
    return 0;
}

int insert_data(int arr[],int s)
{
    int a=0;
    printf("enter number");
    for(int i=0;i<s;i++)
    {
        printf("\nenter number");
        scanf("%d",&a);
        if(!checkifexist(arr,s,a))
        {
            arr[i]=a;
        }
        else i--;

    }
    for(int j=0;j<s;j++)
    {
        printf("%d ",arr[j]);
    }
    return 1;
}

int linear_search(int arr[],int s, int ele )
{
   for(int i=0;i<s;i++)
   {
       if(arr[i]==ele)
       {
           printf("\nElement present at index %d",i);
           return i;
       }
   }
   printf("\nnot found ");
   return -1;
}

int binarysearch(int arr[],int s, int ele)
{
    int low , high;
    low=0;
    high=s-1;

    while(low<=high)
    {
        int mid=(low+high)/2 ;
        if(arr[mid]==ele)
        {
            return mid;
        }
        else if(ele>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}

void readelements(int arr[],int n)
{
    printf("\nenter the numbers ");
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        arr[i]=a;
    }
}
int productofconsecutive(int arr[],int s)
{
    readelements(arr,s);
    int sum=0;
    for(int i=0;i<s-1;i++)
    {
        int p=0;
        p=arr[i]*arr[i+1];
        sum+=p;
    }
    return sum;
}



void sorting(int arr[],int s)
{
    for(int i=0;i<s-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
