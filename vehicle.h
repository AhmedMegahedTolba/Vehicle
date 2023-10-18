typedef enum{
  VEHICLE_ENGINE_OFF,
  VEHICLE_ENGINE_ON

}Engine_Status_t;


typedef enum{
  AC_OFF,
  AC_ON

}AC_Status_t;

typedef enum{
  ENGINE_TEMPCONTROLLER_OFF,
  ENGINE_TEMPCONTROLLER_ON

}Engine_tempController_status_t;


typedef struct{
  Engine_Status_t engine_status;
  unsigned int Engine_Temp;
  Engine_tempController_status_t  Engine_tempController;

}Engine_t;

typedef struct{
  Engine_t Engine;
  unsigned int room_temp;
  char TrafficLight_color;
  int speed;
  AC_Status_t Ac_status;


}vehicle_t;

