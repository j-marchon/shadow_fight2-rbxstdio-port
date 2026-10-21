// NLPJLHOEAOE$$IAKHIFOFLGO @ RVA 0x3203114

void NLPJLHOEAOE__IAKHIFOFLGO(NLPJLHOEAOE_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  Nekki_Utils_GlobalTimer_o *__this_00;
  int64_t EFBCJHMOFAO;
  NLPJLHOEAOE_o *__this_01;
  NDPMLPGANCI_o *pNVar4;
  FCJBEKHDLAF_o *__this_02;
  NLPJLHOEAOE_o *__this_03;
  LAMJOHEKJNJ_o *__this_04;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  ACHLOMELAJE_o *pAVar5;
  
  if ((DAT_04566e0a & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e0a = 1;
    method = extraout_x1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo,method);
  }
  __this_00 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_Utils_GlobalTimer_o *)0x0) {
    EFBCJHMOFAO = Nekki_Utils_GlobalTimer__GetTime(__this_00,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM = EFBCJHMOFAO;
    NLPJLHOEAOE__GMBPGKOHFKM(__this,EFBCJHMOFAO,in_x2);
    NLPJLHOEAOE__BKKOLINLMAC(__this_01,NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM,in_x2);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04566e5a == '\0') {
      FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
      DAT_04566e5a = '\x01';
    }
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (MGNPHCAAEIO_TypeInfo->static_fields->_CANIKCKLKBL_k__BackingField == false) {
      return;
    }
    pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
      iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar4,(MethodInfo *)0x0);
      pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar4 != (NDPMLPGANCI_o *)0x0) {
        iVar3 = NDPMLPGANCI__FFIOCEOHPEM(pNVar4,(MethodInfo *)0x0);
        if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo);
        }
        if (DAT_04565b7f == '\0') {
          FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
          DAT_04565b7f = '\x01';
        }
        if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = false;
        if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO != (FCJBEKHDLAF_o *)0x0) {
          if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b7f == '\0') {
            FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
            DAT_04565b7f = '\x01';
          }
          if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_02 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
          if (__this_02 == (FCJBEKHDLAF_o *)0x0) goto LAB_033033d8;
          bVar1 = FCJBEKHDLAF__HFOECMBFJOD(__this_02,(MethodInfo *)0x0);
        }
        if ((iVar2 != 0) && (bVar1 != false || iVar3 != 6)) {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          NLPJLHOEAOE__EDEALNMENKI
                    ((NLPJLHOEAOE_o *)NLPJLHOEAOE_TypeInfo,
                     NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM,in_x2);
          NLPJLHOEAOE__JNKDDHGIAAE(__this_03,NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM,in_x2)
          ;
        }
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
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
           (__this_04 = (pAVar5->fields)._DDGPMHMNKNA_k__BackingField,
           __this_04 != (LAMJOHEKJNJ_o *)0x0)) {
          LAMJOHEKJNJ__NPCIBMAAJPM
                    (__this_04,NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_033033d8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

