// Nekki.SF2.GUI.Map.MapContainer$$GIENGNEGHPJ @ RVA 0x323AE10

void Nekki_SF2_GUI_Map_MapContainer__GIENGNEGHPJ
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapPanel_o *pNVar1;
  System_Action_OOMHDDBCBJP__o *CJNHFNHJHPE;
  System_Action_ZoneScrollItem__o *CJNHFNHJHPE_00;
  Nekki_SF2_GUI_Map_MoveableMapPanel_o *pNVar2;
  System_Action_o *pSVar3;
  Nekki_SF2_GUI_Map_LampsPanel_o *pNVar4;
  System_Action_int__o *CJNHFNHJHPE_01;
  MethodInfo *method_00;
  
  if ((DAT_04567059 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Action<ZoneScrollItem>_TypeInfo);
    FUN_01bab630(&System_Action<int>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_BAIENFNFLAI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_CGHGGKBEHIF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_CGKKIMGANJE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_DCOKHIGFNFB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_FKOGMFGABFL__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_RaidMapContainer_TypeInfo);
    DAT_04567059 = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  pNVar1 = (__this->fields)._mapPanel;
  if (pNVar1 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    Nekki_SF2_GUI_Map_MapPanel__Init
              (pNVar1,__this->klass ==
                      (Nekki_SF2_GUI_Map_MapContainer_c *)
                      Nekki_SF2_GUI_Map_RaidMapContainer_TypeInfo,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._mapPanel;
    CJNHFNHJHPE = (System_Action_OOMHDDBCBJP__o *)
                  thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
      Nekki_SF2_GUI_Map_MapPanel__add_OnClickBattle(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._mapPanel;
      CJNHFNHJHPE_00 =
           (System_Action_ZoneScrollItem__o *)
           thunk_FUN_01bda818(System_Action<ZoneScrollItem>_TypeInfo);
      System_Action<object>___ctor();
      if (pNVar1 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
        Nekki_SF2_GUI_Map_MapPanel__add_OnSelectZone(pNVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._mapPanel;
        if ((pNVar1 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) &&
           (pNVar2 = (__this->fields)._moveableMapPanel,
           pNVar2 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0)) {
          Nekki_SF2_GUI_Map_MoveableMapPanel__Init
                    (pNVar2,pNVar1,(pNVar1->fields).ECEJKFAFODM,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._moveableMapPanel;
          pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (pNVar2 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
            Nekki_SF2_GUI_Map_MoveableMapPanel__add_OnFinishedOpen(pNVar2,pSVar3,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._moveableMapPanel;
            pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pNVar2 != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
              Nekki_SF2_GUI_Map_MoveableMapPanel__add_OnFinishedClose
                        (pNVar2,pSVar3,(MethodInfo *)0x0);
              pNVar4 = (__this->fields)._lampsPanel;
              if (pNVar4 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
                Nekki_SF2_GUI_Map_LampsPanel__Init(pNVar4,(MethodInfo *)0x0);
                pNVar4 = (__this->fields)._lampsPanel;
                CJNHFNHJHPE_01 =
                     (System_Action_int__o *)thunk_FUN_01bda818(System_Action<int>_TypeInfo);
                System_Action<int>___ctor();
                if (pNVar4 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
                  method_00 = (MethodInfo *)0x0;
                  Nekki_SF2_GUI_Map_LampsPanel__add_OnClickLamp
                            (pNVar4,CJNHFNHJHPE_01,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(__this,true,method_00);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

