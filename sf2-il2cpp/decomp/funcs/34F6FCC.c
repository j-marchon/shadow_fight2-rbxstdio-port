// OLKKAIFGGAK$$CJJJPDDBCCH @ RVA 0x34F6FCC

GBJGJEGPHKD_o *
OLKKAIFGGAK__CJJJPDDBCCH(OLKKAIFGGAK_o *__this,int32_t EDGLFMHDPOO,MethodInfo *method)

{
  OLKKAIFGGAK_o *pOVar1;
  
  if ((DAT_045687fc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_9159);
    DAT_045687fc = 1;
  }
  if ((uint)EDGLFMHDPOO < 2) {
    return (__this->fields).HMIAFJALFCJ;
  }
  if (EDGLFMHDPOO == 2) {
    pOVar1 = (__this->fields).BPJMMBGIMNC;
    if (pOVar1 != (OLKKAIFGGAK_o *)0x0) goto LAB_035f7038;
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_9159,(MethodInfo *)0x0);
  }
  else if ((EDGLFMHDPOO == 3) &&
          (pOVar1 = (__this->fields).NFMBPIPEKGF, pOVar1 != (OLKKAIFGGAK_o *)0x0)) {
LAB_035f7038:
    return (pOVar1->fields).HMIAFJALFCJ;
  }
  return (GBJGJEGPHKD_o *)0x0;
}

