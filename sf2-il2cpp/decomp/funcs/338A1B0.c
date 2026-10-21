// IDDIABHBDEE.MLOPIFFLMDK$$FMKHIOKCKDE @ RVA 0x338A1B0

bool IDDIABHBDEE_MLOPIFFLMDK__FMKHIOKCKDE
               (IDDIABHBDEE_MLOPIFFLMDK_o *__this,System_Xml_XmlNode_o *node,MethodInfo *method)

{
  bool bVar1;
  CFGLKHFFEKA_o *pCVar2;
  System_ValueTuple_CFGLKHFFEKA__CFGLKHFFEKA__o SVar3;
  
  if ((DAT_04567bd6 & 1) == 0) {
    FUN_01bab630(&CFGLKHFFEKA_TypeInfo);
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    DAT_04567bd6 = 1;
  }
  if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  SVar3 = IDDIABHBDEE__LIFBLANNHLO(node,(MethodInfo *)0x0);
  pCVar2 = (__this->fields).currentVersion;
  if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = CFGLKHFFEKA__ONPEKFBMDKM(pCVar2,SVar3.fields.Item1,(MethodInfo *)0x0);
  if (bVar1) {
    pCVar2 = (__this->fields).currentVersion;
    if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = CFGLKHFFEKA__IDMIELGIHJC(pCVar2,SVar3.fields.Item2,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}

