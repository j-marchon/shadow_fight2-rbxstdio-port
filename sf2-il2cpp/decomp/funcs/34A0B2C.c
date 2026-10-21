// CMDDLMAPPMD$$.ctor @ RVA 0x34A0B2C

void CMDDLMAPPMD___ctor(CMDDLMAPPMD_o *__this,CMDDLMAPPMD_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined2 uVar3;
  int32_t iVar4;
  int32_t iVar5;
  
  NKPJLEMPIKD___ctor((NKPJLEMPIKD_o *)__this,(NKPJLEMPIKD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (CMDDLMAPPMD_o *)0x0) {
    bVar1 = (IBKIPBJJCPG->fields)._GOMOBAPCMOM_k__BackingField.fields.fakeValueActive;
    bVar2 = (IBKIPBJJCPG->fields)._GOMOBAPCMOM_k__BackingField.fields.inited;
    uVar3 = *(undefined2 *)&(IBKIPBJJCPG->fields)._GOMOBAPCMOM_k__BackingField.fields.field_0xe;
    iVar4 = (IBKIPBJJCPG->fields)._GOMOBAPCMOM_k__BackingField.fields.currentCryptoKey;
    iVar5 = (IBKIPBJJCPG->fields)._GOMOBAPCMOM_k__BackingField.fields.hiddenValue;
    (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.fakeValue =
         (IBKIPBJJCPG->fields)._GOMOBAPCMOM_k__BackingField.fields.fakeValue;
    (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.fakeValueActive = bVar1;
    (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.inited = bVar2;
    *(undefined2 *)&(__this->fields)._GOMOBAPCMOM_k__BackingField.fields.field_0xe = uVar3;
    (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.currentCryptoKey = iVar4;
    (__this->fields)._GOMOBAPCMOM_k__BackingField.fields.hiddenValue = iVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

