// Nekki.SF2.GUI.Fight.ExpAndMoneyLine$$.ctor @ RVA 0x312BC94

void Nekki_SF2_GUI_Fight_ExpAndMoneyLine___ctor
               (Nekki_SF2_GUI_Fight_ExpAndMoneyLine_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566697 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_04566697 = 1;
    method = extraout_x1;
  }
  __this_00 = (UnityEngine_Events_UnityEvent_o *)
              thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo,method);
  UnityEngine_Events_UnityEvent___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).JLKPBAGACID;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

