// Nekki.SF2.GUI.Shop.ParameterScrollItem$$BLCHKPABFKL @ RVA 0x3030D08

void Nekki_SF2_GUI_Shop_ParameterScrollItem__BLCHKPABFKL
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,int32_t CJNHFNHJHPE,
               float PNEIGGOFIOA,MethodInfo *method)

{
  DG_Tweening_Tween_o **OCBEBGEKOIA;
  Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this_00;
  DG_Tweening_Core_DOGetter_int__o *getter;
  DG_Tweening_Core_DOSetter_int__o *setter;
  DG_Tweening_Core_TweenerCore_int__int__NoOptions__o *pDVar1;
  
  __this_00 = __this;
  if ((DAT_04565cfc & 1) == 0) {
    FUN_01bab630(&DG_Tweening_Core_DOGetter<int>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<int>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ParameterScrollItem_BGDKJCJBHAB__);
    __this_00 = (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *)
                FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ParameterScrollItem_JDDOJIOMAMI__);
    DAT_04565cfc = 1;
  }
  OCBEBGEKOIA = &(__this->fields).CKLCNHJNDPJ;
  Nekki_SF2_GUI_Shop_ParameterScrollItem__CCPABLFBFFA(__this_00,OCBEBGEKOIA,method);
  if (PNEIGGOFIOA == 0.0) {
    Nekki_SF2_GUI_Shop_ParameterScrollItem__JDDOJIOMAMI(__this,CJNHFNHJHPE,method);
    return;
  }
  getter = (DG_Tweening_Core_DOGetter_int__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<int>_TypeInfo);
  DG_Tweening_Core_DOGetter<int>___ctor();
  setter = (DG_Tweening_Core_DOSetter_int__o *)
           thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<int>_TypeInfo);
  DG_Tweening_Core_DOSetter<int>___ctor();
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar1 = DG_Tweening_DOTween__To(getter,setter,CJNHFNHJHPE,PNEIGGOFIOA,(MethodInfo *)0x0);
  *OCBEBGEKOIA = (DG_Tweening_Tween_o *)pDVar1;
  thunk_FUN_01c20e04(OCBEBGEKOIA,pDVar1);
  return;
}

