// OCOEAJMJEOP$$BJKIFFGGDEE @ RVA 0x32AA550

void OCOEAJMJEOP__BJKIFFGGDEE
               (OCOEAJMJEOP_o *__this,NILLKLHKLHG_AOBOECPEMLA_o *HPACPFLKHPK,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_String_o *__this_00;
  MethodInfo *in_x3;
  MMFIDKMDADC_o *HPACPFLKHPK_00;
  NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO;
  
  if ((DAT_0456742b & 1) == 0) {
    FUN_01bab630(&NILLKLHKLHG_GLEGDBCJEOA_TypeInfo);
    __this = (OCOEAJMJEOP_o *)FUN_01bab630(&StringLiteral_10305);
    DAT_0456742b = 1;
  }
  if ((HPACPFLKHPK != (NILLKLHKLHG_AOBOECPEMLA_o *)0x0) &&
     (ACCIJLGMHOO = (NILLKLHKLHG_GLEGDBCJEOA_o *)(HPACPFLKHPK->fields).IMMNELPBGIF,
     ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0)) {
    bVar1 = (NILLKLHKLHG_GLEGDBCJEOA_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (ACCIJLGMHOO->klass->_2).naturalAligment) &&
       (((ACCIJLGMHOO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)NILLKLHKLHG_GLEGDBCJEOA_TypeInfo &&
        (__this_00 = (ACCIJLGMHOO->fields).IHJHOFMNAOA, __this = (OCOEAJMJEOP_o *)0x0,
        __this_00 != (System_String_o *)0x0)))) {
      HPACPFLKHPK_00 = (HPACPFLKHPK->fields).JDGILABGBGH;
      bVar2 = System_String__Equals(__this_00,StringLiteral_10305,(MethodInfo *)0x0);
      if (bVar2) {
        OCOEAJMJEOP__GAKBKBOMKHP((OCOEAJMJEOP_o *)0x1,ACCIJLGMHOO,HPACPFLKHPK_00,in_x3);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

