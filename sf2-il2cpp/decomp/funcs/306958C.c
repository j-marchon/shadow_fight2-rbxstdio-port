// Nekki.SF2.Core.Fights.Controls.Stick$$OnDrag @ RVA 0x306958C

void Nekki_SF2_Core_Fights_Controls_Stick__OnDrag
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  int OOJKNECICBP;
  bool bVar1;
  int32_t OOJKNECICBP_00;
  System_Collections_Generic_List_int__o *__this_00;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Camera_o *cam;
  System_Collections_Generic_Dictionary_int__Vector2__o *pSVar2;
  OIIEGNHALFL_o *pOVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Action_GGFFOJJGHGP__o *pSVar4;
  UnityEngine_Vector2_Fields UVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector2_Fields local_48;
  
  if ((DAT_04565f1a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Vector2>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Vector2>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Contains__);
    FUN_01bab630(&OIIEGNHALFL_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransformUtility_TypeInfo);
    DAT_04565f1a = 1;
  }
  local_48.x = 0.0;
  local_48.y = 0.0;
  if ((OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) &&
     (__this_00 = (__this->fields).PJPCLCHFCEE,
     __this_00 != (System_Collections_Generic_List_int__o *)0x0)) {
    bVar1 = System_Collections_Generic_List<int>__Contains
                      (__this_00,(OHNNFPGGEFK->fields)._pointerId_k__BackingField,
                       Method_System_Collections_Generic_List<int>_Contains__);
    if (!bVar1) {
      return;
    }
    rect = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<RectTransform>__);
    UVar5 = (OHNNFPGGEFK->fields)._position_k__BackingField.fields;
    cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera
                    (OHNNFPGGEFK,(MethodInfo *)0x0);
    if ((UnityEngine_RectTransformUtility_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_RectTransformUtility_TypeInfo);
    }
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (rect,(UnityEngine_Vector2_o)UVar5,cam,(UnityEngine_Vector2_o *)&local_48,
               (MethodInfo *)0x0);
    pSVar2 = (__this->fields).DOPAABMBANO;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__Vector2__o *)0x0) {
      method_02 = Method_System_Collections_Generic_Dictionary<int,_Vector2>_ContainsKey__;
      bVar1 = System_Collections_Generic_Dictionary<int,_Vector2>__ContainsKey
                        (pSVar2,(OHNNFPGGEFK->fields)._pointerId_k__BackingField,
                         (MethodInfo_23009E4 *)
                         Method_System_Collections_Generic_Dictionary<int,_Vector2>_ContainsKey__);
      if (bVar1) {
        pSVar2 = (__this->fields).DOPAABMBANO;
        if (pSVar2 == (System_Collections_Generic_Dictionary_int__Vector2__o *)0x0)
        goto LAB_031697a8;
        method_02 = Method_System_Collections_Generic_Dictionary<int,_Vector2>_get_Item__;
        UVar6 = System_Collections_Generic_Dictionary<int,_Vector2>__get_Item
                          (pSVar2,(OHNNFPGGEFK->fields)._pointerId_k__BackingField,
                           (MethodInfo_2300720 *)
                           Method_System_Collections_Generic_Dictionary<int,_Vector2>_get_Item__);
        UVar5.x = local_48.x - UVar6.fields.x;
        UVar5.y = local_48.y - UVar6.fields.y;
        local_48 = UVar5;
      }
      Nekki_SF2_Core_Fights_Controls_Stick__HCJBFHKPODJ(__this,true,method_02);
      Nekki_SF2_Core_Fights_Controls_Stick__MCOFHDGMOBP
                (__this,(UnityEngine_Vector2_o)local_48,method_00);
      OOJKNECICBP_00 =
           Nekki_SF2_Core_Fights_Controls_Stick__OKLGCJMHEHI
                     (__this,(UnityEngine_Vector2_o)local_48,method_01);
      OOJKNECICBP = (__this->fields).HEMCGGBCBKH;
      if (OOJKNECICBP != OOJKNECICBP_00) {
        pSVar4 = (__this->fields).JANHEDHPGEG;
        pOVar3 = (OIIEGNHALFL_o *)thunk_FUN_01bda818(OIIEGNHALFL_TypeInfo);
        OIIEGNHALFL___ctor(pOVar3,OOJKNECICBP,(MethodInfo *)0x0);
        if (pSVar4 == (System_Action_GGFFOJJGHGP__o *)0x0) goto LAB_031697a8;
        (*(code *)(pSVar4->fields).super.super.invoke_impl)
                  ((pSVar4->fields).super.super.method_code,pOVar3,
                   (pSVar4->fields).super.super.method);
      }
      (__this->fields).HEMCGGBCBKH = OOJKNECICBP_00;
      pSVar4 = (__this->fields).IIKCIHLOPKJ;
      pOVar3 = (OIIEGNHALFL_o *)thunk_FUN_01bda818(OIIEGNHALFL_TypeInfo);
      OIIEGNHALFL___ctor(pOVar3,OOJKNECICBP_00,(MethodInfo *)0x0);
      if (pSVar4 != (System_Action_GGFFOJJGHGP__o *)0x0) {
        (*(code *)(pSVar4->fields).super.super.invoke_impl)
                  ((pSVar4->fields).super.super.method_code,pOVar3,
                   (pSVar4->fields).super.super.method);
        return;
      }
    }
  }
LAB_031697a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

