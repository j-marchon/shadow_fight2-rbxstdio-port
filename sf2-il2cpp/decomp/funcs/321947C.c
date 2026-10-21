// NBLEEDEAPHB$$ONNMMOCEJNN @ RVA 0x321947C

bool NBLEEDEAPHB__ONNMMOCEJNN(NBLEEDEAPHB_o *__this,MethodInfo *method)

{
  bool bVar1;
  IGFGDDANEPE_o *__this_00;
  DEKKGJNMFEB_o *__this_01;
  AMJMGFCCAKN_o *__this_02;
  int64_t iVar2;
  IGFGDDANEPE_o **ppIVar3;
  AMJMGFCCAKN_o **ppAVar4;
  System_String_o *KGLJICLJHEL;
  
  if ((DAT_04566eec & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566eec = 1;
  }
  bVar1 = System_String__op_Inequality
                    ((__this->fields).CJLNOJMBNPN,StringLiteral_1,(MethodInfo *)0x0);
  if ((bVar1) ||
     (bVar1 = System_String__op_Inequality
                        ((__this->fields).GECBFNBEFDE,StringLiteral_1,(MethodInfo *)0x0), bVar1)) {
    KGLJICLJHEL = (__this->fields).CJLNOJMBNPN;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE__JNFIBDBHNOA(KGLJICLJHEL,(MethodInfo *)0x0);
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DEKKGJNMFEB_TypeInfo);
    }
    __this_01 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 == (DEKKGJNMFEB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_02 = DEKKGJNMFEB__BEENALLFOCN(__this_01,(__this->fields).GECBFNBEFDE,(MethodInfo *)0x0);
    if (__this_00 == (IGFGDDANEPE_o *)0x0) {
      if (__this_02 == (AMJMGFCCAKN_o *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = AMJMGFCCAKN__IEMNJCLKOIP(__this_02,(MethodInfo *)0x0);
      }
    }
    else {
      iVar2 = IGFGDDANEPE__OMMIKNKEKJN(__this_00,(MethodInfo *)0x0);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      }
      iVar2 = MGNPHCAAEIO__HCDHCLBPBHN(iVar2,(MethodInfo *)0x0);
    }
    (__this->fields).AOOKMODPLGM = iVar2;
    (__this->fields).EHKKBKHGDHE = true;
    ppIVar3 = &(__this->fields).KDLMLBDNMJI;
    *ppIVar3 = __this_00;
    thunk_FUN_01c20e04(ppIVar3,__this_00);
    ppAVar4 = &(__this->fields).MPKLNNHFFAF;
    *ppAVar4 = __this_02;
    thunk_FUN_01c20e04(ppAVar4,__this_02);
    if ((__this->fields).AOOKMODPLGM == 0) {
      return false;
    }
  }
  return true;
}

