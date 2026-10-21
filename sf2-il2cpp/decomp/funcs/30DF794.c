// Nekki.SF2.GUI.Fight.ValueLine$$.ctor @ RVA 0x30DF794

void Nekki_SF2_GUI_Fight_ValueLine___ctor
               (Nekki_SF2_GUI_Fight_ValueLine_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Events_UnityEvent_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456638e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_0456638e = 1;
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

