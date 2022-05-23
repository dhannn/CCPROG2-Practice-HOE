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
        scanf("%s", genome[i]);

    // TODO: call the convert_to_codons
    convert_to_codons(codons, genome, MAX_TRIPLET);

    printf("\nCodons: ");
    // TODO: call the print_genome function using the converted codons
    print_genome(codons, MAX_TRIPLET);

    // TODO: call the convert_to_anticodons
    convert_to_anticodons(anticodons, codons, MAX_TRIPLET);
    
    printf("\nAnticodons: ");
    // TODO: call the print_genome function using the converted anticodons
    print_genome(anticodons, MAX_TRIPLET);

    // TODO: call the convert_to_protein
    convert_to_protein(protein, anticodons, MAX_TRIPLET);
    
    printf("\nProteins: ");
    // TODO: call the print_protein function using the converted proteins
    print_protein(protein, MAX_TRIPLET);

    return 0;
}