#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l = 1, r = 1000000, mid;        // lower & upper bound
    while (l != r)
    {
        mid = (l + r + 1) / 2;

        printf("%d\n", mid);            // if need to be print
        fflush(stdout);

        char response[3];
        scanf("%s", response);          // judjes input, if needed

        if (strcmp(response, "<") == 0) // compare
            r = mid - 1;
        else
            l = mid;
    }
    printf("! %d\n", l);                // if(l==r) break, & print output
    fflush(stdout);
}
