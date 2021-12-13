//Program To Print "B.C.A" Student Marksheet


/* This Program Print The Student "Marksheet".

 1) User Can Input Student Full Name,
    SEM,Division,Roll No,G.R No.

 2) Now User Can Input Five Subject Marks.

 3) Now This Code Automaticaly Calculate "Sum","Persantage" And
    Show TOTAL Marks PERSANTAGE And Grade.
  */

#include<stdio.h>
#include<conio.h>
void main()
{
	char   SfN[900],DIV[5];
	int    RN,CA,GRn;
	int    S1,S2,S3,S4,S5,Sum;
	float  Per;
	int L; // This Loop
 clrscr();

   // Enter The Student Information.
	printf("Enter Student Full Name  \t\t:- ");
	gets(SfN);
	printf("Enter SEM Number \t\t\t:- ");
	scanf("%d",&CA);
	printf("Enter Division\t\t\t\t:- ");
	scanf("%s",&DIV); // Enter Charecter in Capital.
	printf("Enter Student Roll NO\t\t\t:- ");
	scanf("%d",&RN);
	printf("Enter Student G.R No\t\t\t:- ");
	scanf("%d",&GRn);

    // Enter Student Marks.
	printf("\nEnter C language mark\t  :- ");
	scanf("%d",&S1);
	printf("Enter Math mark\t\t  :- ");
	scanf("%d",&S2);
	printf("Enter RDBMS mark\t  :- ");
	scanf("%d",&S3);
	printf("Enter Compter Orga. mark  :- ");
	scanf("%d",&S4);
	printf("Enter Business Com. mark  :- ");
	scanf("%d",&S5);

	Sum = S1 + S2 + S3 + S4 + S5;// This Formula Calculate Sum
	Per = ( Sum * 100.0 ) / 500;// This Formula Calculate Persantage

	printf("\n");

	for(L=0; L<80; L++) printf("*");
	printf("*\t\t\t\t     Marksheet\t\t\t\t       *");
	for(L=0; L<80; L++) printf("*");

   // Below Lines Print Student Information
	printf("* Student Name  :- %s",SfN);
	printf("\n* Class         :- B.C.A SEM-%d(%s)\t\t\t\t\t       *",CA,DIV);

    if( RN <= 2000 )
	{
	   printf("* Roll No       :- %d\t\t\t\t\t\t\t       *",RN);
	}
	 else
	    {
	      printf("* Roll No	:- %d\t\t\t\t\t\t       *",RN);
	    }
    if( GRn <= 1000 )
	{
	   printf("* G.R No        :- %d\t\t\t\t\t\t\t       *",GRn);
	}
	 else
	    {
		printf("* G.R No     :- %d\t\t\t       *",GRn);
	    }

	for(L=0; L<80; L++) printf("*");
   // This Is Tital Of All Columan's.
printf("* Subject Name \t| Total Mark\t| Obtained Mark\t|  Passs or Faill |    Grade   *");
printf("****************|***************|***************|*****************|*************");

   // This Is Subject 1 Condition.
	printf("* C language");
	printf("\t|  100");
	printf("\t\t|  %d",S1);
    if( S1 <= 40.0) // This Condition Show Student is Pass or Fail.
		{
			printf("\t\t|   FAIL\t");
			printf("  |\t  -    *");
		}
    else
		{
			printf("\t\t|   PASS\t  |");
		}
   // This Conditions Show Which Grade Student Got in Subject 1.
    if( S1 >= 41.0 && S1 <= 50.0 )
		{
			printf("\t C2    *");
		}
    else if( S1 >= 51.0 && S1 <= 60.0 )
		{
			printf("\t C1    *");
		}
    else if( S1 >= 61.0 && S1 <= 70.0 )
		{
			printf("\t B2    *");
		}
    else if( S1 >= 71.0 && S1 <= 80.0 )
		{
			printf("\t B1    *");
		}
    else if( S1 >= 81.0 && S1 <= 90.0 )
		{
			printf("\t A2    *");
		}
    else if( S1 >= 91.0 && S1 <= 100.0 )
		{
			printf("\t A1    *");
		}

printf("*---------------|---------------|---------------|-----------------|------------*");

	// This Is Subject 2 Condition.
	printf("* Math\t");
	printf("\t|  100");
	printf("\t\t|  %d",S2);
    if( S2 <= 40.0 ) // This Condition Show Student is Pass or Fail.
		{
			printf("\t\t|   FAIL\t");
			printf("  |\t  -    *");
		}
    else
		{
			printf("\t\t|   PASS\t  |");
		}
	// This Conditions Show Which Grade Student Got in Subject 2.
    if( S2 >= 41.0 && S2 <= 50.0 )
		{
			printf("\t C2    *");
		}
    else if( S2 >= 51.0 && S2 <= 60.0 )
		{
			printf("\t C1    *");
		}
    else if( S2 >= 61.0 && S2 <= 70.0 )
		{
			printf("\t B2    *");
		}
    else if( S2 >= 71.0 && S2 <= 80.0 )
		{
			printf("\t B1    *");
		}
    else if( S2 >= 81.0 && S2 <= 90.0 )
		{
			printf("\t A2    *");
		}
    else if( S2 >= 91.0 && S2 <= 100.0 )
		{
			printf("\t A1    *");
		}

printf("*---------------|---------------|---------------|-----------------|------------*");

	//	This Is Subject 3 Condition.
	printf("* RDBMS\t");
	printf("\t|  100");
	printf("\t\t|  %d",S3);
    if( S3 <= 40.0 ) // This Condition Show Student is Pass or Fail.
		{
			printf("\t\t|   FAIL\t");
			printf("  |\t  -    *");
		}
    else
		{
			printf("\t\t|   PASS\t  |");
		}
    // This Conditions Show Which Grade Student Got in Subject 3.
    if( S3 >= 41.0 && S3 <= 50.0 )
		{
			printf("\t C2    *");
		}
    else if( S3 >= 51.0 && S3 <= 60.0 )
		{
			printf("\t C1    *");
		}
    else if( S3 >= 61.0 && S3 <= 70.0 )
		{
			printf("\t B2    *");
		}
    else if( S3 >= 71.0 && S3 <= 80.0 )
		{
			printf("\t B1    *");
		}
    else if( S3 >= 81.0 && S3 <= 90.0 )
		{
			printf("\t A2    *");
		}
    else if( S3 >= 91.0 && S3 <= 100.0 )
		{
			printf("\t A1    *");
		}

printf("*---------------|---------------|---------------|-----------------|------------*");

	// This Is Subject 4 Condition.
	printf("* Compter Orga.");
	printf("\t|  100");
	printf("\t\t|  %d",S4);
    if( S4 <= 40.0 ) // This Condition Show Student is Pass or Fail.
		{
			printf("\t\t|   FAIL\t");
			printf("  |\t  -    *");
		}
    else
		{
			printf("\t\t|   PASS\t  |");
		}
	// This Conditions Show Which Grade Student Got in Subject 4.
	if( S4 >= 41.0 && S4 <= 50.0 )
		{
			printf("\t C2    *");
		}
    else if( S4 >= 51.0 && S4 <= 60.0 )
		{
			printf("\t C1    *");
		}
    else if( S4 >= 61.0 && S4 <= 70.0 )
		{
			printf("\t B2    *");
		}
    else if( S4 >= 71.0 && S4 <= 80.0 )
		{
			printf("\t B1    *");
		}
    else if( S4 >= 81.0 && S4 <= 90.0 )
		{
			printf("\t A2    *");
		}
    else if( S4 >= 91.0 && S4 <= 100.0 )
		{
			printf("\t A1    *");
		}

printf("*---------------|---------------|---------------|-----------------|------------*");

   // This Is Subject 5 Condition.
	printf("* Business Com.");
	printf("\t|  100");
	printf("\t\t|  %d",S5);
    if( S5 <= 40.0 ) // This Condition Show Student is Pass or Fail.
		{
			printf("\t\t|   FAIL\t");
			printf("  |\t  -    *");
		}
    else
		{
			printf("\t\t|   PASS\t  |");
		}
	// This Conditions Show Which Grade Student Got in Subject 5.
	if( S5 >= 41.0 && S5 <= 50.0 )
		{
			printf("\t C2    *");
		}
    else if( S5 >= 51.0 && S5 <= 60.0 )
		{
			printf("\t C1    *");
		}
    else if( S5 >= 61.0 && S5 <= 70.0 )
		{
			printf("\t B2    *");
		}
    else if( S5 >= 71.0 && S5 <= 80.0 )
		{
			printf("\t B1    *");
		}
    else if( S5 >= 81.0 && S5 <= 90.0 )
		{
			printf("\t A2    *");
		}
    else if( S5 >= 91.0 && S5 <= 100.0 )
		{
			printf("\t A1    *");

		}

    // This Lines Print TOTAL And Percentage.
printf("*---------------|---------------|---------------|-----------------|------------*");

	printf("* TOTAL-->\t|  500\t\t|  %d\t\t|\t-\t  |\t  -    *",Sum);

printf("*---------------|---------------|---------------|-----------------|------------*");

	printf("* PERCENTAGE --> %f\t\t\t\t\t\t       *",Per);

      for(L=0; L<80; L++) printf("*");

 getch();

}