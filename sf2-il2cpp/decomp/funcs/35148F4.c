// Nekki.SF2.GUI.Common.Hints.HintList$$GIENGNEGHPJ @ RVA 0x35148F4

void Nekki_SF2_GUI_Common_Hints_HintList__GIENGNEGHPJ
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_RectOffset_o *pUVar4;
  System_Action_int__string__ODLJFAIHELG__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_UI_LayoutGroup_o **ppUVar5;
  UnityEngine_UI_LayoutGroup_o *pUVar6;
  
  if ((DAT_04568917 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<LayoutGroup>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_Hints_HintList_JCDGMAEDFIF__);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568917 = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  ppUVar5 = &(__this->fields)._Layout;
  pUVar6 = *ppUVar5;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar6 = (UnityEngine_UI_LayoutGroup_o *)
             UnityEngine_Component__GetComponentInChildren<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponentInChildren<LayoutGroup>__);
    (__this->fields)._Layout = pUVar6;
    thunk_FUN_01c20e04(ppUVar5,pUVar6);
  }
  if ((*ppUVar5 != (UnityEngine_UI_LayoutGroup_o *)0x0) &&
     (pUVar4 = ((*ppUVar5)->fields).m_Padding, pUVar4 != (UnityEngine_RectOffset_o *)0x0)) {
    iVar2 = UnityEngine_RectOffset__get_right(pUVar4,(MethodInfo *)0x0);
    if ((*ppUVar5 != (UnityEngine_UI_LayoutGroup_o *)0x0) &&
       (pUVar4 = ((*ppUVar5)->fields).m_Padding, pUVar4 != (UnityEngine_RectOffset_o *)0x0)) {
      iVar3 = UnityEngine_RectOffset__get_left(pUVar4,(MethodInfo *)0x0);
      if (iVar2 <= iVar3) {
        iVar2 = iVar3;
      }
      (__this->fields).JJOBECCEMMI = iVar2;
      Nekki_SF2_GUI_Common_Hints_HintList__GMGNDMJDBAL(__this,method_00);
      CJNHFNHJHPE = (System_Action_int__string__ODLJFAIHELG__o *)
                    thunk_FUN_01bda818(System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
      System_Action<int,_object,_Int32Enum>___ctor();
      method_01 = extraout_x1;
      if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_01 = extraout_x1_00;
      }
      JLEKKANADII__HFKKKKBAMGE(CJNHFNHJHPE,method_01);
      Nekki_SF2_GUI_Common_Hints_HintList__NNCDBOLMLHK(__this,method_02);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

