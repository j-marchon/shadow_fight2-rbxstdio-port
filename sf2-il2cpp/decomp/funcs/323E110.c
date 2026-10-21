// Nekki.SF2.GUI.SFScrollRect$$IsActive @ RVA 0x323E110

bool Nekki_SF2_GUI_SFScrollRect__IsActive(Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *x;
  
  if ((DAT_04567070 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567070 = 1;
  }
  bVar1 = UnityEngine_EventSystems_UIBehaviour__IsActive
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    x = (__this->fields).m_Content;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}

