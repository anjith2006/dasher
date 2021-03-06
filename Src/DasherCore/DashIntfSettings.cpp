#include "DashIntfSettings.h"

using namespace Dasher;
using std::string;

CDashIntfSettings::CDashIntfSettings(CSettingsStore *pSettingsStore)
 : CDasherInterfaceBase(pSettingsStore) {
}

bool CDashIntfSettings::GetBoolParameter(int iParameter) const {
  return CDasherInterfaceBase::GetBoolParameter(iParameter);
}

long CDashIntfSettings::GetLongParameter(int iParameter) const {
  return CDasherInterfaceBase::GetLongParameter(iParameter);
}

const string &CDashIntfSettings::GetStringParameter(int iParameter) const {
  return CDasherInterfaceBase::GetStringParameter(iParameter);
}

void CDashIntfSettings::SetBoolParameter(int iParameter, bool bValue) {
  CDasherInterfaceBase::SetBoolParameter(iParameter, bValue);
}

void CDashIntfSettings::SetLongParameter(int iParameter, long lValue) {
  CDasherInterfaceBase::SetLongParameter(iParameter, lValue);
}

void CDashIntfSettings::SetStringParameter(int iParameter, const string &strValue) {
  CDasherInterfaceBase::PreSetNotify(iParameter, strValue);
  CDasherInterfaceBase::SetStringParameter(iParameter, strValue);
}
