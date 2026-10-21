// GCBHGPMLFBA$$.ctor @ RVA 0x2FED974

void GCBHGPMLFBA___ctor(GCBHGPMLFBA_o *__this,GCBHGPMLFBA_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined2 uVar2;
  CodeStage_AntiCheat_Common_ACTkByte4_o CVar3;
  float fVar4;
  int32_t iVar5;
  int32_t iVar6;
  
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(HJNEOLCKEMD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (GCBHGPMLFBA_o *)0x0) {
    bVar1 = (IBKIPBJJCPG->fields)._APGGCIMBEBJ_k__BackingField.fields.inited;
    uVar2 = *(undefined2 *)&(IBKIPBJJCPG->fields)._APGGCIMBEBJ_k__BackingField.fields.field_0x12;
    CVar3.fields = (IBKIPBJJCPG->fields)._APGGCIMBEBJ_k__BackingField.fields.hiddenValueOldByte4.
                   fields;
    fVar4 = (IBKIPBJJCPG->fields)._APGGCIMBEBJ_k__BackingField.fields.fakeValue;
    iVar5 = (IBKIPBJJCPG->fields)._APGGCIMBEBJ_k__BackingField.fields.currentCryptoKey;
    iVar6 = (IBKIPBJJCPG->fields)._APGGCIMBEBJ_k__BackingField.fields.hiddenValue;
    (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.fakeValueActive =
         (IBKIPBJJCPG->fields)._APGGCIMBEBJ_k__BackingField.fields.fakeValueActive;
    (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.inited = bVar1;
    *(undefined2 *)&(__this->fields)._APGGCIMBEBJ_k__BackingField.fields.field_0x12 = uVar2;
    (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)CVar3.fields;
    (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.fakeValue = fVar4;
    (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.currentCryptoKey = iVar5;
    (__this->fields)._APGGCIMBEBJ_k__BackingField.fields.hiddenValue = iVar6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

