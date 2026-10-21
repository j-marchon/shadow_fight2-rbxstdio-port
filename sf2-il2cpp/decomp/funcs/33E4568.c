// FCJBEKHDLAF$$JLKMCCAEFPC @ RVA 0x33E4568

void FCJBEKHDLAF__JLKMCCAEFPC(FCJBEKHDLAF_o *__this,bool INMJNAJNOAE,MethodInfo *method)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int32_t iVar4;
  int32_t iVar5;
  ACHLOMELAJE_o *pAVar6;
  OJHODFIGFMA_o *__this_00;
  AFFHKININGD_o *FBFPLEFCDOK;
  
  if ((DAT_04567ebf & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567ebf = 1;
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
  pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar6 != (ACHLOMELAJE_o *)0x0) {
    uVar1 = ACHLOMELAJE__LFOIBFFCBCL(pAVar6,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar6 != (ACHLOMELAJE_o *)0x0) {
      uVar2 = ACHLOMELAJE__KKAOKMLLBGL(pAVar6,(MethodInfo *)0x0);
      FBFPLEFCDOK = (__this->fields).FBFPLEFCDOK;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      }
      uVar3 = MGNPHCAAEIO__HLMADHKMCHN(FBFPLEFCDOK,INMJNAJNOAE,(MethodInfo *)0x0);
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar6 != (ACHLOMELAJE_o *)0x0) {
        iVar4 = ACHLOMELAJE__EOEAKGGDBFH(pAVar6,(MethodInfo *)0x0);
        if (uVar2 <= uVar3 + uVar1) {
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar5 = MGNPHCAAEIO__DGJACOJNPBB((MethodInfo *)0x0);
          if (iVar4 + 1 == iVar5) {
            __this_00 = (__this->fields).OONKKFFEMAK;
            if (__this_00 != (OJHODFIGFMA_o *)0x0) {
              OJHODFIGFMA__AAOBNFMOLCJ(__this_00,(MethodInfo *)0x0);
              return;
            }
            goto LAB_034e4744;
          }
        }
        return;
      }
    }
  }
LAB_034e4744:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

