// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$OnPointerClick @ RVA 0x3094BF0

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__OnPointerClick
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_EventSystems_PointerEventData_o *extraout_x1;
  
                    /* try { // try from 03194c00 to 03294c27 has its CatchHandler @ 03194e4c */
  if ((DAT_045660c6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    DAT_045660c6 = 1;
    OHNNFPGGEFK = extraout_x1;
  }
  Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->LastInputType = 0;
  __this_00 = (__this->fields).BMLJIHKIHNL;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,OHNNFPGGEFK);
}

