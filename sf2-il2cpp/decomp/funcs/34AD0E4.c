// KDPDBGNOFEN$$ONKNEALNBBB @ RVA 0x34AD0E4

System_String_o * KDPDBGNOFEN__ONKNEALNBBB(KDPDBGNOFEN_o *__this,MethodInfo *method)

{
  bool bVar1;
  Sfs2X_SmartFox_o *pSVar2;
  System_String_o **ppSVar3;
  
  if ((DAT_0456853b & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_0456853b = 1;
  }
  pSVar2 = (__this->fields).EBJCMEOKKOK;
  if (pSVar2 != (Sfs2X_SmartFox_o *)0x0) {
    bVar1 = Sfs2X_SmartFox__get_IsConnected(pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (__this->fields).EBJCMEOKKOK;
      if (pSVar2 == (Sfs2X_SmartFox_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ppSVar3 = &(pSVar2->fields).sessionToken;
      goto LAB_035ad13c;
    }
  }
  ppSVar3 = (System_String_o **)&StringLiteral_1;
LAB_035ad13c:
  return *ppSVar3;
}

