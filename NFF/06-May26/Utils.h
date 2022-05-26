#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
namespace sdds {
   class Utils {
   public:
      int strlen(const char* str);
      void strcpy(char* des, const char* src);
      int getInt(const char* prompt);
      double getDouble(const char* prompt);
   };
   extern Utils U;
}
#endif // !SDDS_UTILS_H

