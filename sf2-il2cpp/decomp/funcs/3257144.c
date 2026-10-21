// Nekki.SF2.GUI.Map.MoveableMapPanel$$.ctor @ RVA 0x3257144

void Nekki_SF2_GUI_Map_MoveableMapPanel___ctor
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar2;
  
  if ((DAT_0456716f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_CAMMODJJDJE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_JCJGEMKOHCI__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo);
    DAT_0456716f = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo->static_fields->__9__33_0;
  if (pSVar2 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo->static_fields->__9__33_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (Nekki_SF2_GUI_Map_MoveableMapPanel_o *)0x0) {
    ppSVar1 = &(__this->fields).AIMIDDHDIAG;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    if ((Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo->static_fields->__9__33_1;
    if (pSVar2 == (System_Action_o *)0x0) {
      if ((Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar1 = &Nekki_SF2_GUI_Map_MoveableMapPanel_<>c_TypeInfo->static_fields->__9__33_1;
      *ppSVar1 = pSVar2;
      thunk_FUN_01c20e04(ppSVar1,pSVar2);
    }
    ppSVar1 = &(__this->fields).ODENJKGAALC;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

