// IONAICHLBOO$$PJNPLHKHEBJ @ RVA 0x34BC660

bool IONAICHLBOO__PJNPLHKHEBJ(uint16_t IFOOMNOMIEN,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685e7 & 1) == 0) {
    FUN_01bab630(&IONAICHLBOO_TypeInfo);
    DAT_045685e7 = 1;
    method = extraout_x1;
  }
  if ((IONAICHLBOO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IONAICHLBOO_TypeInfo,method);
  }
  __this = IONAICHLBOO_TypeInfo->static_fields->JJBJCAPAILN;
  if (__this != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOf(__this,IFOOMNOMIEN,(MethodInfo *)0x0);
    return iVar1 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

