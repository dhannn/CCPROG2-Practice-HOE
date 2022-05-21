#ifndef GENOME_H
#define GENOME_H

#define MAX_TRIPLET 5
#define MAX_PROTEIN_STRING 55

typedef char Triplet[4];
typedef Triplet Gene[MAX_TRIPLET];
typedef char AminoAcid[4];
typedef AminoAcid Protein[MAX_TRIPLET];

#define ADENINE         'A'
#define CYSTOSINE       'C'
#define GUANINE         'G'
#define THYMINE         'T'
#define URACIL          'U'

#define METHIONINE      "AUG"
#define ALANINE         "GCC"
#define CYSTINE         "UGC"
#define LYSINE          "AAA"
#define ARGININE        "ARG"
#define NON_FUNCTIONAL  "---"

void print_genome(Gene genome, int max);
void print_protein(Protein protein, int max);
void get_codon(Triplet codon, Triplet triplet);
void get_anticodon(Triplet anticodon, Triplet codon);
void get_amino_acid(AminoAcid aminoAcid, Triplet anticodon);
void convert_to_codons(Gene codons, Gene genome, int max);
void convert_to_anticodons(Gene anticodons, Gene codons, int max);
void convert_to_protein(AminoAcid aminoAcids, Triplet anticodon, int max);

#endif
