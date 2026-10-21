// Nekki.SF2.GUI.Map.BattlePrizeElement$$Init @ RVA 0x339CB28

void Nekki_SF2_GUI_Map_BattlePrizeElement__Init
               (Nekki_SF2_GUI_Map_BattlePrizeElement_o *__this,System_String_o *NEJHIEOHMCF,
               int64_t CJNHFNHJHPE,int32_t NJBICBHLOMO,float KAMCMPFEKFI,MethodInfo *method)

{
  undefined4 uVar1;
  bool bVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  UnityEngine_RectTransform_o *__this_00;
  System_Action_o *CJNHFNHJHPE_00;
  UnityEngine_Object_o *exists;
  System_String_o *pSVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  UnityEngine_UI_LayoutElement_o **ppUVar7;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04567c8c & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_BattlePrizeElement_MAPALKNGENO__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ContentSizeFitter>__);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<LayoutElement>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_9080);
    DAT_04567c8c = 1;
  }
  pUVar3 = (UnityEngine_UI_LayoutElement_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<LayoutElement>__);
  ppUVar7 = &(__this->fields).KDONJHIKBON;
  *ppUVar7 = pUVar3;
  thunk_FUN_01c20e04(ppUVar7,pUVar3);
  pNVar5 = (__this->fields)._icon;
  if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    uVar1 = StringLiteral_9080._4_4_;
    (pNVar5->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_9080;
    (pNVar5->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
    thunk_FUN_01c20e04(&(pNVar5->fields).super.m_PixelsPerUnitMultiplier);
    pNVar5 = (__this->fields)._icon;
    if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,NEJHIEOHMCF,(MethodInfo *)0x0);
      pNVar5 = (__this->fields)._icon;
      if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        (*(pNVar5->klass->vtable)._45_SetNativeSize.methodPtr)
                  (pNVar5,(pNVar5->klass->vtable)._45_SetNativeSize.method);
        pNVar5 = (__this->fields)._icon;
        if ((pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (__this_00 = UnityEngine_UI_Graphic__get_rectTransform
                                  ((UnityEngine_UI_Graphic_o *)pNVar5,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
          value.fields.y = KAMCMPFEKFI;
          value.fields.x = KAMCMPFEKFI;
          value.fields.z = 0.0;
          UnityEngine_Transform__set_localScale
                    ((UnityEngine_Transform_o *)__this_00,value,(MethodInfo *)0x0);
          pNVar6 = (__this->fields)._value;
          CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            Nekki_SF2_GUI_TextPic__add_OnRendered
                      ((Nekki_SF2_GUI_TextPic_o *)pNVar6,CJNHFNHJHPE_00,(MethodInfo *)0x0);
            pNVar6 = (__this->fields)._value;
            if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              UnityEngine_UI_Text__set_verticalOverflow
                        ((UnityEngine_UI_Text_o *)pNVar6,1,(MethodInfo *)0x0);
              pNVar6 = (__this->fields)._value;
              if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                UnityEngine_UI_Text__set_horizontalOverflow
                          ((UnityEngine_UI_Text_o *)pNVar6,1,(MethodInfo *)0x0);
                pNVar6 = (__this->fields)._value;
                if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  UnityEngine_UI_Text__set_resizeTextForBestFit
                            ((UnityEngine_UI_Text_o *)pNVar6,false,(MethodInfo *)0x0);
                  pNVar6 = (__this->fields)._value;
                  if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    exists = (UnityEngine_Object_o *)
                             UnityEngine_Component__GetComponent<object>
                                       ((UnityEngine_Component_o *)pNVar6,
                                        Method_UnityEngine_Component_GetComponent<ContentSizeFitter>__
                                       );
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
                    }
                    bVar2 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
                    if (bVar2) {
                      if (exists == (UnityEngine_Object_o *)0x0) goto LAB_0349ce28;
                      UnityEngine_Behaviour__set_enabled
                                ((UnityEngine_Behaviour_o *)exists,false,(MethodInfo *)0x0);
                    }
                    pNVar6 = (__this->fields)._value;
                    if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                      (*(pNVar6->klass->vtable)._23_set_color.methodPtr)
                                (0,0,0,0x3a83126f,pNVar6,
                                 (pNVar6->klass->vtable)._23_set_color.method);
                      pNVar5 = (__this->fields)._icon;
                      if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                        (*(pNVar5->klass->vtable)._23_set_color.methodPtr)
                                  (0,0,0,0x3a83126f,pNVar5,
                                   (pNVar5->klass->vtable)._23_set_color.method);
                        pNVar6 = (__this->fields)._value;
                        if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                          Nekki_SF2_GUI_LabelAlias__Clear(pNVar6,(MethodInfo *)0x0);
                          pNVar6 = (__this->fields)._value;
                          if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                            Nekki_SF2_GUI_LabelAlias__set_UseLabelFontSize
                                      (pNVar6,true,(MethodInfo *)0x0);
                            pNVar6 = (__this->fields)._value;
                            if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                              Nekki_SF2_GUI_LabelAlias__set_LabelFontSize
                                        (pNVar6,NJBICBHLOMO,(MethodInfo *)0x0);
                              pNVar6 = (__this->fields)._value;
                              if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
                                thunk_FUN_01ba7564();
                              }
                              pSVar4 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
                              if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                                (*(pNVar6->klass->vtable)._75_set_text.methodPtr)
                                          (pNVar6,pSVar4,(pNVar6->klass->vtable)._75_set_text.method
                                          );
                                pNVar6 = (__this->fields)._value;
                                if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                                  Nekki_SF2_GUI_TextPic__Invalidate
                                            ((Nekki_SF2_GUI_TextPic_o *)pNVar6,(MethodInfo *)0x0);
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
          }
        }
      }
    }
  }
LAB_0349ce28:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

