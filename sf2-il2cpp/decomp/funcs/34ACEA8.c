// Nekki.SF2.GUI.Map.ContentRaid$$Update @ RVA 0x34ACEA8

void Nekki_SF2_GUI_Map_ContentRaid__Update
               (Nekki_SF2_GUI_Map_ContentRaid_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  long lVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_Collections_Generic_List_ResolutionImage__o *__this_00;
  UnityEngine_UI_Graphic_o *__this_01;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04568539 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
    DAT_04568539 = 1;
  }
  pNVar2 = (__this->fields)._tourLabel;
  if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (lVar3 = (*(pNVar2->klass->vtable)._74_get_text.methodPtr)
                        (pNVar2,(pNVar2->klass->vtable)._74_get_text.method), lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x10) < 1) {
      return;
    }
    pNVar2 = (__this->fields)._tourLabel;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar2 = (__this->fields)._danLbl;
      if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
        bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pNVar2 = (__this->fields)._tourLabel;
        if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (__this_00 = Nekki_SF2_GUI_TextPic__GetPresentedQuadImages
                                  ((Nekki_SF2_GUI_TextPic_o *)pNVar2,false,(MethodInfo *)0x0),
           __this_00 != (System_Collections_Generic_List_ResolutionImage__o *)0x0)) {
          if ((__this_00->fields)._size < 1) {
            return;
          }
          __this_01 = (UnityEngine_UI_Graphic_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,0,
                                 Method_System_Collections_Generic_List<ResolutionImage>_get_Item__)
          ;
          if ((__this_01 != (UnityEngine_UI_Graphic_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            bVar1 = UnityEngine_GameObject__get_activeInHierarchy(pUVar4,(MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            pNVar2 = (__this->fields)._danLbl;
            if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                                 ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0);
              pUVar6 = UnityEngine_UI_Graphic__get_rectTransform(__this_01,(MethodInfo *)0x0);
              if ((pUVar6 != (UnityEngine_RectTransform_o *)0x0) &&
                 (UVar7 = UnityEngine_RectTransform__get_pivot(pUVar6,(MethodInfo *)0x0),
                 pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
                UnityEngine_RectTransform__set_pivot(pUVar5,UVar7,(MethodInfo *)0x0);
                pNVar2 = (__this->fields)._danLbl;
                if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                                     ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0);
                  pUVar6 = UnityEngine_UI_Graphic__get_rectTransform(__this_01,(MethodInfo *)0x0);
                  if ((pUVar6 != (UnityEngine_RectTransform_o *)0x0) &&
                     (value = UnityEngine_Transform__get_localPosition
                                        ((UnityEngine_Transform_o *)pUVar6,(MethodInfo *)0x0),
                     pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
                    UnityEngine_Transform__set_localPosition
                              ((UnityEngine_Transform_o *)pUVar5,value,(MethodInfo *)0x0);
                    pNVar2 = (__this->fields)._danLbl;
                    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                      pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                                         ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0);
                      pUVar6 = UnityEngine_UI_Graphic__get_rectTransform
                                         (__this_01,(MethodInfo *)0x0);
                      if ((pUVar6 != (UnityEngine_RectTransform_o *)0x0) &&
                         (UVar7 = UnityEngine_RectTransform__get_sizeDelta(pUVar6,(MethodInfo *)0x0)
                         , pUVar5 != (UnityEngine_RectTransform_o *)0x0)) {
                        UnityEngine_RectTransform__set_sizeDelta(pUVar5,UVar7,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

