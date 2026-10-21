// InControl.AndroidTVRemoteProfile$$.ctor @ RVA 0x3473D54

void InControl_AndroidTVRemoteProfile___ctor
               (InControl_AndroidTVRemoteProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  InControl_InputControlMapping_Range_o **ppIVar8;
  
  if ((DAT_04568310 & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_5029);
    FUN_01bab630(&StringLiteral_2955);
    FUN_01bab630(&StringLiteral_2954);
    FUN_01bab630(&StringLiteral_21568);
    FUN_01bab630(&StringLiteral_5030);
    FUN_01bab630(&StringLiteral_2950);
    FUN_01bab630(&StringLiteral_5031);
    FUN_01bab630(&StringLiteral_5028);
    FUN_01bab630(&StringLiteral_2529);
    FUN_01bab630(&StringLiteral_19812);
    DAT_04568310 = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_2954;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_2955;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
                    /* try { // try from 03573ea0 to 03673eb7 has its CatchHandler @ 035744b0 */
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = StringLiteral_2950;
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).super.SupportedPlatforms;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
                    /* try { // try from 03573ed8 to 03673edf has its CatchHandler @ 03574520 */
      pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,2);
      if (pSVar1 == (System_String_array *)0x0) goto LAB_03574310;
      if ((int)pSVar1->max_length != 0) {
                    /* try { // try from 03573eec to 03673eef has its CatchHandler @ 03574510 */
                    /* try { // try from 03573efc to 03673f03 has its CatchHandler @ 0357451c */
        pSVar1->m_Items[0] = StringLiteral_21568;
        thunk_FUN_01c20e04(pSVar1->m_Items);
                    /* try { // try from 03573f10 to 03673f13 has its CatchHandler @ 0357450c */
        if (1 < (uint)pSVar1->max_length) {
                    /* try { // try from 03573f28 to 03673f2f has its CatchHandler @ 03574508 */
          pSVar1->m_Items[1] = StringLiteral_19812;
          thunk_FUN_01c20e04();
          ppSVar2 = &(__this->fields).super.JoystickNames;
                    /* try { // try from 03573f40 to 03673f43 has its CatchHandler @ 035744c8 */
          *ppSVar2 = pSVar1;
                    /* try { // try from 03573f44 to 03673f57 has its CatchHandler @ 03574504 */
          thunk_FUN_01c20e04(ppSVar2,pSVar1);
          pIVar3 = (InControl_InputControlMapping_array *)
                   FUN_01bab718(InControl_InputControlMapping___TypeInfo,1);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 03573f74 to 03673f77 has its CatchHandler @ 035744c4 */
          if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
                    /* try { // try from 03573f84 to 03673f87 has its CatchHandler @ 03574500 */
            (pIVar4->fields).handle = StringLiteral_2529;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 0xb;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0;
            thunk_FUN_01c20e04();
            if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
                    /* try { // try from 03573fbc to 03673fc3 has its CatchHandler @ 035744cc */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_03574318;
              if ((int)pIVar3->max_length == 0) goto LAB_03574314;
              pIVar3->m_Items[0] = pIVar4;
                    /* try { // try from 03573fd8 to 03673ffb has its CatchHandler @ 035744d8 */
              thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
              ppIVar6 = &(__this->fields).super._ButtonMappings_k__BackingField;
              *ppIVar6 = pIVar3;
              thunk_FUN_01c20e04(ppIVar6,pIVar3);
              pIVar3 = (InControl_InputControlMapping_array *)
                       FUN_01bab718(InControl_InputControlMapping___TypeInfo,4);
                    /* try { // try from 03574008 to 0367405f has its CatchHandler @ 0357452c */
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
                (pIVar4->fields).handle = StringLiteral_5029;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 9;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                thunk_FUN_01c20e04();
                if ((InControl_InputControlMapping_Range_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                    /* try { // try from 03574070 to 03674073 has its CatchHandler @ 035744c0 */
                    /* try { // try from 03574074 to 0367407f has its CatchHandler @ 035744e0 */
                (pIVar4->fields).SourceRange =
                     InControl_InputControlMapping_Range_TypeInfo->static_fields->Negative;
                thunk_FUN_01c20e04();
                    /* try { // try from 03574084 to 0367408f has its CatchHandler @ 035744e8 */
                ppIVar8 = &(pIVar4->fields).TargetRange;
                *ppIVar8 = InControl_InputControlMapping_Range_TypeInfo->static_fields->Negative;
                thunk_FUN_01c20e04(ppIVar8);
                    /* try { // try from 035740a0 to 036740a7 has its CatchHandler @ 035744e4 */
                (pIVar4->fields).Invert = true;
                if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
                    /* try { // try from 035740b8 to 036740c3 has its CatchHandler @ 035744ec */
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) {
LAB_03574318:
                    uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                    FUN_01bab798(uVar7,0);
                  }
                  if ((int)pIVar3->max_length != 0) {
                    pIVar3->m_Items[0] = pIVar4;
                    /* try { // try from 035740d4 to 036740db has its CatchHandler @ 035744d0 */
                    thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 035740e4 to 036740f3 has its CatchHandler @ 03574530 */
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03574310;
                    /* try { // try from 035740f8 to 0367410f has its CatchHandler @ 035744dc */
                    (pIVar4->fields).handle = StringLiteral_5030;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 10;
                    /* try { // try from 0357411c to 03674137 has its CatchHandler @ 03574528 */
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                    thunk_FUN_01c20e04();
                    /* try { // try from 03574138 to 036741af has its CatchHandler @ 03573d00 */
                    (pIVar4->fields).SourceRange =
                         InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).TargetRange =
                         InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                    thunk_FUN_01c20e04();
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_03574318;
                    if (1 < (uint)pIVar3->max_length) {
                      pIVar3->m_Items[1] = pIVar4;
                      thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03574310;
                    /* try { // try from 035741b0 to 036741b3 has its CatchHandler @ 03574490 */
                      (pIVar4->fields).handle = StringLiteral_5031;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).Target = 7;
                    /* try { // try from 035741c0 to 036741c3 has its CatchHandler @ 035744a0 */
                      (pIVar4->fields).Source =
                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).SourceRange =
                           InControl_InputControlMapping_Range_TypeInfo->static_fields->Negative;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).TargetRange =
                           InControl_InputControlMapping_Range_TypeInfo->static_fields->Negative;
                      thunk_FUN_01c20e04();
                    /* try { // try from 03574210 to 0367421b has its CatchHandler @ 03574494 */
                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                      if (lVar5 == 0) goto LAB_03574318;
                      if (2 < (uint)pIVar3->max_length) {
                        pIVar3->m_Items[2] = pIVar4;
                    /* try { // try from 03574230 to 03674253 has its CatchHandler @ 035744a8 */
                        thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                        pIVar4 = (InControl_InputControlMapping_o *)
                                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03574310;
                    /* try { // try from 03574260 to 036742b7 has its CatchHandler @ 035744ac */
                        (pIVar4->fields).handle = StringLiteral_5028;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Target = 8;
                        (pIVar4->fields).Source =
                             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).SourceRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).TargetRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Invert = true;
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                        if (lVar5 == 0) goto LAB_03574318;
                        if (3 < (uint)pIVar3->max_length) {
                          pIVar3->m_Items[3] = pIVar4;
                          thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                          ppIVar6 = &(__this->fields).super._AnalogMappings_k__BackingField;
                          *ppIVar6 = pIVar3;
                    /* try { // try from 03574300 to 03674327 has its CatchHandler @ 035744b4 */
                          thunk_FUN_01c20e04(ppIVar6,pIVar3);
                          return;
                        }
                      }
                    }
                  }
                  goto LAB_03574314;
                }
              }
            }
          }
          goto LAB_03574310;
        }
      }
    }
LAB_03574314:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03574310:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

