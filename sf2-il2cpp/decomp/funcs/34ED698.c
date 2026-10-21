// OLKKAIFGGAK$$EOKEMPNFDJM @ RVA 0x34ED698

float OLKKAIFGGAK__EOKEMPNFDJM(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  FCJBEKHDLAF_o *__this_00;
  NKDMOOEFPHJ_o *__this_01;
  GPJEDNEEAFK_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  OLKKAIFGGAK_o *__this_03;
  float fVar3;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035ed61c with catch @ 035ed69c
                       catch(type#2 @ 00000000) { ... } // from try @ 035ed67c with catch @ 035ed69c
                       catch(type#2 @ 00000000) { ... } // from try @ 035ed694 with catch @ 035ed69c
                        */
  if ((DAT_045687d9 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045687d9 = 1;
    method = extraout_x1;
  }
  if ((__this->fields)._DDFDFOGDLAL_k__BackingField != false) {
    return 100.0;
  }
  __this_03 = (__this->fields).BPJMMBGIMNC;
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
    method = extraout_x1_01;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,method);
  }
  __this_00 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  if (__this_00 != (FCJBEKHDLAF_o *)0x0) {
    iVar2 = FCJBEKHDLAF__IHMLDBDLJON(__this_00,(MethodInfo *)0x0);
    if (iVar2 == 0x14) {
      if (__this_03 == (OLKKAIFGGAK_o *)0x0) goto LAB_035ed7bc;
      bVar1 = OLKKAIFGGAK__HODPOCMNNIN(__this_03,method_00);
      if (bVar1) {
        __this_01 = (__this_03->fields).LLMNNPKEGMB;
        if (__this_01 == (NKDMOOEFPHJ_o *)0x0) goto LAB_035ed7bc;
        bVar1 = NKDMOOEFPHJ__GMHAHMILKBP(__this_01,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0.0;
        }
      }
    }
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = MGNPHCAAEIO_TypeInfo->static_fields->EKPKJENEGPC;
    if (__this_02 != (GPJEDNEEAFK_o *)0x0) {
      fVar3 = GPJEDNEEAFK__PCIIAGJFNPG(__this_02,__this_03,(MethodInfo *)0x0);
      return fVar3;
    }
  }
LAB_035ed7bc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

