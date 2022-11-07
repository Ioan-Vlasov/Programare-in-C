int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i,j,a[numsSize],b[numsSize],c[numsSize],d[numsSize],sizeab=0,sizecd=0,jumatate=-1,complement;
    int *returns_pointer;
    int offset=0;
    returns_pointer=malloc(2*sizeof(int));
    if (target < 0)
    {
        offset = 1;
    }
    for (i=0;i<numsSize;i++)
    {
        if (((target%2 == 0) && *(nums+i)==target/2))
        {
            if (jumatate == -1)
            {
                jumatate = i;
            }
            else
            {
                *returns_pointer = jumatate;
                *(returns_pointer+1) = i;
                *returnSize=2;
                return returns_pointer;
            }
        }
        else if (*(nums + i)>(target/2-offset))
        {
                c[sizecd]=*(nums+i);
                d[sizecd]=i;
                sizecd++;
        }
        else if (*(nums + i)<=target/2)
        {
            a[sizeab]=*(nums+i);
            b[sizeab]=i;
            sizeab++;
        }
    }
    for (i=0;i<sizeab;i++)
    {   
        complement=target-a[i];
        for(j=0;j<sizecd;j++)
        {
            if(c[j] == complement)
            {
                *returns_pointer = b[i];
                *(returns_pointer+1) = d[j];
                *returnSize=2;
                return returns_pointer;
            }
        }
            
    }
    return returns_pointer;
}
