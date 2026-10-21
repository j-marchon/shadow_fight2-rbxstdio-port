// INFNBCBIGJH$$.ctor @ RVA 0x31A3EC4

void INFNBCBIGJH___ctor(INFNBCBIGJH_o *__this,INFNBCBIGJH_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  int32_t iVar3;
  NILLKLHKLHG_o **ppNVar4;
  
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(HJNEOLCKEMD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (INFNBCBIGJH_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields)._BJMFPJBOHAL_k__BackingField;
    iVar2 = (IBKIPBJJCPG->fields)._PNBOGIHOKHF_k__BackingField;
    iVar3 = (IBKIPBJJCPG->fields)._EOELHACOHOC_k__BackingField;
    (__this->fields)._DCCMJOICGNK_k__BackingField =
         (IBKIPBJJCPG->fields)._DCCMJOICGNK_k__BackingField;
    (__this->fields)._BJMFPJBOHAL_k__BackingField = iVar1;
    (__this->fields)._PNBOGIHOKHF_k__BackingField = iVar2;
    (__this->fields)._EOELHACOHOC_k__BackingField = iVar3;
    ppNVar4 = &(__this->fields)._EPGADJGBICI_k__BackingField;
    *ppNVar4 = (IBKIPBJJCPG->fields)._EPGADJGBICI_k__BackingField;
    thunk_FUN_01c20e04(ppNVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

