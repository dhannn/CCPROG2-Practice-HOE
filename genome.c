#include "genome.h"
#include <stdio.h>

/** 
 * print_genome()
 * prints the genome in the following format: 
 * xxx xxx xxx xxx xxx
 * 
 * ex:
 * AUG GCC UGC AAA AUG
 * 
 * NOTE:
 * 1. Must use the printf() function
 */
void
print_genome(
    Gene genome, int max
)
{
    // TODO: Finish the print_genome function
}

/** 
 * print_protein()
 * prints the protein in the following format: 
 * xxx - xxx - xxx - xxx - xxx
 * 
 * ex:
 * MET - ALA - --- - LYS - CYS 
 * (the third amino acid is non-functional)
 * 
 * NOTE:
 * 1. Must use the printf() function
 */
void
print_protein(
    Protein protein, int max
)
{
    // TODO: Finish the print_protein function
}

/**
 * get_codon()
 * gets the corresponding codon of a single triplet
 * 
 * @param   codon       the codon to be filled
 * @param   triplet     the triplet to be based on
 */ 
void get_codon(
    Triplet codon, 
    Triplet triplet
)
{
    // TODO: Finish the get_codon() function
}

/**
 * get_anticodon()
 * gets the corresponding anticodon of a codon
 * 
 * @param   anticodon       where the calculated anticodon is stored
 * @param   codon           the codon to be based on
 */
void get_anticodon(
    Triplet anticodon, 
    Triplet codon
)
{
    // TODO: finish the get_anticodon() function
}

/**
 * get_amino_acid()
 * gets the corresponding 
 * 
 */
void get_amino_acid(
    AminoAcid aminoAcid, 
    Triplet anticodon
)
{
    // TODO: Finish this function
}

/**
 * convert_to_codons()
 * converts the user-entered genes to its corresponding codons
 * 
 * @param   codons      where the array of codons is stored
 * @param   genome      the genes to be converted
 * @param   max         the number of characters in genome
 * 
 * NOTE: 
 * 1. You must call the get_codon() function.
 * 2. There should be no printf statements.
 */
void 
convert_to_codons(
    Gene codons, 
    Gene genome, 
    int max
) 
{
    // TODO: finish the function
}

/**
 * convert_to_anticodons()
 * converts the codons to its corresponding anticodons
 * 
 * @param   genome      the genes to be converted
 * @param   max         the number of characters in genome
 * 
 * NOTE: 
 * 1. You must call the get_anticodon() function.
 * 2. There should be no printf statements.
 */
void 
convert_to_anticodons(
    Gene anticodons, 
    Gene codons, 
    int max
)
{
    // TODO: finish the function
}

/**
 * convert_to_amino_acids()
 * converts the anticodons to its corresponding amino acids
 * 
 * @param   genome      the genes to be converted
 * @param   max         the number of characters in genome
 * 
 * NOTE: 
 * 1. You must call the get_amino_acid() function.
 * 2. There should be no printf statements.
 */
void 
convert_to_protein(
    AminoAcid aminoAcids, 
    Triplet anticodon, 
    int max
)
{
    // TODO: finish the function
}
