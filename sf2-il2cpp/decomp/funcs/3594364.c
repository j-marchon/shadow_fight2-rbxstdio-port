// HNCJMEBNIMP$$MAHFCKJGBPP @ RVA 0x3594364

void HNCJMEBNIMP__MAHFCKJGBPP(HNCJMEBNIMP_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  MethodInfo *in_x3;
  ACHLOMELAJE_o *__this_00;
  System_String_o *EELDDPEAGGA;
  int64_t local_40;
  System_String_o *local_38;
  
  if ((DAT_04568d92 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_3535);
    FUN_01bab630(&StringLiteral_6868);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568d92 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  local_38 = StringLiteral_1;
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  local_40 = 0;
  HNCJMEBNIMP__DLICHIJMCLK(__this,&local_38,&local_40,in_x3);
  bVar1 = System_String__op_Equality(local_38,StringLiteral_6868,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (ACHLOMELAJE_o *)0x0) {
LAB_03694570:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = ACHLOMELAJE__IMLCNMCBEEN(__this_00,(MethodInfo *)0x0);
    ACHLOMELAJE__CEICBEHCCDA(__this_00,local_40 + iVar2,false,(MethodInfo *)0x0);
  }
  else {
    bVar1 = System_String__op_Equality(local_38,StringLiteral_3535,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_03694570;
      iVar2 = ACHLOMELAJE__HEHFNBKGJLP(__this_00,(MethodInfo *)0x0);
      ACHLOMELAJE__OGPHHGFFKHD(__this_00,local_40 + iVar2,6,false,(MethodInfo *)0x0);
    }
    else {
      bVar1 = System_String__op_Inequality(local_38,StringLiteral_1,(MethodInfo *)0x0);
      if (bVar1) {
        if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_03694570;
        ACHLOMELAJE__GHLNGBDFENI(__this_00,local_38,(int32_t)local_40,(MethodInfo *)0x0);
      }
    }
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).FPGPCNBKBDB,(MethodInfo *)0x0);
  if (!bVar1) {
    EELDDPEAGGA = (__this->fields).FPGPCNBKBDB;
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PNLFHHJGDLI__CJKCKACIIHK(EELDDPEAGGA,1.0,1.0,(MethodInfo *)0x0);
  }
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

