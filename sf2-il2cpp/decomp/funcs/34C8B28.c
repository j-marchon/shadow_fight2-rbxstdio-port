// InControl.PlayStation3AndroidProfile$$.ctor @ RVA 0x34C8B28

void InControl_PlayStation3AndroidProfile___ctor
               (InControl_PlayStation3AndroidProfile_o *__this,MethodInfo *method)

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
  
  if ((DAT_04568653 & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&UnityEngine_KeyCode___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_4361);
    FUN_01bab630(&StringLiteral_12223);
    FUN_01bab630(&StringLiteral_8380);
    FUN_01bab630(&StringLiteral_8383);
    FUN_01bab630(&StringLiteral_5029);
    FUN_01bab630(&StringLiteral_11387);
    FUN_01bab630(&StringLiteral_10035);
    FUN_01bab630(&StringLiteral_8381);
    FUN_01bab630(&StringLiteral_11601);
    FUN_01bab630(&StringLiteral_12584);
    FUN_01bab630(&StringLiteral_12324);
    FUN_01bab630(&StringLiteral_5030);
    FUN_01bab630(&StringLiteral_2950);
    FUN_01bab630(&StringLiteral_11386);
    FUN_01bab630(&StringLiteral_12346);
    FUN_01bab630(&StringLiteral_11383);
    FUN_01bab630(&StringLiteral_5031);
    FUN_01bab630(&StringLiteral_8379);
    FUN_01bab630(&StringLiteral_4900);
    FUN_01bab630(&StringLiteral_11385);
    FUN_01bab630(&StringLiteral_13920);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_10292);
    FUN_01bab630(&StringLiteral_10291);
    FUN_01bab630(&StringLiteral_5028);
    FUN_01bab630(&StringLiteral_8382);
    FUN_01bab630(&StringLiteral_11384);
    FUN_01bab630(&StringLiteral_10036);
    DAT_04568653 = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_10291;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_10292;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = StringLiteral_2950;
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).super.SupportedPlatforms;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,4);
      if (pSVar1 == (System_String_array *)0x0) goto LAB_035c99f0;
      if ((int)pSVar1->max_length != 0) {
        pSVar1->m_Items[0] = StringLiteral_1;
        thunk_FUN_01c20e04(pSVar1->m_Items);
        if (1 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[1] = StringLiteral_10036;
          thunk_FUN_01c20e04(pSVar1->m_Items + 1);
          if (2 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[2] = StringLiteral_11601;
            thunk_FUN_01c20e04(pSVar1->m_Items + 2);
            if (3 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[3] = StringLiteral_12223;
              thunk_FUN_01c20e04();
              ppSVar2 = &(__this->fields).super.JoystickNames;
              *ppSVar2 = pSVar1;
              thunk_FUN_01c20e04(ppSVar2,pSVar1);
              (__this->fields).super.LastResortRegex = StringLiteral_10035;
              thunk_FUN_01c20e04();
              pIVar3 = (InControl_InputControlMapping_array *)
                       FUN_01bab718(InControl_InputControlMapping___TypeInfo,10);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
                (pIVar4->fields).handle = StringLiteral_4900;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 0xb;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button2;
                thunk_FUN_01c20e04();
                if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) {
LAB_035c99f8:
                    uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                    FUN_01bab798(uVar8,0);
                  }
                  if ((int)pIVar3->max_length == 0) goto LAB_035c99f4;
                  pIVar3->m_Items[0] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035c99f0;
                  (pIVar4->fields).handle = StringLiteral_4361;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Target = 0xc;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button3;
                  thunk_FUN_01c20e04();
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_035c99f8;
                  if ((uint)pIVar3->max_length < 2) goto LAB_035c99f4;
                  pIVar3->m_Items[1] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035c99f0;
                  (pIVar4->fields).handle = StringLiteral_12324;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Target = 0xd;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0;
                  thunk_FUN_01c20e04();
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_035c99f8;
                  if ((uint)pIVar3->max_length < 3) goto LAB_035c99f4;
                  pIVar3->m_Items[2] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035c99f0;
                  (pIVar4->fields).handle = StringLiteral_13920;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Target = 0xe;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button1;
                  thunk_FUN_01c20e04();
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_035c99f8;
                  if ((uint)pIVar3->max_length < 4) goto LAB_035c99f4;
                  pIVar3->m_Items[3] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035c99f0;
                  (pIVar4->fields).handle = StringLiteral_8379;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Target = 0x11;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button4;
                  thunk_FUN_01c20e04();
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_035c99f8;
                  if ((uint)pIVar3->max_length < 5) goto LAB_035c99f4;
                  pIVar3->m_Items[4] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035c99f0;
                  (pIVar4->fields).handle = StringLiteral_11383;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Target = 0x12;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
                  thunk_FUN_01c20e04();
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_035c99f8;
                  if ((uint)pIVar3->max_length < 6) goto LAB_035c99f4;
                  pIVar3->m_Items[5] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035c99f0;
                  (pIVar4->fields).handle = StringLiteral_8380;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Target = 3;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button8;
                  thunk_FUN_01c20e04();
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_035c99f8;
                  if ((uint)pIVar3->max_length < 7) goto LAB_035c99f4;
                  pIVar3->m_Items[6] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035c99f0;
                  (pIVar4->fields).handle = StringLiteral_11384;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Target = 6;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9;
                  thunk_FUN_01c20e04();
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_035c99f8;
                  if ((uint)pIVar3->max_length < 8) goto LAB_035c99f4;
                  pIVar3->m_Items[7] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035c99f0;
                  (pIVar4->fields).handle = StringLiteral_12346;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Target = 0x14;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button10;
                  thunk_FUN_01c20e04();
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_035c99f8;
                  if ((uint)pIVar3->max_length < 9) goto LAB_035c99f4;
                  pIVar3->m_Items[8] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
                    ppSVar9 = &(pIVar4->fields).handle;
                    *ppSVar9 = StringLiteral_12584;
                    thunk_FUN_01c20e04(ppSVar9);
                    (pIVar4->fields).Target = 0x16;
                    keyCodeList = (UnityEngine_KeyCode_array *)
                                  FUN_01bab718(UnityEngine_KeyCode___TypeInfo,1);
                    if (keyCodeList != (UnityEngine_KeyCode_array *)0x0) {
                      if ((int)keyCodeList->max_length != 0) {
                        keyCodeList->m_Items[0] = 0x13f;
                        pIVar6 = InControl_UnityInputDeviceProfile__KeyCodeButton
                                           (keyCodeList,(MethodInfo *)0x0);
                        (pIVar4->fields).Source = pIVar6;
                        thunk_FUN_01c20e04();
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                        if (lVar5 == 0) goto LAB_035c99f8;
                        if (9 < (uint)pIVar3->max_length) {
                          pIVar3->m_Items[9] = pIVar4;
                          thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
                          ppIVar7 = &(__this->fields).super._ButtonMappings_k__BackingField;
                          *ppIVar7 = pIVar3;
                          thunk_FUN_01c20e04(ppIVar7,pIVar3);
                          pIVar3 = (InControl_InputControlMapping_array *)
                                   FUN_01bab718(InControl_InputControlMapping___TypeInfo,10);
                          pIVar4 = (InControl_InputControlMapping_o *)
                                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                          if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
                            (pIVar4->fields).handle = StringLiteral_8381;
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).Target = 1;
                            (pIVar4->fields).Source =
                                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog0;
                            thunk_FUN_01c20e04();
                            if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
                              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                element_class);
                              if (lVar5 == 0) goto LAB_035c99f8;
                              if ((int)pIVar3->max_length != 0) {
                                pIVar3->m_Items[0] = pIVar4;
                                thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                                pIVar4 = (InControl_InputControlMapping_o *)
                                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                                if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                goto LAB_035c99f0;
                                (pIVar4->fields).handle = StringLiteral_8382;
                                thunk_FUN_01c20e04();
                                (pIVar4->fields).Target = 2;
                                (pIVar4->fields).Source =
                                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                     Analog1;
                                thunk_FUN_01c20e04();
                                (pIVar4->fields).Invert = true;
                                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                  element_class);
                                if (lVar5 == 0) goto LAB_035c99f8;
                                if (1 < (uint)pIVar3->max_length) {
                                  pIVar3->m_Items[1] = pIVar4;
                                  thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                                  pIVar4 = (InControl_InputControlMapping_o *)
                                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo
                                                             );
                                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                  goto LAB_035c99f0;
                                  (pIVar4->fields).handle = StringLiteral_11385;
                                  thunk_FUN_01c20e04();
                                  (pIVar4->fields).Target = 4;
                                  (pIVar4->fields).Source =
                                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                       Analog2;
                                  thunk_FUN_01c20e04();
                                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                    element_class);
                                  if (lVar5 == 0) goto LAB_035c99f8;
                                  if (2 < (uint)pIVar3->max_length) {
                                    pIVar3->m_Items[2] = pIVar4;
                                    thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                                    pIVar4 = (InControl_InputControlMapping_o *)
                                             thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                    goto LAB_035c99f0;
                                    (pIVar4->fields).handle = StringLiteral_11386;
                                    thunk_FUN_01c20e04();
                                    (pIVar4->fields).Target = 5;
                                    (pIVar4->fields).Source =
                                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                         Analog3;
                                    thunk_FUN_01c20e04();
                                    (pIVar4->fields).Invert = true;
                                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                      element_class);
                                    if (lVar5 == 0) goto LAB_035c99f8;
                                    if (3 < (uint)pIVar3->max_length) {
                                      pIVar3->m_Items[3] = pIVar4;
                                      thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                                      pIVar4 = (InControl_InputControlMapping_o *)
                                               thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0)
                                      ;
                                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                      goto LAB_035c99f0;
                                      (pIVar4->fields).handle = StringLiteral_5029;
                                      thunk_FUN_01c20e04();
                                      (pIVar4->fields).Target = 9;
                                      (pIVar4->fields).Source =
                                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields
                                           ->Analog4;
                                      thunk_FUN_01c20e04();
                                      if ((InControl_InputControlMapping_Range_TypeInfo->_2).
                                          cctor_finished == 0) {
                                        thunk_FUN_01ba7564();
                                      }
                                      (pIVar4->fields).SourceRange =
                                           InControl_InputControlMapping_Range_TypeInfo->
                                           static_fields->Negative;
                                      thunk_FUN_01c20e04();
                                      (pIVar4->fields).TargetRange =
                                           InControl_InputControlMapping_Range_TypeInfo->
                                           static_fields->Negative;
                                      thunk_FUN_01c20e04();
                                      (pIVar4->fields).Invert = true;
                                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                        element_class);
                                      if (lVar5 == 0) goto LAB_035c99f8;
                                      if (4 < (uint)pIVar3->max_length) {
                                        pIVar3->m_Items[4] = pIVar4;
                                        thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                                        pIVar4 = (InControl_InputControlMapping_o *)
                                                 thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                        InControl_InputControlMapping___ctor
                                                  (pIVar4,(MethodInfo *)0x0);
                                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                        goto LAB_035c99f0;
                                        (pIVar4->fields).handle = StringLiteral_5030;
                                        thunk_FUN_01c20e04();
                                        (pIVar4->fields).Target = 10;
                                        (pIVar4->fields).Source =
                                             InControl_UnityInputDeviceProfile_TypeInfo->
                                             static_fields->Analog4;
                                        thunk_FUN_01c20e04();
                                        (pIVar4->fields).SourceRange =
                                             InControl_InputControlMapping_Range_TypeInfo->
                                             static_fields->Positive;
                                        thunk_FUN_01c20e04();
                                        (pIVar4->fields).TargetRange =
                                             InControl_InputControlMapping_Range_TypeInfo->
                                             static_fields->Positive;
                                        thunk_FUN_01c20e04();
                                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1
                                                                          ).element_class);
                                        if (lVar5 == 0) goto LAB_035c99f8;
                                        if (5 < (uint)pIVar3->max_length) {
                                          pIVar3->m_Items[5] = pIVar4;
                                          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                                          pIVar4 = (InControl_InputControlMapping_o *)
                                                   thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                          InControl_InputControlMapping___ctor
                                                    (pIVar4,(MethodInfo *)0x0);
                                          if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                          goto LAB_035c99f0;
                                          (pIVar4->fields).handle = StringLiteral_5031;
                                          thunk_FUN_01c20e04();
                                          (pIVar4->fields).Target = 7;
                                          (pIVar4->fields).Source =
                                               InControl_UnityInputDeviceProfile_TypeInfo->
                                               static_fields->Analog5;
                                          thunk_FUN_01c20e04();
                                          (pIVar4->fields).SourceRange =
                                               InControl_InputControlMapping_Range_TypeInfo->
                                               static_fields->Negative;
                                          thunk_FUN_01c20e04();
                                          (pIVar4->fields).TargetRange =
                                               InControl_InputControlMapping_Range_TypeInfo->
                                               static_fields->Negative;
                                          thunk_FUN_01c20e04();
                                          (pIVar4->fields).Invert = true;
                                          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->
                                                                            _1).element_class);
                                          if (lVar5 == 0) goto LAB_035c99f8;
                                          if (6 < (uint)pIVar3->max_length) {
                                            pIVar3->m_Items[6] = pIVar4;
                                            thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                                            pIVar4 = (InControl_InputControlMapping_o *)
                                                     thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                            InControl_InputControlMapping___ctor
                                                      (pIVar4,(MethodInfo *)0x0);
                                            if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                            goto LAB_035c99f0;
                                            (pIVar4->fields).handle = StringLiteral_5028;
                                            thunk_FUN_01c20e04();
                                            (pIVar4->fields).Target = 8;
                                            (pIVar4->fields).Source =
                                                 InControl_UnityInputDeviceProfile_TypeInfo->
                                                 static_fields->Analog5;
                                            thunk_FUN_01c20e04();
                                            (pIVar4->fields).SourceRange =
                                                 InControl_InputControlMapping_Range_TypeInfo->
                                                 static_fields->Positive;
                                            thunk_FUN_01c20e04();
                                            (pIVar4->fields).TargetRange =
                                                 InControl_InputControlMapping_Range_TypeInfo->
                                                 static_fields->Positive;
                                            thunk_FUN_01c20e04();
                                            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)
                                                                              ->_1).element_class);
                                            if (lVar5 == 0) goto LAB_035c99f8;
                                            if (7 < (uint)pIVar3->max_length) {
                                              pIVar3->m_Items[7] = pIVar4;
                                              thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
                                              pIVar4 = (InControl_InputControlMapping_o *)
                                                       thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                              InControl_InputControlMapping___ctor
                                                        (pIVar4,(MethodInfo *)0x0);
                                              if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                              goto LAB_035c99f0;
                                              (pIVar4->fields).handle = StringLiteral_8383;
                                              thunk_FUN_01c20e04();
                                              (pIVar4->fields).Target = 0xf;
                                              (pIVar4->fields).Source =
                                                   InControl_UnityInputDeviceProfile_TypeInfo->
                                                   static_fields->Analog6;
                                              thunk_FUN_01c20e04();
                                              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).
                                                                                 klass)->_1).
                                                                                element_class);
                                              if (lVar5 == 0) goto LAB_035c99f8;
                                              if (8 < (uint)pIVar3->max_length) {
                                                pIVar3->m_Items[8] = pIVar4;
                                                thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
                                                pIVar4 = (InControl_InputControlMapping_o *)
                                                         thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                                InControl_InputControlMapping___ctor
                                                          (pIVar4,(MethodInfo *)0x0);
                                                if (pIVar4 == (InControl_InputControlMapping_o *)0x0
                                                   ) goto LAB_035c99f0;
                                                (pIVar4->fields).handle = StringLiteral_11387;
                                                thunk_FUN_01c20e04();
                                                (pIVar4->fields).Target = 0x10;
                                                (pIVar4->fields).Source =
                                                     InControl_UnityInputDeviceProfile_TypeInfo->
                                                     static_fields->Analog7;
                                                thunk_FUN_01c20e04();
                                                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).
                                                                                   klass)->_1).
                                                                                  element_class);
                                                if (lVar5 == 0) goto LAB_035c99f8;
                                                if (9 < (uint)pIVar3->max_length) {
                                                  pIVar3->m_Items[9] = pIVar4;
                                                  thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
                                                  ppIVar7 = &(__this->fields).super.
                                                             _AnalogMappings_k__BackingField;
                                                  *ppIVar7 = pIVar3;
                                                  thunk_FUN_01c20e04(ppIVar7,pIVar3);
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
                              goto LAB_035c99f4;
                            }
                          }
                          goto LAB_035c99f0;
                        }
                      }
                      goto LAB_035c99f4;
                    }
                  }
                }
              }
              goto LAB_035c99f0;
            }
          }
        }
      }
    }
LAB_035c99f4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_035c99f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

