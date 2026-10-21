// Nekki.SF2.GUI.Map.MapContainer$$CLNAOMIIBLH @ RVA 0x323A674

void Nekki_SF2_GUI_Map_MapContainer__CLNAOMIIBLH
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__o *CJNHFNHJHPE;
  System_Action_ZoneScrollItem__o *CJNHFNHJHPE_00;
  System_Action_int__o *CJNHFNHJHPE_01;
  System_Action_o *pSVar1;
  Nekki_SF2_GUI_Map_MapPanel_o *pNVar2;
  Nekki_SF2_GUI_Map_LampsPanel_o *__this_00;
  Nekki_SF2_GUI_Map_MoveableMapPanel_o *pNVar3;
  
  if ((DAT_04567053 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Action<ZoneScrollItem>_TypeInfo);
    FUN_01bab630(&System_Action<int>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_BAIENFNFLAI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_CGHGGKBEHIF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_CGKKIMGANJE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_DCOKHIGFNFB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_FKOGMFGABFL__);
    DAT_04567053 = 1;
  }
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  pNVar2 = (__this->fields)._mapPanel;
  CJNHFNHJHPE = (System_Action_OOMHDDBCBJP__o *)
                thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo);
  System_Action<object>___ctor();
  if (pNVar2 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapPanel__remove_OnClickBattle(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._mapPanel;
    CJNHFNHJHPE_00 =
         (System_Action_ZoneScrollItem__o *)
         thunk_FUN_01bda818(System_Action<ZoneScrollItem>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar2 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
      Nekki_SF2_GUI_Map_MapPanel__remove_OnSelectZone(pNVar2,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._lampsPanel;
      CJNHFNHJHPE_01 = (System_Action_int__o *)thunk_FUN_01bda818(System_Action<int>_TypeInfo);
      System_Action<int>___ctor();
      if (__this_00 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
        Nekki_SF2_GUI_Map_LampsPanel__remove_OnClickLamp(__this_00,CJNHFNHJHPE_01,(MethodInfo *)0x0)
        ;
        pNVar3 = (__this->fields)._moveableMapPanel;
        pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pNVar3 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
          Nekki_SF2_GUI_Map_MoveableMapPanel__remove_OnFinishedOpen(pNVar3,pSVar1,(MethodInfo *)0x0)
          ;
          pNVar3 = (__this->fields)._moveableMapPanel;
          pSVar1 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (pNVar3 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
            Nekki_SF2_GUI_Map_MoveableMapPanel__remove_OnFinishedClose
                      (pNVar3,pSVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

