// Nekki.SF2.GUI.Scripts.CheckBox$$Awake @ RVA 0x3521088

void Nekki_SF2_GUI_Scripts_CheckBox__Awake
               (Nekki_SF2_GUI_Scripts_CheckBox_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_045689bf & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scripts_CheckBox_IHJPNECNEGF__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045689bf = 1;
    method = extraout_x1;
  }
  (__this->fields).super._EnableClickAnimation = false;
  __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).super.super.m_OnClick;
  call = (UnityEngine_Events_UnityAction_o *)
         thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
  UnityEngine_Events_UnityAction___ctor();
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
    UnityEngine_UI_Selectable__set_transition
              ((UnityEngine_UI_Selectable_o *)__this,0,(MethodInfo *)0x0);
    method_01 = (MethodInfo *)0x0;
    UnityEngine_UI_Selectable__set_targetGraphic
              ((UnityEngine_UI_Selectable_o *)__this,(UnityEngine_UI_Graphic_o *)0x0,
               (MethodInfo *)0x0);
    Nekki_SF2_GUI_Scripts_CheckBox__set_State(__this,(__this->fields).OIKLOAGFFGO,method_01);
    Nekki_SF2_GUI_Scripts_CheckBox__set_interactable
              (__this,(__this->fields).super.super.super.m_Interactable,method_01);
    Nekki_SF2_GUI_Scripts_CheckBox__NKIOJIILDGG(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

