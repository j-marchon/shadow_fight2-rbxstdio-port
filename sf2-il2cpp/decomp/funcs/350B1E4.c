// FKDLCJJOGIP$$BBDBCNEEGFB @ RVA 0x350B1E4

void FKDLCJJOGIP__BBDBCNEEGFB(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  AAPGCAPGBLG_o *pAVar4;
  EEGDOGKBLNG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar5;
  LPAPAMPGDFN_o *pLVar6;
  
  if ((DAT_045688c6 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8738);
    FUN_01bab630(&StringLiteral_15259);
    FUN_01bab630(&StringLiteral_3674);
    DAT_045688c6 = 1;
    method = extraout_x1;
  }
  if ((__this->fields)._MEAPCEHFFHD_k__BackingField != false) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0) {
    bVar1 = false;
  }
  else {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar5 == (ACHLOMELAJE_o *)0x0) ||
       (pLVar6 = (pAVar5->fields).LMCDOMHENMC, pLVar6 == (LPAPAMPGDFN_o *)0x0)) goto LAB_0360b3f4;
    bVar1 = (pLVar6->fields).AMIMEMOELHE == 0x32;
  }
  pAVar4 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pAVar4 != (AAPGCAPGBLG_o *)0x0) {
    bVar2 = AAPGCAPGBLG__LAAKLBPOMGP(pAVar4,StringLiteral_15259,(MethodInfo *)0x0);
    if (!bVar2) {
LAB_0360b3e4:
      IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0);
      return;
    }
    pAVar4 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pAVar4 != (AAPGCAPGBLG_o *)0x0) {
      bVar2 = AAPGCAPGBLG__LAAKLBPOMGP(pAVar4,StringLiteral_3674,(MethodInfo *)0x0);
      if (!bVar2) goto LAB_0360b3e4;
      pAVar4 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pAVar4 != (AAPGCAPGBLG_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        bVar3 = AAPGCAPGBLG__LAAKLBPOMGP(pAVar4,StringLiteral_8738,(MethodInfo *)0x0);
        bVar2 = IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0);
        if (!bVar1 && ((bVar3 ^ 0xffU) & 1) == 0) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (__this_00 == (EEGDOGKBLNG_o *)0x0) goto LAB_0360b3f4;
          bVar3 = EEGDOGKBLNG__NMFKMEFIIMP(__this_00,(MethodInfo *)0x0);
        }
        if ((bVar2 & bVar3) == 0) {
          return;
        }
        (__this->fields).KOMAKPPBFEM = 1;
        FKDLCJJOGIP__GIENGNEGHPJ(__this,1,method_00);
        return;
      }
    }
  }
LAB_0360b3f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

