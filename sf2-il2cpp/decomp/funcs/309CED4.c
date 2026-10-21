// Nekki.SF2.GUI.Fight.EndFightContent$$HNELGIKFOIL @ RVA 0x309CED4

void Nekki_SF2_GUI_Fight_EndFightContent__HNELGIKFOIL
               (Nekki_SF2_GUI_Fight_EndFightContent_o *__this,MethodInfo *method)

{
  LabelButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  System_Action_long__o *pSVar1;
  System_Action_long__o **ppSVar2;
  
  if ((DAT_04566124 & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndFightContent_NJBCAPPAAKL__);
    DAT_04566124 = 1;
  }
  __this_00 = (__this->fields)._buttonVideoAD;
  if ((__this_00 != (LabelButton_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    pSVar1 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
    System_Action<long>___ctor();
    if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppSVar2 = &BBBBKBBFNOG_TypeInfo->static_fields->GIBFOOLLACF;
    *ppSVar2 = pSVar1;
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    BBBBKBBFNOG__ELIKPNGDIII((MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

