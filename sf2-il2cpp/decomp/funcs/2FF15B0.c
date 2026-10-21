// HintButton$$AIJPMKIMPPN @ RVA 0x2FF15B0

void HintButton__AIJPMKIMPPN(HintButton_o *__this,MethodInfo *method)

{
  int32_t BMPJIDHGCBN;
  bool bVar1;
  System_Action_int__string__ODLJFAIHELG__o *pSVar2;
  UnityEngine_GameObject_o *__this_00;
  MGNDHCBAPEN_string__ODLJFAIHELG__o *pMVar3;
  MethodInfo *extraout_x1;
  MethodInfo *in_x4;
  
  if ((DAT_04565a76 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
    FUN_01bab630(&Method_HintButton_JCDGMAEDFIF__);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    DAT_04565a76 = 1;
    method = extraout_x1;
  }
  pSVar2 = (System_Action_int__string__ODLJFAIHELG__o *)
           thunk_FUN_01bda818(System_Action<int,_string,_ODLJFAIHELG>_TypeInfo,method);
  System_Action<int,_object,_Int32Enum>___ctor();
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  JLEKKANADII__KJHIBNMCKKG(pSVar2,(MethodInfo *)0x0);
  bVar1 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if ((__this->fields)._TrackingDeviceID == -1) {
      return;
    }
    pSVar2 = (System_Action_int__string__ODLJFAIHELG__o *)
             thunk_FUN_01bda818(System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    System_Action<int,_object,_Int32Enum>___ctor();
    if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    JLEKKANADII__HFKKKKBAMGE(pSVar2,(MethodInfo *)0x0);
    BMPJIDHGCBN = (__this->fields)._TrackingDeviceID;
    if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar3 = GJAEIBMAFGE__ABOLJGNNGMC(BMPJIDHGCBN,(MethodInfo *)0x0);
    if (pMVar3 != (MGNDHCBAPEN_string__ODLJFAIHELG__o *)0x0) {
      HintButton__JCDGMAEDFIF
                (__this,(__this->fields)._TrackingDeviceID,(pMVar3->fields).PHPELPFMOII,
                 (pMVar3->fields).DOKHHBGJICA,in_x4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

