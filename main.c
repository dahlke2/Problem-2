#include "/timing.h"
long sum, total;

long fibonacci(long num, long sum, long total){
	sum+= num;
	printf("%ld\n",sum);
	if (sum > 4000000)
		return total;
	if (sum%2==0){
		total += sum;
		//printf("%ld\n",sum);
	}
	total = fibonacci(sum,num,total);
	return total;
}

int main (void) {
	t0=starttime();
	sum = 1;
	long a =fibonacci(1,1,0);
	printf("Total: %ld\n", a);
	t1=endtime();
	displaytime();
    }
