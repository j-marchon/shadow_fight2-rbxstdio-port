// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$TryCallEvent @ RVA 0x3094D2C

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__TryCallEvent
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,int32_t GJKJICHICFN,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  Nekki_SF2_GUI_GeneralMenu_ControlAction_o *__this_01;
  System_Collections_Generic_List_ControlAction__o *__this_02;
  
  if ((DAT_045660c8 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_MenuItemButton_GEHOKJMPPNP_NJPJDHFDCFI__);
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_MenuItemButton_GEHOKJMPPNP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlAction>_Find__);
    FUN_01bab630(&System_Predicate<ControlAction>_TypeInfo);
    DAT_045660c8 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_MenuItemButton_GEHOKJMPPNP_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = GJKJICHICFN;
    __this_02 = (__this->fields).controls;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<ControlAction>_TypeInfo);
                    /* try { // try from 03194dd0 to 03294e03 has its CatchHandler @ 03194f14 */
    System_Predicate<object>___ctor();
    if (__this_02 != (System_Collections_Generic_List_ControlAction__o *)0x0) {
      __this_01 = (Nekki_SF2_GUI_GeneralMenu_ControlAction_o *)
                  System_Collections_Generic_List<object>__Find
                            ((System_Collections_Generic_List_object__o *)__this_02,match,
                             Method_System_Collections_Generic_List<ControlAction>_Find__);
      if (__this_01 != (Nekki_SF2_GUI_GeneralMenu_ControlAction_o *)0x0) {
                    /* try { // try from 03194e04 to 03294e07 has its CatchHandler @ 03194e48 */
                    /* try { // try from 03194e08 to 03294e0f has its CatchHandler @ 03194e5c */
        Nekki_SF2_GUI_GeneralMenu_ControlAction__HCBAKFNPGDN(__this_01,(MethodInfo *)0x0);
        return;
      }
                    /* try { // try from 03194e10 to 03294e17 has its CatchHandler @ 03194e44 */
                    /* try { // try from 03194e18 to 03294e1b has its CatchHandler @ 03194e3c */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03194e1c to 03294e1f has its CatchHandler @ 03194474 */
  FUN_01bab8c8();
}

