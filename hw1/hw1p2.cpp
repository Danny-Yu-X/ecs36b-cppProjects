
// 04/04/2024

// HW1 hw1p2.cpp [04/11/2024]
// main function

// 1. checking if argc == 5

// argv[] is an array of traditional C strings (char *)

// 2. convert argv[1] and argv[2] to two doubles using atof() lt1 and lg1
// 3. using lt1 and lg1 to create the GPS_DD object 1.

// 4. repeat steps 2 and 3 for argv[3] and argv[4], and
//    using lt2 and lg2 to create GPS_DD object 2.

// 5. double distance = GPS_obj1.distance(GPS_obj2);
// 6. print the distance in JSON format

#include <stdlib.h>
#include <stdio.h>
#include "GPS.h"

   // QUESTION 04/09/2024
   // Costco and Ikea both have an item X in stock, and for the same price.
   // which store should I go for the purchase (assuming we cannot do it online)?

int main(int argc, char *argv[]){
  if (argc < 5) {
  printf("Usage: %s <latA> <lonA> <latB> <lonB>\n", argv[0]);
  return 1;
  }
 //Parse latitude and longatude for point A and B from command line arguments.
  double lat1 = atof(argv[1]);
  double lon1 = atof(argv[2]);
  double lat2 = atof(argv[3]);
  double lon2 = atof(argv[4]);

 // Initialize GPS_DD objects for points A and B.
  GPS_DD location1(lat1, lon1);
  GPS_DD location2(lat2, lon2);

 // Calculate and print the distance between point A and B.
  double distance = location1.distance(location2);
  //printf("{distance : %lf miles}\n", distance);
  printf("{ \"distance\" : %lf }\n", distance);


  /*int i;

  for (i = 0; i < argc; i++)
    {
      double dd = atof(argv[i]);
      //printf("argv[%d] = %s %lf\n", i, argv[i], dd);
    }

  GPS_DD ggg;
  
  // int i = 1;
  // bracket initialization
  GPS_DD gps_IKEA_Sacramento { 38.58681641563053, -121.55296296578501  };
  GPS_DD gps_Home_Woodland   { 38.672215864622636, -121.72280111121437 };
  
  // different constructor: GPS_DD gps_Home_Woodland { };
  // GPS_DD gps_Home_Woodland(38.672215864622636, -121.72280111121437);
  
  // [class_name: GPS_DD]
  // [variable/object of GPDS_DD] gps_Home_Woodland
  // [initialization, construction] { }
  // ending ;

  // the following line will cause a compiler error with given GPS.h
  // gps_Home_Woodland is a GPS_DD object (what is the difference between class and object?
  
  // printf("the latitude is [%f]\n", gps_Home_Woodland.latitude);

  // void * gptr = (void *) &gps_Home_Woodland;
  // gptr = gptr + offset_lattidude;
  // printf("the latitude is [%f]\n", *((float *) gptr));
  // *((float *) gptr) = 20.0;
  
  // *** Question: what is the difference between compiler error and run-time error?
  
  GPS_DD gps_TLC_UCDavis   { 38.53874868013882,  -121.7542091083306 };
  
  double distance_1;
  double distance_2;

  // line 1
  distance_1 = gps_Home_Woodland.distance(gps_TLC_UCDavis);
  // distance_1 = (&gps_Home_Woodland)->distance(gps_TLC_UCDavis);
  //printf("distance between Costco and TLC = %10.6lf miles\n", distance_1);

  distance_1 = gps_Home_Woodland - ((GPS_DD) gps_TLC_UCDavis);
  // distance_1 = gps_Home_Woodland."-"(gps_TLC_UCDavis);
  //printf("distance between Costco and TLC = %10.6lf miles\n", distance_1);

  // distance_1 = ((GPS_DD&) gps_Home_Woodland) - ((GPS_DD&) gps_TLC_UCDavis);
  // distance_1 = gps_Home_Woodland."-"(gps_TLC_UCDavis);
  //printf("distance between Costco and TLC = %10.6lf miles\n", distance_1);

  printf("{distance : %lf miles}\n", distance_1);

  //printf("%lf\n", gps_Home_Woodland.getLatitude());
  //printf("%lf\n", gps_Home_Woodland.latitude);
  
  distance_2 = gps_IKEA_Sacramento.distance(gps_TLC_UCDavis);
  //printf("distance between IKEA   and TLC = %10.6lf miles\n", distance_2);

  // line 2
  distance_1 = gps_TLC_UCDavis.distance(gps_Home_Woodland);
  //printf("distance 1 = %lf miles\n", distance_1);

  // line 3
  // operator overloading
  // distance_1 = gps_Home_Woodland - gps_TLC_UCDavis;
  // distance_1 = gps_Home_Woodland.operator-(gps_TLC_UCDavis);
  
  //printf("distance 1 = %lf miles (operator overloading)\n", distance_1);

  distance_1 = gps_Home_Woodland - 3;
  // distance_1 = gps_Home_Woodland.operator-(gps_TLC_UCDavis);
  
  //printf("distance 1 = %lf miles (operator overloading)\n", distance_1);

  // try a bit more --
  GPS_DD gps_NYC {40.7, -73.95};
  GPS_DD gps_Sydney {-33.87, 151.213};

  // printf("distance from NYC to Davis is %lf miles\n", gps_NYC - gps_TLC_UCDavis);
  // printf("distance from Sydney to NYC is %lf miles\n", gps_NYC - gps_Sydney);
  */
  return 0;
}
