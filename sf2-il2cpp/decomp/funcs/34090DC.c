// MGNPHCAAEIO$$NBKKHICFOOA @ RVA 0x34090DC

KMJDCOABCCG_o * MGNPHCAAEIO__NBKKHICFOOA(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  MGNPHCAAEIO_FGHBAEIKNBF_o *__this;
  KMJDCOABCCG_o *pKVar1;
  FEPPOONJCGI_o *pFVar2;
  EKGDLIKHEMA_o *pEVar3;
  MGNPHCAAEIO_ONAGKGIEEGI_o *__this_00;
  LKPNOBFEAKD_o *pLVar4;
  MethodInfo *extraout_x1;
  ACHLOMELAJE_o *pAVar5;
  
  if ((DAT_0456802d & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456802d = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  __this = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ;
  if (__this != (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0) {
    pKVar1 = MGNPHCAAEIO_FGHBAEIKNBF__MDAFMGBHOGB(__this,KGLJICLJHEL,(MethodInfo *)0x0);
    if (pKVar1 == (KMJDCOABCCG_o *)0x0) {
      return (KMJDCOABCCG_o *)0x0;
    }
    if ((pKVar1->fields).DKHMDPIMHIJ == false) {
      (pKVar1->fields).DKHMDPIMHIJ = true;
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
       (pFVar2 = (pAVar5->fields).IMJJJJJMMHL, pFVar2 != (FEPPOONJCGI_o *)0x0)) {
      pEVar3 = FEPPOONJCGI__CMIEOMMDGLC(pFVar2,KGLJICLJHEL,(MethodInfo *)0x0);
      if (pEVar3 == (EKGDLIKHEMA_o *)0x0) {
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->PHHNGOGNMAG;
        if (__this_00 == (MGNPHCAAEIO_ONAGKGIEEGI_o *)0x0) goto LAB_0350928c;
        pLVar4 = MGNPHCAAEIO_ONAGKGIEEGI__EOHNEGGPIOL(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
        if ((pLVar4 != (LKPNOBFEAKD_o *)0x0) && ((pLVar4->fields).KAFNDKOPMDH < 1)) {
          (pLVar4->fields).KAFNDKOPMDH = 1;
        }
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
         (pFVar2 = (pAVar5->fields).IMJJJJJMMHL, pFVar2 != (FEPPOONJCGI_o *)0x0)) {
        FEPPOONJCGI__DOCPOJKODOE(pFVar2,(MethodInfo *)0x0);
        return pKVar1;
      }
    }
  }
LAB_0350928c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

