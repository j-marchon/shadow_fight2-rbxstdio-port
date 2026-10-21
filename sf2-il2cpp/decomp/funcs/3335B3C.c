// FGKGKDEJCOG$$MJCNICLHEKC @ RVA 0x3335B3C

void FGKGKDEJCOG__MJCNICLHEKC(FGKGKDEJCOG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int32_t DBJLIBHKKGP;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04567949 & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    DAT_04567949 = 1;
  }
  if ((__this->fields).ILACIHPOGDC == CJNHFNHJHPE) {
    return;
  }
  (__this->fields).ILACIHPOGDC = CJNHFNHJHPE;
  CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
  DBJLIBHKKGP = (__this->fields).ILACIHPOGDC;
  method_00 = extraout_x1;
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  FGKGKDEJCOG__OPCKGNOBACO(DBJLIBHKKGP,method_00);
  return;
}

