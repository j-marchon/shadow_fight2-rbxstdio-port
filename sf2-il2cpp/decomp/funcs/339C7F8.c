// Nekki.SF2.GUI.Map.BattlePrizeElement$$.ctor @ RVA 0x339C7F8

void Nekki_SF2_GUI_Map_BattlePrizeElement___ctor
               (Nekki_SF2_GUI_Map_BattlePrizeElement_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar2;
  
  if ((DAT_04567c88 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattlePrizeElement_<>c_KMPAHBPEMPC__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_BattlePrizeElement_<>c_TypeInfo);
    DAT_04567c88 = 1;
    method = extraout_x1;
  }
  (__this->fields)._offsetX = 10.0;
  (__this->fields)._maxTextHeight = 100.0;
  if ((Nekki_SF2_GUI_Map_BattlePrizeElement_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_BattlePrizeElement_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_Map_BattlePrizeElement_<>c_TypeInfo->static_fields->__9__20_0;
  if (pSVar2 == (System_Action_o *)0x0) {
    if ((Nekki_SF2_GUI_Map_BattlePrizeElement_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_BattlePrizeElement_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Map_BattlePrizeElement_<>c_TypeInfo->static_fields->__9__20_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  ppSVar1 = &(__this->fields).NFECDKAEFJL;
  *ppSVar1 = pSVar2;
  thunk_FUN_01c20e04(ppSVar1,pSVar2);
  (__this->fields).CKPLHEOCNEC = 10000;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

