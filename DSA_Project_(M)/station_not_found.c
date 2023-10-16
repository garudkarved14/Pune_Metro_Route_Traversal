// station_not_found.c

#include "station_not_found.h"
#include "check_station.h"
#include <string.h>
#include <stdio.h>

int top = -1;
int stacksize = 100;
int stack[50];

void push(int data) {
    if (top == stacksize - 1) {
        printf("Stack Overflow\n");
    }
    top = top + 1;
    stack[top] = data;
}

int pop() {
    int data;
    if (top == -1) {
        printf("Stack underflow\n");
    }
    data = stack[top];
    top = top - 1;
    return data;
}

int StationNotFound(char *Name) 
{
    int i, data, j = 0;

    printf("Did you mean:-");
    // Purple line starts
    i = Check_Station(Name, "PCMC");
    if (i == 1)
    {
        printf("PCMC  (search key)->0\n");
        j = 1;

        data = 0;
        push(data);
    }

    i = Check_Station(Name, "Sant Tukaram Nagar");
    if (i == 1)
    {
        printf("Sant Tukaram Nagar (search key)->1\n");
        j = 1;

        data = 1;
        push(data);
    }

    i = Check_Station(Name, "Bhosari");
    if (i == 1)
    {
        printf("Bhosari(search key)->2\n");
       
        j = 1;

        data = 2;
        push(data);
    }

    i = Check_Station(Name, "Nashik Phata");
    if (i == 1)
    {
        printf("Nashik Phata(search key)->2\n");
        j = 1;

        data = 2;
        push(data);
    }

    i = Check_Station(Name, "Kasarwadi");
    if (i == 1)
    {
        printf("Kasarwadi  (search key)->3\n");
        j = 1;

        data = 3;
        push(data);
    }

    i = Check_Station(Name, "Phugewadi");
    if (i == 1)
    {
        printf("Phugewadi  (search key)->4\n");
        j = 1;

        data = 4;
        push(data);
    }

    i = Check_Station(Name, "Dapodi");
    if (i == 1)
    {
        printf("Dapodi (search key)->5\n");
        j = 1;

        data = 5;
        push(data);
    }

    i = Check_Station(Name, "Bopodi");
    if (i == 1)
    {
        printf("Bopodi  (search key)->6\n");
        j = 1;

        data = 6;
        push(data);
    }

    i = Check_Station(Name, "Khadaki");
    if (i == 1)
    {
        printf("Khadaki  (search key)->7\n");
        j = 1;

        data = 7;
        push(data);
    }

    i = Check_Station(Name, "Range Hill");
    if (i == 1)
    {
        printf("Range Hill  (search key)->8\n");
        j = 1;

        data = 8;
        push(data);
    }

    i = Check_Station(Name, "Shivaji Nagar");
    if (i == 1)
    {
        printf("Shivaji Nagar  (search key)->9\n");
        j = 1;

        data = 9;
        push(data);
    }

    i = Check_Station(Name, "Budhwar Peth");
    if (i == 1)
    {
        printf("Budhwar Peth  (search key)->10\n");
        j = 1;

        data = 10;
        push(data);
    }

    i = Check_Station(Name, "Mandai");
    if (i == 1)
    {
        printf("Mandai (search key)->11\n");
        j = 1;

        data = 11;
        push(data);
    }

    i = Check_Station(Name, "Swargate");
    if (i == 1)
    {
        printf("Swargate  (search key)->12\n");
        j = 1;

        data = 12;
        push(data);
    }

    i = Check_Station(Name, "Laxmi Narayan Talkies");
    if (i == 1)
    {
        printf("Laxmi Narayan Talkies  (search key)->13\n");
        j = 1;

        data = 13;
        push(data);
    }

    i = Check_Station(Name, "Bhapkar Petrol Pump");
    if (i == 1)
    {
        printf("Bhapkar Petrol Pump  (search key)->14\n");
        j = 1;

        data = 14;
        push(data);
    }

    i = Check_Station(Name, "Padmavati");
    if (i == 1)
    {
        printf("Padmavati  (search key)->15\n");
        j = 1;

        data = 15;
        push(data);
    }

    i = Check_Station(Name, "Balaji Nagar");
    if (i == 1)
    {
        printf("Balaji Nagar  (search key)-> 16\n");
        j = 1;

        data = 16;
        push(data);
    }

    i = Check_Station(Name, "Bharti Vidyapeeth Gate");
    if (i == 1)
    {
        printf("Bharti Vidyapeeth Gate  (search key)-> 17\n");
        j = 1;

        data = 17;
        push(data);
    }

    i = Check_Station(Name, "Sarpodyan");
    if (i == 1)
    {
        printf("Sarpodyan  (search key)-> 18\n");
        j = 1;

        data = 18;
        push(data);
    }

    i = Check_Station(Name, "Katraj");
    if (i == 1)
    {
        printf("Katraj  (search key)-> 19\n");
        j = 1;

        data = 19;
        push(data);
    }

    // PURPLE LINE ENDS

    // Aqua line starts
    i = Check_Station(Name, "Chandani Chowk");
    if (i == 1)
    {
        printf("Chandani Chowk (search key)->20\n");
        j = 1;

        data = 20;
        push(data);
    }

    i = Check_Station(Name, "Vanaz");
    if (i == 1)
    {
        printf("Vanaz (search key)->21\n");
        j = 1;

        data = 21;
        push(data);
    }

    i = Check_Station(Name, "Anand Nagar");
    if (i == 1)
    {
        printf("Anand Nagar  (search key)->22\n");
        j = 1;

        data = 22;
        push(data);
    }

    i = Check_Station(Name, "Ideal colony");
    if (i == 1)
    {
        printf("Ideal colony  (search key)->23\n");
        j = 1;

        data = 23;
        push(data);
    }

    i = Check_Station(Name, "Nal Stop");
    if (i == 1)
    {
        printf("Nal Stop  (search key)->24\n");
        j = 1;

        data = 24;
        push(data);
    }

    i = Check_Station(Name, "Garware College");
    if (i == 1)
    {
        printf("Garware College  (search key)->25\n");
        j = 1;

        data = 25;
        push(data);
    }

    i = Check_Station(Name, "Deccan Gymkhana");
    if (i == 1)
    {
        printf("Deccan Gymkhana  (search key)->26\n");
        j = 1;

        data = 26;
        push(data);
    }

    i = Check_Station(Name, "Chhatrapati Sambhaji Udyan");
    if (i == 1)
    {
        printf("Chhatrapati Sambhaji Udyan (search key)->27\n");
        j = 1;

        data = 27;
        push(data);
    }

    i = Check_Station(Name, "PMC");
    if (i == 1)
    {
        printf("PMC (search key)->28\n");
        j = 1;

        data = 28;
        push(data);
    }

    i = Check_Station(Name, "Civil Court");
    if (i == 1)
    {
        printf("Civil Court  (search key)->29\n");
        j = 1;

        data = 29;
        push(data);
    }

    i = Check_Station(Name, "Mangalwar Peth");
    if (i == 1)
    {
        printf("Mangalwar Peth  (search key)->30\n");
        j = 1;

        data = 30;
        push(data);
    }

    i = Check_Station(Name, "Pune Railway Station");
    if (i == 1)
    {
        printf("Pune Railway Station  (search key)->31\n");
        j = 1;

        data = 31;
        push(data);
    }

    i = Check_Station(Name, "Ruby Hall Clinic");
    if (i == 1)
    {
        printf("Ruby Hall Clinic  (search key)->32\n");
        j = 1;

        data = 32;
        push(data);
    }

    i = Check_Station(Name, "Bund Garden");
    if (i == 1)
    {
        printf("Bund Garden  (search key)->33\n");
        j = 1;

        data = 33;
        push(data);
    }

    i = Check_Station(Name, "Yerawada");
    if (i == 1)
    {
        printf("Yerawada  (search key)->34\n");
        j = 1;

        data = 34;
        push(data);
    }

    i = Check_Station(Name, "Kalayani Nagar");
    if (i == 1)
    {
        printf("Kalayani Nagar  (search key)->35\n");
        j = 1;

        data = 35;
        push(data);
    }

    i = Check_Station(Name, "Ramwadi");
    if (i == 1)
    {
        printf("Ramwadi (search key)->36\n");
        j = 1;

        data = 36;
        push(data);
    }

    i = Check_Station(Name, "Wadgaon Sheri Phata");
    if (i == 1)
    {
        printf("Wadgaon Sheri Phata (search key)->37\n");

        j = 1;

        data = 37;
        push(data);
    }

    i = Check_Station(Name, "Viman Nagar Corner");
    if (i == 1)
    {
        printf("Viman Nagar Corner  (search key)->38\n");
        j = 1;

        data = 38;
        push(data);
    }

    i = Check_Station(Name, "Tata Guardroom");
    if (i == 1)
    {
        printf("Tata Guardroom  (search key)->39\n");
        j = 1;

        data = 39;
        push(data);
    }

    i = Check_Station(Name, "Kharadi Bypass");
    if (i == 1)
    {
        printf("Kharadi Bypass (search key)->40\n");
        j = 1;

        data = 40;
        push(data);
    }

    i = Check_Station(Name, "Janak Baba Dargha");
    if (i == 1)
    {
        printf("Janak Baba Dargha  (search key)->41\n");
        j = 1;

        data = 41;
        push(data);
    }

    i = Check_Station(Name, "Aaple Ghar");
    if (i == 1)
    {
        printf("Aaple Ghar (search key)->42\n");
        j = 1;

        data = 42;
        push(data);
    }

    i = Check_Station(Name, "Khandve Nagar");
    if (i == 1)
    {
        printf("Khandve Nagar  (search key)->43\n");
        j = 1;

        data = 43;
        push(data);
    }

    i = Check_Station(Name, "Ubale Nagar");
    if (i == 1)
    {
        printf("Ubale Nagar (search key)->44\n");
        j = 1;

        data = 44;
        push(data);
    }

    i = Check_Station(Name, "Godown Talera");
    if (i == 1)
    {
        printf("Godown Talera (search key)->45\n");
        j = 1;

        data = 45;
        push(data);
    }

    i = Check_Station(Name, "Soyrik Mangal Karyalay");
    if (i == 1)
    {
        printf("Soyrik Mangal Karyalay  (search key)->46\n");
        j = 1;

        data = 46;
        push(data);
    }

    i = Check_Station(Name, "Kamal Bagh");
    if (i == 1)
    {
        printf("Kamal Bagh  (search key)->47\n");
        j = 1;

        data = 47;
        push(data);
    }

    i = Check_Station(Name, "Wagholi");
    if (i == 1)
    {
        printf("Wagholi  (search key)->48\n");
        j = 1;

        data = 48;
        push(data);
    }
    // Aqua line ends

    // LINE 3- Hinjewadi to Shivajinagar

    i = Check_Station(Name, "Metropolic Circle");
    if (i == 1)
    {
        printf("Metropolic Circle (search key)->49\n");
        j = 1;

        data = 49;
        push(data);
    }

    i = Check_Station(Name, "Embassy quadron business park");
    if (i == 1)
    {
        printf("Embassy quadron business park  (search key)->50\n");
        j = 1;

        data = 50;
        push(data);
    }

    i = Check_Station(Name, "Dohler");
    if (i == 1)
    {
        printf("Dohler  (search key)->51\n");
        j = 1;

        data = 51;
        push(data);
    }

    i = Check_Station(Name, "Infosys Phase 2");
    if (i == 1)
    {
        printf("Infosys Phase 2 (search key)->52\n");
        j = 1;

        data = 52;
        push(data);
    }

    i = Check_Station(Name, "Pall India");
    if (i == 1)
    {
        printf("Pall India (search key)->53\n");
        j = 1;

        data = 53;
        push(data);
    }

    i = Check_Station(Name, "Shivaji Chowk");
    if (i == 1)
    {
        printf("Shivaji Chowk (search key)->54\n");
        j = 1;

        data = 54;
        push(data);
    }

    i = Check_Station(Name, "Hinjewadi");
    if (i == 1)
    {
        printf("Hinjewadi (search key)->55\n");
        j = 1;

        data = 55;
        push(data);
    }

    i = Check_Station(Name, "Wakad Chowk");
    if (i == 1)
    {
        printf("Wakad Chowk  (search key)->56\n");
        j = 1;

        data = 56;
        push(data);
    }

    i = Check_Station(Name, "Balewadi Stadium");
    if (i == 1)
    {
        printf("Balewadi Stadium (search key)->57\n");
        j = 1;

        data = 57;
        push(data);
    }

    i = Check_Station(Name, "NICMAR");
    if (i == 1)
    {
        printf("NICMAR  (search key)->58\n");
        j = 1;

        data = 58;
        push(data);
    }

    i = Check_Station(Name, "Ram Nagar");
    if (i == 1)
    {
        printf("Ram Nagar (search key)->59\n");
        j = 1;

        data = 59;
        push(data);
    }

    i = Check_Station(Name, "Laxmi Nagar");
    if (i == 1)
    {
        printf("Laxmi Nagar (search key)->60\n");
        j = 1;

        data = 60;
        push(data);
    }

    i = Check_Station(Name, "Balewadi Phata");
    if (i == 1)
    {
        printf("Balewadi Phata (search key)->61\n");
        j = 1;

        data = 61;
        push(data);
    }

    i = Check_Station(Name, "Banergaon");
    if (i == 1)
    {
        printf("Banergaon  (search key)->62\n");
        j = 1;

        data = 62;
        push(data);
    }

    i = Check_Station(Name, "Baner");
    if (i == 1)
    {
        printf("Baner (search key)->63\n");
        j = 1;

        data = 63;
        push(data);
    }

    i = Check_Station(Name, "Krushi Anusadhan");
    if (i == 1)
    {
        printf("Krushi Anusadhan (search key)->64\n");
        j = 1;

        data = 64;
        push(data);
    }

    i = Check_Station(Name, "Sakal Nagar");
    if (i == 1)
    {
        printf("Sakal Nagar  (search key)->65\n");
        j = 1;

        data = 65;
        push(data);
    }

    i = Check_Station(Name, "University");
    if (i == 1)
    {
        printf("University (search key)->66\n");
        j = 1;

        data = 66;
        push(data);
    }

    i = Check_Station(Name, "RBI");
    if (i == 1)
    {
        printf("RBI  (search key)->67\n");
        j = 1;

        data = 67;
        push(data);
    }

    i = Check_Station(Name, "Agriculture College");
    if (i == 1)
    {
        printf("Agriculture College  (search key)->68\n");
        j = 1;

        data = 68;
        push(data);
    }

    // Line 3 ends

    // Line 4
    i = Check_Station(Name, "Kharadi Chowk");
    if (i == 1)
    {
        printf("Kharadi Chowk  (search key)->69\n");
        j = 1;

        data = 69;
        push(data);
    }

    i = Check_Station(Name, "Colombia Asia Hospital");
    if (i == 1)
    {
        printf("Colombia Asia Hospital  (search key)->70\n");
        j = 1;

        data = 70;
        push(data);
    }

    i = Check_Station(Name, "Mundhawa Chowk");
    if (i == 1)
    {
        printf("Mundhawa Chowk  (search key)->71\n");
        j = 1;

        data = 71;
        push(data);
    }

    i = Check_Station(Name, "Spring Valley Apartment");
    if (i == 1)
    {
        printf("Spring Valley Apartment  (search key)->72\n");
        j = 1;

        data = 72;
        push(data);
    }

    i = Check_Station(Name, "Magarpatta Manapa Shala");
    if (i == 1)
    {
        printf("Magarpatta Manapa Shala  (search key)->73\n");
        j = 1;

        data = 73;
        push(data);
    }

    i = Check_Station(Name, "Tilekar Vaoti");
    if (i == 1)
    {
        printf("Tilekar Vaoti  (search key)->74\n");
        j = 1;

        data = 74;
        push(data);
    }

    i = Check_Station(Name, "Hadapsar MIDC");
    if (i == 1)
    {
        printf("Hadapsar MIDC  (search key)->75\n");
        j = 1;

        data = 75;
        push(data);
    }

    i = Check_Station(Name, "Fatima Nagar");
    if (i == 1)
    {
        printf("Fatima Nagar  (search key)->76\n");
        j = 1;

        data = 76;
        push(data);
    }

    i = Check_Station(Name, "Race Course");
    if (i == 1)
    {
        printf("Race Course  (search key)->77\n");
        j = 1;

        data = 77;
        push(data);
    }

    i = Check_Station(Name, "AFMC");
    if (i == 1)
    {
        printf("AFMC  (search key)->77\n");
        j = 1;

        data = 77;
        push(data);
    }

    i = Check_Station(Name, "Golibar Maidan");
    if (i == 1)
    {
        printf("Golibar Maidan  (search key)->78\n");
        j = 1;

        data = 78;
        push(data);
    }

    i = Check_Station(Name, "Saras Baug");
    if (i == 1)
    {
        printf("Saras Baug  (search key)->79\n");
        j = 1;

        data = 79;
        push(data);
    }

    i = Check_Station(Name, "Dandekar Pool");
    if (i == 1)
    {
        printf("Dandekar Pool  (search key)->80\n");
        j = 1;

        data = 80;
        push(data);
    }

    i = Check_Station(Name, "Ganesh Mala");
    if (i == 1)
    {
        printf("Ganesh Mala  (search key)->81\n");
        j = 1;

        data = 81;
        push(data);
    }

    i = Check_Station(Name, "Rajaram Pul");
    if (i == 1)
    {
        printf("Rajaram Pul  (search key)->82\n");
        j = 1;

        data = 82;
        push(data);
    }

    i = Check_Station(Name, "Manik Baug");
    if (i == 1)
    {
        printf("Manik Baug  (search key)->83\n");
        j = 1;

        data = 83;
        push(data);
    }

    i = Check_Station(Name, "Vadagaon Khurd Phata");
    if (i == 1)
    {
        printf("Vadagaon Khurd Phata  (search key)->84\n");
        j = 1;

        data = 84;
        push(data);
    }

    i = Check_Station(Name, "Patil Colony");
    if (i == 1)
    {
        printf("Patil Colony  (search key)->85\n");
        j = 1;

        data = 85;
        push(data);
    }

    i = Check_Station(Name, "Dhayari Phata");
    if (i == 1)
    {
        printf("Dhayari Phata  (search key)->86\n");
        j = 1;

        data = 86;
        push(data);
    }

    i = Check_Station(Name, "Lagadmala");
    if (i == 1)
    {
        printf("Lagadmala  (search key)->87\n");
        j = 1;

        data = 87;
        push(data);
    }

    i = Check_Station(Name, "Mate Pat");
    if (i == 1)
    {
        printf("Mate Pat  (search key)->88\n");
        j = 1;

        data = 88;
        push(data);
    }

    i = Check_Station(Name, "Nanded City");
    if (i == 1)
    {
        printf("Nanded City  (search key)->89\n");
        j = 1;

        data = 89;
        push(data);
    }

    i = Check_Station(Name, "Khadakwasala");
    if (i == 1)
    {
        printf("Khadakwasala  (search key)->90\n");
        j = 1;

        data = 90;
        push(data);
    }

    if (j == 1)
    {
        return 1;
    }
    else if (j == 0)
    {
        return -51;
    }
    // Line 4 ends
}

