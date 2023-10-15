#include "station.h"
#include <strings.h> 

int station(char Name[50])
{
    int i;
    // Purple line starts
    i = strcasecmp(Name, "PCMC");
    if (i == 0)
        return 0;

    i = strcasecmp(Name, "Sant Tukaram Nagar");
    if (i == 0)
    {
        return 1;
    }

    i = strcasecmp(Name, "Bhosari");
    if (i == 0)
    {
        return 2;
    }

    i = strcasecmp(Name, "Nashik Phata");
    if (i == 0)
        return 2;

    i = strcasecmp(Name, "Kasarwadi");
    if (i == 0)
        return 3;

    i = strcasecmp(Name, "Phugewadi");
    if (i == 0)
        return 4;
    i = strcasecmp(Name, "Dapodi");
    if (i == 0)
        return 5;
    i = strcasecmp(Name, "Bopodi");
    if (i == 0)
        return 6;

    i = strcasecmp(Name, "Khadaki");
    if (i == 0)
        return 7;

    i = strcasecmp(Name, "Range Hill");
    if (i == 0)
        return 8;

    i = strcasecmp(Name, "Shivaji Nagar");
    if (i == 0)
        return 9;

    i = strcasecmp(Name, "Budhwar Peth");
    if (i == 0)
        return 10;

    i = strcasecmp(Name, "Mandai");
    if (i == 0)
        return 11;

    i = strcasecmp(Name, "Swargate");
    if (i == 0)
        return 12;

    i = strcasecmp(Name, "Laxmi Narayan Talkies");
    if (i == 0)
        return 13;

    i = strcasecmp(Name, "Bhapkar Petrol Pump");
    if (i == 0)
        return 14;

    i = strcasecmp(Name, "Padmavati");
    if (i == 0)
        return 15;

    i = strcasecmp(Name, "Balaji Nagar");
    if (i == 0)
        return 16;

    i = strcasecmp(Name, "Bharti Vidyapeeth gate");
    if (i == 0)
        return 17;

    i = strcasecmp(Name, "Sarpodyan");
    if (i == 0)
        return 18;

    i = strcasecmp(Name, "Katraj");
    if (i == 0)
        return 19;

    // PURPLE LINE ENDS

    // Aqua line starts
    i = strcasecmp(Name, "Chandani Chowk");
    if (i == 0)
        return 20;

    i = strcasecmp(Name, "Vanaz");
    if (i == 0)
        return 21;

    i = strcasecmp(Name, "Anand Nagar");
    if (i == 0)
        return 22;

    i = strcasecmp(Name, "Ideal colony");
    if (i == 0)
        return 23;

    i = strcasecmp(Name, "Nal Stop");
    if (i == 0)
        return 24;

    i = strcasecmp(Name, "Garware College");
    if (i == 0)
        return 25;

    i = strcasecmp(Name, "Deccan Gymkhana");
    if (i == 0)
        return 26;

    i = strcasecmp(Name, "Chhatrapati Sambhaji Udyan");
    if (i == 0)
        return 27;

    i = strcasecmp(Name, "PMC");
    if (i == 0)
        return 28;

    i = strcasecmp(Name, "Civil Court"); //         Junction
    if (i == 0)
        return 29;

    i = strcasecmp(Name, "Mangalwar Peth");
    if (i == 0)
        return 30;

    i = strcasecmp(Name, "Pune Railway Station");
    if (i == 0)
        return 31;

    i = strcasecmp(Name, "Ruby Hall Clinic");
    if (i == 0)
        return 32;

    i = strcasecmp(Name, "Bund Garden");
    if (i == 0)
        return 33;

    i = strcasecmp(Name, "Yerawada");
    if (i == 0)
        return 34;

    i = strcasecmp(Name, "Kalayani Nagar");
    if (i == 0)
        return 35;

    i = strcasecmp(Name, "Ramwadi");
    if (i == 0)
        return 36;

    i = strcasecmp(Name, "Wadgaon Sheri Phata");
    if (i == 0)
        return 37;

    i = strcasecmp(Name, "Viman Nagar Corner");
    if (i == 0)
        return 38;

    i = strcasecmp(Name, "Tata Guardroom");
    if (i == 0)
        return 39;
    i = strcasecmp(Name, "Kharadi Bypass");
    if (i == 0)
        return 40;
    i = strcasecmp(Name, "Janak Baba Dargha");
    if (i == 0)
        return 41;
    i = strcasecmp(Name, "Aaple Ghar");
    if (i == 0)
        return 42;
    i = strcasecmp(Name, "Khandve Nagar");
    if (i == 0)
        return 43;

    i = strcasecmp(Name, "Ubale Nagar");
    if (i == 0)
        return 44;

    i = strcasecmp(Name, "Godown Talera");
    if (i == 0)
        return 45;

    i = strcasecmp(Name, "Soyrik Mangal Karyalay");
    if (i == 0)
        return 46;

    i = strcasecmp(Name, "Kamal Bagh");
    if (i == 0)
        return 47;

    i = strcasecmp(Name, "Wagholi");
    if (i == 0)
        return 48;

    // Aqua line ends

    // Line 3-HINJEWADI TO SHIVAJI NAGAR

    i = strcasecmp(Name, "Metropolic Circle");
    if (i == 0)
        return 49;

    i = strcasecmp(Name, "Embassy quadron business park");
    if (i == 0)
        return 50;

    i = strcasecmp(Name, "Dohler");
    if (i == 0)
        return 51;

    i = strcasecmp(Name, "Infosys Phase 2");
    if (i == 0)
        return 52;

    i = strcasecmp(Name, "Pall India");
    if (i == 0)
        return 53;

    i = strcasecmp(Name, "Shivaji Chowk");
    if (i == 0)
        return 54;

    i = strcasecmp(Name, "Hinjewadi");
    if (i == 0)
        return 55;

    i = strcasecmp(Name, "Wakad Chowk");
    if (i == 0)
        return 56;

    i = strcasecmp(Name, "Balewadi Stadium");
    if (i == 0)
        return 57;

    i = strcasecmp(Name, "NICMAR");
    if (i == 0)
        return 58;

    i = strcasecmp(Name, "Ram Nagar");
    if (i == 0)
        return 59;

    i = strcasecmp(Name, "Laxmi Nagar");
    if (i == 0)
        return 60;

    i = strcasecmp(Name, "Balewadi Phata");
    if (i == 0)
        return 61;

    i = strcasecmp(Name, "Banergaon");
    if (i == 0)
        return 62;

    i = strcasecmp(Name, "Baner");
    if (i == 0)
        return 63;

    i = strcasecmp(Name, "Krushi Anusadhan");
    if (i == 0)
        return 64;

    i = strcasecmp(Name, "Sakal Nagar");
    if (i == 0)
        return 65;

    i = strcasecmp(Name, "University");
    if (i == 0)
        return 66;

    i = strcasecmp(Name, "RBI");
    if (i == 0)
        return 67;

    i = strcasecmp(Name, "Agriculture College");
    if (i == 0)
        return 68;

    // Line 3 ends

    // Line 4 starts
    i = strcasecmp(Name, "Kharadi Chowk");
    if (i == 0)
        return 69;

    i = strcasecmp(Name, "Colombia Asia Hospital");
    if (i == 0)
        return 70;

    i = strcasecmp(Name, "Mundhawa Chowk");
    if (i == 0)
        return 71;

    i = strcasecmp(Name, "Spring Valley Apartment");
    if (i == 0)
        return 72;

    i = strcasecmp(Name, "Magarpatta Manapa Shala");
    if (i == 0)
        return 73;

    i = strcasecmp(Name, "Tilekar Vaoti");
    if (i == 0)
        return 74;

    i = strcasecmp(Name, "Hadapsar MIDC");
    if (i == 0)
        return 75;

    i = strcasecmp(Name, "Fatima Nagar");
    if (i == 0)
        return 76;

    i = strcasecmp(Name, "Race Course");
    if (i == 0)
        return 77;

    i = strcasecmp(Name, "AFMC");
    if (i == 0)
        return 77;

    i = strcasecmp(Name, "Golibar Maidan");
    if (i == 0)
        return 78;
    i = strcasecmp(Name, "Saras Baug");
    if (i == 0)
        return 79;

    i = strcasecmp(Name, "Dandekar Pool");
    if (i == 0)
        return 80;
        
    i = strcasecmp(Name, "Ganesh Mala");
    if (i == 0)
        return 81;
    i = strcasecmp(Name, "Rajaram Pul");
    if (i == 0)
        return 82;
    i = strcasecmp(Name, "Manik Baug");
    if (i == 0)
        return 83;
    i = strcasecmp(Name, "Vadagaon Khurd Phata");
    if (i == 0)
        return 84;
    i = strcasecmp(Name, "Patil Colony");
    if (i == 0)
        return 85;
    i = strcasecmp(Name, "Dhayari Phata");
    if (i == 0)
        return 86;
    i = strcasecmp(Name, "Lagadmala");
    if (i == 0)
        return 87;

    i = strcasecmp(Name, "Mate Pat");
    if (i == 0)
        return 88;
    i = strcasecmp(Name, "Nanded City");
    if (i == 0)
        return 89;
    i = strcasecmp(Name, "Khadakwasala");
    if (i == 0)
        return 90;
    else
    {
        return -50;
    }

    // Line 4 ends
}
