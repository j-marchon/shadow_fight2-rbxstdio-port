// Nekki.SF2.GUI.Fight.ResistanceContent$$DMNCBADHGJP @ RVA 0x2FEEF0C

void Nekki_SF2_GUI_Fight_ResistanceContent__DMNCBADHGJP
               (Nekki_SF2_GUI_Fight_ResistanceContent_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  LabelButton_o *pLVar1;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04565a54 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent_Invoke__);
    DAT_04565a54 = 1;
    method = extraout_x1;
  }
  pLVar1 = (__this->fields)._buttonOk;
  if (pLVar1 != (LabelButton_o *)0x0) {
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(pLVar1->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
      pLVar1 = (__this->fields)._buttonOk;
      if ((pLVar1 != (LabelButton_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pLVar1,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

