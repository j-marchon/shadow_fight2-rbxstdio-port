// Nekki.SF2.GUI.Map.RaidKeysRowView$$Init @ RVA 0x3327B94

void Nekki_SF2_GUI_Map_RaidKeysRowView__Init
               (Nekki_SF2_GUI_Map_RaidKeysRowView_o *__this,MethodInfo *method)

{
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar1;
  UnityEngine_CanvasGroup_o *__this_00;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o **ppUVar2;
  
  if ((DAT_045678a2 & 1) == 0) {
    FUN_01bab630(&
                 Method_UnityEngine_Component_GetComponentInChildren<HorizontalOrVerticalLayoutGroup>__
                );
    DAT_045678a2 = 1;
  }
  Nekki_SF2_GUI_Map_IRaidKeysView__Init
            ((Nekki_SF2_GUI_Map_IRaidKeysView_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
           UnityEngine_Component__GetComponentInChildren<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponentInChildren<HorizontalOrVerticalLayoutGroup>__
                     );
  ppUVar2 = &(__this->fields).HJEECKHPNHC;
  *ppUVar2 = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  __this_00 = (__this->fields)._keyPanelCanvasGroup;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,0.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

