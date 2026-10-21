// Nekki.SF2.GUI.Fight.ActivePerkModel$$RemoveAllActivePerkItem @ RVA 0x31C50D8

void Nekki_SF2_GUI_Fight_ActivePerkModel__RemoveAllActivePerkItem
               (Nekki_SF2_GUI_Fight_ActivePerkModel_o *__this,MethodInfo *method)

{
  System_Action_ActivePerkItem__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_ActivePerkItem__o *__this_00;
  System_Action_ActivePerkItem__o *action;
  
  if ((DAT_04566c2c & 1) == 0) {
    FUN_01bab630(&System_Action<ActivePerkItem>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_ForEach__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_MMGBICLDKCM__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo);
    DAT_04566c2c = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).DOKOOFIPJGJ;
  if ((Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->static_fields->__9__13_0;
  if (action == (System_Action_ActivePerkItem__o *)0x0) {
    if ((Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo,method);
    }
    action = (System_Action_ActivePerkItem__o *)
             thunk_FUN_01bda818(System_Action<ActivePerkItem>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Fight_ActivePerkModel_<>c_TypeInfo->static_fields->__9__13_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<ActivePerkItem>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

