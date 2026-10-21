// CJECMLGNCIC$$.ctor @ RVA 0x32FC6EC

void CJECMLGNCIC___ctor(CJECMLGNCIC_o *__this,CJECMLGNCIC_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  undefined2 uVar3;
  int32_t iVar4;
  int32_t iVar5;
  System_String_o **ppSVar6;
  
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(HJNEOLCKEMD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (CJECMLGNCIC_o *)0x0) {
    bVar1 = (IBKIPBJJCPG->fields)._PGFADODBAKD_k__BackingField.fields.fakeValueActive;
    bVar2 = (IBKIPBJJCPG->fields)._PGFADODBAKD_k__BackingField.fields.inited;
    uVar3 = *(undefined2 *)&(IBKIPBJJCPG->fields)._PGFADODBAKD_k__BackingField.fields.field_0xe;
    iVar4 = (IBKIPBJJCPG->fields)._PGFADODBAKD_k__BackingField.fields.currentCryptoKey;
    iVar5 = (IBKIPBJJCPG->fields)._PGFADODBAKD_k__BackingField.fields.hiddenValue;
    (__this->fields)._PGFADODBAKD_k__BackingField.fields.fakeValue =
         (IBKIPBJJCPG->fields)._PGFADODBAKD_k__BackingField.fields.fakeValue;
    (__this->fields)._PGFADODBAKD_k__BackingField.fields.fakeValueActive = bVar1;
    (__this->fields)._PGFADODBAKD_k__BackingField.fields.inited = bVar2;
    *(undefined2 *)&(__this->fields)._PGFADODBAKD_k__BackingField.fields.field_0xe = uVar3;
    (__this->fields)._PGFADODBAKD_k__BackingField.fields.currentCryptoKey = iVar4;
    (__this->fields)._PGFADODBAKD_k__BackingField.fields.hiddenValue = iVar5;
    ppSVar6 = &(__this->fields)._IAAGFGNCLHB_k__BackingField;
    *ppSVar6 = (IBKIPBJJCPG->fields)._IAAGFGNCLHB_k__BackingField;
    thunk_FUN_01c20e04(ppSVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

