// Nekki.SF2.GUI.SFScrollRect$$BPCAFFKDJJI @ RVA 0x323DAF8

void Nekki_SF2_GUI_SFScrollRect__BPCAFFKDJJI
               (Nekki_SF2_GUI_SFScrollRect_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456706e & 1) == 0) {
    FUN_01bab630(&UnityEngine_UI_CanvasUpdateRegistry_TypeInfo);
    DAT_0456706e = 1;
    method = extraout_x1;
  }
  if ((__this->fields).OPLFKCHEAIN == false) {
    if ((UnityEngine_UI_CanvasUpdateRegistry_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_UI_CanvasUpdateRegistry_TypeInfo,method);
    }
    bVar1 = UnityEngine_UI_CanvasUpdateRegistry__IsRebuildingLayout((MethodInfo *)0x0);
    if (!bVar1) {
      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
      return;
    }
  }
  return;
}

