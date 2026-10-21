// BFBONKPKBNL$$HDHADDGFBDM @ RVA 0x2FF06BC

bool BFBONKPKBNL__HDHADDGFBDM(BFBONKPKBNL_o *__this,IGFGDDANEPE_o *ENHJPOHLMCL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  ACHLOMELAJE_o *__this_00;
  IGFGDDANEPE_o *extraout_x1;
  IGFGDDANEPE_o *extraout_x1_00;
  IGFGDDANEPE_o *extraout_x1_01;
  
  if ((DAT_04565a66 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565a66 = 1;
    ENHJPOHLMCL = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,ENHJPOHLMCL);
    ENHJPOHLMCL = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    ENHJPOHLMCL = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,ENHJPOHLMCL);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar2 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (__this->fields).HMHEEKFFCPL.fields,(MethodInfo *)0x0);
    if (iVar2 < iVar3) {
      bVar1 = false;
    }
    else {
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).EHOFCENCPNF.fields,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f054c with catch @ 030f0778
                        */
      bVar1 = iVar2 <= iVar3;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

