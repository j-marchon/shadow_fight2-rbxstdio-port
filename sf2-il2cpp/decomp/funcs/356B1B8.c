// Nekki.SF2.GUI.Menu.MainMenu$$ShowDojoAdvertiseButton @ RVA 0x356B1B8

void Nekki_SF2_GUI_Menu_MainMenu__ShowDojoAdvertiseButton
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_T__o *action;
  System_Collections_Generic_List_object__o *__this_01;
  
  if ((DAT_04568c30 & 1) == 0) {
    FUN_01bab630(&System_Action<MenuAdvertisingButton>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_FNOFOGIMFIN_NPPDNOOJKGO__);
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_FNOFOGIMFIN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuAdvertisingButton>_ForEach__);
    DAT_04568c30 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Menu_MainMenu_FNOFOGIMFIN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(bool *)&__this_00[1].klass = CJNHFNHJHPE;
    if (((__this->fields).super.__IsReleased_k__BackingField == false) &&
       (__this_01 = (System_Collections_Generic_List_object__o *)
                    (__this->fields)._F2P_SpacerWidthLerpParams,
       __this_01 != (System_Collections_Generic_List_object__o *)0x0)) {
      action = (System_Action_T__o *)
               thunk_FUN_01bda818(System_Action<MenuAdvertisingButton>_TypeInfo);
      System_Action<object>___ctor();
      System_Collections_Generic_List<object>__ForEach
                (__this_01,action,
                 Method_System_Collections_Generic_List<MenuAdvertisingButton>_ForEach__);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

