// Nekki.SF2.GUI.Shop.ItemsPanel$$TableViewDoubleClickCellForRow @ RVA 0x310E438

void Nekki_SF2_GUI_Shop_ItemsPanel__TableViewDoubleClickCellForRow
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,Nekki_SF2_GUI_TableView_o *HDFMPLDOEJG,
               int32_t JDEFJPHCNMM,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_o *__this_00;
  Nekki_SF2_GUI_TableView_o *extraout_x1;
  
  if ((DAT_04566564 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<TableViewCell>_Invoke__,HDFMPLDOEJG,
                 JDEFJPHCNMM);
    DAT_04566564 = 1;
    HDFMPLDOEJG = extraout_x1;
  }
  __this_00 = (__this->fields)._OnItemDoubleClick;
  if (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_BINPIFNIONG_o *)0x0) {
    UnityEngine_Events_UnityEvent<object>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,
               (Il2CppObject *)(__this->fields).HCMDPJADLOL,
               Method_UnityEngine_Events_UnityEvent<TableViewCell>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,HDFMPLDOEJG);
}

