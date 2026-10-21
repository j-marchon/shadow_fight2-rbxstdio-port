// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$OnPointerUp @ RVA 0x3094C68

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__OnPointerUp
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
                    /* try { // try from 03194c6c to 03294c6f has its CatchHandler @ 03194ca8 */
  __this_00 = (__this->fields).LCJGCOJKLED;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 03194c74 to 03294c77 has its CatchHandler @ 03194c9c */
                    /* try { // try from 03194c7c to 03294c7f has its CatchHandler @ 03194c90 */
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

