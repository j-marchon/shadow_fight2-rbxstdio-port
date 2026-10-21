// Nekki.SF2.GUI.Profile.TrickSubItem$$.ctor @ RVA 0x31A60A4

void Nekki_SF2_GUI_Profile_TrickSubItem___ctor
               (Nekki_SF2_GUI_Profile_TrickSubItem_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KeyIcon__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566b0d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyIcon>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyIcon>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_SubItem_TypeInfo);
    DAT_04566b0d = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_KeyIcon__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KeyIcon>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KeyIcon>__ctor__);
  (__this->fields).CHKIKLICNBL = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).CHKIKLICNBL,__this_00);
  if ((Nekki_SF2_GUI_Profile_SubItem_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_Profile_SubItem___ctor((Nekki_SF2_GUI_Profile_SubItem_o *)__this,(MethodInfo *)0x0);
  return;
}

