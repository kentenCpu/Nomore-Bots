#include <stdio.h>
#include <string.h>
int main(){

printf("Nomore Bots\n");
printf("-----------\n");

char name[]="Delfor";
char proffesion[]="Tactician"; 
int power=10;

char potato_bot[]="Potatoez";
char potato_bot_desc[]="He's known to pocess 5 computers but this is not certain";
char potato_bot_defeatline[]="nooooo..";
char potato_bot_power=1;

char levelone[]="Sector55";
char levelone_story_line_1[]="I want you to track down a bot known as Islpotoato. This bot is complicated, as he is equiped with a speakermod system which projects sounds as well as radiation.\n";
char levelone_story_line_2[]="Good, you've entered the sector.  Yes, this is Sector55, you'll realize two passageways.  The one to your right is dark as you can tell.  Take that one, and not the well lit room.\n";

char opener_sector55_1[]="You are assigned by newtab to investigate Sector55.  From the crowded city you enter a warehouse.\n";
char opener_sector55_2[]="...\n"; 
char opener_sector55_3[]="[newtab]> Good, you've made it. We're running out of time with this one.\n";
char opener_sector55_4[]="He's known as potatoez.  Reports indicates he's planning to create more bots that we need to take out\n";

char opener_sector55_ready[]="Are you ready? (y/n or y/anykey)\n";

int yes_no(){char response; scanf("%c", "%response"); if(response=='y'||response=='Y'){return 1;} return 0;}

printf("%s", opener_sector55_1);
printf("%s", opener_sector55_2);
printf("%s", opener_sector55_3);
printf("%s", opener_sector55_4);
printf("%s", opener_sector55_ready);

int opener_sector55_start_1(){
while(1==1){if (yes_no()==0){printf("okay, just let me know when you're ready.\n");
printf("%s", opener_sector55_ready);
}
else{return 0;}
return 1;
}}

opener_sector55_start_1();

printf("ok");

}



