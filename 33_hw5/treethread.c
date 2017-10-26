#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<pthread.h>

void *branchthread(void *vargp);


int main(int argc, char* argv[])
{
  int n = atoi(argv[1]);

  if(n<1)
    {
      fprintf(stderr, "ERROR: input variable is less than 1!\n");
      exit(1);
    }
  
  pthread_t tid;
  pthread_create(&tid, NULL, branchthread, &n);
  pthread_join(tid, NULL);
  exit(0);
}


void *branchthread(void *vargp)
{
  int n = *((int*)vargp) - 1;

  if(n==0)
    {
      printf("Hello, world!\n");
      return NULL;
    }
  
  pthread_t *tid = malloc(2*sizeof(pthread_t));
  if (tid == NULL)
    {
      fprintf(stderr, "ERROR: memory allocation failed!\n");
      exit(1);
    }
  
  pthread_create(&tid[0], NULL, branchthread, &n);
  pthread_create(&tid[1], NULL, branchthread, &n);

  pthread_join(tid[0], NULL);
  pthread_join(tid[1], NULL);

  free(tid);

  printf("Hello, world!\n");
  return NULL;
}
