#include<stdio.h>
#include<math.h>

int main()
{
	
		int m, n, i, j = 0, k, flag = 0, sum = 0;
		scanf("%d",&n);
		scanf("%d",&m);
		for (i = 2, j = 0;; i++)
		 {
			flag = 1;
			j++;
			for (k = 2; k < int(sqrt(i)+1) ; k++) {
				if (i % k == 0) {
					flag = 0;
					j--;
					break;
				}
			}
			if (j >= n && j <= m && flag == 1)
				sum += i;
			if (j == m)
				break;
		}
		printf("%d",sum);
		return 0;
 } 
