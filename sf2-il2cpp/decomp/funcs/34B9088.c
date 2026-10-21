// GKLPDMLELJF$$.ctor @ RVA 0x34B9088

void GKLPDMLELJF___ctor(GKLPDMLELJF_o *__this,GKLPDMLELJF_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  bool_conflict bVar2;
  undefined7 uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  GKLPDMLELJF___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (GKLPDMLELJF_o *)0x0) {
    (__this->fields).ANAJGHJEEOC = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
    (__this->fields).FFOIEHLJLDA = (IBKIPBJJCPG->fields).FFOIEHLJLDA;
    thunk_FUN_01c20e04();
    (__this->fields).LLBEKLPKDHK = (IBKIPBJJCPG->fields).LLBEKLPKDHK;
    thunk_FUN_01c20e04();
    iVar1 = (IBKIPBJJCPG->fields).PFJPLCAIGJH;
    (__this->fields).PEBHLKLGDBM = (IBKIPBJJCPG->fields).PEBHLKLGDBM;
    (__this->fields).PFJPLCAIGJH = iVar1;
    bVar2 = (IBKIPBJJCPG->fields).ADEIKPGDIPM.fields.hasValue;
    uVar3 = *(undefined7 *)&(IBKIPBJJCPG->fields).ADEIKPGDIPM.fields.field_0x1;
    (__this->fields).ADEIKPGDIPM.fields.value = (IBKIPBJJCPG->fields).ADEIKPGDIPM.fields.value;
    (__this->fields).ADEIKPGDIPM.fields.hasValue = bVar2;
    *(undefined7 *)&(__this->fields).ADEIKPGDIPM.fields.field_0x1 = uVar3;
    pGVar4 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar4;
    thunk_FUN_01c20e04(&__this->fields,pGVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

