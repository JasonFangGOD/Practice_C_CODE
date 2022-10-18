	char ch[10],c;
	int i;
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个拼音: ",i);  
		scanf("%c",&ch[i]);
		c=getchar();
	}
	for(i=0;i<10;i++)
	{
		printf("%c",ch[i]);
	}