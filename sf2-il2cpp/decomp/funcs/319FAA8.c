// BGMJBAKBOHL$$PPBANLLIGDK @ RVA 0x319FAA8

bool BGMJBAKBOHL__PPBANLLIGDK
               (BGMJBAKBOHL_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  ACHLOMELAJE_o *__this_00;
  IGFGDDANEPE_o *extraout_x1;
  IGFGDDANEPE_o *extraout_x1_00;
  IGFGDDANEPE_o *extraout_x1_01;
  
  if ((DAT_04566ad7 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo,NKCMBEFHFII,DPCEFBCDHPA);
    DAT_04566ad7 = 1;
    NKCMBEFHFII = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,NKCMBEFHFII);
    NKCMBEFHFII = extraout_x1_00;
  }
                    /* try { // try from 0329faf4 to 0339faff has its CatchHandler @ 0329f4bc */
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 0329fb00 to 0339fb07 has its CatchHandler @ 0329fb08 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 0329f9b0 with catch @ 0329fb08
                       catch() { ... } // from try @ 0329fa84 with catch @ 0329fb08
                       catch() { ... } // from try @ 0329fb00 with catch @ 0329fb08 */
    DAT_04565b7d = '\x01';
    NKCMBEFHFII = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,NKCMBEFHFII);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar2 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (__this->fields).DDGIAHKNGEJ.fields,(MethodInfo *)0x0);
    if (iVar2 < iVar3) {
      bVar1 = false;
    }
    else {
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).KEJPPMKBOBN.fields,(MethodInfo *)0x0);
      bVar1 = iVar2 <= iVar3;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

