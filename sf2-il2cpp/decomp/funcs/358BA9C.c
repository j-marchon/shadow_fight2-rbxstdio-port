// EnterScreen.IENCLOKOKOB$$GGHMAENCKCH @ RVA 0x358BA9C

void EnterScreen_IENCLOKOKOB__GGHMAENCKCH(EnterScreen_IENCLOKOKOB_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  EnterScreen_o *pEVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04568d45 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d45 = 1;
    method = extraout_x1;
  }
  pEVar2 = (__this->fields).__4__this;
  if (pEVar2 != (EnterScreen_o *)0x0) {
    pNVar3 = (pEVar2->fields)._label;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pEVar2 = (__this->fields).__4__this;
    if ((pEVar2 != (EnterScreen_o *)0x0) &&
       (pNVar3 = (pEVar2->fields)._label, pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,(__this->fields).line.fields.key,(MethodInfo *)0x0)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

