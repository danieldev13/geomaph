#ifndef HAVERSINE_H_
#define HAVERSINE_H_

typedef struct Position{
	double latitude;
	double longitude;
} Position;

typedef enum DistanceUnit {
	KILOMETERS = 1,
	MILES =2
} DistanceUnit;


extern double distance(Position po1, Position pos2, DistanceUnit unit);
extern double to_radians(double value);

#endif
