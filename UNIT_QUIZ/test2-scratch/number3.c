                               #include <stdio.h>
                              #include <windows.h>
                               #include <conio.h>

                                   int main()
                                       {
                          char red[10] = "\033[1;31m";
                         char nofg[10] = "\033[0;39m";

                              int K, counter = 0;
                  float V, vpercent, cduty, sum = 0, ave = 0;
                                char *class = 0;

                                    repeat:
                           K, V, vpercent, cduty = 0;
printf("\n[INPUT]\nNo. \tClass of Goods\n1: \tfood and beverages\n2: \tclothing and footwear\n3: \theavy machinery\n4: \tluxury items\n\n");
                     printf("Enter the class number: \t");
                                scanf("%d", &K);
                    printf("Enter the value of goods: \t");
                                scanf("%f", &V);

                                   switch (K)
                                       {
                                    case 1:
                         class = "foods and beverages";
                                 vpercent = 10;
                                     break;
                                    case 2:
                        class = "clothing and footwear";
                                 vpercent = 15;
                                     break;
                                    case 3:
                           class = "heavy machinery";
                                vpercent = 17.5;
                                     break;
                                    case 4:
                            class = "luxury items";
                                 vpercent = 40;
                                     break;
                                    default:
                                 system("cls");
          printf("\n%sInvalid Class Number:\t\t%d%s\n", red, K, nofg);
                                  goto repeat;
                                     break;
                                       }
                                   counter++;
                        cduty = V * (vpercent / 100.0);
                               sum = sum + cduty;
                              ave = sum / counter;

                            printf("\n[OUTPUT]\n");
                     printf("Class Number:\t\t\t%d\n", K);
                  printf("Class of Goods:\t\t\t%s\n", class);
                   printf("Value of Goods:\t\t\t%.2f\n", V);
             printf("Value of Goods (%%):\t\t%.2f%%\n", vpercent);
                 printf("\nCustoms Duty:\t\t\t%.2f\n", cduty);
                     printf("Summation:\t\t\t%.2f\n", sum);
                      printf("Average:\t\t\t%.2f\n", ave);

                                      ask:
                 printf("\nDo you want to continue (Yy/Nn)? ");
                          char ans = tolower(getch());
                                if (ans == 'y')
                                       {
                                 system("cls");
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
