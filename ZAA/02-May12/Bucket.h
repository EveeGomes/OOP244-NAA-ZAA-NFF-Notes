#ifndef SDDS_BUCKET_H  // compilation safeguards. (preprocessor directives)
#define SDDS_BUCKET_H 

struct Bucket {
   int m_size;
   int m_value;
};
void setBucket(int size, int value);
void fillBucket(int value);
int emptyBucket(int value);
void displayBucket();
#endif // !SDDS_BUCKET_H



