int checkelement(int arr[],int s,int ele)
{
    for(int i=0;i<s;i++)
    {
        if(arr[i]==ele)
        {
            return 1;
        }
    }
    return 0;

}

void printarr(int arr[],int s)
{
    for(int i=0;i<s;i++)
    {
        printf("%d ",arr[i]);
    }

}

int intersection(int arr[],int s1, int arr2[],int s2 )
{
    int temp[20],z=0;
    for (int i=0;i<s1;i++)
    {
        if(checkelement(arr2,s2,arr[i]))
        {
            temp[z]=arr[i];
            z++;
        }
    }
//    int u=sizeof(temp)/sizeof(temp[0]);
//    printf("%d \n",u);
    printf("\nIntersection: ");
    printarr(temp,z);
    return 1;
}

int setdifference(int arr[],int s1, int arr2[],int s2 )
{
    int temp[20],z=0;
    for (int i=0;i<s1;i++)
    {
        if(!checkelement(arr2,s2,arr[i]))
        {
            temp[z]=arr[i];
            z++;
        }
    }
//    int u=sizeof(temp)/sizeof(temp[0]);
//    printf("%d \n",u);
    printf("\nSet difference:");
    printarr(temp,z);
    return 1;
}

int union_set(int arr[],int s1, int arr2[],int s2 )
{
    int temp[20],z=0;
    for (int i=0;i<s1;i++)
    {
        if(!checkelement(arr2,s2,arr[i]))
        {
            temp[z]=arr[i];
            z++;
        }
        if(checkelement(arr2,s2,arr[i]))
        {
            temp[z]=arr[i];
            z++;
        }
    }
//    int u=sizeof(temp)/sizeof(temp[0]);
//    printf("%d \n",u);
    printf("\n Union:");
    printarr(temp,z);
    return 1;
}

int matrix_insert(int row,int col,int arr[][col])
{
        int h=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                arr[i][j]=h;
                h++;
            }
        }
        return 1;
}

void display_matrix(int row,int col,int arr[][col])
{
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
}

void transpose_matrix(int row , int col, int arr[][col],int output[][row])
{
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            output[j][i]=arr[i][j];
        }
    }
}


void sum_column(int row , int col , int arr[][col])
{
    int mat[col];
    for(int i=0;i<col;i++)
    {
        int sum=0;
        for(int j=0;j<row;j++)
        {
            sum+=arr[j][i];
        }
        mat[i]=sum;
    }
    for(int p=0;p<col;p++)
        printf("%d ",mat[p]);
}

int sparse_matrix(int row , int col , int arr[][col])
{
    int zero=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==0)
                zero++;
        }
    }
    if(zero>(row*col)/2)
    {
        printf("this is a sparse matrix");
        return 1;
    }
    printf("not a sparse matrix");
    return 0;
}
