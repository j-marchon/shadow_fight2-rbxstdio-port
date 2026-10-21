// Nekki.SF2.GUI.Map.MapPanel$$.ctor @ RVA 0x349F4F0

void Nekki_SF2_GUI_Map_MapPanel___ctor(Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__o **ppSVar1;
  System_Action_ZoneScrollItem__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_OOMHDDBCBJP__o *pSVar3;
  System_Action_ZoneScrollItem__o *pSVar4;
  
  if ((DAT_04568486 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&System_Action<ZoneScrollItem>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapPanel_<>c_FMDFGIKBIID__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapPanel_<>c_JCMPPGGHDAC__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo);
    DAT_04568486 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo->static_fields->__9__44_0;
  if (pSVar3 == (System_Action_OOMHDDBCBJP__o *)0x0) {
    if ((Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_OOMHDDBCBJP__o *)thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo->static_fields->__9__44_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  if (__this != (Nekki_SF2_GUI_Map_MapPanel_o *)0x0) {
    ppSVar1 = &(__this->fields).CGHGGKBEHIF;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    if ((Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo->static_fields->__9__44_1;
    if (pSVar4 == (System_Action_ZoneScrollItem__o *)0x0) {
      if ((Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_ZoneScrollItem__o *)
               thunk_FUN_01bda818(System_Action<ZoneScrollItem>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &Nekki_SF2_GUI_Map_MapPanel_<>c_TypeInfo->static_fields->__9__44_1;
      *ppSVar2 = pSVar4;
      thunk_FUN_01c20e04(ppSVar2,pSVar4);
    }
    ppSVar2 = &(__this->fields).CGKKIMGANJE;
    *ppSVar2 = pSVar4;
    thunk_FUN_01c20e04(ppSVar2,pSVar4);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

