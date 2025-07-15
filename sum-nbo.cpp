
#include <cstdint>
#include <cstdlib>
#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h> // for htons, htonl


void print_plus(uint32_t count){
    if(count != 0){
        printf(" + ");
    }
}

void print_data(uint32_t data){
    printf("%d(0x%08x)", data, data);

}


//Print Result
void print_result(uint32_t count, uint32_t result){
    if(count == 0){
        printf("CAN'T CALC!!!");

    }
    else{
        printf(" = %d(0x%08x)\n", result, result);

    }
}



//Print Sentence
void print_sentence(uint32_t count, uint32_t result){
    print_plus(count);
    print_data(result);
}



int main(int argc, char** argv){

    //Check Argument
    if (argc < 2){
        printf("lack argu\n");
        return 0;
    }

    uint32_t file_count = argc-1;


    //Detail 1. Use uint32_t
    FILE *fp;
    uint32_t size = 0; //File Size
    uint32_t result = 0; //Result
    uint32_t count = 0; //for print +

    for (uint16_t i = 1; i<file_count+1;i++){

        //Detail 2. use fopen, fread.
        fp = fopen(argv[i], "rb"); //file open


        //Detail 4
        //error check for file open
        if(fp == NULL){
            continue;
        }


        uint32_t data;
        fread(&data, sizeof(size), 1, fp);
        data = htonl(data);
        print_sentence(count, data);


        result = result + data;
        count++;
        fclose(fp);

    }
    //print result;
    print_result(count, result);

    return 0;
}
