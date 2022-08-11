#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;

int main() {

    char bin_number[1010];
    //variable for big integer operation
    int int_number[1010], t_int_number[500];
    /*
     * int_number : converted decimal number will be stored here
     * t_int_number : will be used to calculate the power of 2
     */


    int bin_length, t_int_length, int_length, index;
    /*
     * bin_length   : length(bin_number)
     * t_int_length : length(t_int_length)
     * int_length   : length(int_length)
     */

    bool carry;

    while(scanf("%s", bin_number) != EOF) {                     //input binary number
        for (int i = 0; i < 500; i++) {                         //intialize decimal number to 0 and t_int_number to 0
            int_number[i] = 0;
            t_int_number[i] = 0;
        }

        //set t_int_number to 1
        t_int_number[0] = 1;
        t_int_length = 1;
        //set the int_number to 0
        int_length = 1;
        index = 0;
        //calculate input length
        bin_length = strlen(bin_number);

        for (int i = bin_length - 1; i >= 0; i--) {                  //checks each digit of binary number
            //if the digit in binary representation is 1
            if (bin_number[i] == '1') {
                //sum (int_number, t_int_number)
                for (int index = 0; index < t_int_length; index++) {
                    int_number[index] +=
                        t_int_number[index];                //sum t_int_number digits
                    if (int_number[index] > 9) {                //if carry
                        int_number[index + 1] ++;
                        int_number[index] -= 10;
                    }
                }
                int_length = index;
                if (int_number[index] != 0) {               //i f length increase for addition
                    int_length ++;
                }
            }

            //Being ready for next iteration
            //multiplying everytime with 2 and save it to t_int_number
            carry = false;
            for (index = 0; index < t_int_length; index++) {
                t_int_number[index] += t_int_number[index];     //double the number
            }
            for (index = 0; index < t_int_length; index++) {
                if (t_int_number[index] > 9) {
                    t_int_number[index] -= 10;
                    t_int_number[index + 1]++;
                }
            }
            if (t_int_number[index] != 0) {
                t_int_length++;
            }
        }

        //printing the decimal number
        for (int i = int_length - 1; i >=0; i--) {
            printf("%d", int_number[i]);
        }
        printf("\n");
    }

    return 0;
}
