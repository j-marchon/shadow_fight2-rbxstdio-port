// Nekki.SF2.GUI.Shop.ParameterScrollItem$$BHMPLDGKFCI @ RVA 0x30310D4

void Nekki_SF2_GUI_Shop_ParameterScrollItem__BHMPLDGKFCI
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,int32_t CJNHFNHJHPE,
               float PNEIGGOFIOA,MethodInfo *method)

{
  DG_Tweening_Tween_o **OCBEBGEKOIA;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *__this_01;
  DG_Tweening_Core_DOGetter_int__o *getter;
  DG_Tweening_Core_DOSetter_int__o *setter;
  DG_Tweening_Core_TweenerCore_int__int__NoOptions__o *pDVar2;
  System_String_o *pSVar3;
  
  __this_00 = __this;
  if ((DAT_04565cfe & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<int>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<int>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ParameterScrollItem_APEIAAPLOHN__);
    __this_00 = (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)
                FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ParameterScrollItem_HLOKKFDFLHO__);
    DAT_04565cfe = 1;
  }
  OCBEBGEKOIA = &(__this->fields).JNGAEMFFEJF;
  Nekki_SF2_GUI_Shop_ParameterScrollItem__CCPABLFBFFA(__this_00,OCBEBGEKOIA,method);
  pNVar1 = (__this->fields)._value;
  if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,0 < CJNHFNHJHPE,(MethodInfo *)0x0);
    if (CJNHFNHJHPE < 1) {
      return;
    }
    if (0.0 < PNEIGGOFIOA) {
      getter = (DG_Tweening_Core_DOGetter_int__o *)
               thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<int>_TypeInfo);
      DG_Tweening_Core_DOGetter<int>___ctor();
      setter = (DG_Tweening_Core_DOSetter_int__o *)
               thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<int>_TypeInfo);
      DG_Tweening_Core_DOSetter<int>___ctor();
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar2 = DG_Tweening_DOTween__To(getter,setter,CJNHFNHJHPE,PNEIGGOFIOA,(MethodInfo *)0x0);
      *OCBEBGEKOIA = (DG_Tweening_Tween_o *)pDVar2;
      thunk_FUN_01c20e04(OCBEBGEKOIA,pDVar2);
      return;
    }
    (__this->fields).PDJAHMFOPPE = CJNHFNHJHPE;
    pNVar1 = (__this->fields)._value;
    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0313129c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                (pNVar1,pSVar3,(pNVar1->klass->vtable)._75_set_text.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

