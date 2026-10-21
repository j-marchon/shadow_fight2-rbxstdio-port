// InControl.AppleMFiProfile$$.ctor @ RVA 0x34D37A8

void InControl_AppleMFiProfile___ctor(InControl_AppleMFiProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
  if ((DAT_045686c9 & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_8383);
    FUN_01bab630(&StringLiteral_3013);
    FUN_01bab630(&StringLiteral_5029);
    FUN_01bab630(&StringLiteral_11387);
    FUN_01bab630(&StringLiteral_8381);
    FUN_01bab630(&StringLiteral_5030);
    FUN_01bab630(&StringLiteral_11386);
    FUN_01bab630(&StringLiteral_11383);
    FUN_01bab630(&StringLiteral_5031);
    FUN_01bab630(&StringLiteral_8379);
    FUN_01bab630(&StringLiteral_10182);
    FUN_01bab630(&StringLiteral_3279);
    FUN_01bab630(&StringLiteral_11385);
    FUN_01bab630(&StringLiteral_15134);
    FUN_01bab630(&StringLiteral_18901);
    FUN_01bab630(&StringLiteral_15021);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_5028);
    FUN_01bab630(&StringLiteral_8382);
    FUN_01bab630(&StringLiteral_2529);
    FUN_01bab630(&StringLiteral_3014);
    DAT_045686c9 = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_3013;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_3014;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length == 0) goto LAB_035d42e4;
    pSVar1->m_Items[0] = StringLiteral_18901;
    thunk_FUN_01c20e04();
    ppSVar2 = &(__this->fields).super.SupportedPlatforms;
    *ppSVar2 = pSVar1;
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    (__this->fields).super.LastResortRegex = StringLiteral_1;
    thunk_FUN_01c20e04();
    InControl_UnityInputDeviceProfile__set_LowerDeadZone
              ((InControl_UnityInputDeviceProfile_o *)__this,0.05,(MethodInfo *)0x0);
    InControl_UnityInputDeviceProfile__set_UpperDeadZone
              ((InControl_UnityInputDeviceProfile_o *)__this,0.95,(MethodInfo *)0x0);
    pIVar3 = (InControl_InputControlMapping_array *)
             FUN_01bab718(InControl_InputControlMapping___TypeInfo,0xd);
    pIVar4 = (InControl_InputControlMapping_o *)
             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
    if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
      (pIVar4->fields).handle = StringLiteral_2529;
      thunk_FUN_01c20e04();
      (pIVar4->fields).Target = 0xb;
      (pIVar4->fields).Source = InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button14;
      thunk_FUN_01c20e04();
      if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
        if (lVar5 == 0) {
LAB_035d42d8:
          uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar7,0);
        }
        if ((int)pIVar3->max_length == 0) goto LAB_035d42e4;
        pIVar3->m_Items[0] = pIVar4;
        thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
        pIVar4 = (InControl_InputControlMapping_o *)
                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035d42d4;
        (pIVar4->fields).handle = StringLiteral_3279;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 0xc;
        (pIVar4->fields).Source =
             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button13;
        thunk_FUN_01c20e04();
        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
        if (lVar5 == 0) goto LAB_035d42d8;
        if ((uint)pIVar3->max_length < 2) goto LAB_035d42e4;
        pIVar3->m_Items[1] = pIVar4;
        thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
        pIVar4 = (InControl_InputControlMapping_o *)
                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035d42d4;
        (pIVar4->fields).handle = StringLiteral_15021;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 0xd;
        (pIVar4->fields).Source =
             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button15;
        thunk_FUN_01c20e04();
        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
        if (lVar5 == 0) goto LAB_035d42d8;
        if ((uint)pIVar3->max_length < 3) goto LAB_035d42e4;
        pIVar3->m_Items[2] = pIVar4;
        thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
        pIVar4 = (InControl_InputControlMapping_o *)
                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035d42d4;
        (pIVar4->fields).handle = StringLiteral_15134;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 0xe;
        (pIVar4->fields).Source =
             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button12;
        thunk_FUN_01c20e04();
        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
        if (lVar5 == 0) goto LAB_035d42d8;
        if ((uint)pIVar3->max_length < 4) goto LAB_035d42e4;
        pIVar3->m_Items[3] = pIVar4;
        thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
        pIVar4 = (InControl_InputControlMapping_o *)
                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035d42d4;
        (pIVar4->fields).handle = StringLiteral_5031;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 7;
        (pIVar4->fields).Source = InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button4
        ;
        thunk_FUN_01c20e04();
        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
        if (lVar5 == 0) goto LAB_035d42d8;
        if ((uint)pIVar3->max_length < 5) goto LAB_035d42e4;
        pIVar3->m_Items[4] = pIVar4;
        thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
        pIVar4 = (InControl_InputControlMapping_o *)
                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035d42d4;
        (pIVar4->fields).handle = StringLiteral_5028;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 8;
        (pIVar4->fields).Source = InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button6
        ;
        thunk_FUN_01c20e04();
        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
        if (lVar5 == 0) goto LAB_035d42d8;
        if ((uint)pIVar3->max_length < 6) goto LAB_035d42e4;
        pIVar3->m_Items[5] = pIVar4;
        thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
        pIVar4 = (InControl_InputControlMapping_o *)
                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035d42d4;
        (pIVar4->fields).handle = StringLiteral_5029;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 9;
        (pIVar4->fields).Source = InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button7
        ;
        thunk_FUN_01c20e04();
        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
        if (lVar5 == 0) goto LAB_035d42d8;
        if ((uint)pIVar3->max_length < 7) goto LAB_035d42e4;
        pIVar3->m_Items[6] = pIVar4;
        thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
        pIVar4 = (InControl_InputControlMapping_o *)
                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035d42d4;
        (pIVar4->fields).handle = StringLiteral_5030;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 10;
        (pIVar4->fields).Source = InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5
        ;
        thunk_FUN_01c20e04();
        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
        if (lVar5 == 0) goto LAB_035d42d8;
        if ((uint)pIVar3->max_length < 8) goto LAB_035d42e4;
        pIVar3->m_Items[7] = pIVar4;
        thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
        pIVar4 = (InControl_InputControlMapping_o *)
                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035d42d4;
        (pIVar4->fields).handle = StringLiteral_8379;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 0x11;
        (pIVar4->fields).Source = InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button8
        ;
        thunk_FUN_01c20e04();
        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
        if (lVar5 == 0) goto LAB_035d42d8;
        if ((uint)pIVar3->max_length < 9) goto LAB_035d42e4;
        pIVar3->m_Items[8] = pIVar4;
        thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
        pIVar4 = (InControl_InputControlMapping_o *)
                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035d42d4;
        (pIVar4->fields).handle = StringLiteral_11383;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 0x12;
        (pIVar4->fields).Source = InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9
        ;
        thunk_FUN_01c20e04();
        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
        if (lVar5 == 0) goto LAB_035d42d8;
        if ((uint)pIVar3->max_length < 10) goto LAB_035d42e4;
        pIVar3->m_Items[9] = pIVar4;
        thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
        pIVar4 = (InControl_InputControlMapping_o *)
                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035d42d4;
        (pIVar4->fields).handle = StringLiteral_10182;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 0x17;
        (pIVar4->fields).Source = InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0
        ;
        thunk_FUN_01c20e04();
        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
        if (lVar5 == 0) goto LAB_035d42d8;
        if ((uint)pIVar3->max_length < 0xb) goto LAB_035d42e4;
        pIVar3->m_Items[10] = pIVar4;
        thunk_FUN_01c20e04(pIVar3->m_Items + 10,pIVar4);
        pIVar4 = (InControl_InputControlMapping_o *)
                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035d42d4;
        (pIVar4->fields).handle = StringLiteral_8383;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 0xf;
        (pIVar4->fields).Source =
             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button10;
        thunk_FUN_01c20e04();
        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
        if (lVar5 == 0) goto LAB_035d42d8;
        if ((uint)pIVar3->max_length < 0xc) goto LAB_035d42e4;
        pIVar3->m_Items[0xb] = pIVar4;
        thunk_FUN_01c20e04(pIVar3->m_Items + 0xb,pIVar4);
        pIVar4 = (InControl_InputControlMapping_o *)
                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035d42d4;
        (pIVar4->fields).handle = StringLiteral_11387;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 0x10;
        (pIVar4->fields).Source =
             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button11;
        thunk_FUN_01c20e04();
        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
        if (lVar5 == 0) goto LAB_035d42d8;
        if ((uint)pIVar3->max_length < 0xd) {
LAB_035d42e4:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pIVar3->m_Items[0xc] = pIVar4;
        thunk_FUN_01c20e04(pIVar3->m_Items + 0xc,pIVar4);
        ppIVar6 = &(__this->fields).super._ButtonMappings_k__BackingField;
        *ppIVar6 = pIVar3;
        thunk_FUN_01c20e04(ppIVar6,pIVar3);
        pIVar3 = (InControl_InputControlMapping_array *)
                 FUN_01bab718(InControl_InputControlMapping___TypeInfo,4);
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
            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
            if (lVar5 == 0) goto LAB_035d42d8;
            if ((int)pIVar3->max_length != 0) {
              pIVar3->m_Items[0] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035d42d4;
              (pIVar4->fields).handle = StringLiteral_8382;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 2;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Invert = true;
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_035d42d8;
              if (1 < (uint)pIVar3->max_length) {
                pIVar3->m_Items[1] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035d42d4;
                (pIVar4->fields).handle = StringLiteral_11385;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 4;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog2;
                thunk_FUN_01c20e04();
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) goto LAB_035d42d8;
                if (2 < (uint)pIVar3->max_length) {
                  pIVar3->m_Items[2] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_035d42d4;
                  (pIVar4->fields).handle = StringLiteral_11386;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Target = 5;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog3;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Invert = true;
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_035d42d8;
                  if (3 < (uint)pIVar3->max_length) {
                    pIVar3->m_Items[3] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                    ppIVar6 = &(__this->fields).super._AnalogMappings_k__BackingField;
                    *ppIVar6 = pIVar3;
                    thunk_FUN_01c20e04(ppIVar6,pIVar3);
                    return;
                  }
                }
              }
            }
            goto LAB_035d42e4;
          }
        }
      }
    }
  }
LAB_035d42d4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

