// TypeDefIndex 1677
// Namespace: InControl
// [AutoDiscover]
// public class AmazonFireTVRemote : UnityInputDeviceProfile
// Fields:

// ===== public void .ctor()  [RVA 0x31CCFC0]
// InControl.AmazonFireTVRemote$$.ctor @ RVA 0x31CCFC0

void InControl_AmazonFireTVRemote___ctor(InControl_AmazonFireTVRemote_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  UnityEngine_KeyCode_array *keyCodeList;
  InControl_InputControlSource_o *pIVar6;
  InControl_InputControlMapping_array **ppIVar7;
  undefined8 uVar8;
  MethodInfo *extraout_x1;
  System_String_o **ppSVar9;
  InControl_InputControlMapping_Range_o **ppIVar10;
  
  if ((DAT_04566c7e & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&UnityEngine_KeyCode___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_5029/*"DPad Left"*/);
    FUN_01bab630(&StringLiteral_2848/*"Amazon Fire TV Remote on Amazon Fire TV"*/);
    FUN_01bab630(&StringLiteral_3359/*"Back"*/);
    FUN_01bab630(&StringLiteral_5030/*"DPad Right"*/);
    FUN_01bab630(&StringLiteral_2847/*"Amazon Fire TV Remote"*/);
    FUN_01bab630(&StringLiteral_5031/*"DPad Up"*/);
    FUN_01bab630(&StringLiteral_2843/*"Amazon AFTM"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_5028/*"DPad Down"*/);
    FUN_01bab630(&StringLiteral_2529/*"A"*/);
    FUN_01bab630(&StringLiteral_2842/*"Amazon AFTB"*/);
    DAT_04566c7e = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_2847/*"Amazon Fire TV Remote"*/;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_2848/*"Amazon Fire TV Remote on Amazon Fire TV"*/;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,2);
  if (pSVar1 == (System_String_array *)0x0) goto LAB_032cd668;
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = StringLiteral_2842/*"Amazon AFTB"*/;
    thunk_FUN_01c20e04(pSVar1->m_Items);
    if (1 < (uint)pSVar1->max_length) {
      pSVar1->m_Items[1] = StringLiteral_2843/*"Amazon AFTM"*/;
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).super.SupportedPlatforms;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,2);
      if (pSVar1 == (System_String_array *)0x0) goto LAB_032cd668;
      if ((int)pSVar1->max_length != 0) {
        pSVar1->m_Items[0] = StringLiteral_1/*""*/;
        thunk_FUN_01c20e04(pSVar1->m_Items);
        if (1 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[1] = StringLiteral_2847/*"Amazon Fire TV Remote"*/;
          thunk_FUN_01c20e04();
          ppSVar2 = &(__this->fields).super.JoystickNames;
          *ppSVar2 = pSVar1;
          thunk_FUN_01c20e04(ppSVar2,pSVar1);
          pIVar3 = (InControl_InputControlMapping_array *)
                   FUN_01bab718(InControl_InputControlMapping___TypeInfo,2);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
            (pIVar4->fields).handle = StringLiteral_2529/*"A"*/;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 0xb;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0;
            thunk_FUN_01c20e04();
            if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_032cd670;
              if ((int)pIVar3->max_length == 0) goto LAB_032cd66c;
              pIVar3->m_Items[0] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
                ppSVar9 = &(pIVar4->fields).handle;
                *ppSVar9 = StringLiteral_3359/*"Back"*/;
                thunk_FUN_01c20e04(ppSVar9);
                (pIVar4->fields).Target = 0x15;
                keyCodeList = (UnityEngine_KeyCode_array *)
                              FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
                if (keyCodeList != (UnityEngine_KeyCode_array *)0x0) {
                  if ((int)keyCodeList->max_length != 0) {
                    keyCodeList->m_Items[0] = 0x1b;
                    pIVar6 = InControl_UnityInputDeviceProfile__KeyCodeButton
                                       (keyCodeList,(MethodInfo *)0x0);
                    (pIVar4->fields).Source = pIVar6;
                    thunk_FUN_01c20e04();
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_032cd670;
                    if (1 < (uint)pIVar3->max_length) {
                      pIVar3->m_Items[1] = pIVar4;
                      thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                      ppIVar7 = &(__this->fields).super._ButtonMappings_k__BackingField;
                      *ppIVar7 = pIVar3;
                      thunk_FUN_01c20e04(ppIVar7,pIVar3);
                      pIVar3 = (InControl_InputControlMapping_array *)
                               FUN_01bab718(InControl_InputControlMapping___TypeInfo,4);
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                      if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
                        (pIVar4->fields).handle = StringLiteral_5029/*"DPad Left"*/;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Target = 9;
                        (pIVar4->fields).Source =
                             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                        thunk_FUN_01c20e04();
                        if ((InControl_InputControlMapping_Range_TypeInfo->_2).cctor_finished == 0)
                        {
                          thunk_FUN_01ba7564();
                        }
                        (pIVar4->fields).SourceRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Negative;
                        thunk_FUN_01c20e04();
                        ppIVar10 = &(pIVar4->fields).TargetRange;
                        *ppIVar10 = InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                    Negative;
                        thunk_FUN_01c20e04(ppIVar10);
                        (pIVar4->fields).Invert = true;
                        if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
                          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                            element_class);
                          if (lVar5 == 0) {
LAB_032cd670:
                            uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                            FUN_01bab798(uVar8,0);
                          }
                          if ((int)pIVar3->max_length != 0) {
                            pIVar3->m_Items[0] = pIVar4;
                            thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                            pIVar4 = (InControl_InputControlMapping_o *)
                                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_032cd668;
                            (pIVar4->fields).handle = StringLiteral_5030/*"DPad Right"*/;
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).Target = 10;
                            (pIVar4->fields).Source =
                                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).SourceRange =
                                 InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                 Positive;
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).TargetRange =
                                 InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                 Positive;
                            thunk_FUN_01c20e04();
                            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                              element_class);
                            if (lVar5 == 0) goto LAB_032cd670;
                            if (1 < (uint)pIVar3->max_length) {
                              pIVar3->m_Items[1] = pIVar4;
                              thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                              pIVar4 = (InControl_InputControlMapping_o *)
                                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                              if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                              goto LAB_032cd668;
                              (pIVar4->fields).handle = StringLiteral_5031/*"DPad Up"*/;
                              thunk_FUN_01c20e04();
                              (pIVar4->fields).Target = 7;
                              (pIVar4->fields).Source =
                                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                   Analog5;
                              thunk_FUN_01c20e04();
                              (pIVar4->fields).SourceRange =
                                   InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                   Negative;
                              thunk_FUN_01c20e04();
                              (pIVar4->fields).TargetRange =
                                   InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                   Negative;
                              thunk_FUN_01c20e04();
                              (pIVar4->fields).Invert = true;
                              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                element_class);
                              if (lVar5 == 0) goto LAB_032cd670;
                              if (2 < (uint)pIVar3->max_length) {
                                pIVar3->m_Items[2] = pIVar4;
                                thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                                pIVar4 = (InControl_InputControlMapping_o *)
                                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                                if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                goto LAB_032cd668;
                                (pIVar4->fields).handle = StringLiteral_5028/*"DPad Down"*/;
                                thunk_FUN_01c20e04();
                                (pIVar4->fields).Target = 8;
                                (pIVar4->fields).Source =
                                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                     Analog5;
                                thunk_FUN_01c20e04();
                                (pIVar4->fields).SourceRange =
                                     InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                     Positive;
                                thunk_FUN_01c20e04();
                                (pIVar4->fields).TargetRange =
                                     InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                     Positive;
                                thunk_FUN_01c20e04();
                                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                  element_class);
                                if (lVar5 == 0) goto LAB_032cd670;
                                if (3 < (uint)pIVar3->max_length) {
                                  pIVar3->m_Items[3] = pIVar4;
                                  thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                                  ppIVar7 = &(__this->fields).super._AnalogMappings_k__BackingField;
                                  *ppIVar7 = pIVar3;
                                  thunk_FUN_01c20e04(ppIVar7,pIVar3);
                                  return;
                                }
                              }
                            }
                          }
                          goto LAB_032cd66c;
                        }
                      }
                      goto LAB_032cd668;
                    }
                  }
                  goto LAB_032cd66c;
                }
              }
            }
          }
LAB_032cd668:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
    }
  }
LAB_032cd66c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

