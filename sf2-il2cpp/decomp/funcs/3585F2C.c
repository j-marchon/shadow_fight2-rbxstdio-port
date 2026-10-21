// Nekki.SF2.GUI.Map.MapScene$$.ctor @ RVA 0x3585F2C

void Nekki_SF2_GUI_Map_MapScene___ctor(Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Collections_Generic_List_MEJIKMPNBNL__o *__this_00;
  System_Collections_Generic_List_MEJIKMPNBNL__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar3;
  
  if ((DAT_04568cf3 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MEJIKMPNBNL>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>__ctor__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_<>c_FCELHKOPIHL__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_<>c_FGNFFFLGIBM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapScene_<>c_MJCOOBALDPE__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo);
    DAT_04568cf3 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__109_0;
  if (pSVar3 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__109_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  if (__this != (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
    ppSVar1 = &(__this->fields).CLMHOCHLKBH;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__109_1;
    if (pSVar3 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__109_1;
      *ppSVar1 = pSVar3;
      thunk_FUN_01c20e04(ppSVar1,pSVar3);
    }
    ppSVar1 = &(__this->fields).KFECPODMONB;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__109_2;
    if (pSVar3 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Map_MapScene_<>c_TypeInfo->static_fields->__9__109_2;
      *ppSVar1 = pSVar3;
      thunk_FUN_01c20e04(ppSVar1,pSVar3);
    }
    ppSVar1 = &(__this->fields).IGDMLILCCJP;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    __this_00 = (System_Collections_Generic_List_MEJIKMPNBNL__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<MEJIKMPNBNL>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MEJIKMPNBNL>__ctor__);
    ppSVar2 = &(__this->fields).JFANFALIFFE;
    *ppSVar2 = __this_00;
    thunk_FUN_01c20e04(ppSVar2,__this_00);
    (__this->fields)._raidDailyButtonHideLogic = 1;
    Nekki_SF2_GUI_Scene<object>___ctor
              ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<MapScene>__ctor__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

