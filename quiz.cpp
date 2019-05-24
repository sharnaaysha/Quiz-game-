#include<stdio.h>
int c1=0,c2=0,c3=0,flag1=0,flag2=0,flag3=0;
void Bangla()
{
    int ans,point=0,help,count=0,rtrn_value,a,fifty_fifty,right=0,life_line=0,c,use_life_line=0;
    printf("----LEVEL1----\n\n");
    printf("level1:Rabindronath Thakorer saser kobita ki?\n\n");
    printf("option_1: akti kobita\n");
    printf("option_2:natok\n");
    printf("option_3:uponass\n");
    printf("option_4:chotogolpo\n");
    if(use_life_line==0)
    {
    printf("do u want use your lifeline fifty fifty?\n\n");
    printf("for yes press 1 and for no press 0\n");
    scanf("%d",&fifty_fifty);
    if(fifty_fifty==1)
    {
        life_line=life_line+1;
        if(life_line==1||life_line==2)
        {
        printf("remove two wrong answer\n");
        printf("level1:Rabindronath Thakorer saser kobita ki?\n\n");
        printf("option_3:uponass\n");
        printf("option_4:chotogolpo\n");
        scanf("%d",&ans);
        if(ans==3)
        {
          right=1;
        }
        else
        {
            right=0;
            printf("wrong answer!!you are terminated");
        }
        }

    }
    }
    if(life_line>2)
    {
    printf("sorry you have no life line\n");
    use_life_line==1;
    }
    if(fifty_fifty==0||life_line>2)
    {
    printf("Answer the question\n");
    scanf("%d",&ans);
    }
    if(ans==3)
    {
        printf("congrazz you have given the right answer\n\n");
        point=point+2500;
        printf("You have won %d\n",point);
        if(right==1)
        printf("----LEVEL2----\n\n");
        printf("level2:1985 te Biddasagor er lekha kon boi classic morjada pai?\n\n");
        printf("option_1: sokontola\n");
        printf("option_2:borno porichoi\n");
        printf("option_3:sitar bonobas\n");
        printf("option_4:vrantibilas\n");
        if(use_life_line==0)
        {
        printf("do u want use your lifeline fifty fifty?\n\n");
        printf("for yes press 1 and for no press 0\n");
        scanf("%d",&fifty_fifty);
        if(fifty_fifty==1)
    {
        life_line=life_line+1;
        if(life_line==1||life_line==2)
        {
        printf("remove two wrong answer\n");
        printf("level2:1985 te Biddasagor er lekha kon boi classic morjada pai?\n\n");
        printf("option_1: sokontola\n");
        printf("option_2:borno porichoi\n");
        scanf("%d",&ans);
        if(ans==2)
        {
          right=1;
        }
        else
        {
            right=0;
            printf("wrong answer!!you are terminated");
        }
        }

    }
        }
     if(life_line>2)
     {
     printf("sorry you have no life line\n");
     use_life_line==1;
     }

        if(fifty_fifty==0||life_line>2)
    {
        printf("Answer the question\n");
        scanf("%d",&ans);
    }
        if(ans==2)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL3----\n\n");
        printf("level3: sobuj potro potrika kon year a prokasito hoi?\n\n");
        printf("option_1: 1914\n");
        printf("option_2: 1918\n");
        printf("option_3: 1920\n");
        printf("option_4: 1919\n");
        if(use_life_line==0)
        {
        printf("do u want use your lifeline fifty fifty?\n\n");
        printf("for yes press 1 and for no press 0\n");
        scanf("%d",&fifty_fifty);
        if(fifty_fifty==1)
    {
        life_line=life_line+1;
        if(life_line==1||life_line==2)
        {
        printf("remove two wrong answer\n");
        printf("level3: sobuj potro potrika kon year a prokasito hoi?\n\n");
        printf("option_1: 1914\n");
        printf("option_2: 1918\n");
        scanf("%d",&ans);
        if(ans==1)
        {
          right=1;
        }
        else
        {
            right=0;
            printf("wrong answer!!you are terminated");
        }
        }

    }
        }
        if(life_line>2)
        {
        printf("sorry you have no life line\n");
        use_life_line==1;
        }

         if(fifty_fifty==0||life_line>2)
    {
        printf("Answer the question\n");
        scanf("%d",&ans);
    }
        if(ans==1)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL4----\n\n");
        printf("level4: Jomidar Dorpon natok tir writter ka?\n\n");
        printf("option_1: Mir Mosarraf Hosen\n");
        printf("option_2: Rabindranath Thakor\n");
        printf("option_3: Nurul Momen\n");
        printf("option_4: Sisir vadori\n");
        if(use_life_line==0)
        {
        printf("do u want use your lifeline fifty fifty?\n\n");
        printf("for yes press 1 and for no press 0\n");
        scanf("%d",&fifty_fifty);
    if(fifty_fifty==1)
    {
        life_line=life_line+1;
        if(life_line==1||life_line==2)
        {
        printf("remove two wrong answer\n");
        printf("level4: Jomidar Dorpon natok tir writter ka?\n\n");
        printf("option_1: Mir Mosarraf Hosen\n");
        printf("option_2: Rabindranath Thakor\n");
        scanf("%d",&ans);
        if(ans==1)
        {
          right=1;
        }
        else
        {
            right=0;
            printf("wrong answer!!you are terminated");
        }
        }

    }
        }
    if(life_line>2)
    {
    printf("sorry you have no life line\n");
    use_life_line==1;
    }
    if(fifty_fifty==0||life_line>2)
    {
    printf("Answer the question\n");
    scanf("%d",&ans);
    }
        if(ans==1)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL5----\n\n");
        printf("level5: Sadhinota Joddhe obodaner jnno BIR UTTOM upadhi luv kre kto jon?\n\n");
        printf("option_1: 67\n");
        printf("option_2: 68\n");
        printf("option_3: 70\n");
        printf("option_4: 75\n");
        if(use_life_line==0)
        {
        printf("do u want use your lifeline fifty fifty?\n\n");
        printf("for yes press 1 and for no press 0\n");
       scanf("%d",&fifty_fifty);
       if(fifty_fifty==1)
    {
        life_line=life_line+1;
        if(life_line==1||life_line==2)
        {
        printf("remove two wrong answer\n");
        printf("level5: Sadhinota Joddhe obodaner jnno BIR UTTOM upadhi luv kre kto jon?\n\n");
        printf("option_1: 67\n");
        printf("option_2: 68\n");
        scanf("%d",&ans);
        if(ans==2)
        {
          right=1;
        }
        else
        {
            right=0;
            printf("wrong answer!!you are terminated");
        }
        }

    }
        }
    if(life_line>2)
    {
    printf("sorry you have no life line\n");
    use_life_line==1;
    }
    if(fifty_fifty==0||life_line>2)
    {
    printf("Answer the question\n");
    scanf("%d",&ans);
    }

        if(ans==2)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL6----\n\n");
        printf("level6: Bangladesh er sas hindu raja ka?\n\n");
        printf("option_1: Bijoy san\n");
        printf("option_2: Hamonto pal\n");
        printf("option_3: Gori san\n");
        printf("option_4: lokkhon san\n");
        if(use_life_line==0)
        {
        printf("do u want use your lifeline fifty fifty?\n\n");
        printf("for yes press 1 and for no press 0\n");
       scanf("%d",&fifty_fifty);
       if(fifty_fifty==1)
    {
        life_line=life_line+1;
        if(life_line==1||life_line==2)
        {
        printf("remove two wrong answer\n");
        printf("level6: Bangladesh er sas hindu raja ka?\n\n");
        printf("option_3: Gori san\n");
        printf("option_4: lokkhon san\n");
        scanf("%d",&ans);
        if(ans==4)
        {
          right=1;
        }
        else
        {
            right=0;
            printf("wrong answer!!you are terminated");
        }
        }

    }
        }
    if(life_line>2)
    {
    printf("sorry you have no life line\n");
    use_life_line==1;
    }
    if(fifty_fifty==0||life_line>2)
    {
    printf("Answer the question\n");
    scanf("%d",&ans);
    }


        if(ans==4)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL7----\n\n");
        printf("level7: Jossimuddin er srasto kahini kabbo konti?\n\n");
        printf("option_1: Noksi kathar matt\n");
        printf("option_2: sojonbadiar ghat\n");
        printf("option_3: sokina\n");
        printf("option_4: rakhali\n");
        if(use_life_line==0)
        {
        printf("do u want use your lifeline fifty fifty?\n\n");
        printf("for yes press 1 and for no press 0\n");
       scanf("%d",&fifty_fifty);
       if(fifty_fifty==1)
    {
        life_line=life_line+1;
        if(life_line==1||life_line==2)
        {
        printf("remove two wrong answer\n");
        printf("level7: Jossimuddin er srasto kahini kabbo konti?\n\n");
        printf("option_1: Noksi kathar matt\n");
        printf("option_2: sojonbadiar ghat\n");
        scanf("%d",&ans);
        if(ans==1)
        {
          right=1;
        }
        else
        {
            right=0;
            printf("wrong answer!!you are terminated");
        }
        }

    }
        }
    if(life_line>2)
    {
    printf("sorry you have no life line\n");
    use_life_line==1;
    }
    if(fifty_fifty==0||life_line>2)
    {
    printf("Answer the question\n");
    scanf("%d",&ans);
    }

        if(ans==1)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level8----\n\n");
        printf("level8: Amar porbo bangla kobitar rochita ka?\n\n");
        printf("option_1: Josimuddin\n");
        printf("option_2: talim hosen\n");
        printf("option_3: Jibonando das\n");
        printf("option_4: Saiod Ali Ahsan\n");
        if(use_life_line==0)
        {
        printf("do u want use your lifeline fifty fifty?\n\n");
        printf("for yes press 1 and for no press 0\n");
        scanf("%d",&fifty_fifty);
       if(fifty_fifty==1)
    {
        life_line=life_line+1;
        if(life_line==1||life_line==2)
        {
        printf("remove two wrong answer\n");
        printf("level8: Amar porbo bangla kobitar rochita ka?\n\n");
        printf("option_3: Jibonando das\n");
        printf("option_4: Saiod Ali Ahsan\n");
        scanf("%d",&ans);
        if(ans==4)
        {
          right=1;
        }
        else
        {
            right=0;
            printf("wrong answer!!you are terminated");
        }
        }

    }
        }
    if(life_line>2)
    {
    printf("sorry you have no life line\n");
    use_life_line==1;
    }
    if(fifty_fifty==1||life_line==2)
    {
    printf("Answer the question\n");
    scanf("%d",&ans);
    }


        if(ans==4)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level9----\n\n");
        printf("level9:Borofgola nodi uponnas tir rochita ka?\n\n");
        printf("option_1: Johir Raihan\n");
        printf("option_2: Saukot Hosen\n");
        printf("option_3: Monir Chowdhory\n");
        printf("option_4: roshid Karim\n");
        if(use_life_line==0)
        {
        printf("do u want use your lifeline fifty fifty?\n\n");
        printf("for yes press 1 and for no press 0\n");
        scanf("%d",&fifty_fifty);
       if(fifty_fifty==1)
    {
        life_line=life_line+1;
        if(life_line==1||life_line==2)
        {
        printf("remove two wrong answer\n");
        printf("level9:Borofgola nodi uponnas tir rochita ka?\n\n");
        printf("option_1: Johir Raihan\n");
        printf("option_2: Saukot Hosen\n");
        scanf("%d",&ans);
        if(ans==1)
        {
          right=1;
        }
        else
        {
            right=0;
            printf("wrong answer!!you are terminated");
        }
        }

    }
        }
    if(life_line>2)
    {
    printf("sorry you have no life line\n");
    use_life_line==1;
    }
    if(fifty_fifty==0||life_line>2)
    {
    printf("Answer the question\n");
    scanf("%d",&ans);
    }


        if(ans==1)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level0----\n\n");
        printf("level10:Kashboner konna kon jatio rochona?\n\n");
        printf("option_1: natok\n");
        printf("option_2: kabbo\n");
        printf("option_3: chotogolpo\n");
        printf("option_4: uponnas\n");
        if(use_life_line==0)
        {
        printf("do u want use your lifeline fifty fifty?\n\n");
        printf("for yes press 1 and for no press 0\n");
        scanf("%d",&fifty_fifty);
       if(fifty_fifty==1)
    {
        life_line=life_line+1;
        if(life_line==1||life_line==2)
        {
        printf("remove two wrong answer\n");
        printf("level10:Kashboner konna kon jatio rochona?\n\n");
        printf("option_3: chotogolpo\n");
        printf("option_4: uponnas\n");
        scanf("%d",&ans);
        if(ans==4)
        {
          right=1;
        }
        else
        {
            right=0;
            printf("wrong answer!!you are terminated");
        }
        }

    }
        }
    if(life_line>2)
    {
    printf("sorry you have no life line\n");
    use_life_line==1;
    }
    if(fifty_fifty==0||life_line>2)
    {
    printf("Answer the question\n");
    scanf("%d",&ans);
    }


        if(ans==4)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level_complete----\n\n");

        }
        else
        {
            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);

        }
        }
        else
        {

            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);

        }
        }
        else
        {
            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);

        }
        }

        else
        {
               printf("wrong answer\n");
               point=point/2;
               printf("%d",point);

        }
        }



        else
           {
               printf("wrong answer\n");
               point=point/2;
               printf("%d",point);

           }
        }

        else
        {

            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);
        }
        }

        else
           {
               printf("wrong answer\n");
               printf("%d",point);
           }

        }
        else
        {

            printf("wrong answer\n");
            printf("%d",point);
        }


        }
        else
        {
            printf("wrong answer\n");
            printf("%d",point);
        }
    }
        else
            {
                printf("wrong answer\n");
                printf("%d",point);

            }
    }
    void English()
{
    int ans,point=0,help,count=0,rtrn_value,a;
    printf("----LEVEL1----\n\n");
    printf("level1:The gilr is expert_______drawing fill up the blank?\n\n");
    printf("option_1: in\n");
    printf("option_2:to\n");
    printf("option_3:with\n");
    printf("option_4:at\n");
    scanf("%d",&ans);
    if(ans==4)
    {
        printf("congrazz you have given the right answer\n\n");
        point=point+2500;
        printf("You have won %d\n",point);
        printf("----LEVEL2----\n\n");
        printf("level2:Still water run deep.what is Still?\n\n");
        printf("option_1: Noun\n");
        printf("option_2:Pronoun\n");
        printf("option_3:Adjective\n");
        printf("option_4:Adverb\n");
        scanf("%d",&ans);
        if(ans==3)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL3----\n\n");
        printf("level3: Right spelling?\n\n");
        printf("option_1: HETROGENUS\n");
        printf("option_2: HETROGENEOUS\n");
        printf("option_3: HETEROGENUS\n");
        printf("option_4: HETEROGENEOUS\n");
        scanf("%d",&ans);
        if(ans==4)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL4----\n\n");
        printf("level4:Milk and water means?\n\n");
        printf("option_1: pure milk and water\n");
        printf("option_2: Dirty milk and water\n");
        printf("option_3: Lifeless\n");
        printf("option_4: Colorless things\n");
        scanf("%d",&ans);
        if(ans==3)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL5----\n\n");
        printf("level5: Which is right spelling?\n\n");
        printf("option_1: Agreable\n");
        printf("option_2: Agreeable\n");
        printf("option_3: Agreeabel\n");
        printf("option_4: Agreebel\n");
        scanf("%d",&ans);
        if(ans==2)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL6----\n\n");
        printf("level6: The man is climbing the eliff.what is the passive form?\n\n");
        printf("option_1: The cliff is climbed by the man\n");
        printf("option_2: The cliff is being climbed by the man\n");
        printf("option_3: The clif has been climbed by the man\n");
        printf("option_4: The cliff was being climbed by the man\n");
        scanf("%d",&ans);
        if(ans==2)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL7----\n\n");
        printf("level7: Feed the baby_______milk.Fill up the blank?\n\n");
        printf("option_1: to\n");
        printf("option_2: in\n");
        printf("option_3: on\n");
        printf("option_4: with\n");
        scanf("%d",&ans);
        if(ans==3)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level8----\n\n");
        printf("level8: Aboish word synonym?\n\n");
        printf("option_1: Perform\n");
        printf("option_2: Create\n");
        printf("option_3: Cancel\n");
        printf("option_4: Cenerate\n");
        scanf("%d",&ans);
        if(ans==3)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level9----\n\n");
        printf("level9:Loaves and fishes idiom meaning?\n\n");
        printf("option_1: Personal gains\n");
        printf("option_2: Beautiful bread\n");
        printf("option_3: Tasty fishesn");
        printf("option_4: None\n");
        scanf("%d",&ans);
        if(ans==1)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level0----\n\n");
        printf("level10:Which is the verb of the word false?\n\n");
        printf("option_1: Falehood\n");
        printf("option_2: Falsen\n");
        printf("option_3: Falsify\n");
        printf("option_4: Falsity\n");
        scanf("%d",&ans);
        if(ans==3)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level_complete----\n\n");
        }
        else
        {
            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);

        }
        }
        else
        {

            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);

        }
        }
        else
        {
            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);

        }
        }

        else
        {
               printf("wrong answer\n");
               point=point/2;
               printf("%d",point);

        }
        }



        else
           {
               printf("wrong answer\n");
               point=point/2;
               printf("%d",point);

           }
        }

        else
        {

            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);
        }
        }

        else
           {
               printf("wrong answer\n");
               printf("%d",point);
           }

        }
        else
        {

            printf("wrong answer\n");
            printf("%d",point);
        }


        }
        else
        {
            printf("wrong answer\n");
            printf("%d",point);
        }
    }
        else
            {
                printf("wrong answer\n");
                printf("%d",point);

            }
    }
     void Math()
{
    int ans,point=0,help,count=0,rtrn_value,a;
    printf("----LEVEL1----\n\n");
    printf("level1:If (x-5)(a+x)=x^2-25 then a=?\n\n");
    printf("option_1: 25\n");
    printf("option_2: -25\n");
    printf("option_3: 5\n");
    printf("option_4:-5\n");
    scanf("%d",&ans);
    if(ans==3)
    {
        printf("congrazz you have given the right answer\n\n");
        point=point+2500;
        printf("You have won %d\n",point);
        printf("----LEVEL2----\n\n");
        printf("level2:If a+b=5 and b=3 then ab=?\n\n");
        printf("option_1: 4\n");
        printf("option_2: 5\n");
        printf("option_3: 3\n");
        printf("option_4: 2\n");
        scanf("%d",&ans);
        if(ans==1)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL3----\n\n");
        printf("level3:If a cycle brought by 7200 taka then loss is 10%.How much brought can profit 12%?\n\n");
        printf("option_1: 7000\n");
        printf("option_2: 8960\n");
        printf("option_3: 6500\n");
        printf("option_4: 8000\n");
        scanf("%d",&ans);
        if(ans==2)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL4----\n\n");
        printf("level4: If 4,6,7 and x mean is 5,5 then x=?\n\n");
        printf("option_1: 5.5\n");
        printf("option_2: 5\n");
        printf("option_3: 4.5\n");
        printf("option_4: 6\n");
        scanf("%d",&ans);
        if(ans==2)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL5----\n\n");
        printf("level5: 1+2+3+4+-----+20=?\n\n");
        printf("option_1: 210\n");
        printf("option_2: 212\n");
        printf("option_3: 214\n");
        printf("option_4:  220\n");
        scanf("%d",&ans);
        if(ans==1)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL6----\n\n");
        printf("level6:a^4+4= ?\n\n");
        printf("option_1: (a^2+20+2)(a^2+2a-2)");
        printf("option_2: (a^2+20+2)(a^2-2a-2)\n");
        printf("option_3: (a^2-20+2)(a^2+2a-2)\n");
        printf("option_4: (a^2-20-2)(a^2-2a+2)\n");
        scanf("%d",&ans);
        if(ans==2)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL7----\n\n");
        printf("level7: At prent father's age son's 5 times.");
        printf("After 3 year's father's age is son's 4 times.");
        printf("At prsent Father's and son's age?\n\n");
        printf("option_1: 45 year, 9 year\n");
        printf("option_2: 25 year, 5 year\n");
        printf("option_3: 50 year, 10 year\n");
        printf("option_4: 35 year, 7 year\n");
        scanf("%d",&ans);
        if(ans==1)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level8----\n\n");
        printf("level8:If per hour velocity is 5 km  then how much time needed.");
        printf("If per hour velocity 6 km then time needed 30 minit less.");
        printf("what is the distance?\n\n");
        printf("option_1: 25 km\n");
        printf("option_2: 22 km\n");
        printf("option_3: 20 km\n");
        printf("option_4:15 km\n");
        scanf("%d",&ans);
        if(ans==4)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level9----\n\n");
        printf("level9:A and B together can do a work in 10 days.");
        printf("If B can do this alone in 14 days.");
        printf("Then A can finish this work in how much days??\n\n");
        printf("option_1: 25 days\n");
        printf("option_2: 28 days\n");
        printf("option_3: 32 days\n");
        printf("option_4: 17*(1/2)\n");
        scanf("%d",&ans);
        if(ans==4)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level0----\n\n");
        printf("level10:If A:B=5:6 and B:C=3:10 then A:C=?\n\n");
        printf("option_1: 5:20\n");
        printf("option_2: 6:12\n");
        printf("option_3: 10:20\n");
        printf("option_4: 5:12\n");
        scanf("%d",&ans);
        if(ans==1)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level_complete----\n\n");
        }
        else
        {
            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);

        }
        }
        else
        {

            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);

        }
        }
        else
        {
            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);

        }
        }

        else
        {
               printf("wrong answer\n");
               point=point/2;
               printf("%d",point);

        }
        }



        else
           {
               printf("wrong answer\n");
               point=point/2;
               printf("%d",point);

           }
        }

        else
        {

            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);
        }
        }

        else
           {
               printf("wrong answer\n");
               printf("%d",point);
           }

        }
        else
        {

            printf("wrong answer\n");
            printf("%d",point);
        }


        }
        else
        {
            printf("wrong answer\n");
            printf("%d",point);
        }
    }
        else
            {
                printf("wrong answer\n");
                printf("%d",point);

            }
    }
    void General_knowledge()
{
    int ans,point=0,help,count=0,rtrn_value,a;
    printf("----LEVEL1----\n\n");
    printf("level1:Russia's coin name??\n\n");
    printf("option_1: peso\n");
    printf("option_2: uoro\n");
    printf("option_3: rubul\n");
    printf("option_4: lira\n");
    scanf("%d",&ans);
    if(ans==3)
    {
        printf("congrazz you have given the right answer\n\n");
        point=point+2500;
        printf("You have won %d\n",point);
        printf("----LEVEL2----\n\n");
        printf("level2:world's which two city are establish in two mohadesh?\n\n");
        printf("option_1: Mosko\n");
        printf("option_2: Parish\n");
        printf("option_3: Kaoro\n");
        printf("option_4: Istambol\n");
        scanf("%d",&ans);
        if(ans==4)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL3----\n\n");
        printf("level3:Dead sea present where?\n\n");
        printf("option_1: Irak and Jordan\n");
        printf("option_2: Misor and Jordan\n");
        printf("option_3: Irak and Turosko\n");
        printf("option_4: Israil and Jordan\n");
        scanf("%d",&ans);
        if(ans==4)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL4----\n\n");
        printf("level4: In world's life were found approximately?\n\n");
        printf("option_1: 100 koti year ago\n");
        printf("option_2: 10 lac year ago\n");
        printf("option_3: 10 koti year ago\n");
        printf("option_4: 1 koti year ago\n");
        scanf("%d",&ans);
        if(ans==1)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL5----\n\n");
        printf("level5: Which country is not Scandinavian?\n\n");
        printf("option_1: Norway\n");
        printf("option_2: Kania\n");
        printf("option_3: Denmark\n");
        printf("option_4: Fenland\n");
        scanf("%d",&ans);
        if(ans==2)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL6----\n\n");
        printf("level6: Where is Bangladesh first Museum?\n\n");
        printf("option_1: Dhaka Museum\n");
        printf("option_2: Borendro Museum\n");
        printf("option_3: Lalbag kella Museum\n");
        printf("option_4: Ahsanmonjil Museum\n");
        scanf("%d",&ans);
        if(ans==2)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL7----\n\n");
        printf("level7:Where is Who's office?\n\n");
        printf("option_1: USA\n");
        printf("option_2: Italy\n");
        printf("option_3: Swzerland\n");
        printf("option_4: France\n");
        scanf("%d",&ans);
        if(ans==3)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level8----\n\n");
        printf("level8: Which year Yasir Arafat got nobel prize?\n\n");
        printf("option_1: 1993\n");
        printf("option_2: 1994\n");
        printf("option_3: 1995\n");
        printf("option_4: 1996\n");
        scanf("%d",&ans);
        if(ans==2)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level9----\n\n");
        printf("level9:Where is Colombia??\n\n");
        printf("option_1: urope\n");
        printf("option_2: South America\n");
        printf("option_3: Africa\n");
        printf("option_4: North America\n");
        scanf("%d",&ans);
        if(ans==2)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level0----\n\n");
        printf("level10: How much % of Sunderban present in Bangladesh?\n\n");
        printf("option_1: 54%\n");
        printf("option_2: 58%\n");
        printf("option_3: 62%\n");
        printf("option_4: 66%\n");
        scanf("%d",&ans);
        if(ans==3)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level_complete----\n\n");
        }
        else
        {
            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);

        }
        }
        else
        {

            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);

        }
        }
        else
        {
            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);

        }
        }

        else
        {
               printf("wrong answer\n");
               point=point/2;
               printf("%d",point);

        }
        }



        else
           {
               printf("wrong answer\n");
               point=point/2;
               printf("%d",point);

           }
        }

        else
        {

            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);
        }
        }

        else
           {
               printf("wrong answer\n");
               printf("%d",point);
           }

        }
        else
        {

            printf("wrong answer\n");
            printf("%d",point);
        }


        }
        else
        {
            printf("wrong answer\n");
            printf("%d",point);
        }
    }
        else
            {
                printf("wrong answer\n");
                printf("%d",point);

            }
    }
 void General_Science()
{
    int ans,point=0,help,count=0,rtrn_value,a;
    printf("----LEVEL1----\n\n");
    printf("level1:What is mukor??\n\n");
    printf("option_1: sotrak\n");
    printf("option_2: soibal\n");
    printf("option_3: bacteria\n");
    printf("option_4: virus\n");
    scanf("%d",&ans);
    if(ans==1)
    {
        printf("congrazz you have given the right answer\n\n");
        point=point+2500;
        printf("You have won %d\n",point);
        printf("----LEVEL2----\n\n");
        printf("level2:Highest saloksoislation occures in?\n\n");
        printf("option_1: blue light\n");
        printf("option_2: purple light\n");
        printf("option_3: red light\n");
        printf("option_4: green light\n");
        scanf("%d",&ans);
        if(ans==3)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL3----\n\n");
        printf("level3: Which is called cell's life strength?\n\n");
        printf("option_1: Protoplajom\n");
        printf("option_2: cromojom\n");
        printf("option_3: mitokondria\n");
        printf("option_4: nucleas\n");
        scanf("%d",&ans);
        if(ans==3)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL4----\n\n");
        printf("level4: Which is  computer's first language?\n\n");
        printf("option_1: C++\n");
        printf("option_2: Pascal\n");
        printf("option_3: Fortran\n");
        printf("option_4: ADA\n");
        scanf("%d",&ans);
        if(ans==4)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL5----\n\n");
        printf("level5: Which is Magnetic?\n\n");
        printf("option_1: parod\n");
        printf("option_2: kobalt\n");
        printf("option_3: bishmarth\n");
        printf("option_4: antimoni\n");
        scanf("%d",&ans);
        if(ans==2)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL6----\n\n");
        printf("level6: Which colour metal has the highest capacity to consume heat?\n\n");
        printf("option_1: Black\n");
        printf("option_2: Red\n");
        printf("option_3: purple\n");
        printf("option_4: white\n");
        scanf("%d",&ans);
        if(ans==1)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----LEVEL7----\n\n");
        printf("level7: Human chromojom?\n\n");
        printf("option_1: 23 pair\n");
        printf("option_2: 20 pair\n");
        printf("option_2: 22 pair\n");
        printf("option_4: 25 pair\n");
        scanf("%d",&ans);
        if(ans==1)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level8----\n\n");
        printf("level8:Protein main element?\n\n");
        printf("option_1: Oxyzen\n");
        printf("option_2: Nitrogen\n");
        printf("option_3: Hidrozen\n");
        printf("option_4: Carbon\n");
        scanf("%d",&ans);
        if(ans==2)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level9----\n\n");
        printf("level9: From Sun to World how much time light needed to come??\n\n");
        printf("option_1: 9.12 minit\n");
        printf("option_2: 8.32 minit\n");
        printf("option_3: 7.96 minit\n");
        printf("option_4: 10.56 minit\n");
        scanf("%d",&ans);
        if(ans==2)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level0----\n\n");
        printf("level10: What is Dry Ice?\n\n");
        printf("option_1: In hard state Carbon-di-oxide\n");
        printf("option_2: In hard state Salfar-di-oxide\n");
        printf("option_3: Under zero degree temperature ice");
        printf("option_4: In hard state Hidrozen-per-oxide\n");
        scanf("%d",&ans);
        if(ans==1)
        {
        printf("congrazz you have given the right answer\n\n");
        point=point*2;
        printf("You have won %d\n",point);
        printf("----level_complete----\n\n");
        }
        else
        {
            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);

        }
        }
        else
        {

            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);

        }
        }
        else
        {
            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);

        }
        }

        else
        {
               printf("wrong answer\n");
               point=point/2;
               printf("%d",point);

        }
        }



        else
           {
               printf("wrong answer\n");
               point=point/2;
               printf("%d",point);

           }
        }

        else
        {

            printf("wrong answer\n");
            point=point/2;
            printf("%d",point);
        }
        }

        else
           {
               printf("wrong answer\n");
               printf("%d",point);
           }

        }
        else
        {

            printf("wrong answer\n");
            printf("%d",point);
        }


        }
        else
        {
            printf("wrong answer\n");
            printf("%d",point);
        }
    }
        else
            {
                printf("wrong answer\n");
                printf("%d",point);

            }
    }


int main()
{
    int option,count_1=0,count_2=0,count_3=0,t1=0,t2=0,t3=0,p1,p2,p3;
    while(1)
    {
    printf("***WELCOME TO THE GAME WHO WILL BE MILINIOR***\n\n");
    printf("three person will be selected for the game one after another\n\n");
    printf("q1:The word 'beautify' is a?\n");
    printf("option1:Noun\n");
    printf("option2:Adjective\n");
    printf("option3:Adverb\n");
    printf("option4:verb\n");
    printf("p1,p2,p3\n");
    scanf("%d%d%d",&p1,&p2,&p3);
    if(p1==4)
        c1=c1+1;
    if(p2==4)
        c2=c2+1;
     if(p3==4)
        c3=c3+1;
    printf("q2:Which one is feminine noun?\n");
    printf("option1:abbot\n");
    printf("option2:enhanter\n");
    printf("option3:pea-cock\n");
    printf("option4:executrix\n");
    scanf("%d%d%d",&p1,&p2,&p3);
    if(p1==4)
        c1=c1+1;
    if(p2==4)
        c2=c2+1;
    if(p3==4)
        c3=c3+1;

    printf("q3:Nevertheless?\n");
    printf("option1:Noun\n");
    printf("option2:Adverb\n");
    printf("option3:verb\n");
    printf("option4:pronoun\n");
    scanf("%d%d%d",&p1,&p2,&p3);
    if(p1==2)
        c1=c1+1;
    if(p2==2)
        c2=c2+1;
    if(p3==2)
        c3=c3+1;


    if(c1>c2&&c1>c3)
    {
        printf("c1 is selected\n");
        c1=0;
        t1=1;
    }
   else if(c2>c1&&c2>c3)
    {
        printf("c2 selected\n");
        c2=0;
        t2=1;
    }
    else if(c3>c1&&c3>c2)
    {
        printf("c3 selected\n");
        c3=0;
        t3=1;
    }
    printf("Rules of the game\n\n");
    printf("rule1: There will be 10 level to become the MILINIOR\n\n");
    printf("rule2: you shall get 4 optioan of each question\n\n");
    printf("rule3:You have a life line fifty fifty for 2 times\n\n");
    printf("rule 3: After level for if you give a wrong answer your money will becoma half\n\n");
    printf("choose a part for beginning the game\n\n");
    printf("for Bangla press 1\n\n");
    printf("---- for English press 2 ----\n\n");
    printf("---- for Math press 3 ----\n\n");
    printf("---- for  General Knowledge press 4 ----\n\n");
    printf("---- for General science press 5 ----\n\n");
    printf("---- for quit press 0 ----\n\n");
    if(t1==1&&flag1==0)
    {
        t1=0;
        scanf("%d",&option);
        flag1=1;
    }
     if(t2==1&&flag2==0)
    {
        t2=0;
        scanf("%d",&option);
        flag2=1;
    }
     if(t3==1&&flag3==0)
    {
        t3=0;
        scanf("%d",&option);
        flag3=1;
    }
    if(flag1==1&&t1==1)
    {
        printf("you are terminated because you have already answered one section\n");
        break;
    }
     if(flag2==1&&t2==1)
    {
        printf("you are terminated because you have already answered one section\n");
        break;
    }
      if(flag3==1&&t3==1)
    {
        printf("you are terminated because you have already answered one section\n");
        break;
    }
     if(option==1)
    {
        printf("you have chossen Bangla section\n\n");
        Bangla();
    }

    if(option==3)
    {
        printf("you have chossen Math section\n\n");
        Math();
    }
     if(option==4)
    {
        printf("you have chossen General Knowledge Bangladesh\n\n");
        General_knowledge();
    }
     if(option==5)
    {
        printf("you have chossen Science\n\n");
        General_Science();
    }
    if(option==0)
    {
        printf("Thank You for your participation\n");
    }






    }

return 0;
}
