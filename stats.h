/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <Header File Containing Function Declaration and Comments  >
 *
Assigment Submission Week 1,
            Introduction to Embedded Systmens  
 *
 * @author <K Shreenath  Bohra>
 * @date <26 April 2020 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__s

/* Add Your Declarations and Function Comments here */ 
/**
 * void print_array(unsigned char <ARRAY>,int <SIZE_OF_ARRAY>);  
 * A function that prints given array .
 * 
 */
void print_array(unsigned char a[],int n);

///////////////////////////////////////////////
/**
 * void sort_array(unsigned char <ARRAY>,int <SIZE_OF_ARRAY>);  
 * A function that sorts  the given  array in descending order.
 * 
 */
void sort_array(unsigned char a[],int n);

///////////////////////////////////////////////
/**
 * int find_mean(unsigned char <ARRAY>,int <SIZE_OF_ARRAY>);  
 * A function that returns the mean of an array .
 * 
 */
int find_mean(unsigned char  a[],int n);

///////////////////////////////////////////////
/**
 * int find_minimum(unsigned char <ARRAY>,int <SIZE_OF_ARRAY>);  
 * A function that returns the minimum value element of an array .
 * 
 */
int find_minimum(unsigned char a[],int n);

///////////////////////////////////////////////
/**
 * int find_maximum(unsigned char <ARRAY>,int <SIZE_OF_ARRAY>);  
 * A function that returns the maximum value element of an array .
 * 
 */
int find_maximum(unsigned char a[],int n);
///////////////////////////////////////////////
/**
 * int find_median(unsigned char <ARRAY>,int <SIZE_OF_ARRAY>);  
 * A function that returns the median of an array .
 * 
 */
int find_median(unsigned char a[],int n);
///////////////////////////////////////////////
/**
 * void print_statistics(unsigned char <ARRAY>,int <SIZE_OF_ARRAY>);  
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * 
 */
void print_statistics(unsigned char a[],int size);
///////////////////////////////////////////////
/**s
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */
/**
 * void print_statistics(char a,int size);  
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * 
 */
void print_statistics(unsigned char a[],int size)
{

  print_array(a,size);
  sort_array(a,size);
  print_array(a,size);
  printf("\n######STATS#######");
  printf("\n#      Mean:%d   #",find_mean(a,size));
  printf("\n#    Median:%d   #",find_median(a,size));
  printf("\n# Max Value:%d  #",find_maximum(a,size));
  printf("\n# Min Value:%d    #",find_minimum(a,size));
  printf("\n##################");

  printf("\n#Median:%d",find_median(a,size));
}
///////////////////////////////////////////////////

/**
 * int find_minimum(unsigned char <ARRAY>,int <SIZE_OF_ARRAY>);  
 * A function that returns the minimum value element of an array .
 * 
 */

int  find_mean(unsigned char  a[],int n){
  int sum=0;
  for (int i = 0; i < n; i++)
  {
    sum+=a[i];
  }
  return (sum/n);
}
//////////////////////////////////////////////////////
/**
 * int find_mean(unsigned char <ARRAY>,int <SIZE_OF_ARRAY>);  
 * A function that returns the mean of an array .
 * 
 */
void sort_array(unsigned char a[],int n)
{
  unsigned char a1;
  for (int i = 0; i < n; ++i){ 
   
      for (int j = i + 1; j < n; ++j){ 
      
          if (a[i] < a[j]){                
                    a1 = a[i];
                    a[i] = a[j];
                    a[j] = a1;
          }
      }
  }
  printf("\n####SORTED#######");
}  
/////////////////////////////////////////////////////
/**
 * void sort_array(unsigned char <ARRAY>,int <SIZE_OF_ARRAY>);  
 * A function that sorts  the given  array in descending order.
 * 
 */
void print_array(unsigned char a[],int n){

  printf("\n####DISPLAYING ARRAY ####");
  for(int i=0;i<n;i++){
      printf("\n# test [%d] :%d ",(i+1),a[i]);
  }

}
///////////////////////////////////////////////////////
/**
 * int find_maximum(unsigned char <ARRAY>,int <SIZE_OF_ARRAY>);  
 * A function that returns the median of an array .
 * 
 */
int find_maximum(unsigned char a[],int n){
   int max =0;
   for (int i = 0; i < n; i++)
   {
     if (a[i]>max){
       max=a[i];
     }
   }
   return max;   
}
////////////////////////////////////////////////////////
/**
 * int find_maximum(unsigned char <ARRAY>,int <SIZE_OF_ARRAY>);  
 * A function that returns the maximum value element of an array .
 * 
 */
int find_minimum(unsigned char a[],int n){
   int min =__INT16_MAX__;
   for (int i = 0; i < n; i++)
   {
     if (a[i]<=min){
       min=a[i];
     }
   }
   return min;   
}
///////////////////////////////////////////////
/**
 * int find_median(unsigned char <ARRAY>,int <SIZE_OF_ARRAY>);  
 * A function that returns the median of an array .
 * 
 */
int find_median(unsigned char a[],int n){
  if(n%2==0){
    return ((a[(n/2)+1]+a[n/2])/2);
  }
  else return a[(n/2)+1];
}
///////////////////////////////////////////////

#endif /* __STATS_H__ */
