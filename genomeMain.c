#include "genome.h"
#include <stdio.h>

int
main()
{
    Gene genome;
    Gene codons;
    Gene anticodons;
    Protein protein;
    int i;
    
    printf("Enter the gene sequence: ");
    for(i = 0; i < MAX_TRIPLET; i++)
        scanf(/*TODO: complete the arguments to input the genome*/);

    // TODO: call the convert_to_codons

    printf("\nCodons: ");
    // TODO: call the print_genome function using the converted codons

    // TODO: call the convert_to_anticodons
    
    printf("\nAnticodons: ");
    // TODO: call the print_genome function using the converted anticodons

    // TODO: call the convert_to_protein
    
    printf("\nProteins: ");
    // TODO: call the print_protein function using the converted proteins

    return 0;
}