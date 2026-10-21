// HintButton$$set_TrackingDeviceID @ RVA 0x2FF2B00

void HintButton__set_TrackingDeviceID(HintButton_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((__this->fields)._TrackingDeviceID == CJNHFNHJHPE) {
    return;
  }
  (__this->fields)._TrackingDeviceID = CJNHFNHJHPE;
  HintButton__AIJPMKIMPPN(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  HintButton__NAICHPFNPLE(__this,method_00);
  return;
}

