for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            for(j=1;j<=n;j++)
                printf("%d  ",j);
            printf("\n");
        }
        else
        {
            for(j=n;j>=1;j--)
                printf("%d  ",j);
            printf("\n");
        }
    }
    printf("\n");