# Printing Pattern Using Loops

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

A document is represented as a collection paragraphs, a paragraph is represented as a collection of sentences, a sentence is represented as a collection of words and a word is represented as a collection of lower-case ([a-z]) and upper-case ([A-Z]) English characters.  You will convert a raw text document into its component paragraphs, sentences and words.  To test your results, queries will ask you to return a specific paragraph, sentence or word as described below.  

Alicia is studying the C programming language at the University of Dunkirk and she represents the words, sentences, paragraphs, and documents using pointers:

- A word is described by:  
```
struct word {
    char* data;
};
```
- A sentence is described by:  
```
struct sentence {
    struct word* data;
    int word_count;//the number of words in a sentence
};
```   

The words in the sentence are separated by one space (" "). The last word does not end with a space.  

- A paragraph is described by:  
```
struct paragraph {
    struct sentence* data  ;
    int sentence_count;//the number of sentences in a paragraph
};
```   

The sentences in the paragraph are separated by one period (".").

- A document is described by:  

```
struct document {
    struct paragraph* data;
    int paragraph_count;//the number of paragraphs in a document
};
```

The paragraphs in the document are separated by one newline("\n"). The last paragraph does not end with a newline.

For example:  
> Learning C is fun.	
Learning pointers is more fun.It is good to have pointers.

- The only sentence in the first paragraph could be represented as:

```c
struct sentence first_sentence_in_first_paragraph;
first_sentence_in_first_paragraph.data = {"Learning", "C", "is", "fun"};
```

- The first paragraph itself could be represented as:

```c
struct paragraph first_paragraph;
first_paragraph.data = {{"Learning", "C", "is", "fun"}};
```

- The first sentence in the second paragraph could be represented as:

```c
struct sentence first_sentence_in_second_paragraph;
first_sentence_in_second_paragraph.data = {"Learning", "pointers", "is", "more", "fun"};
```

- The second sentence in the second paragraph could be represented as:

```c
struct sentence second_sentence_in_second_paragraph;
second_sentence_in_second_paragraph.data = {"It", "is", "good", "to", "have", "pointers"};
```

- The second paragraph could be represented as:

```c
struct paragraph second_paragraph;
second_paragraph.data = {{"Learning", "pointers", "is", "more", "fun"}, {"It", "is", "good", "to", "have", "pointers"}};
```

- Finally, the document could be represented as:

```c
struct document Doc;
Doc.data = {{{"Learning", "C", "is", "fun"}}, {{"Learning", "pointers", "is", "more", "fun"}, {"It", "is", "good", "to", "have", "pointers"}}};
```

Alicia has sent a document to her friend Teodora as a string of characters, i.e. represented by $\texttt{char*}$ not $\texttt{struct document}$. Help her convert the document to $\texttt{struct document}$ form by completing the following functions:  

- $\texttt{void initialise_document(char* text)}$ to intialise the document.  You have to intialise the global variable $\texttt{Doc}$ of type $\texttt{struct document}$.  
- $\texttt{struct paragraph kth_paragraph(int k)}$ to return the $k^{th}$ paragraph in the document.  
- $\texttt{struct sentence kth_sentence_in_mth_paragraph(int k, int m)}$ to return the $k^{th}$ sentence in the $m^{th}$ paragraph.  
- $\texttt{struct word kth_word_in_mth_sentence_of_nth_paragraph(int k, int m, int n)}$ to return the  $k^{th}$ word in the $m^{th}$ sentence of the $n^{th}$ paragraph.  

**Input Format**

The first line contains the integer $paragraph\_count$.   
Each of the next $paragraph\_count$ lines contains a paragraph as a single string.  
The next line contains the integer $q$, the number of queries.   
Each of the next $q$ lines contains a query in one of the following formats:  

- $1 \enspace k$: This corresponds to calling the function $\texttt{kth_paragraph}$.
- $2 \enspace k \enspace m$: This corresponds to calling the function $\texttt{kth_sentence_in_mth_paragraph}$.
- $3 \enspace k \enspace m \enspace \ n$: This corresponds to calling the function $\texttt{kth_word_in_mth_sentence_of_nth_paragraph}$.

**Constraints**

- The text which is passed to $\texttt{get_document}$  has words separated by a spaces(" "), sentences separated by a period(".") and paragraphs separated by a newline("\n"). 
- The last word in a sentence does not end with a space.
- The last paragraph does not end with a newline.
- The words contain only upper-case and lower-case English letters.
- $ 1 \enspace \le \enspace $ number of characters in the entire document $ \enspace \le \enspace 1000$.
- $ 1 \enspace \le \enspace $ number of paragraphs in the entire document $  \enspace \le \enspace 5$.   
  

**Output Format**

Print the paragraph, sentence or the word corresponding to the query to check the logic of your code.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T04:28:55.819Z  

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int top = i;
            int left = j;
            int bottom = 2 * n - 2 - i;
            int right = 2 * n - 2 - j;

            int min = top;

            if (left < min)
                min = left;
            if (bottom < min)
                min = bottom;
            if (right < min)
                min = right;

            printf("%d", n - min);

            if (j < 2 * n - 2)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/structuring-the-document/problem)