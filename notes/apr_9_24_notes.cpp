/*
Class
* Create a class called person to make many objects
* How and what object you would like to create
* When you call a construction, it is like malloc in C
** initializes the object
* Class name, object name
* member function; functin that belongs to a particular class
* object.member_function()
* class name, constructor

*GPS, test, makefile



*/

GPS_DD::xyz(void) {
    printf("Hello World\n");
}

double GPS_DD::distance
(GPS_DD another) {
    xyz();
    GPS_DD::xyz();
    this->xyz();
    return GeoDataSource_distance(this->latitude, this->longitude, another.getLatitude(), another.getLongitude(), 'M');
}

double
GPS_DD::operator-
(GPS_DD another)
{}