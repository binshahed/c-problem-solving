int N, H;
    scanf("%d", &N);

    int marks[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < N-1; i++)
    {
        if (marks[i + i] <= marks[i])
        {
            H = marks[i];
        }
        
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", H-marks[i]);
    }