#include <stdio.h>
#include "encode.h"
#include<string.h>
#include "types.h"
#include "decode.h"

int main(int argc , char *argv[])
{

    if(argc<2)
    {
        printf("Invalid Input\n");
        printf("For Encoding : ./a.out -e beautiful.bmp secret.txt [stego.bmp]\n");
        printf("For decoding : ./a.out -d stego.bmp [decode.txt]\n");
    }
    if(check_operation_type(argv) == e_encode )
    {
        printf("Selected Encoding\n");
        EncodeInfo encode;
        if(read_and_validate_encode_args(argv,&encode)==e_success)
        {
         printf("Read and validation of encode argument is done successfully\n");
         printf("Start Encoding...........\n");
         do_encoding(&encode);
        }
        else
        {
            printf("Read and validation of encode argument is failed\n");
            return -1;
        }
    }
    else if(check_operation_type(argv) == e_decode )
    {
        printf("Selected decoding\n");
         DecodeInfo decInfo;
            if (read_and_validate_decode_args(argv, &decInfo) == e_success)
            {
                if (do_decoding(&decInfo) == e_success)
                {
                    printf("Completed decoding\n");
                }
                else
                {
                    printf("Failed to decode\n");
                }
            }
            else
            {
                printf("Failed to read and validate decoding\n");
                
            }

    }
    else
    {
        printf("Invalid Input\n");
        printf("For Encoding : ./a.out -e beautiful.bmp secret.txt [stego.bmp]\n");
        printf("For decoding : ./a.out -d stego.bmp [decode.txt]\n");
    }
}      
OperationType check_operation_type(char **argv)
     {
        if(strcmp(argv[1], "-e")== 0)
        return e_encode;
        else if (strcmp(argv[1],"-d") == 0)
        return e_decode;
        else
        return  e_unsupported;
    }

