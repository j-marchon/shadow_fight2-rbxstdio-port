// NOIIFNBIAHC$$EBBLKEADCJC @ RVA 0x32CC5AC

void NOIIFNBIAHC__EBBLKEADCJC(NOIIFNBIAHC_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  UnityEngine_Transform_o *INPDGILCEBL;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar2;
  SFButton_o *pSVar3;
  UnityEngine_Object_o *exists;
  SFButton_o **ppSVar4;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_0456751d & 1) == 0) {
    FUN_01bab630(&Method_NOIIFNBIAHC_KMNFICHPGKD__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456751d = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if (pNVar2 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
    exists = *(UnityEngine_Object_o **)&(pNVar2->fields)._MaterialsMoveDuration;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    if (!bVar1) {
LAB_033cc704:
      pSVar3 = (__this->fields).JPGIHNHOFGK;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pSVar3,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      NOIIFNBIAHC__NKGIJKODGAN(__this,method_00);
      return;
    }
    if (exists != (UnityEngine_Object_o *)0x0) {
      ppSVar4 = &(__this->fields).JPGIHNHOFGK;
      *ppSVar4 = exists[4].monitor;
      thunk_FUN_01c20e04(ppSVar4);
      __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
      if ((*ppSVar4 != (SFButton_o *)0x0) &&
         (INPDGILCEBL = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)*ppSVar4,(MethodInfo *)0x0),
         __this_00 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0)) {
        Nekki_SF2_GUI_Tutorial_ArrowCanvas__ShowArrow
                  (__this_00,INPDGILCEBL,(UnityEngine_Vector2_o)(__this->fields).JDIMEBGEJFE.fields,
                   (__this->fields).GBJHFDKDAIB,(MethodInfo *)0x0);
        pSVar3 = (__this->fields).JPGIHNHOFGK;
        if (pSVar3 != (SFButton_o *)0x0) {
          __this_01 = (UnityEngine_Events_UnityEvent_o *)(pSVar3->fields).super.m_OnClick;
          call = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
            AKJJAPEHKCG__GOCEMJOCNEE((UnityEngine_UI_Selectable_o *)*ppSVar4,(MethodInfo *)0x0);
            goto LAB_033cc704;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

