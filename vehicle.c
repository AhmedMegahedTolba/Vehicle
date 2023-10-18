#include"vehicle.h"

void Sensors_set_menu(void)
{
    printf("\nEnter 1 to turn off vehicle engine \n");
    printf("Enter 2 to set the traffic light color\n");
    printf("Enter 3 Set the room temperature\n");
    printf("Enter 4 Set the engine temperature\n");
    printf("Enter 5 to close Mneu\n");
}
void vehicle_state(vehicle_t*car)
{
    if(car->Engine.engine_status==VEHICLE_ENGINE_ON)
    {
        printf("ENGINE IS ON\n");
    }
    else
    {
        printf("ENGINE IS OFF\n");
    }

    if(car->Ac_status==AC_ON)
    {
        printf("AC IS ON\n");

    }
    else
    {
        printf("AC IS OFF\n");
    }
    printf("SPEED IS %d\n",car->speed);
    printf("ROOM TEMP IS %d\n",car->room_temp);
    if(car->Engine.Engine_tempController==ENGINE_TEMPCONTROLLER_ON)
    {
        printf("ENGINE TEMPCONTROLLER IS ON\n");
    }
    else
    {
        printf("ENGINE TEMPCONTROLLER IS OFF\n");
    }
    printf("ENGINE TEMP IS %d\n",car->Engine.Engine_Temp);
}
