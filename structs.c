#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
	char name[10];
	char id[10];
	int age;
	int grades[5];
} Student;

typedef struct 
{
	int x;
	int y;
} Point;

typedef struct
{
	int *ar;
} Data;

void print_student(Student student);
void print_points(Point point[]);

int main()
{
	 Student Tom;

	Tom.age = 12;
	strcpy(Tom.name, "IsTom");	
	strcpy(Tom.id, "1234532");
	Tom.grades[0] = 5;

	Point p1 = {5, 10};	
	Point p2 = { .y = 1, .x = 2};
	print_student(Tom);
	printf("x = %d\t, y = %d\n", p2.x, p2.y);

	p1 = p2;
	Point points[4];
	for (int i = 0; i < 4; i++)
	{
		points[i].x = i;
		points[i].y = i*i;
	}
	print_points(points);

	Data x, y;
	x.ar = malloc(5 * sizeof(int));
	y.ar = malloc(5 * sizeof(int));

	x.ar[0] = 1;
	x.ar[1] = 2;
	x.ar[2] = 3;
	x.ar[3] = 4;
	x.ar[4] = 5;
	
	y.ar[0] = 8;
	y.ar[1] = 8;
	y.ar[2] = 8;
	y.ar[3] = 8;
	y.ar[4] = 8;
	
	x = y;	
	x.ar[3] = 20;
	printf("%d\n", y.ar[3]);
	for (int i = 0; i < 5; i++)
	{
		printf("y.ar[%d] = %d\n", i, y.ar[i]);
	}
	
	for (int i = 0; i < 5; i++)
	{
		printf("y.ar[%d] = %d\n", i, y.ar[i]);
	}
	//free(x.ar); 
//	x.ar = 0;
	//free(y.ar);
//	y.ar = 0;

	return 0;
}
void print_student(Student student)
{
	printf("age %d\n", student.age);
	puts(student.name);
	puts(student.id);
	printf("%d\n", student.grades[0]);

}
void print_points(Point point[])
{
	for(int i = 0; i < 4; i++)
	{
		printf("point[%d] = (%d,%d)\n", i, point[i].x, point[i].y);
		putchar('\n');
	}
}
