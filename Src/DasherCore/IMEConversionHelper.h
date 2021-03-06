#ifndef __IME_CONVERSION_HELPER_H__
#define __IME_CONVERSION_HELPER_H__

#include <windows.h>
#include <imm.h>

#include "ConversionManager.h"
/// \ingroup Model
/// \{
class CIMEConversionHelper : public CConversionManager {
 public:
  CIMEConversionHelper(CNodeCreationManager *pNCManager, const CAlphInfo *pAlphabet);
  ~CIMEConversionHelper();

  virtual bool Convert(const std::string &strSource, std::vector<std::vector<std::string> > &vResult);


  // TODO: Implement placeholders
  virtual bool Convert(const std::string &strSource, SCENode ** pRoot, int * childCount, int CMid) {
    return false;
  };

  virtual void ClearData(int CMid) {
  }; 

private:
  bool IsInit;
  HIMC hIMC;
};
/// \}

#endif
