
/*
 * To store input directory
 */

/* A linked list of the contents of a file
   with both the filename's word and the
   word's frequency. */
typedef struct content_word_node {
	char * word;
	int frequency;
	word_node * next;
} word_node;

/* A linked list representing a file from a directory
   with pointers to the next file in the
   directory and the file's contents. */
typedef struct file_node {
	char * filename;
	file_node * next;
	content_word_node * contents;
} file_node;

/* Represents the a root node with a linked list
   of both subdirectories and files. */
typedef struct directory_node {
	char * name;
	directory_node * directories;
	file_node * files;
} directory_node;

/*
 * To store output reverse index
 */

/* Represents the content of the output */
typedef struct output_file_node {
	char * file_name;
	int frequency;
	output_file_node * next;
} output_file_node;

/* Represents the highest level output
   node with the word, a pointer to the
   next word, and the contents of this
   output word. */
typedef struct output_word_node {
	char * word;
	output_file_node * file;
	output_word_node * next;
	
} output_word_node;

int main(int argc, char **argv) {
	directory_node * directory = get_root_directory_node(argv[1]);
	output_word_node * words = convert_directory_to_output(directory);
	char * output = get_output_string(words);
	write(output, argv[0]);
}

directory_node * get_root_directory_node (char * for_file_name) {
	
	return NULL;
}

output_word_node * convert_directory_to_output (directory_node * for_directory_node) {
	
	return NULL;
}

char * get_output_string (output_word_node * word) {
	
	return "";
}

char * get_output_file_string (output_file_node * file) {
	
	return "";
}

void write(char * string, char * to_file) {
	
}