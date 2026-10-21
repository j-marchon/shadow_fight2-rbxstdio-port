// Nekki.SF2.GUI.Pvp.PlayerSelector$$PDGEDEIGEHM @ RVA 0x332FAC8

UIFigures_UILine_o *
Nekki_SF2_GUI_Pvp_PlayerSelector__PDGEDEIGEHM
          (Nekki_SF2_GUI_Pvp_PlayerSelector_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *extraout_x1;
  UIFigures_UILine_o **ppUVar2;
  UIFigures_UILine_o *pUVar3;
  
  if ((DAT_045678fe & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<UILine>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045678fe = 1;
    method = extraout_x1;
  }
  ppUVar2 = &(__this->fields).NAFBBOFAHAB;
  pUVar3 = *ppUVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._LeftBorderContainer;
    if (__this_00 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pUVar3 = (UIFigures_UILine_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this_00,
                        Method_UnityEngine_Component_GetComponent<UILine>__);
    *ppUVar2 = pUVar3;
    thunk_FUN_01c20e04(ppUVar2,pUVar3);
  }
  return *ppUVar2;
}

