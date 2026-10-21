// Nekki.SF2.GUI.Common.TouchHandler$$.ctor @ RVA 0x30E0E80

void Nekki_SF2_GUI_Common_TouchHandler___ctor
               (Nekki_SF2_GUI_Common_TouchHandler_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456639f & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_Selectable_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_0456639f = 1;
    method = extraout_x1;
  }
  __this_00 = (UnityEngine_Events_UnityEvent_o *)
              thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo,method);
  UnityEngine_Events_UnityEvent___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).OMEOMGINDAD = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).OMEOMGINDAD,__this_00);
  if ((UnityEngine_UI_Selectable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_UI_Selectable___ctor((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
  return;
}

