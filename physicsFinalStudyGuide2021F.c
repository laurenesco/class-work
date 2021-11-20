#include <stdio.h>
#include <stdlib.h> //for rand()

void test_one(void);
void test_two(void);
void test_three(void);
void test_four(void);
void random_question(void);
void specific_topic(void);

int main()
{
	srand((unsigned) time (NULL));
	int input;
	
	printf("\t\t***Welcome to the Physics I Study Guide***\n"
	"Press 1 for a random question from test 1.\n"
	"Press 2 for a random question from test 2.\n"
	"Press 3 for a random question from test 3.\n"
	"Press 4 for a random question from test 4.\n"
	"Press 5 for a random question from any section.\n"
	"If you are looking for a more specific topic, press 0.");
	scanf("%d", &input);
	
		
	switch(input)
	{
		case 1:
				break;
		case 2:
				break;
		case 3: test_three();
				break;
		case 4:
				break;
		case 5:
				break;
		case 0:
				break;
	
	return 0;
}

void test_one(void)
{
	
void test_two(void)

void test_three(void)
{
	int selection = rand()%17+1;
	switch(selection)
	{
		case 1: printf("A wheel starts from rest and rotates with constant angular"
		   " acceleration to an angular speed of 12 rad/s in 3 seconds,"
		   " Find the magnitude of the angular acceleration of the wheel."
		   " Find the angle in radians through which it rotates in this time.");
				break;
		case 2: printf("A circular shaped object with an inner radius of 12 cm and an outer radius of 25 cm."
			" There are three forces (acting perpendicular to the axis of rotation) whose magnitudes"
			" are 11N, 24N, and 14N acting on the object, as shown in the figure. The force of "
			" magnitude 24N is 31 degrees below the horizontal facing SW on the smaller disc,"
			" on the bigger disc, 11N is facing the eastern horizontal, and 14 N is facing south"
			". Find the magnitude of the net torque"
			" on the wheel about the axle through the center of the object.");
				break;
		case 3: "Four particles are connected by rigid rods of negligible mass. The vertical rod has a mass of 40 kg on the top of it, "
		" and a mass of 40 kg on the bottom of it. It is 10 m long. The horizontal rod has a length of 20 m, and a mass of 20 kg on each side."
		" A: What is th emoment of inertia about the x-axis?"
		" B: What is the moment of inertia about the y-axis? C: What if the system rotates around the z-axis at an angular velocuty of 2 "
		"rad/s, what is the kinetic energy of the system relative to the z- axis?");
				break;
		case 4: " A playground merry-go-round of radius 2 m has a momen tof inertia 250 kgm^2 and is rotating at 10 rev/min about a frictionless "
		" vertical axle. Facing the axle, a 25 kg child hops onto the merry-go-round, and manages to sit down on the edge. What is the new "
		"angular speed (in rad/s) of the merry-go-round? What is the change in kinetic energy of the merry go round?");
				break;
		case 5:
				break;
		case 6:
				break;
		case 7: 
				break;
		case 8:
				break;
		case 9: 
				break;
		case 10:
				 break;
		case 11:
				 break;
		case 12:
				 break;
		case 13: 
				 break;
		case 14:
				 break;
		case 15: 
				 break;
		case 16:
				 break;
		case 17:
				 break;
		
void test_four(void)

void random_question(void)

void specific_topic(void)
