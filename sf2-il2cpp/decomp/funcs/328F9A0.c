// BKKENCMPLLF$$CGJFEEGNFOM @ RVA 0x328F9A0

void BKKENCMPLLF__CGJFEEGNFOM(BKKENCMPLLF_o *__this,MethodInfo *method)

{
  EEHFEPPDBHL_o *pEVar1;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  EEHFEPPDBHL_o **ppEVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_0456730a & 1) == 0) {
    FUN_01bab630(&EEHFEPPDBHL_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456730a = 1;
    method = extraout_x1;
  }
  auVar3 = thunk_FUN_01bda818(EEHFEPPDBHL_TypeInfo,method);
  pEVar1 = auVar3._0_8_;
  EEHFEPPDBHL___ctor(pEVar1,auVar3._8_8_);
  ppEVar2 = &(__this->fields)._OGOHLLOEANF_k__BackingField;
  *ppEVar2 = pEVar1;
  thunk_FUN_01c20e04(ppEVar2,pEVar1);
  if (*ppEVar2 != (EEHFEPPDBHL_o *)0x0) {
    EEHFEPPDBHL__HLPHKOBKPML(*ppEVar2,StringLiteral_1,in_x2);
    if (*ppEVar2 != (EEHFEPPDBHL_o *)0x0) {
      EEHFEPPDBHL__FFHJDGPNCKJ(*ppEVar2,StringLiteral_1,in_x2);
      pEVar1 = *ppEVar2;
      if (pEVar1 != (EEHFEPPDBHL_o *)0x0) {
        (pEVar1->fields).JODJOLBBJNI = 1;
        (pEVar1->fields).IFICKDAKCHN = 0;
        EEHFEPPDBHL__HLPHKOBKPML(pEVar1,(pEVar1->fields).KKMDFLKPNNJ,in_x2);
        pEVar1 = *ppEVar2;
        if ((pEVar1 != (EEHFEPPDBHL_o *)0x0) &&
           (EEHFEPPDBHL__FFHJDGPNCKJ(pEVar1,(pEVar1->fields).JAAACMPGMKJ,in_x2),
           *ppEVar2 != (EEHFEPPDBHL_o *)0x0)) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

