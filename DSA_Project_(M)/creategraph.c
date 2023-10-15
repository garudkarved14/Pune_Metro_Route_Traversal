// creategraph.c

#include "creategraph.h"

void createGraph() {
    int i;
    adj[0][1] = 2.1; // PCMC TO SANT TUKARAM NAGAR
    adj[1][0] = 2.1;

    adj[1][2] = 0.7; // SANT TUKARAM NAGAR TO BHOSARI
    adj[2][1] = 0.7;

    adj[2][3] = 1.5; // BHOSARI TO KASARWADI
    adj[3][2] = 1.5;

    adj[3][4] = 1.1; // KASARWADI TO PHUGEWADI
    adj[4][3] = 1.1;

    adj[4][5] = 2.4; // PHUGEWADI TO DAPODI
    adj[5][4] = 2.4;

    adj[5][6] = 1; // DAPODI TO BHOPODI
    adj[6][5] = 1;

    adj[6][7] = 1.4; // BHOPODI TO KHADKI
    adj[7][6] = 1.4;

    adj[7][8] = 5.3; // KHADKI TO RANGE HILLS
    adj[8][7] = 5.3;

    adj[8][9] = 2.9; // RANGE HILL TO SHIVAJINAGAR
    adj[9][8] = 2.9;

    adj[9][29] = 1; // SHIVAJINAGAR TO CIVIL COURT
    adj[29][9] = 1;

    adj[29][10] = 1.1; // CIVIL COURT TO BUDHWAR PETH
    adj[10][29] = 1.1;

    adj[10][11] = 0.65; // BUDHWAR PETH TO MANDAI
    adj[11][10] = 0.65;

    adj[11][12] = 1.7; // MANDAI TO SWARGATE
    adj[12][11] = 1.7;

    adj[12][13] = 0.4; // SWARGATE TO LNT
    adj[13][12] = 0.4;

    adj[13][14] = 1.3; // LNT TO BPP
    adj[14][13] = 1.3;

    adj[14][15] = 1.6; // BPP TO PDMV
    adj[15][14] = 1.6;

    adj[15][16] = 1.6; // PDMV TO BALAJINAGAR
    adj[16][15] = 1.6;

    adj[16][17] = 0.8; // B NGR TO BVP
    adj[17][16] = 0.8;

    adj[17][18] = 1.1; // BVP TO SARPODYAN
    adj[18][17] = 1.1;

    adj[18][19] = 0.9; // SARP TO KATRAJ
    adj[19][18] = 0.9;

    // adj[19][20] = 4;
    // adj[20][19] = 4;

    // AQUALINE STARTS - CHANDANI CHOWK - VANAZ - RAMWADI - WAGHOLI

    adj[20][21] = 1.15; // CC TO VANAZ
    adj[21][20] = 1.15;

    adj[21][22] = 1.8; // VANAZ TO ANANDNAGAR
    adj[22][21] = 1.8;

    adj[22][23] = 1.7; // ANANADNAGAR TO IDEAL COLONY
    adj[23][22] = 1.7;

    adj[23][24] = 1.5; // IDEAL COLONY TO NAL STOP
    adj[24][23] = 1.5;

    adj[24][25] = 1.8; // NAL STOP TO GARWARE COLLEGE
    adj[25][24] = 1.8;

    adj[25][26] = 1; // GARWARE COLLEGE TO DECCAN
    adj[26][25] = 1;

    adj[26][27] = 0.8; // DECCAN TO CHH SAMBHAJI GARDEN
    adj[27][26] = 0.8;

    adj[27][28] = 0.8; // SAMBHAJI GARDEN TO PMC
    adj[28][27] = 0.8;

    adj[28][29] = 0.8; // PMC TO CIVIL COURT
    adj[29][28] = 0.8;

    adj[29][30] = 1.5; // CIVIL COURT TO MANGALWAR PETH
    adj[30][29] = 1.5;

    adj[30][31] = 1.3; // MANGALWAR PETH TO PUNE RAILWAY STATION
    adj[31][30] = 1.3;

    adj[31][32] = 0.9; // PUNE STATION TO RUBY
    adj[32][31] = 0.9;

    adj[32][33] = 1.3; // RUBY TO BUND GARDEN
    adj[33][32] = 1.3;

    adj[33][34] = 1; // BUND TO YERAWADA
    adj[34][33] = 1;

    adj[34][35] = 2.5; // YERAWADA TO KALYANI NAGAR
    adj[35][34] = 2.5;

    adj[35][36] = 3; // KALYANI NAGAR TO RAMWADI
    adj[36][35] = 3;

    adj[36][37] = 1.2; // RAMWADI TO WAGDAON SHERI PHATA
    adj[37][36] = 1.2;

    adj[37][38] = 1.4; // WADGAON SHERI PHATA TO VIMAN NAGAR
    adj[38][37] = 1.4;

    adj[38][39] = 1.4; // VIMAN NAGAR TO TATA GUARDROOM
    adj[39][38] = 1.4;

    adj[39][40] = 1.2; // TATA GUARDROOM TO KHARADI BYPASS
    adj[40][39] = 1.2;

    adj[40][41] = 0.75; // KHARADI BYPASS TO JANAK BABA
    adj[41][40] = 0.75;

    adj[41][42] = 2; // JANAK BABA TO AAPLE GHAR
    adj[42][41] = 2;

    adj[42][43] = 2.4; // AAPLE GHAR TO KHANDVE NAAGAR
    adj[43][42] = 2.4;

    adj[43][44] = 1.3; // KHANDVE NAGAR TO UBALENAGAR
    adj[44][43] = 1.3;

    adj[44][45] = 1.8; // UBALENAGAR TO GODOWN TALERA
    adj[45][44] = 1.8;

    adj[45][46] = 0.75; // GODOWN TALERA TO SOYRIK
    adj[46][45] = 0.75;

    adj[46][47] = 1.4; // SOYRIK TO KAMAL BAGH
    adj[47][46] = 1.4;

    adj[47][48] = 4; // KAMAL BAGH TO WAGHOLI
    adj[48][47] = 4;

    // AQUALINE FINISHED

    // YELLOW LINE - Hinjewadi to Shivajinagar

    adj[49][50] = 1.5; // METROPOLIC CIRCLE TO EMBASSY Q BUSINESS PARK
    adj[50][49] = 1.5;

    adj[50][51] = 1; // EMBASSY TO DOHLER
    adj[51][50] = 1;

    adj[51][52] = 1.1; // DOHLER TO INFOSYS PHASE 2
    adj[52][51] = 1.1;

    adj[52][53] = 1.2; // INFOSYS PHASE 2 TO WIPRO PHASE 2
    adj[53][52] = 1.2;

    adj[53][54] = 0.85; // WIPRO PHASE 2 TO PALL INDIA
    adj[54][53] = 0.85;

    adj[54][55] = 1.7; // PALL INDIA TO SHIVAJI CHOWK
    adj[55][54] = 1.7;

    adj[55][56] = 1.6; // SHIVAJI CHOWK TO HINJEWADI
    adj[56][55] = 1.6;

    adj[56][57] = 1.2; // HINJEWADI TO WAKAD CHOWK
    adj[57][56] = 1.2;

    adj[57][58] = 1.6; // WAKAD CHOWK TO BALEWADI STADIUM
    adj[58][57] = 1.6;

    adj[58][59] = 1.4; // BALEWADI STDM TO NICMAR
    adj[59][58] = 1.4;

    adj[59][60] = 0.8; // NICMAR TO RAMNAGAR
    adj[60][59] = 0.8;

    adj[60][61] = 2.1; // RAMNAGAR TO BALEWADI PHATA
    adj[61][60] = 2.1;

    adj[61][62] = 1; // BALEWADI PHATA TO BANERGAON
    adj[62][61] = 1;

    adj[62][63] = 1; // BANERGAON TO BANER
    adj[63][62] = 1;

    adj[63][64] = 0.9; // BANER TO KRUSHI ANU
    adj[64][63] = 0.9;

    adj[64][65] = 1.5; // KRUSHI TO SAKAL NAGAR
    adj[65][64] = 1.5;

    adj[65][66] = 1.4; // SAKAL NAGAR TO UNIVERSITY
    adj[66][65] = 1.4;

    adj[66][67] = 1.1; // UNIVERSITY TO RBI
    adj[67][66] = 1.1;

    adj[67][68] = 1; // RBI TO AGRICULTURE COLLEGE
    adj[68][67] = 1;

    adj[68][9] = 0.8; // AGRI CLG TO SHIVAJINAGAR
    adj[9][68] = 0.8;

    adj[9][29] = 1; // SHIVAJINAGAR TO CIVIL COURT
    adj[29][9] = 1;

    adj[69][70] = 1.8; // KHARADI CHOWK TO COLOMBIA ASIA HOSPITAL
    adj[70][69] = 1.8;

    adj[70][71] = 1.4; // COLOMBIA ASIA HOSPITAL TO MUNDWA CHOWK
    adj[71][70] = 1.4;

    adj[71][72] = 1; // MUNDWA CHOWK TO SPRING VALLEY APARTMENT
    adj[72][71] = 1;

    adj[72][73] = 1.7; // SPRING VALLEY APARTMENT TO MAGARPATTA MANAPA SHALA
    adj[73][72] = 1.7;

    adj[73][74] = 2.1; // MAGARPATTA MANAPA SHALA TO TILEKAR VAOTI
    adj[74][73] = 2.1;

    adj[74][75] = 2.4; // TILEKAR VAOTI TO HADAPSAR MIDC
    adj[75][74] = 2.4;

    adj[75][76] = 0.9; //  HADAPSAR MIDC TO FATIMA NAGAR
    adj[76][75] = 0.9;

    adj[76][77] = 2.5; //  FATIMA NAGAR TO RACE COURSE/AFMC
    adj[77][76] = 2.5;

    adj[77][78] = 1.8; // RACE COURSE/AFMC TO GOLIBAR MAIDAN
    adj[78][77] = 1.8;

    adj[78][12] = 1.6; // GOLIBAR MAIDAN TO SWARGATE
    adj[12][78] = 1.6;

    adj[12][79] = 2; // SWARGATE TO SARAS BAUG
    adj[79][12] = 2;

    adj[79][80] = 1.5; // SARAS BAUG TO DANDEKAR POOL
    adj[80][79] = 1.5;

    adj[80][81] = 1.2; // DANDEKAR POOL TO GANESH MALA
    adj[81][80] = 1.2;

    adj[81][82] = 1.3; //GANESH MALA TO RAJARAM PUL 
    adj[82][81] = 1.3;

    adj[82][83] = 1.6; //RAJARAM PUL TO MANIK BAUG 
    adj[83][82] = 1.6;

    adj[83][84] = 1.9; //MANIK BAUG TO VADAGAON KHURD PHATA 
    adj[84][83] = 1.9;

    adj[84][85] = 1.3; // VADAGAON KHURD PHATA  TO PATIL COLONY
    adj[85][84] = 1.3;

    adj[85][86] = 0.9; //PATIL COLONY TO DHAYARI PHATA
    adj[86][85] = 0.9;

    adj[86][87] = 2.7; //DHAYARI PHATA TO LAGADMALA 
    adj[87][86] = 2.7;

    adj[87][88] = 2.3; //LAGADMALA TO MATE PAT
    adj[88][87] = 2.3;

    adj[88][89] = 0.6; //MATE PAT TO NANDED CITY
    adj[89][88] = 0.6;

    adj[89][90] = 2.6; //NANDED CITY TO KHADAKWASALA
    adj[90][89] = 2.6;
}
