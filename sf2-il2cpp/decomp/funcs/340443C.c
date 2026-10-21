// MGNPHCAAEIO$$HIIEINMMNGG @ RVA 0x340443C

System_String_o * MGNPHCAAEIO__HIIEINMMNGG(int64_t MANHAGLPBBB,MethodInfo *method)

{
  long lVar1;
  System_DateTime_o d1;
  System_DateTime_o d2;
  System_String_o *pSVar2;
  System_String_o *str2;
  MethodInfo *extraout_x1;
  long CNHMFABDCHB;
  double dVar3;
  System_TimeSpan_Fields local_38;
  
  if ((DAT_04568020 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_2086);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568020 = 1;
    method = extraout_x1;
  }
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_DateTime_TypeInfo,method);
  }
  d1 = System_DateTime__get_Now((MethodInfo *)0x0);
  d2 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  local_38._ticks = (int64_t)System_DateTime__op_Subtraction(d1,d2,(MethodInfo *)0x0);
  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
  }
  dVar3 = System_TimeSpan__get_TotalSeconds((System_TimeSpan_o)&local_38,(MethodInfo *)0x0);
  lVar1 = -0x8000000000000000;
  if (dVar3 != INFINITY) {
    lVar1 = (long)dVar3;
  }
  CNHMFABDCHB = (lVar1 + MANHAGLPBBB) % 0x15180;
  if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = NGFEKJBMGEB__BCGDPKJNJCH
                     (CNHMFABDCHB,false,true,true,false,StringLiteral_2086,true,true,true,true,
                      StringLiteral_1,StringLiteral_1,StringLiteral_1,StringLiteral_1,
                      (MethodInfo *)0x0);
  str2 = NGFEKJBMGEB__IPOELNKMKBA((lVar1 + MANHAGLPBBB) - CNHMFABDCHB,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(pSVar2,StringLiteral_167,str2,(MethodInfo *)0x0);
  return pSVar2;
}

