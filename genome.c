#include "genome.h"
#include <string.h>
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
    int i;
    for(i = 0; i < max; i++)
        printf("%s ", genome[i]);
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
    int i;

    for(i = 0; i < max; i++) {
        printf("%s ", protein[i]);
        if(i != max - 1)
            printf("- ");
    }
}

char
convert_molecule(
    char molecule)
{
    // lookup tables
    char from[] = {ADENINE, CYSTOSINE, GUANINE, THYMINE, URACIL};
    char to[] = {URACIL, GUANINE, CYSTOSINE, ADENINE, ADENINE};

    int index, i;
    int len = sizeof(from) / sizeof(from[0]);

    char currentMolecule;

    for(i = 0; i < len; i++) 
    {
        currentMolecule = from[i];

        if(molecule == currentMolecule)
        {
            index = i;
            break;
        }
    }

    return to[index];
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
    int i;

    for(i = 0; i < MAX_TRIPLET; i++) 
    {
        if(triplet[i] == '\0')
            codon[i] = '\0';
        else
            codon[i] = convert_molecule(triplet[i]);
    }
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
    int i;

    for(i = 0; i < MAX_TRIPLET; i++) 
    {
        if(codon[i] == '\0')
            anticodon[i] = '\0';
        else
            anticodon[i] = convert_molecule(codon[i]);
    }
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
    char *anticodons[] = {METHIONINE, ALANINE, CYSTINE, LYSINE, ARGININE};
    char *aminoAcids[] = {"MET", "ALA", "CYS", "LYS", "ARG"};

    int i, index,flag = 0;
    for(i = 0; i < 5; i++) 
    {
        if(strcmp(anticodons[i], anticodon) == 0) 
        {
            flag = 1;
            index = i;
        }
    }

    if(flag)
        strcpy(aminoAcid, aminoAcids[index]);
    else
        strcpy(aminoAcid, "---");
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
    for(int i = 0; i < max; i++)
    {
        get_codon(codons[i], genome[i]);
    }
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
    for(int i = 0; i < max; i++)
    {
        get_codon(anticodons[i], codons[i]);
    }
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
    Protein protein, 
    Gene anticodons, 
    int max)
{
    // TODO: finish the function
    for(int i = 0; i < max; i++)
    {
        get_amino_acid(protein[i], anticodons[i]);
    }
}
