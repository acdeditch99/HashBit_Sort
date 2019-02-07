#include <stdio.h>
#include <stdlib.h>

static int[] orig_array_input { 2, 4, 3, 6, 1 };

int hashbit_sort(int a[])
{
    byte mask = 0x00;                       //will store 8 bits
                                            //since the values in the 
                                            //array never repeat
                                            //and are only within 1 to 6 inclusive

    byte recmask = 0x80;                    //will be used to recover values
    for(int i = 0; i < 5; ++i)              //start i at index 0
                                            //stop after index 4
    {
        mask |= (byte)(0x01<<(a[i]));
    }

    int s = 7;                                  //the reason it traverses
    for(int i = 5; i; --i)                      //up the array and then down
    {                                           //was because this was originally meant
        for( ; recmask; recmask >>= 1, --s)     //as my pseudocode for a MIPS assembly program
        {
            if(mask != mask^recmask)
            {
                a[i-1] = s;
                mask ^= recmask;
                break;
            } 
        }
    } 
    return 0;
}

int sanatize_inputs(int a[])
{
    if(!a) { return -1; } 
    int[8] used_vals = malloc(8 * sizeof(*used_vals));
    for(int i = 8; a[i] && i; --i)
    {
        (a[i] > 7)?( return -1 ):();
        (a[i] < 1)?( return -1 ):();
        ()
    }
    return 0;
}

int test1()
{
    int[] test_inputs = orig_array_input;
    test_any(test_i);
}

int test_any()

int main(char * argv[], int argc)
{
    if(!test1())
        printf("\nTests Complete\n");
    return 0;
}
