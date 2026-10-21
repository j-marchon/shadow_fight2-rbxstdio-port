// GEIHBHEDJJM$$.ctor @ RVA 0x3516A90

/* WARNING: Type propagation algorithm not settling */

void GEIHBHEDJJM___ctor(GEIHBHEDJJM_o *__this,GEIHBHEDJJM_o *JJMOKKDDOEM,MethodInfo *method)

{
  System_Nullable_ObscuredDouble__o *pSVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  undefined6 uVar4;
  bool_conflict bVar5;
  undefined7 uVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **ppCVar7;
  double dVar8;
  int64_t iVar9;
  int64_t iVar10;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (JJMOKKDDOEM != (GEIHBHEDJJM_o *)0x0) {
    ppCVar7 = &(__this->fields).PCNEDMAJMOJ;
    *ppCVar7 = (JJMOKKDDOEM->fields).PCNEDMAJMOJ;
    thunk_FUN_01c20e04(ppCVar7);
    pSVar1 = &(JJMOKKDDOEM->fields).JKDNFNLGGLI;
    bVar2 = (pSVar1->fields).value.fields.fakeValueActive;
    bVar3 = (pSVar1->fields).value.fields.inited;
    uVar4 = *(undefined6 *)&(pSVar1->fields).value.fields.field_0x22;
    dVar8 = (JJMOKKDDOEM->fields).JKDNFNLGGLI.fields.value.fields.fakeValue;
    iVar9 = (JJMOKKDDOEM->fields).JKDNFNLGGLI.fields.value.fields.hiddenValue;
    iVar10 = (JJMOKKDDOEM->fields).JKDNFNLGGLI.fields.value.fields.currentCryptoKey;
    bVar5 = (JJMOKKDDOEM->fields).JKDNFNLGGLI.fields.hasValue;
    uVar6 = *(undefined7 *)&(JJMOKKDDOEM->fields).JKDNFNLGGLI.fields.field_0x1;
    (__this->fields).JKDNFNLGGLI.fields.value.fields.hiddenValueOldByte8.fields =
         (JJMOKKDDOEM->fields).JKDNFNLGGLI.fields.value.fields.hiddenValueOldByte8.fields;
    (__this->fields).JKDNFNLGGLI.fields.value.fields.hiddenValue = iVar9;
    pSVar1 = &(__this->fields).JKDNFNLGGLI;
    (pSVar1->fields).value.fields.fakeValueActive = bVar2;
    (pSVar1->fields).value.fields.inited = bVar3;
    *(undefined6 *)&(pSVar1->fields).value.fields.field_0x22 = uVar4;
    (__this->fields).JKDNFNLGGLI.fields.value.fields.fakeValue = dVar8;
    (__this->fields).JKDNFNLGGLI.fields.value.fields.currentCryptoKey = iVar10;
    (__this->fields).JKDNFNLGGLI.fields.hasValue = bVar5;
    *(undefined7 *)&(__this->fields).JKDNFNLGGLI.fields.field_0x1 = uVar6;
    (__this->fields).NKMGMPKKEAA = (JJMOKKDDOEM->fields).NKMGMPKKEAA;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

