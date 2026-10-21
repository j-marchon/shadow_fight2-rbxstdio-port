// Nekki.SF2.GUI.Profile.ItemsController$$Init @ RVA 0x301DA7C

void Nekki_SF2_GUI_Profile_ItemsController__Init
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *pNVar1;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_TableView_SelectCellEvent_o *__this_01;
  
  if ((DAT_04565c24 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_AddListener__);
    DAT_04565c24 = 1;
  }
  pNVar1 = (__this->fields)._TableView;
  if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    (pNVar1->fields).KFCHMBGIPJK = (__this->fields)._CellPrefab;
    thunk_FUN_01c20e04();
    pNVar1 = (__this->fields)._TableView;
    if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__Init
                (pNVar1,(CPFMNHBNOEN_o *)__this,(MLIIECFHJAM_o *)__this,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._TableView;
      if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
        __this_01 = (pNVar1->fields).onSelectCell;
        call = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<TableViewCell>_TypeInfo);
        UnityEngine_Events_UnityAction<object>___ctor();
        if (__this_01 != (Nekki_SF2_GUI_TableView_SelectCellEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent<object>__AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,call,
                     Method_UnityEngine_Events_UnityEvent<TableViewCell>_AddListener__);
          Nekki_SF2_GUI_Profile_ItemsController__UpdateTable(__this,method_00);
          __this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

