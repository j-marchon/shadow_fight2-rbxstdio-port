// KKLJIDJBFEI$$PKLIMHECLPF @ RVA 0x3146B90

void KKLJIDJBFEI__PKLIMHECLPF(KKLJIDJBFEI_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *pNVar2;
  AJJPCMDCAOB_o *__this_00;
  System_Action_o *pSVar3;
  
  if ((DAT_04566780 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_9855);
    FUN_01bab630(&StringLiteral_11527);
    FUN_01bab630(&StringLiteral_9856);
    DAT_04566780 = 1;
  }
  pNVar2 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
           FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (pNVar2 != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)pNVar2->max_length == 0) {
LAB_03246ce0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pNVar2->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11527,pNVar2,(MethodInfo *)0x0);
    iVar1 = (__this->fields).ENPFGKLBPOH;
    if (iVar1 < 1) {
      (__this->fields).ENPFGKLBPOH = iVar1 + 1;
      pNVar2 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
               FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      if (pNVar2 != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
        if ((int)pNVar2->max_length == 0) goto LAB_03246ce0;
        pNVar2->m_Items[0] = 6;
        Nekki_Utils_DetailedLog__Error(StringLiteral_9856,pNVar2,(MethodInfo *)0x0);
        __this_00 = (__this->fields).IDFAHJPJGBM;
        if (__this_00 != (AJJPCMDCAOB_o *)0x0) {
          AJJPCMDCAOB__GIENGNEGHPJ(__this_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pNVar2 = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
               FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
      if (pNVar2 != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
        if ((int)pNVar2->max_length == 0) goto LAB_03246ce0;
        pNVar2->m_Items[0] = 6;
        Nekki_Utils_DetailedLog__Error(StringLiteral_9855,pNVar2,(MethodInfo *)0x0);
        pSVar3 = (__this->fields).DHLLCGMLBLE;
        if (pSVar3 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03246c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(pSVar3->fields).super.super.invoke_impl)
                    ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

