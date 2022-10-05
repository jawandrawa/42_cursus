#include <pthread.h>
#include <stdio.h>

void yourturn(void)
{

	for (int i = 0 ; i < 3; i++)
	{
		sleep(1);
		printf("Your Turn! %d \n",i);	
	}
}
void* myturn(void *arg)
{	
	for (int i = 0 ; i < 8; i++)
	{
		sleep(1);
		printf("My Turn! %d\n", i);
	}
	return(NULL);
}

int	main()
{
	pthread_t newthread;

	pthread_create(&newthread, NULL, myturn, NULL);
	yourturn();
	pthread_join(&newthread, NULL);
}

/*como castear un void *  */
