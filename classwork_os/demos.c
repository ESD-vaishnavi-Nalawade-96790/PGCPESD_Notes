#include <stdio.h>
#include <pthread.h>

// structure to pass multiple arguments
struct range
{
    int start;
    int end;
};

void* sum_thread(void* arg)
{
    struct range *r = (struct range*)arg;
    
    int *result = (int*)malloc(sizeof(int)); // allocate memory for return value
    *result = 0;

    for(int i = r->start; i <= r->end; i++)
        *result += i;

    return (void*)result; // return sum
}

int main()
{
    pthread_t t1;
    struct range r;

    printf("Enter start and end: ");
    scanf("%d %d", &r.start, &r.end);

    pthread_create(&t1, NULL, sum_thread, &r);

    void *ret;
    pthread_join(t1, &ret);

    int sum = *(int*)ret;
    printf("Sum = %d\n", sum);

    return 0;
}
