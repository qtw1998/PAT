#include <iostream>
using namespace std;

int school_score[100010] = {0};//比较大的内存分配空间的时候还是要放在main之外；

int main()
{
    int n,schID,score;
    scanf("%d",&n);
    for(int i = 0;i < n;++i)
    {
        scanf("%d%d",&schID,&score);
        school_score[schID] += score;
    }
    
    int MaxSchID,MaxScore = -1;
    for(int i = 1;i <= n;++i)
    {
        if(school_score[i] > MaxScore)
        {
            MaxSchID = i;
            MaxScore = school_score[i];
        }
    }
    printf("%d %d\n",MaxSchID,MaxScore);
    return 0;
}
