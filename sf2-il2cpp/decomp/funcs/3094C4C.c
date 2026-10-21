// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$OnPointerDown @ RVA 0x3094C4C

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__OnPointerDown
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
                    /* try { // try from 03194c4c to 03294c57 has its CatchHandler @ 03194e40 */
  __this_00 = (__this->fields).NFLKCFKIBAD;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 03194c5c to 03294c5f has its CatchHandler @ 03194cc0 */
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03194c64 to 03294c67 has its CatchHandler @ 03194cbc */
  FUN_01bab8c8();
}

