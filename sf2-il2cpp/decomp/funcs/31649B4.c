// NLHMCOFIBKF$$MAHFCKJGBPP @ RVA 0x31649B4

void NLHMCOFIBKF__MAHFCKJGBPP(NLHMCOFIBKF_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  CFGLKHFFEKA_o *__this_00;
  NLPJLHOEAOE_o *__this_01;
  MethodInfo *method_00;
  
  if ((DAT_045668ab & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045668ab = 1;
  }
  method_00 = (MethodInfo *)0x0;
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  value = NLHMCOFIBKF__GKHFOGJEDPN(__this,AAJBIMFNMBB,method_00);
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    value = NLHMCOFIBKF__HIAILHACKBH(__this,AAJBIMFNMBB,method_00);
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = EOAOCPLIKOI__KEAMCFNFPHB((MethodInfo *)0x0);
  if (__this_00 != (CFGLKHFFEKA_o *)0x0) {
    CFGLKHFFEKA__JAGMOPPIMKB(__this_00,value,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (NLPJLHOEAOE_o *)0x0) {
      NLPJLHOEAOE__OIHMMDEELDP(__this_01,value,(MethodInfo *)0x0);
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

