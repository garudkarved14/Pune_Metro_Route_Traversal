#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>
#include "creategraph.h"
#include "station.h"
#include "station_names.h"
#include "station_not_found.h"
#include "check_station.h"
#include "display_time.h"

#define V 91
#define MAX 91

int predecessor[100];
int reverse_path[100];
int correct_path[100];
char *color[100];
float adj[MAX][MAX];
float dist[MAX];

void Give_color_to_station() {
    char *color_names[] = {"Purple", "Aqua", "Yellow", "Green"};

    int ranges[][2] = {{0, 19}, {20, 48}, {49, 68}, {69, 90}};

    for (int color_index = 0; color_index < sizeof(ranges) / sizeof(ranges[0]); color_index++) {
        for (int i = ranges[color_index][0]; i <= ranges[color_index][1]; i++) {
            color[i] = color_names[color_index];
        }
    }
}


int Min_Distance_Node(float dist[V], bool visited[V])
{
    int min = INT_MAX;
    int min_node;

    for (int i = 0; i < V; i++)
    {
        if (!visited[i] && dist[i] < min)
        {
            min = dist[i];
            min_node = i;
        }
    }
    return min_node;
}

void dijkstra(int src, int destinationNumber)
{
    int min = INT_MAX;

    bool visited[V];
    
    for (int i = 0; i < V; i++)
    {
        predecessor[i] = 0;
        dist[i] = INT_MAX;
        visited[i] = false;
    }

    dist[src] = 0;

    for (int j = 0; j < V; j++)
    {
        int min_node = Min_Distance_Node(dist, visited);
        visited[min_node] = true;

        for (int k = 0; k < V; k++)
        {
            if (!visited[k] && dist[min_node] != INT_MAX && adj[min_node][k] && dist[min_node] + adj[min_node][k] < dist[k])
            {
                predecessor[k] = min_node;
                dist[k] = dist[min_node] + adj[min_node][k];
            }
        }
    }
}

void solve_conflict(int i)
{
    // if junction is swargate
    if (correct_path[i] == 12)
    {
        if (color[correct_path[i - 1]] != color[correct_path[i + 1]])
        {

            if (correct_path[i + 1] == 78 && color[correct_path[i - 1]] == "Purple" && color[correct_path[i + 1]] == "Green")
            {
                
                printf("\nYou have to change the route and board on a metro heading towards Kharadi\n");
            }

            else if (correct_path[i + 1] == 79 && color[correct_path[i - 1]] == "Purple" && color[correct_path[i + 1]] == "Green")
            {
                
                printf("\nYou have to change the route and board on a metro heading towards Khadakwasala Dam\n");
            }

            else if (correct_path[i + 1] == 11 && color[correct_path[i - 1]] == "Green" && color[correct_path[i + 1]] == "Purple")
            {
                
                printf("\nYou have to change the route and board on a metro heading towards PCMC\n");
            }

            else if (correct_path[i + 1] == 13 && color[correct_path[i - 1]] == "Green" && color[correct_path[i + 1]] == "Purple")
            {
              
                printf("\nYou have to change the route and board on a metro heading towards Katraj\n");
            }
        }
    }

    //if junction is shivajinagar
    else if (correct_path[i] == 9)
    {
        if (color[correct_path[i - 1]] != color[correct_path[i + 1]])
        {

            if (color[correct_path[i - 1]] == "Purple" && color[correct_path[i + 1]] == "Yellow")
            {
               
                printf("\nYou have to change the route and board on a metro heading towards Hinjewadi\n");
            }

            if (correct_path[i + 1] == 8 && color[correct_path[i - 1]] == "Yellow" && color[correct_path[i + 1]] == "Purple")
            {
                
                printf("\nYou have to change the route and board on a metro heading towards PCMC\n");
            }

            if (color[correct_path[i - 1]] == "Purple" && color[correct_path[i + 1]] == "Aqua" && correct_path[i + 1] == 28)
            {
                
                printf("\nYou have to change the route and board on a metro heading towards Chandani Chowk\n");
            }


        }
    }

    // if junction is Civil Court
    else if (correct_path[i] == 29)

    {

        if (correct_path[i + 1] == 10 && color[correct_path[i - 1]] == "Aqua" && color[correct_path[i + 1]] == "Purple")
        {
            
            printf("\nYou have to change the route and board on a metro heading towards Katraj\n");
        }

        

        else if (correct_path[i + 2] == 8 && color[correct_path[i - 1]] == "Aqua" && color[correct_path[i + 2]] == "Purple")
        {
            
            printf("\nYou have to change the route and  board on a metro heading towards PCMC\n");
        }

        else if (correct_path[i + 2] == 68 && color[correct_path[i - 1]] == "Aqua" && color[correct_path[i + 2]] == "Yellow")
        {
            
            printf("\nYou have to change the route and  board on a metro heading towards  Hinjewadi\n");
        }

        else if (color[correct_path[i - 1]] == "Purple" && correct_path[i + 1] == 28 && color[correct_path[i + 1]] == "Aqua")
        {
            
            printf("\nYou have to change the routeand  board on a metro heading towards  Chandani Chowk\n");
        }

        else if (color[correct_path[i - 1]] == "Purple" && correct_path[i + 1] == 30 && color[correct_path[i + 1]] == "Aqua")
        {

            printf("\nYou have to change the route and  board on a metro heading towards  Wagholi\n");
        }

        else if (color[correct_path[i - 1]] != "Purple" && (correct_path[i + 4] == 78 || correct_path[i + 4] == 79))
        {
            printf("\nYou have to change the route and board on metro heading towards Katraj\n");
        }

        else if (color[correct_path[i + 2]] == "Yellow")
        {
            printf("\nYou have to change the route and board on metro heading towards Hinjewadi\n");
        }
    }
}


void right_direction(int sourcenumber, int current_source, int next_to_current_source)
{
    if (current_source - next_to_current_source == -67)
    {
        printf("Board on a metro heading towards Khadakwasala\n\n");
    }
    else if (current_source - next_to_current_source == 20)
    {
        printf("Board on a metro heading towards PCMC \n\n");
    }

    else if (current_source - next_to_current_source == 19)
    {
        printf("Board on a metro heading towards Katraj\n\n");
    }
    else if (color[sourcenumber] == "Purple")
    {
        printf("Board on a metro heading towards Katraj\n\n");
    }
    else if (color[sourcenumber] == "Aqua")
    {
        printf("Board on a metro heading towards Wagholi\n\n");
    }
    else if (color[sourcenumber] == "Yellow")
    {
        printf("Board on a metro heading towards Civil Court\n\n");
    }
    else if (color[sourcenumber] == "Green")
    {
        printf("Board on a metro heading towards Khadakwasala\n\n");
    }
}

void left_direction(int sourcenumber, int current_source, int next_to_current_source)
{
    if (current_source - next_to_current_source == -20)
    {
        printf("Board on a metro heading towards Katraj\n\n");
    }

    else if (current_source - next_to_current_source == -66)
    {
        printf("Board on a metro heading towards Kharadi\n\n");
    }
    else if (color[sourcenumber] == "Purple")
    {
        printf("Board on a metro heading towards PCMC\n\n");
    }
    else if (color[sourcenumber] == "Aqua")
    {
        printf("Board on a metro heading towards Chandani Chowk\n\n");
    }
    else if (color[sourcenumber] == "Yellow")
    {
        printf("Board on a metro heading towards Hinjewadi\n\n");
    }
    else if (color[sourcenumber] == "Green")
    {
        printf("Board on a metro heading towards Kharadi\n\n");
    }
}

void findPath(int sourcenumber, int destinationnumber, char *sourcecolor)
{
    int count = 0;
    while (destinationnumber != sourcenumber)
    {

        reverse_path[count] = destinationnumber;
        int u = predecessor[destinationnumber];
        destinationnumber = u;
        count++;
    }

    reverse_path[count] = sourcenumber;
    count++;

    for (int j = 0, i = count; j <= count, i >= 0; j++, i--)
    {
        correct_path[j] = reverse_path[i];
    }

    int current_source = correct_path[1];
    int next_to_current_source = correct_path[2];

    display_time(sourcenumber,current_source,next_to_current_source);

   
    if (current_source - next_to_current_source == -1 || current_source - next_to_current_source == 20 || current_source - next_to_current_source == -67 || current_source - next_to_current_source == 19)
    {

        right_direction(sourcenumber, current_source, next_to_current_source);
    }

    if (current_source - next_to_current_source == 1 || current_source - next_to_current_source == -20 || current_source - next_to_current_source == -66)
    {
        left_direction(sourcenumber, current_source, next_to_current_source);
    }

    
    for (int i = 1; i <= count; i++)
    {

        if (correct_path[i] == 9 || correct_path[i] == 12 || correct_path[i] == 29)
        {   
            solve_conflict(i);
            numToName(correct_path[i]);
        }

        else if (color[correct_path[i]] == color[correct_path[i + 1]])
        {
            numToName(correct_path[i]);
        }
    }
}



int main()
{
    printf("\n\n\t\t\t\t\t PUNE METRO CONNECT\n\n\n");
    char sourceName[50];
    char destinationName[50];

    int sourceNumber, destinationNumber, manualNumber, item, manualNumber1;
    int manualcheck;
    float weight;
    char *sourceColor;
    char *destinationColor;

    Give_color_to_station();

    printf("Enter the Source Station Name:-");
    scanf(" %30[^\n]%*c", sourceName);

    //Get the source number from station function
    sourceNumber = station(sourceName);

    
    //If it did not matched with valid keywords in station func , it will return -50
    if (sourceNumber == -50)
    {
        //Then we provide that source name to StationNotFound function which assists us by 
        manualNumber = StationNotFound(sourceName);
        //If stationNotFound func returns -51 it means it was unable to match characters entered by user
        if (manualNumber == -51)
        {
            printf("No Stations Found!\n");
            exit(1);
        }
        else
        {
            printf("If your required station is listed then enter the search key:-");
            scanf("%d", &manualNumber);
            while (top != -1)
            {
                item = pop(); // Stack is used to avoid any wrong inputs
                if (manualNumber == item)
                {
                    sourceNumber = manualNumber;
                    top = -1;
                    manualcheck = -1;
                    break;
                }
            }
            if (manualcheck != -1)
            {
                printf("Program Terminated\n");
                exit(1);
            }
        }
    }
    //Get the source color from source number
    sourceColor = color[sourceNumber];

    printf("Enter the Destination Station Name:-");
    scanf(" %30[^\n]%*c", destinationName);

    destinationNumber = station(destinationName);
    if (destinationNumber == -50)
    {
        manualNumber1 = StationNotFound(destinationName);
        if (manualNumber1 == -51)
        {
            printf("No Stations Found!\n");
            exit(1);
        }
        else
        {
            printf("If your required station is listed then enter the search key:-");
            scanf("%d", &manualNumber1);
            while (top != -1)
            {
                item = pop(); // Stack is used to avoid any wrong inputs
                if (manualNumber1 == item)
                {
                    destinationNumber = manualNumber1;
                    top = -1;
                    manualcheck = -1;
                    break;
                }
            }
            if (manualcheck != -1)
            {
                printf("Program Terminated\n");
                exit(1);
            }
        }
    }

    //Get the destination color
    destinationColor = color[destinationNumber];

    // Find Route
    printf("\n");

    //Call the create graph function - it updates adjacency matrix with distance in km between src and dest - undirected graph used 
    createGraph();

    //Error handling - when src and dest are same
    if (destinationNumber == sourceNumber)
    {
        printf("Source and Destination Stations are the same\n");
        exit(1);
    }


    //Apply Dijkstra Algorithm on given source and destination
    dijkstra(sourceNumber, destinationNumber);


    findPath(sourceNumber, destinationNumber, sourceColor);
    weight = dist[destinationNumber];

    printf("\nAnd the you will reach your Final Destination\n");

    // display_time(sourceNumber, station1, station2);
    printf("\nYou have to travel %.2f Km\n", weight);
   
    if (weight <= 25)
    {
        printf("\nFare required:-Rs.%d \n", 10);
    }
    else
    {
        printf("Fare required:-Rs.%d\n", 20);
    }


    return 0;
}
