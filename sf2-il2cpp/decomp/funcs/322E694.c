// DEKKGJNMFEB$$BEENALLFOCN @ RVA 0x322E694

AMJMGFCCAKN_o *
DEKKGJNMFEB__BEENALLFOCN(DEKKGJNMFEB_o *__this,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  System_String_o **ppSVar1;
  bool bVar2;
  System_String_array *pSVar3;
  GGHCLMEFIGO_o *__this_00;
  ACHLOMELAJE_o *pAVar4;
  GGLKHCAIGDI_o *pGVar5;
  int iVar6;
  System_String_o *b;
  System_String_o *KGLJICLJHEL;
  AMJMGFCCAKN_o *pAVar7;
  
  if ((DAT_04566fc2 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    __this = (DEKKGJNMFEB_o *)FUN_01bab630(&StringLiteral_1);
    DAT_04566fc2 = 1;
  }
  if (AFKICLAFDKC != (System_String_o *)0x0) {
    pSVar3 = System_String__Split(AFKICLAFDKC,0x7c,0,(MethodInfo *)0x0);
    __this = (DEKKGJNMFEB_o *)(NLPJLHOEAOE_c *)0x0;
    if (pSVar3 != (System_String_array *)0x0) {
      if (pSVar3->max_length == 0) {
        return (AMJMGFCCAKN_o *)0x0;
      }
      iVar6 = (int)pSVar3->max_length;
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      ppSVar1 = pSVar3->m_Items + 1;
      if (iVar6 < 2) {
        ppSVar1 = (System_String_o **)&StringLiteral_1;
      }
      KGLJICLJHEL = pSVar3->m_Items[0];
      b = *ppSVar1;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      __this = (DEKKGJNMFEB_o *)NLPJLHOEAOE_TypeInfo;
      if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
        __this_00 = (pAVar4->fields).OIDPLCLELEN;
        __this = (DEKKGJNMFEB_o *)0x0;
        if (__this_00 != (GGHCLMEFIGO_o *)0x0) {
          __this = (DEKKGJNMFEB_o *)
                   GGHCLMEFIGO__JNFIBDBHNOA(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
          if ((NLPJLHOEAOE_c *)__this == (NLPJLHOEAOE_c *)0x0) {
            return (AMJMGFCCAKN_o *)0x0;
          }
          pAVar7 = (((NLPJLHOEAOE_c *)__this)->_1).events;
          if (pAVar7 == (AMJMGFCCAKN_o *)0x0) {
            return (AMJMGFCCAKN_o *)0x0;
          }
          pGVar5 = (pAVar7->fields).PHAGOJCOMPN;
          if (pGVar5 != (GGLKHCAIGDI_o *)0x0) {
            bVar2 = System_String__op_Inequality
                              ((pGVar5->fields)._COIPKAKHDFP_k__BackingField,b,(MethodInfo *)0x0);
            if (!bVar2) {
              return pAVar7;
            }
            return (AMJMGFCCAKN_o *)0x0;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

