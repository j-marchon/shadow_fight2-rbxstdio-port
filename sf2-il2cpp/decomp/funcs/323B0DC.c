// Nekki.SF2.GUI.Map.MapContainer$$BAIENFNFLAI @ RVA 0x323B0DC

void Nekki_SF2_GUI_Map_MapContainer__BAIENFNFLAI
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  Nekki_SF2_GUI_Map_MapPanel_o *pNVar4;
  System_Collections_Generic_List_ZoneScrollItem__o *pSVar5;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *GNPAECKAJDE;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_Map_LampsPanel_o *pNVar6;
  MEJIKMPNBNL_o *BHHBEIACGPB;
  float fVar7;
  float fVar8;
  
  if ((DAT_0456705a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_get_Count__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapContainer_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_TypeInfo);
    DAT_0456705a = 1;
  }
  if ((Nekki_SF2_GUI_Map_MapContainer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar6 = (__this->fields)._lampsPanel;
  if (pNVar6 != (Nekki_SF2_GUI_Map_LampsPanel_o *)0x0) {
    iVar2 = (pNVar6->fields).BJJNEHBCHKE;
    fVar8 = Nekki_SF2_GUI_Map_MapContainer_TypeInfo->static_fields->DFFJDBKGGMC;
    if (DAT_04561c43 == '\0') {
      FUN_01bab630(&System_Math_TypeInfo);
      DAT_04561c43 = '\x01';
    }
    iVar2 = iVar2 - DPJIDNBJIBG;
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = -iVar2;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    pNVar4 = (__this->fields)._mapPanel;
    fVar7 = Nekki_SF2_GUI_Map_MapContainer_TypeInfo->static_fields->PHOGPJGGGMG * (float)iVar1;
    if (fVar7 <= fVar8) {
      fVar8 = fVar7;
    }
    fVar7 = -35791396.0;
    if (fVar8 != INFINITY) {
      fVar7 = (float)(int)fVar8 / 60.0;
    }
    if ((pNVar4 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) &&
       (pSVar5 = Nekki_SF2_GUI_Map_MapPanel__GetZones(pNVar4,(MethodInfo *)0x0),
       pSVar5 != (System_Collections_Generic_List_ZoneScrollItem__o *)0x0)) {
      if ((DPJIDNBJIBG < 0) || ((pSVar5->fields)._size <= DPJIDNBJIBG)) {
        return;
      }
      pNVar4 = (__this->fields)._mapPanel;
      if (pNVar4 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
        GNPAECKAJDE = Nekki_SF2_GUI_Map_MapPanel__GetZone(pNVar4,DPJIDNBJIBG,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._mapPanel;
        if ((pNVar4 != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) &&
           (Nekki_SF2_GUI_Map_MapPanel__ScrollToZone(pNVar4,DPJIDNBJIBG,fVar7,(MethodInfo *)0x0),
           GNPAECKAJDE != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0)) {
          BHHBEIACGPB = (GNPAECKAJDE->fields).IAJBEJGMIMM;
          if (BHHBEIACGPB != (MEJIKMPNBNL_o *)0x0) {
            if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar3 = Nekki_SF2_GUI_Map_MapScene__IsZoneOpen(BHHBEIACGPB,(MethodInfo *)0x0);
            if (bVar3) {
              if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar3 = Nekki_SF2_GUI_Map_MapScene__IsZoneHaveDontCompleteBattle
                                (BHHBEIACGPB,(MethodInfo *)0x0);
              if (bVar3) {
                Nekki_SF2_GUI_Map_MapContainer__MIGOMOPONBN
                          ((Nekki_SF2_GUI_Map_MapContainer_o *)0x1,BHHBEIACGPB,GNPAECKAJDE,in_x3);
              }
            }
          }
          EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

