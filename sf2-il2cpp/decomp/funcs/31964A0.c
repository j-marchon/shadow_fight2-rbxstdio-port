// Nekki.SF2.Core.Fights.Controls.ActionButtons$$.ctor @ RVA 0x31964A0

void Nekki_SF2_Core_Fights_Controls_ActionButtons___ctor
               (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_GGFFOJJGHGP__o *pSVar2;
  
  if ((DAT_04566a77 & 1) == 0) {
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_AACKEMPJLGA__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_BEPDJIOJPLN__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_EPCFMPGEDGE__);
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo);
    DAT_04566a77 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->static_fields->__9__35_0;
  if (pSVar2 == (System_Action_GGFFOJJGHGP__o *)0x0) {
    if ((Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_GGFFOJJGHGP__o *)thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->static_fields->__9__35_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
    ppSVar1 = &(__this->fields).OANGGKCBAOJ;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    if ((Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->static_fields->__9__35_1;
    if (pSVar2 == (System_Action_GGFFOJJGHGP__o *)0x0) {
      if ((Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Action_GGFFOJJGHGP__o *)
               thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->static_fields->__9__35_1
      ;
      *ppSVar1 = pSVar2;
      thunk_FUN_01c20e04(ppSVar1,pSVar2);
    }
    ppSVar1 = &(__this->fields).IKGMIOGGAAG;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    if ((Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->static_fields->__9__35_2;
    if (pSVar2 == (System_Action_GGFFOJJGHGP__o *)0x0) {
      if ((Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Action_GGFFOJJGHGP__o *)
               thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &Nekki_SF2_Core_Fights_Controls_ActionButtons_<>c_TypeInfo->static_fields->__9__35_2
      ;
      *ppSVar1 = pSVar2;
      thunk_FUN_01c20e04(ppSVar1,pSVar2);
    }
    ppSVar1 = &(__this->fields).GAIOLDHGLHA;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

