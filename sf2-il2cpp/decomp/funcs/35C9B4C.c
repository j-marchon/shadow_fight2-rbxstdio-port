// Nekki.SF2.GUI.Fight.RaidFightTimeoutContent$$Init @ RVA 0x35C9B4C

void Nekki_SF2_GUI_Fight_RaidFightTimeoutContent__Init
               (Nekki_SF2_GUI_Fight_RaidFightTimeoutContent_o *__this,System_String_o *JCLPIKHEKBB,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_o *call;
  LabelButton_o *pLVar2;
  UnityEngine_Events_UnityEvent_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04568f8e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_RaidFightTimeoutContent_IDIKPEHFONG__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568f8e = 1;
  }
  pNVar3 = (__this->fields)._Text;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._Text;
    if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_036c9c6c;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,JCLPIKHEKBB,(MethodInfo *)0x0);
  }
  pLVar2 = (__this->fields)._Button;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pLVar2 = (__this->fields)._Button;
  if (pLVar2 != (LabelButton_o *)0x0) {
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pLVar2->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      return;
    }
  }
LAB_036c9c6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

