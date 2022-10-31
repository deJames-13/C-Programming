                               #include <stdio.h>
                              #include <windows.h>
                               #include <conio.h>

                                   int main()
                                       {
                                 int type = 0;
              int cInfant = 0, cChild = 0, cTeen = 0, cAdult = 0;
                                 float ave = 0;
                                    repeat:
                                 system("cls");
printf("\n1: Infant = %d\t2: Child = %d\n3: Teen = %d\t4: Adult = %d\n", cInfant, cChild, cTeen, cAdult);
                          printf("Enter a number: ");
                              scanf("%d", &type);

                                 if (type < 0)
                                       {
                                    exit(0);
                                       }
                       else if (!(type > 0 && type <= 4))
                                       {
                                  goto repeat;
                                       }

                                 switch (type)
                                       {
                                    case 1:
                                   cInfant++;
                                     break;
                                    case 2:
                                   cChild++;
                                     break;
                                    case 3:
                                    cTeen++;
                                     break;
                                    case 4:
                                   cAdult++;
                                     break;
                                       }
                ave = (cInfant + cChild + cTeen + cAdult) / 4.0;

                          printf("\nCounted values");
                        printf("\nInfant: %d", cInfant);
                         printf("\tChild: %d", cChild);
                        printf("\tTeenager: %d", cTeen);
                        printf("\tAdult: %d\n", cAdult);
                        printf("Average: %0.2f\n", ave);

                                      ask:
                 printf("\nDo you want to continue (Yy/Nn)? ");
                          char ans = tolower(getch());
                                if (ans == 'y')
                                       {
                               // system("cls");
                                  goto repeat;
                                       }
                              else if (ans == 'n')
                                       {
                          printf("\nProgram Exited.");
                                    exit(0);
                                       }
                                      else
                                       {
                                   goto ask;
                                       }

                                   return 0;
                                       }
