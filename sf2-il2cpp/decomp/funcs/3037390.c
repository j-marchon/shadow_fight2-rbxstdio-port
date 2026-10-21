// Nekki.SF2.GUI.Fight.PauseScreen$$.ctor @ RVA 0x3037390

void Nekki_SF2_GUI_Fight_PauseScreen___ctor
               (Nekki_SF2_GUI_Fight_PauseScreen_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  Nekki_SF2_GUI_Fight_PauseScreen_PNEMIENEDLI_o **ppNVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d57 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_PauseScreen_PNEMIENEDLI_TypeInfo);
    DAT_04565d57 = 1;
    method = extraout_x1;
  }
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_PauseScreen_PNEMIENEDLI_TypeInfo,method);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields).OnPlay;
  *ppNVar2 = (Nekki_SF2_GUI_Fight_PauseScreen_PNEMIENEDLI_o *)pUVar1;
  thunk_FUN_01c20e04(ppNVar2,pUVar1);
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_PauseScreen_PNEMIENEDLI_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields).OnSurrender;
  *ppNVar2 = (Nekki_SF2_GUI_Fight_PauseScreen_PNEMIENEDLI_o *)pUVar1;
  thunk_FUN_01c20e04(ppNVar2,pUVar1);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

