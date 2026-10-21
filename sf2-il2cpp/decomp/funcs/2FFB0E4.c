// JMDPBFOCHHP.ENBCJNLAHAC$$ToString @ RVA 0x2FFB0E4

System_String_o *
JMDPBFOCHHP_ENBCJNLAHAC__ToString(JMDPBFOCHHP_ENBCJNLAHAC_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04565acf & 1) == 0) {
    FUN_01bab630(&StringLiteral_19791);
    DAT_04565acf = 1;
  }
  pSVar1 = System_String__Format
                     (StringLiteral_19791,(Il2CppObject *)(__this->fields).JIJLBFGKNJK,
                      (Il2CppObject *)(__this->fields).LEJBNEIJJIF,(MethodInfo *)0x0);
  return pSVar1;
}

