/**
 ******************************************************************************
 * @file           : task 6
 * @author         : ola ahmed
 * @brief          : pointers
 ******************************************************************************
 */
/* ********************** Includes Section Start ********************** */
    #include <stdio.h>
    #include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ********************** Global Variables Section Start ************** */
    unsigned  long Second;
    unsigned  int  Minute;
    unsigned  int  hour;
    unsigned  int  rest_of_seconds;
/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Declaration Section Start ************ */

/* ********************** Global Declaration  Section End   *********** */

/* ********************** Sub-Program Declarations Section Start ****** *///functions
    void split_time(unsigned long total_sec,unsigned int *hr,unsigned int *min,unsigned int *sec);
/* ********************** Sub-Program Declarations Section End ******** */

/* ********************** Sub-Program Section Start ******************* */
   int main()
{
    printf("Enter the number of seconds: ");
    scanf("%i", &Second);
    split_time(Second,&hour     , &Minute    , &rest_of_seconds);
    return 0;
}
/* ********************** Sub-Program Section End ******************** */

/* ********************** Sub-Program definition Section Start ******* */
    void    split_time  (unsigned long total_sec ,unsigned int *hr   ,unsigned int *min  ,unsigned int *sec)
    {
        hour=Second/3600;
        Minute=(Second%3600)/60;
        rest_of_seconds=Second%60;
        if(hour>=24){
           hour-=24;
        printf("new day\n");
        }
        *hr=hour;
        *min=Minute;
        *sec=rest_of_seconds;
        printf("%lu hours %t %i minutes %t %i seconds \n",hour,Minute,rest_of_seconds);
    }
/* ********************** Sub-Program definitions Section End ******** */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      15 feb 2024           num1
*/
