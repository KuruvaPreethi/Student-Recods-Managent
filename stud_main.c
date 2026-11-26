 1 #include"student.h"
  2 int main()
  3 {
  4 SLL *headerptr=0;
  5 load_student(&headerptr);
  6 char op;
  7 int count;
  8 while(1)
  9 {
 10 printf("**************************** STUDENT RECORD MENU *****************************\na/A : Add new record\nd/D :     Delete a record\ns/S : Show the list\nm/M : Modify a record\nv/V : Save records\ne/E : Exit\nt/T : Sort the list\nl/    L : Delte all the records\nr/R : Reverse the list\n");
 11 printf("********************************************************************************\n");
 12 printf("Enter your choice: \n");
 13 scanf(" %c",&op);
 14 switch(op)
 15 {
 16 case 'a':
 17 case 'A':
 18        add_new(&headerptr);break;
 19 case 'd':
 20 case 'D':
 21  delete_student(&headerptr);break;
 22 case 's':
 23 case 'S':
 24  stud_show(headerptr);break;
 25 case 'm':
 26 case 'M':
 27  modify(&headerptr);break;
 28 case 'v':
 29 case 'V':
 30  save_student(headerptr);break;
 31 case 'e':
 32 case 'E':
 33       if(exit_program(&headerptr))
 34       return 0;
 35       break;
 36 case 't':
 37 case 'T':
 38  sort_student(&headerptr);break;
 39 case 'l':
 40 case 'L':
 41  delete_all(&headerptr);break;
 42 case 'r':
 43 case 'R':
 44 reverse_list(&headerptr);break;
 45 default: printf("invalid option\n");break;
 46 }
 47 }
 48 }
