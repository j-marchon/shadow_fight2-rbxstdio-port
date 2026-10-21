// Nekki.SF2.GUI.LabelAliasLE$$Awake @ RVA 0x308A524

void Nekki_SF2_GUI_LabelAliasLE__Awake(Nekki_SF2_GUI_LabelAliasLE_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar3;
  UnityEngine_Object_o *x;
  
  if ((DAT_04566048 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<LayoutElement>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566048 = 1;
  }
  Nekki_SF2_GUI_LabelAlias__Awake((Nekki_SF2_GUI_LabelAlias_o *)__this,(MethodInfo *)0x0);
  x = *(UnityEngine_Object_o **)&(__this->fields).super._ToUpperCase;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pbVar1 = &(__this->fields).super._ToUpperCase;
      pIVar3 = UnityEngine_GameObject__GetComponent<object>
                         (__this_00,Method_UnityEngine_GameObject_GetComponent<LayoutElement>__);
      *(Il2CppObject **)pbVar1 = pIVar3;
      thunk_FUN_01c20e04(pbVar1,pIVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

