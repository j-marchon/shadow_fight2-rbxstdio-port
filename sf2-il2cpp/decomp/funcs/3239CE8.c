// Nekki.SF2.GUI.Map.MapContainer$$.ctor @ RVA 0x3239CE8

void Nekki_SF2_GUI_Map_MapContainer___ctor
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__o **ppSVar1;
  System_Action_ZoneScrollItem__o **ppSVar2;
  System_Action_o **ppSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_OOMHDDBCBJP__o *pSVar4;
  System_Action_ZoneScrollItem__o *pSVar5;
  System_Action_o *pSVar6;
  
  if ((DAT_0456704e & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Action<ZoneScrollItem>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_<>c_DAALCJJHJLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_<>c_IPALDJKFIIP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_<>c_KAKKJCBCMLN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapContainer_<>c_KENFMHBCMGD__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_0456704e = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar4 = Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->static_fields->__9__58_0;
  if (pSVar4 == (System_Action_OOMHDDBCBJP__o *)0x0) {
    if ((Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo,method);
    }
    pSVar4 = (System_Action_OOMHDDBCBJP__o *)thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->static_fields->__9__58_0;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
  }
  if (__this != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    ppSVar1 = &(__this->fields).MNOIMJDFMMJ;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
    if ((Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->static_fields->__9__58_1;
    if (pSVar5 == (System_Action_ZoneScrollItem__o *)0x0) {
      if ((Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = (System_Action_ZoneScrollItem__o *)
               thunk_FUN_01bda818(System_Action<ZoneScrollItem>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->static_fields->__9__58_1;
      *ppSVar2 = pSVar5;
      thunk_FUN_01c20e04(ppSVar2,pSVar5);
    }
    ppSVar2 = &(__this->fields).BFICLHPKPAE;
    *ppSVar2 = pSVar5;
    thunk_FUN_01c20e04(ppSVar2,pSVar5);
    if ((Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar6 = Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->static_fields->__9__58_2;
    if (pSVar6 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar3 = &Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->static_fields->__9__58_2;
      *ppSVar3 = pSVar6;
      thunk_FUN_01c20e04(ppSVar3,pSVar6);
    }
    ppSVar3 = &(__this->fields).ENMNHIMEELL;
    *ppSVar3 = pSVar6;
    thunk_FUN_01c20e04(ppSVar3,pSVar6);
    if ((Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar6 = Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->static_fields->__9__58_3;
    if (pSVar6 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar3 = &Nekki_SF2_GUI_Map_MapContainer_<>c_TypeInfo->static_fields->__9__58_3;
      *ppSVar3 = pSVar6;
      thunk_FUN_01c20e04(ppSVar3,pSVar6);
    }
    ppSVar3 = &(__this->fields).PEMOCAODJBA;
    *ppSVar3 = pSVar6;
    thunk_FUN_01c20e04(ppSVar3,pSVar6);
    if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

