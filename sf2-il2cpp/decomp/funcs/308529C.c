// Nekki.SF2.GUI.Pvp.RandomSelectionModule$$.ctor @ RVA 0x308529C

void Nekki_SF2_GUI_Pvp_RandomSelectionModule___ctor
               (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *__this,MethodInfo *method)

{
  System_Action_string__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_string__o *pSVar2;
  
  if ((DAT_0456601c & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_AKDKNJIDHNE__);
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_0456601c = 1;
    method = extraout_x1;
  }
  (__this->fields)._SwitchTime = 0.1;
  (__this->fields)._EndTimer = 0.65;
  (__this->fields)._StartTime = 0.15;
  (__this->fields)._SlowFactor = 1.25;
  if ((Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo->static_fields->__9__18_0;
  if (pSVar2 == (System_Action_string__o *)0x0) {
    if ((Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Pvp_RandomSelectionModule_<>c_TypeInfo->static_fields->__9__18_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  ppSVar1 = &(__this->fields).LKGKDIMGDHL;
  *ppSVar1 = pSVar2;
  thunk_FUN_01c20e04(ppSVar1,pSVar2);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

