#include<stdio.h>
#include<string.h>
struct Team
{
  char * name;
  int points;
  int m1,m2,m3,m4,m5;                          // m1,m2,m3,m4,m5 represents Match1,match2,match3,match4,match5 
}t;
int main()
{
  
  struct Team t[10];
  int i,s1=0,s2=0,s3=0,s4=0,c1=0,c2=0,c3=0,c4=0;  // s1,s2,s3,s4 represents total sum of points of that particular function
  float avg1,avg2,avg3,avg4;                     // c1,c2,c3,c4 are count used for counting the number of matches of that particular function
  t[0].name="GT";                               //avg1,avg2,avg3,avg4 are averages used for calculating average points of that function
  t[0].points=20;
  t[0].m1=1;
  t[0].m2=1;
  t[0].m3=0;
  t[0].m4=0;
  t[0].m5=1;
  t[1].name="LSG";
  t[1].points=18;
  t[1].m1=1;
  t[1].m2=0;
  t[1].m3=0;
  t[1].m4=1;
  t[1].m5=1;
  t[2].name="RR";
  t[2].points=16;
  t[2].m1=1;
  t[2].m2=0;
  t[2].m3=1;
  t[2].m4=0;
  t[2].m5=0;
  t[3].name="DC";
  t[3].points=14;
  t[3].m1=1;
  t[3].m2=1;
  t[3].m3=0;
  t[3].m4=1;
  t[3].m5=0;
  t[4].name="RCB";
  t[4].points=14;
  t[4].m1=0;
  t[4].m2=1;
  t[4].m3=1;
  t[4].m4=0;
  t[4].m5=0;
  t[5].name="KKR";
  t[5].points=12;
  t[5].m1=0;
  t[5].m2=1;
  t[5].m3=1;
  t[5].m4=0;
  t[5].m5=1;
  t[6].name="PBKS";
  t[6].points=12;
  t[6].m1=0;
  t[6].m2=1;
  t[6].m3=0;
  t[6].m4=1;
  t[6].m5=0;
  t[7].name="SRH";
  t[7].points=12;
  t[7].m1=1;
  t[7].m2=0;
  t[7].m3=0;
  t[7].m4=0;
  t[7].m5=0;
  t[8].name="CSK";
  t[8].points=8;
  t[8].m1=0;
  t[8].m2=0;
  t[8].m3=1;
  t[8].m4=0;
  t[8].m5=1;
  t[9].name="MI";
  t[9].points=6;
  t[9].m1=0;
  t[9].m2=1;
  t[9].m3=0;
  t[9].m4=1;
  t[9].m5=1;
   printf("\n-------------------Teams having 2 consecutive losses------------------------------\n");
   for(i=0;i<10;i++)
    { 
      if((t[i].m1==0 && t[i].m2==0) || (t[i].m2==0 && t[i].m3==0) || (t[i].m3==0 && t[i].m4==0) || (t[i].m4==0 && t[i].m5==0))
        { 
             c1=c1+1;
             printf("%s\n", t[i].name); 
             s1=s1+t[i].points;
             avg1=(float)s1/c1;   	  
        } 
    }
    printf("\n Average points = %.2f\n",avg1);     
    
    printf("\n-----------------Teams having 3 consecutive losses-----------------------------\n");
    for(i=0;i<10;i++)
    {
       if((t[i].m1==0 && t[i].m2==0 && t[i].m3==0) || (t[i].m2==0 && t[i].m3==0 && t[i].m4==0) || (t[i].m3==0 && t[i].m4==0 && t[i].m5==0))
       {
 	  c2=c2+1;
          printf("%s \n ",t[i].name);
	  s2+=t[i].points;
	  avg2=(float)s2/c2;
       }
   }
   printf("\n Average points = %.2f\n",avg2); 

   printf("\n-----------------Teams having 4 consecutive losses-----------------------------\n");
    for(i=0;i<10;i++)
    {
       if((t[i].m1==0 && t[i].m2==0 && t[i].m3==0 && t[i].m4==0) || (t[i].m2==0 && t[i].m3==0 && t[i].m4==0 && t[i].m5==0))
       {
          c3=c3+1;
          printf("%s \n ",t[i].name);
	  s3+=t[i].points;
	  avg3=(float)s3/c3;
       }
   }
   printf("\n Average points = %.2f \n",avg3);

   printf("\n-----------------Teams who lost all matches-----------------------------\n\n");
    for(i=0;i<10;i++)
    {
        if(t[i].m1==0 && t[i].m2==0 && t[i].m3==0 && t[i].m4==0 && t[i].m5==0)
        {
          printf("%s \n ",t[i].name);
        }
   }
  
   printf("\n-------------------Teams having 2 consecutive wins------------------------------\n");
   for(i=0;i<10;i++)
    {
      if((t[i].m1==1 && t[i].m2==1) || (t[i].m2==1 && t[i].m3==1) || (t[i].m3==1 && t[i].m4==1) || (t[i].m4==1 && t[i].m5==1))
        { 
	     c4=c4+1;
             printf("%s\n", t[i].name);
	     s4+=t[i].points;
	     avg4=(float)s4/c4;         
        }
    }
    printf("Average points = %.2f\n",avg4);
 
    printf("\n-----------------Teams having 3 consecutive wins-----------------------------\n");
    for(i=0;i<10;i++)
    {
       if((t[i].m1==1 && t[i].m2==1 && t[i].m3==1) || (t[i].m2==1 && t[i].m3==1 && t[i].m4==1) || (t[i].m3==1 && t[i].m4==1 && t[i].m5==1))
       {
          printf("%s \n ",t[i].name);
       }
   }
   printf("\n-----------------Teams having 4 consecutive wins-----------------------------\n");
    for(i=0;i<10;i++)
    {
       if((t[i].m1==1 && t[i].m2==1 && t[i].m3==1 && t[i].m4==1) || (t[i].m2==1 && t[i].m3==1 && t[i].m4==1 && t[i].m5==1))
       {
          printf("%s \n ",t[i].name);
       }
   }
   printf("\n-----------------Teams who won all matches-----------------------------\n\n");
    for(i=0;i<10;i++)
    {
        if(t[i].m1==1 && t[i].m2==1 && t[i].m3==1 && t[i].m4==1 && t[i].m5==1)
        {
          printf("%s \n ",t[i].name);
        }
   }
   printf("\n NOTE : If there is blank space in particular section then that section doesn't have any teams which satisfies the given criteria\n");   
}

