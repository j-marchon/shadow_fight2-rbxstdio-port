// Nekki.SF2.GUI.Map.MapScene$$FBICEDIPMOL @ RVA 0x35857A4

void Nekki_SF2_GUI_Map_MapScene__FBICEDIPMOL
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Map_MapContainer_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  MethodInfo *pMVar2;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar3;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *pNVar4;
  UnityEngine_UI_Button_o *pUVar5;
  
  if ((DAT_04568cfd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568cfd = 1;
  }
  Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ(__this,false,in_x2);
  pNVar3 = (__this->fields).FMIFNIIJJNK;
  if (pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
    pNVar4 = (pNVar3->fields).RaidToggleButton;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar2 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).FMIFNIIJJNK;
      if ((pNVar3 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
         (pNVar4 = (pNVar3->fields).RaidToggleButton,
         pNVar4 == (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0)) goto LAB_036858c4;
      pMVar2 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_Map_RaidToggleButton__SetState(pNVar4,0,(MethodInfo *)0x0);
    }
    Nekki_SF2_GUI_Map_MapScene__EnableMapButtons(__this,true,pMVar2);
    __this_00 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).DGPJKBMBBNN;
    if (__this_00 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
      Nekki_SF2_GUI_Map_MapContainer__Open(__this_00,(MethodInfo *)0x0);
      pNVar3 = (__this->fields).FMIFNIIJJNK;
      if (pNVar3 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
        pUVar5 = (pNVar3->fields).RaidMapScrollButton;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0);
        pMVar2 = extraout_x1;
        if (bVar1) {
          pNVar3 = (__this->fields).FMIFNIIJJNK;
          if (((pNVar3 == (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) ||
              (pUVar5 = (pNVar3->fields).RaidMapScrollButton,
              pUVar5 == (UnityEngine_UI_Button_o *)0x0)) ||
             (__this_01 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
             __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036858c4;
          UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
          pMVar2 = extraout_x1_00;
        }
        if ((__this->fields).KFKABLNIFDP != 0) {
          (__this->fields).KFKABLNIFDP = 0;
          Nekki_SF2_GUI_Map_MapScene__EMFECCBKKGD(__this,pMVar2);
          pMVar2 = extraout_x1_01;
        }
        Nekki_SF2_GUI_Map_MapScene__EHJIAIJGNHJ(__this,pMVar2);
        return;
      }
    }
  }
LAB_036858c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

