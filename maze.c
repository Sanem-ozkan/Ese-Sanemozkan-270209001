#include <stdio.h>
#ifndef MAZE_C
#define MAZE_C
int xaxis=19;
int yaxis=7;
int path_element = 0;
int wall_element = 1;
int player_element = 2;
int finish_element = 3;
int xa = 0, xb = 1;
int map[7][19] = {{1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1},
                  {1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1},
                  {1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1},
                  {0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1},
                  {1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1},
                  {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1},
                  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 3}};

void print_map(int map[yaxis][xaxis]){

	int a,b;
    char wall=219;
    char ww=176;
    char ok1=175;

	for(a=0; a<yaxis; a++) {
		for(b=0; b<xaxis; b++){
	    	if(map[a][b]==wall_element )  {
	        	printf("%c%c",wall,wall);
	        }else if(map[a][b]==finish_element) {
	            printf(" %c",ok1);
	        }else if(map[a][b]==path_element){
	            printf("%c%c",ww,ww);
	        }else if(map[a][b]==player_element){
	        	printf("P ");

	        }
	    }
		printf("\n");
	}


}
int maze() {

	while(1) {

        print_map(map);
        char m;
        scanf("%c",&m);
        if(m==119)
        {
	        if(xa>0)
            {
  	        	if(map[xa-1][xb]!=wall_element)
                {
                    if(map[xa-1][xb]==player_element){
                map[xa][xb]=path_element;
                }

  	            xa=xa-1;


                }
          }

        }
        if(m==115)
        {
			if(xa<(yaxis-1))
           {
	           if(map[xa+1][xb]!=wall_element){
                    if(map[xa+1][xb]==player_element){
                map[xa][xb]=path_element;
                }

	                xa=xa+1;

               }

           }

        }
        if(m==97)
        {
        	if(xb>0)
        	{
        	    if(map[xa][xb-1]!=wall_element)
        	    { if(map[xa][xb-1]==player_element){
                map[xa][xb]=path_element;
                }

        	        xb=xb-1;
        	    }

            }

        }
        if(m==100){
			if(xb<(xaxis-1)){
	            if(map[xa][xb+1]!=wall_element){
                        if(map[xa][xb+1]==player_element){
                map[xa][xb]=path_element;
                }

	                xb=xb+1;
	            }
            }
        }
        if(map[xa][xb]==finish_element){
            printf("we are out!!!\n");
            break;
        }
        map[xa][xb]=player_element;

    }
    return 0;
}
#endif
