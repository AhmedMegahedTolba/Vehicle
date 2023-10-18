#include <stdio.h>
#include <stdlib.h>
#include"vehicle.h"

int main()
{
    vehicle_t car= {{VEHICLE_ENGINE_OFF,0,ENGINE_TEMPCONTROLLER_OFF},0,'R',0,AC_OFF};
    int car_order;



    while(1)
    {
        printf("\nEnter 1 to turn on vehicle engine \n");
        printf("Enter 2 to turn off vehicle engine\n");
        printf("Enter 3 to quit system\n");
        scanf("%d",&car_order);

        if(car_order==3)
        {
            return 0;
        }
        else if(car_order==2)
        {
            car.Engine.engine_status=VEHICLE_ENGINE_OFF;
            system("cls");
            printf("what you want to do\n");
            for(int i=0; i<1000000000; i++);
            system("cls");
            printf("ENGINE IS OFF\n");
        }
        else if(car_order==1)
        {
            car.Engine.engine_status=VEHICLE_ENGINE_ON;
            system("cls");
            printf("ENGINE IS ON\n");

        }
        else
        {
            system("cls");
            printf("wrong number enter number between[1-3]\n");
            for(int i=0; i<1000000000; i++);
            system("cls");
        }

        if(car.Engine.engine_status==VEHICLE_ENGINE_ON)
        {
            while(1)
            {
                system("cls");
                printf("ENGINE IS ON\n");
                Sensors_set_menu();
                scanf("%d",&car_order);
                if(car_order==1)
                {
                    car.Engine.engine_status=VEHICLE_ENGINE_OFF;
                    system("cls");
                    printf("what you want to do\n");
                    for(int i=0; i<1000000000; i++);
                    system("cls");
                    printf("ENGINE IS OFF\n");
                    break;
                }
                else if(car_order==2)
                {
                    system("cls");
                    printf("ENGINE IS ON\n");
                    printf("\nEnter the traffic light color\n");
                    scanf(" %c",&(car.TrafficLight_color));

                    if(car.TrafficLight_color=='G')
                    {
                        car.speed=100;
                    }
                    else if(car.TrafficLight_color=='O')
                    {
                        car.speed=30;
                    }
                    else if(car.TrafficLight_color=='R')
                    {
                        car.speed=0;
                    }
                    else
                    {
                        system("cls");
                        printf("wrong number enter char between[G-R-O]\n");
                        for(int i=0; i<1000000000; i++);
                        system("cls");
                    }

                }
                else if(car_order==3)
                {
                    system("cls");
                    printf("ENGINE IS ON\n");
                    printf("Enter room temp\n");
                    scanf("%d",&(car.room_temp));
                    if(car.room_temp<10 || car.room_temp>30)
                    {
                        car.room_temp=20;
                        car.Ac_status=AC_ON;
                    }
                    else
                    {
                        car.Ac_status=AC_OFF;
                    }

                }
                else if(car_order==4)
                {
                    system("cls");
                    printf("ENGINE IS ON\n");
                    printf("Enter engine temp\n");
                    scanf("%d",&(car.Engine.Engine_Temp));
                    if(car.Engine.Engine_Temp<100 || car.Engine.Engine_Temp>150)
                    {
                        car.Engine.Engine_tempController=ENGINE_TEMPCONTROLLER_ON;
                        car.Engine.Engine_Temp=125;
                    }
                    else
                    {
                        car.Engine.Engine_tempController=ENGINE_TEMPCONTROLLER_OFF;

                    }

                }
                else if(car_order==5)
                {
                    break;

                }

            }


            if(car.speed==30)
            {
                car.Ac_status=AC_ON;
                car.room_temp=((5*car.room_temp)/4)+1;
                car.Engine.Engine_tempController=ENGINE_TEMPCONTROLLER_ON;
                car.Engine.Engine_Temp=((5*car.Engine.Engine_Temp)/4)+1;

            }



        }
        if(car.Engine.engine_status==VEHICLE_ENGINE_ON)
        {
            system("cls");
            vehicle_state(&car);
            for(int i=0; i<2000000000; i++);
            system("cls");
        }
    }





    return 0;
}
