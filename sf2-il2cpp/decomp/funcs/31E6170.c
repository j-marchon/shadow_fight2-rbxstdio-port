// PNGKLCHKPEO$$EOHMFJFFFIN @ RVA 0x31E6170

void PNGKLCHKPEO__EOHMFJFFFIN
               (PNGKLCHKPEO_o *__this,System_String_o *ODEBMINEHOC,System_String_o *FOBBLEELKOM,
               System_String_o *JNBKCMLPDAE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  FKGKLILLOBG_o *pFVar3;
  FKGKLILLOBG_o **ppFVar4;
  
  if ((DAT_04566d60 & 1) == 0) {
    FUN_01bab630(&FKGKLILLOBG_TypeInfo);
    FUN_01bab630(&StringLiteral_10451);
    FUN_01bab630(&StringLiteral_3359);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566d60 = 1;
  }
  iVar2 = LCAJGLLBBEC__HGMMJIIEOLF(ODEBMINEHOC,(MethodInfo *)0x0);
  (__this->fields).LOAFPIOGJAF = iVar2;
  iVar2 = CMCJGLAABFO__ENNCOIHDFKP(1,FOBBLEELKOM,(MethodInfo *)0x0);
  (__this->fields).AKBDFFLEINL = iVar2;
  if (iVar2 == 3) {
    bVar1 = System_String__op_Equality(JNBKCMLPDAE,StringLiteral_3359,(MethodInfo *)0x0);
    (__this->fields).GCOJOACAHJA = bVar1;
  }
  (__this->fields).JNLOFJLAOFM = 1;
  bVar1 = System_String__op_Equality(StringLiteral_1,StringLiteral_10451,(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields).JNLOFJLAOFM = 2;
  }
  pFVar3 = (FKGKLILLOBG_o *)thunk_FUN_01bda818(FKGKLILLOBG_TypeInfo);
  FKGKLILLOBG___ctor(pFVar3,0.0,(MethodInfo *)0x0);
  ppFVar4 = &(__this->fields).PHBEOHIEDOP;
  *ppFVar4 = pFVar3;
  thunk_FUN_01c20e04(ppFVar4,pFVar3);
  pFVar3 = (FKGKLILLOBG_o *)thunk_FUN_01bda818(FKGKLILLOBG_TypeInfo);
  FKGKLILLOBG___ctor(pFVar3,0.0,(MethodInfo *)0x0);
  ppFVar4 = &(__this->fields).KIFDEDHNJCA;
  *ppFVar4 = pFVar3;
  thunk_FUN_01c20e04(ppFVar4,pFVar3);
  return;
}

