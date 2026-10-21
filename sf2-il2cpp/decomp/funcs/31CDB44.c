// HCKCBFOGMMJ$$OKJEEFHMCCD @ RVA 0x31CDB44

System_String_o *
HCKCBFOGMMJ__OKJEEFHMCCD
          (HCKCBFOGMMJ_o *__this,int64_t OGPGLGPMEPD,bool OJIMIGCACLG,MethodInfo *method)

{
  GKLPDMLELJF_o *pGVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)OJIMIGCACLG;
  if ((DAT_04566c82 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14457);
    DAT_04566c82 = 1;
  }
  pGVar1 = HCKCBFOGMMJ__LLEJFHJIBHC(__this,OGPGLGPMEPD,method_00);
  if (pGVar1 == (GKLPDMLELJF_o *)0x0) {
    pSVar2 = StringLiteral_14457;
    if (!OJIMIGCACLG) {
      pSVar2 = (System_String_o *)0x0;
    }
  }
  else {
    pSVar2 = (pGVar1->fields).LLBEKLPKDHK;
  }
  return pSVar2;
}

