// MGENAMAJALB$$PLODHLPNKPP @ RVA 0x310494C

bool MGENAMAJALB__PLODHLPNKPP(MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045664e7 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1512);
    DAT_045664e7 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = System_String__op_Equality
                    (MGENAMAJALB_TypeInfo->static_fields->HDAMIJBIMGF,StringLiteral_1512,
                     (MethodInfo *)0x0);
  return bVar1;
}

