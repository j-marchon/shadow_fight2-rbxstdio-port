// NLPJLHOEAOE$$IDKGNMBDLJO @ RVA 0x31EE900

bool NLPJLHOEAOE__IDKGNMBDLJO
               (AMJMGFCCAKN_o *NEJFOIIDDAG,int32_t ACCIHBHMFPN,int64_t MLCGILMJLBJ,
               int64_t LBAAJNDIEMD,int32_t DFIBGGDJPLM,MethodInfo *method)

{
  bool bVar1;
  int64_t LBAAJNDIEMD_00;
  GGHCLMEFIGO_o *__this;
  DEKKGJNMFEB_o *__this_00;
  ACHLOMELAJE_o *pAVar2;
  
  if ((DAT_04566db5 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo,ACCIHBHMFPN,MLCGILMJLBJ,LBAAJNDIEMD,DFIBGGDJPLM);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566db5 = 1;
  }
  if (NEJFOIIDDAG != (AMJMGFCCAKN_o *)0x0) {
    LBAAJNDIEMD_00 = AMJMGFCCAKN__IEMNJCLKOIP(NEJFOIIDDAG,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
    MGNPHCAAEIO__PNMMGOGAIEE((HOOAAGABMBL_o *)NEJFOIIDDAG,0x12,1,LBAAJNDIEMD_00,(MethodInfo *)0x0);
    AMIINPEKKFB__LNGOANIDDNG(NEJFOIIDDAG,(MethodInfo *)0x0);
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
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
       (__this = (pAVar2->fields).OIDPLCLELEN, __this != (GGHCLMEFIGO_o *)0x0)) {
      GGHCLMEFIGO__HOOJKMPPCMC(__this,NEJFOIIDDAG,false,(MethodInfo *)0x0);
      if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (DEKKGJNMFEB_o *)0x0) {
        bVar1 = DEKKGJNMFEB__IKBILKIMBCB(__this_00,NEJFOIIDDAG,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

