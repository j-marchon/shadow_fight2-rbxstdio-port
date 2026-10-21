// FDJKKAFIEFB$$HCPLEOIKIEH @ RVA 0x35B570C

bool FDJKKAFIEFB__HCPLEOIKIEH
               (FDJKKAFIEFB_o *__this,DBNEEHGBCJD_o *NFDKMBAGHPD,bool HBOEDCODABJ,bool BEPHNFAELEI,
               MethodInfo *method)

{
  bool bVar1;
  ACHLOMELAJE_o *__this_00;
  FGKGKDEJCOG_o *__this_01;
  DBIINAFCKME_o *__this_02;
  MethodInfo *method_00;
  System_Action_o *pSVar2;
  DBNEEHGBCJD_o **ppDVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = NFDKMBAGHPD;
  auVar4._0_8_ = __this;
  method_00 = (MethodInfo *)(ulong)HBOEDCODABJ;
  if ((DAT_04568eb4 & 1) == 0) {
    auVar4 = FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568eb4 = 1;
  }
  if (NFDKMBAGHPD == (DBNEEHGBCJD_o *)0x0) {
    bVar1 = false;
  }
  else {
    if (BEPHNFAELEI) {
      FDJKKAFIEFB__PCCPIHPECMA(auVar4._0_8_,auVar4._8_8_);
    }
    ppDVar3 = &(__this->fields)._ELDCPOBNFJJ_k__BackingField;
    *ppDVar3 = NFDKMBAGHPD;
    thunk_FUN_01c20e04(ppDVar3,NFDKMBAGHPD);
    FDJKKAFIEFB__PGAOEMFNKCA(__this,*ppDVar3,method_00);
    if (HBOEDCODABJ) {
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
      if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0)
      {
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
        if ((*ppDVar3 == (DBNEEHGBCJD_o *)0x0) ||
           (__this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
           __this_00 == (ACHLOMELAJE_o *)0x0)) goto LAB_036b58dc;
        ACHLOMELAJE__GLMMCDPNLBG
                  (__this_00,((*ppDVar3)->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
        if (DAT_04565e59 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565e59 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
        if (__this_01 == (FGKGKDEJCOG_o *)0x0) goto LAB_036b58dc;
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_01,false,(MethodInfo *)0x0);
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
      if ((*ppDVar3 == (DBNEEHGBCJD_o *)0x0) || (__this_02 == (DBIINAFCKME_o *)0x0)) {
LAB_036b58dc:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      DBIINAFCKME__DLLHOLJPNNJ
                (__this_02,((*ppDVar3)->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields).GBPDDFOIDPG;
    if (pSVar2 != (System_Action_o *)0x0) {
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
    }
    bVar1 = true;
  }
  return bVar1;
}

