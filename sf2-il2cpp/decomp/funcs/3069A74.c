// Nekki.SF2.Core.Fights.Controls.Stick$$OnPointerDown @ RVA 0x3069A74

void Nekki_SF2_Core_Fights_Controls_Stick__OnPointerDown
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  uint item;
  uint uVar1;
  UnityEngine_Vector2_Fields screenPoint;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Camera_o *cam;
  System_Collections_Generic_Dictionary_int__Vector2__o *pSVar5;
  System_Collections_Generic_List_int__o *pSVar6;
  UnityEngine_UI_Image_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  OIIEGNHALFL_o *__this_00;
  MethodInfo *pMVar9;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  System_Int32_array *pSVar10;
  System_Action_GGFFOJJGHGP__o *pSVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector2_o FEDEPKJBDDM;
  UnityEngine_Vector2_Fields local_28;
  
  if ((DAT_04565f1c & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Vector2>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Vector2>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Remove__);
    FUN_01bab630(&OIIEGNHALFL_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransformUtility_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo);
    DAT_04565f1c = 1;
  }
  local_28.x = 0.0;
  local_28.y = 0.0;
  rect = (UnityEngine_RectTransform_o *)
         UnityEngine_Component__GetComponent<object>
                   ((UnityEngine_Component_o *)__this,
                    Method_UnityEngine_Component_GetComponent<RectTransform>__);
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    screenPoint = (OHNNFPGGEFK->fields)._position_k__BackingField.fields;
    cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera
                    (OHNNFPGGEFK,(MethodInfo *)0x0);
    if ((UnityEngine_RectTransformUtility_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_RectTransformUtility_TypeInfo);
    }
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (rect,(UnityEngine_Vector2_o)screenPoint,cam,(UnityEngine_Vector2_o *)&local_28,
               (MethodInfo *)0x0);
    pSVar5 = (__this->fields).DOPAABMBANO;
    if (pSVar5 != (System_Collections_Generic_Dictionary_int__Vector2__o *)0x0) {
      fVar12 = local_28.x;
      fVar14 = local_28.y;
      fVar13 = (__this->fields).KDNCFIDDAKC;
      fVar15 = Nekki_SF2_Core_Fights_Controls_Stick_TypeInfo->static_fields->LPEJCMJKEPA;
      System_Collections_Generic_Dictionary<int,_Vector2>__Remove
                (pSVar5,(OHNNFPGGEFK->fields)._pointerId_k__BackingField,
                 Method_System_Collections_Generic_Dictionary<int,_Vector2>_Remove__);
      pSVar6 = (__this->fields).PJPCLCHFCEE;
      if (pSVar6 != (System_Collections_Generic_List_int__o *)0x0) {
        fVar12 = fVar12 * fVar12 + fVar14 * fVar14;
        System_Collections_Generic_List<int>__Remove
                  (pSVar6,(OHNNFPGGEFK->fields)._pointerId_k__BackingField,
                   Method_System_Collections_Generic_List<int>_Remove__);
        lVar2 = Method_System_Collections_Generic_List<int>_Add__;
        if (fVar13 * fVar15 * fVar15 < fVar12) {
          return;
        }
        pSVar6 = (__this->fields).PJPCLCHFCEE;
        if (pSVar6 != (System_Collections_Generic_List_int__o *)0x0) {
          item = (OHNNFPGGEFK->fields)._pointerId_k__BackingField;
          pMVar9 = (MethodInfo *)(ulong)item;
          pSVar10 = (pSVar6->fields)._items;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pSVar10 != (System_Int32_array *)0x0) {
            uVar1 = (pSVar6->fields)._size;
            if (uVar1 < (uint)pSVar10->max_length) {
              (pSVar6->fields)._size = uVar1 + 1;
              pSVar10->m_Items[(int)uVar1] = item;
            }
            else {
              System_Collections_Generic_List<int>__AddWithResize
                        (pSVar6,item,
                         *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
              pMVar9 = extraout_x1;
            }
            if (fVar12 <= (__this->fields).HAEFCMAPGCO) {
              pSVar5 = (__this->fields).DOPAABMBANO;
              if (pSVar5 == (System_Collections_Generic_Dictionary_int__Vector2__o *)0x0)
              goto LAB_03169dd0;
              System_Collections_Generic_Dictionary<int,_Vector2>__Add
                        (pSVar5,(OHNNFPGGEFK->fields)._pointerId_k__BackingField,
                         (UnityEngine_Vector2_o)local_28,
                         Method_System_Collections_Generic_Dictionary<int,_Vector2>_Add__);
              (__this->fields).HEMCGGBCBKH = 0;
              pMVar9 = extraout_x1_01;
              if (DAT_0455fa75 == '\0') {
                FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
                DAT_0455fa75 = '\x01';
                pMVar9 = extraout_x1_02;
              }
              fVar12 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
              fVar14 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
            }
            else {
              fVar12 = local_28.x;
              fVar14 = local_28.y;
              iVar4 = Nekki_SF2_Core_Fights_Controls_Stick__OKLGCJMHEHI
                                (__this,(UnityEngine_Vector2_o)local_28,pMVar9);
              (__this->fields).HEMCGGBCBKH = iVar4;
              pMVar9 = extraout_x1_00;
            }
            FEDEPKJBDDM.fields.y = fVar14;
            FEDEPKJBDDM.fields.x = fVar12;
            Nekki_SF2_Core_Fights_Controls_Stick__MCOFHDGMOBP(__this,FEDEPKJBDDM,pMVar9);
            pUVar7 = (__this->fields)._normalTexture;
            if ((pUVar7 != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar8 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
               pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
              pUVar7 = (__this->fields)._selectedTexture;
              if ((pUVar7 != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar8 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
                 pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
                pMVar9 = (MethodInfo *)0x0;
                UnityEngine_GameObject__SetActive(pUVar8,true,(MethodInfo *)0x0);
                pUVar7 = (__this->fields)._flashing;
                if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar3 = UnityEngine_Object__op_Implicit
                                  ((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
                if (bVar3) {
                  pUVar7 = (__this->fields)._flashing;
                  if ((pUVar7 == (UnityEngine_UI_Image_o *)0x0) ||
                     (pUVar8 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
                     pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03169dd0;
                  pMVar9 = (MethodInfo *)0x0;
                  UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
                }
                Nekki_SF2_Core_Fights_Controls_Stick__HCJBFHKPODJ(__this,true,pMVar9);
                pSVar11 = (__this->fields).LMIKGNKODAL;
                iVar4 = (__this->fields).HEMCGGBCBKH;
                __this_00 = (OIIEGNHALFL_o *)thunk_FUN_01bda818(OIIEGNHALFL_TypeInfo);
                OIIEGNHALFL___ctor(__this_00,iVar4,(MethodInfo *)0x0);
                if (pSVar11 != (System_Action_GGFFOJJGHGP__o *)0x0) {
                  (*(code *)(pSVar11->fields).super.super.invoke_impl)
                            ((pSVar11->fields).super.super.method_code,__this_00,
                             (pSVar11->fields).super.super.method);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03169dd0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

