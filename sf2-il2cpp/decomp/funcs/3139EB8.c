// NJNCPNBIPCD$$DDNFHFMBOMD @ RVA 0x3139EB8

System_String_o * NJNCPNBIPCD__DDNFHFMBOMD(NJNCPNBIPCD_o *__this,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  float in_s0;
  float extraout_s0;
  float __this_00;
  float __this_01;
  float __this_02;
  
  if ((DAT_0456671c & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    FUN_01bab630(&StringLiteral_110);
    FUN_01bab630(&StringLiteral_87);
    FUN_01bab630(&StringLiteral_74);
    FUN_01bab630(&StringLiteral_109);
    FUN_01bab630(&StringLiteral_70);
    FUN_01bab630(&StringLiteral_89);
    FUN_01bab630(&StringLiteral_111);
    FUN_01bab630(&StringLiteral_71);
    FUN_01bab630(&StringLiteral_112);
    FUN_01bab630(&StringLiteral_12386);
    FUN_01bab630(&StringLiteral_108);
    FUN_01bab630(&StringLiteral_1);
    in_s0 = (float)FUN_01bab630(&StringLiteral_107);
    DAT_0456671c = 1;
  }
  pSVar3 = StringLiteral_1;
  pSVar2 = System_Single__ToString(in_s0,(MethodInfo *)&(__this->fields).PACHINKIODC);
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_108,pSVar2,(MethodInfo *)0x0);
  iVar1 = (int)__this;
  pSVar2 = System_Int32__ToString(iVar1 + 0x38,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_111,pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_Int32__ToString(iVar1 + 0x2c,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_110,pSVar2,(MethodInfo *)0x0);
  if ((bool_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = System_Boolean__ToString((bool)((char)__this + '@'),(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_109,pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_Boolean__ToString((bool)((char)__this + 'A'),(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_112,pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_Int32__ToString(iVar1 + 0x3c,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_107,pSVar2,(MethodInfo *)0x0);
  __this_00 = extraout_s0;
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    __this_00 = (float)thunk_FUN_01ba7564(NJNCPNBIPCD_TypeInfo);
  }
  pSVar2 = System_Single__ToString
                     (__this_00,(MethodInfo *)&NJNCPNBIPCD_TypeInfo->static_fields->KCDGBMIGCND);
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_89,pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_Single__ToString
                     (__this_01,(MethodInfo *)&NJNCPNBIPCD_TypeInfo->static_fields->CGOPLAKCJDF);
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_87,pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_Int32__ToString((int)NJNCPNBIPCD_TypeInfo->static_fields + 0x14,(MethodInfo *)0x0)
  ;
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_71,pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_Single__ToString
                     (__this_02,(MethodInfo *)&NJNCPNBIPCD_TypeInfo->static_fields->MDCGJFFAJAP);
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_70,pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_Int32__ToString((int)NJNCPNBIPCD_TypeInfo->static_fields + 0x1c,(MethodInfo *)0x0)
  ;
  pSVar3 = System_String__Concat(pSVar3,StringLiteral_74,pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(StringLiteral_12386,pSVar3,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length != 0) {
      BBBLOLJAMJP->m_Items[0] = 8;
      Nekki_Utils_DetailedLog__Warning(pSVar2,BBBLOLJAMJP,(MethodInfo *)0x0);
      return pSVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

