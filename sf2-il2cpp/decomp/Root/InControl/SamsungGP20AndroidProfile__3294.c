// TypeDefIndex 3294
// Namespace: InControl
// [AutoDiscover]
// public class SamsungGP20AndroidProfile : UnityInputDeviceProfile
// Fields:

// ===== public void .ctor()  [RVA 0x351E018]
// InControl.SamsungGP20AndroidProfile$$.ctor @ RVA 0x351E018

void InControl_SamsungGP20AndroidProfile___ctor
               (InControl_SamsungGP20AndroidProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0361e018 to 0371e067 has its CatchHandler @ 0361dba4 */
                    /* catch() { ... } // from try @ 0361de68 with catch @ 0361e01c */
                    /* catch() { ... } // from try @ 0361e014 with catch @ 0361e020 */
                    /* catch() { ... } // from try @ 0361e010 with catch @ 0361e024 */
                    /* catch() { ... } // from try @ 0361de40 with catch @ 0361e028 */
                    /* catch() { ... } // from try @ 0361e00c with catch @ 0361e02c */
                    /* catch() { ... } // from try @ 0361de4c with catch @ 0361e030 */
                    /* catch() { ... } // from try @ 0361de74 with catch @ 0361e034 */
                    /* catch() { ... } // from try @ 0361de14 with catch @ 0361e038 */
                    /* catch() { ... } // from try @ 0361e008 with catch @ 0361e03c */
  if ((DAT_045689a8 & 1) == 0) {
                    /* catch() { ... } // from try @ 0361e004 with catch @ 0361e040 */
                    /* catch() { ... } // from try @ 0361e000 with catch @ 0361e044 */
                    /* catch() { ... } // from try @ 0361de8c with catch @ 0361e048 */
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
                    /* catch() { ... } // from try @ 0361de20 with catch @ 0361e04c */
                    /* catch() { ... } // from try @ 0361ddec with catch @ 0361e050 */
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
                    /* try { // try from 0361e068 to 0371e06b has its CatchHandler @ 0361e094 */
                    /* try { // try from 0361e06c to 0371e0a3 has its CatchHandler @ 0361dba4 */
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_2019/*"3"*/);
    FUN_01bab630(&StringLiteral_5029/*"DPad Left"*/);
                    /* catch() { ... } // from try @ 0361e068 with catch @ 0361e094 */
    FUN_01bab630(&StringLiteral_1943/*"2"*/);
                    /* try { // try from 0361e0a4 to 0371e0ab has its CatchHandler @ 0361e0c0 */
    FUN_01bab630(&StringLiteral_11786/*"Select"*/);
                    /* try { // try from 0361e0ac to 0371e0b7 has its CatchHandler @ 0361dba4 */
    FUN_01bab630(&StringLiteral_8381/*"Left Stick X"*/);
                    /* try { // try from 0361e0b8 to 0371e0bf has its CatchHandler @ 0361e0c0 */
                    /* catch() { ... } // from try @ 0361e0a4 with catch @ 0361e0c0
                       catch() { ... } // from try @ 0361e0b8 with catch @ 0361e0c0 */
    FUN_01bab630(&StringLiteral_5030/*"DPad Right"*/);
    FUN_01bab630(&StringLiteral_2642/*"ANDROID"*/);
    FUN_01bab630(&StringLiteral_11670/*"Samgsung Game Pad EI-GP20 on Android"*/);
    FUN_01bab630(&StringLiteral_2036/*"4"*/);
    FUN_01bab630(&StringLiteral_11682/*"Samsung Game Pad EI-GP20"*/);
    FUN_01bab630(&StringLiteral_11386/*"Right Stick Y"*/);
    FUN_01bab630(&StringLiteral_12346/*"Start"*/);
    FUN_01bab630(&StringLiteral_11669/*"Samgsung Game Pad EI-GP20"*/);
    FUN_01bab630(&StringLiteral_11383/*"Right Bumper"*/);
    FUN_01bab630(&StringLiteral_5031/*"DPad Up"*/);
    FUN_01bab630(&StringLiteral_8379/*"Left Bumper"*/);
    FUN_01bab630(&StringLiteral_11385/*"Right Stick X"*/);
    FUN_01bab630(&StringLiteral_5028/*"DPad Down"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_8382/*"Left Stick Y"*/);
    DAT_045689a8 = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_11669/*"Samgsung Game Pad EI-GP20"*/;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_11670/*"Samgsung Game Pad EI-GP20 on Android"*/;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length == 0) {
LAB_0361ebb4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar1->m_Items[0] = StringLiteral_2642/*"ANDROID"*/;
    thunk_FUN_01c20e04();
    ppSVar2 = &(__this->fields).super.SupportedPlatforms;
    *ppSVar2 = pSVar1;
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
    if (pSVar1 != (System_String_array *)0x0) {
      if ((int)pSVar1->max_length == 0) goto LAB_0361ebb4;
      pSVar1->m_Items[0] = StringLiteral_11682/*"Samsung Game Pad EI-GP20"*/;
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).super.JoystickNames;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      pIVar3 = (InControl_InputControlMapping_array *)
               FUN_01bab718(InControl_InputControlMapping___TypeInfo,8);
      pIVar4 = (InControl_InputControlMapping_o *)
               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
      if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
        (pIVar4->fields).handle = StringLiteral_1606/*"1"*/;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 0xb;
        (pIVar4->fields).Source = InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0
        ;
        thunk_FUN_01c20e04();
        if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) {
LAB_0361ebb8:
                    /* try { // try from 0361ebb8 to 0371ebdf has its CatchHandler @ 0361f04c */
            uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar7,0);
          }
          if ((int)pIVar3->max_length == 0) goto LAB_0361ebb4;
          pIVar3->m_Items[0] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0361ebb0;
          (pIVar4->fields).handle = StringLiteral_1943/*"2"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xc;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button1;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0361ebb8;
          if ((uint)pIVar3->max_length < 2) goto LAB_0361ebb4;
          pIVar3->m_Items[1] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0361ebb0;
          (pIVar4->fields).handle = StringLiteral_2019/*"3"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xd;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button2;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0361ebb8;
          if ((uint)pIVar3->max_length < 3) goto LAB_0361ebb4;
                    /* try { // try from 0361e3e4 to 0371eb73 has its CatchHandler @ 0361e3e4
                       catch() { ... } // from try @ 0361e3e4 with catch @ 0361e3e4
                       catch() { ... } // from try @ 0361ebe0 with catch @ 0361e3e4
                       catch() { ... } // from try @ 0361ed0c with catch @ 0361e3e4
                       catch() { ... } // from try @ 0361ee94 with catch @ 0361e3e4
                       catch() { ... } // from try @ 0361ef8c with catch @ 0361e3e4
                       catch() { ... } // from try @ 0361ef98 with catch @ 0361e3e4
                       catch() { ... } // from try @ 0361f000 with catch @ 0361e3e4
                       catch() { ... } // from try @ 0361f04c with catch @ 0361e3e4
                       catch() { ... } // from try @ 0361f068 with catch @ 0361e3e4
                       catch() { ... } // from try @ 0361f0a4 with catch @ 0361e3e4
                       catch() { ... } // from try @ 0361f160 with catch @ 0361e3e4 */
          pIVar3->m_Items[2] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0361ebb0;
          (pIVar4->fields).handle = StringLiteral_2036/*"4"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xe;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button3;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0361ebb8;
          if ((uint)pIVar3->max_length < 4) goto LAB_0361ebb4;
          pIVar3->m_Items[3] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0361ebb0;
          (pIVar4->fields).handle = StringLiteral_8379/*"Left Bumper"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x11;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button4;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0361ebb8;
          if ((uint)pIVar3->max_length < 5) goto LAB_0361ebb4;
          pIVar3->m_Items[4] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0361ebb0;
          (pIVar4->fields).handle = StringLiteral_11383/*"Right Bumper"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x12;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0361ebb8;
          if ((uint)pIVar3->max_length < 6) goto LAB_0361ebb4;
          pIVar3->m_Items[5] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0361ebb0;
          (pIVar4->fields).handle = StringLiteral_11786/*"Select"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x15;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button11;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0361ebb8;
          if ((uint)pIVar3->max_length < 7) goto LAB_0361ebb4;
          pIVar3->m_Items[6] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0361ebb0;
          (pIVar4->fields).handle = StringLiteral_12346/*"Start"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x14;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button10;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0361ebb8;
          if ((uint)pIVar3->max_length < 8) goto LAB_0361ebb4;
          pIVar3->m_Items[7] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
          ppIVar6 = &(__this->fields).super._ButtonMappings_k__BackingField;
          *ppIVar6 = pIVar3;
          thunk_FUN_01c20e04(ppIVar6,pIVar3);
          pIVar3 = (InControl_InputControlMapping_array *)
                   FUN_01bab718(InControl_InputControlMapping___TypeInfo,8);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
            (pIVar4->fields).handle = StringLiteral_8381/*"Left Stick X"*/;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 1;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog0;
            thunk_FUN_01c20e04();
            if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_0361ebb8;
              if ((int)pIVar3->max_length != 0) {
                pIVar3->m_Items[0] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0361ebb0;
                (pIVar4->fields).handle = StringLiteral_8382/*"Left Stick Y"*/;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 2;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Invert = true;
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) goto LAB_0361ebb8;
                if (1 < (uint)pIVar3->max_length) {
                  pIVar3->m_Items[1] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0361ebb0;
                  (pIVar4->fields).handle = StringLiteral_11385/*"Right Stick X"*/;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Target = 4;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog2;
                  thunk_FUN_01c20e04();
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_0361ebb8;
                  if (2 < (uint)pIVar3->max_length) {
                    pIVar3->m_Items[2] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0361ebb0;
                    (pIVar4->fields).handle = StringLiteral_11386/*"Right Stick Y"*/;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 5;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog3;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Invert = true;
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_0361ebb8;
                    if (3 < (uint)pIVar3->max_length) {
                      pIVar3->m_Items[3] = pIVar4;
                      thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0361ebb0;
                      (pIVar4->fields).handle = StringLiteral_5029/*"DPad Left"*/;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).Target = 9;
                      (pIVar4->fields).Source =
                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                      thunk_FUN_01c20e04();
                      if ((InControl_InputControlMapping_Range_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      (pIVar4->fields).SourceRange =
                           InControl_InputControlMapping_Range_TypeInfo->static_fields->Negative;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).TargetRange =
                           InControl_InputControlMapping_Range_TypeInfo->static_fields->Negative;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).Invert = true;
                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                      if (lVar5 == 0) goto LAB_0361ebb8;
                      if (4 < (uint)pIVar3->max_length) {
                        pIVar3->m_Items[4] = pIVar4;
                        thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                        pIVar4 = (InControl_InputControlMapping_o *)
                                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0361ebb0;
                        (pIVar4->fields).handle = StringLiteral_5030/*"DPad Right"*/;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Target = 10;
                        (pIVar4->fields).Source =
                             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).SourceRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).TargetRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                        thunk_FUN_01c20e04();
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                        if (lVar5 == 0) goto LAB_0361ebb8;
                        if (5 < (uint)pIVar3->max_length) {
                          pIVar3->m_Items[5] = pIVar4;
                          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                          pIVar4 = (InControl_InputControlMapping_o *)
                                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0361ebb0;
                          (pIVar4->fields).handle = StringLiteral_5031/*"DPad Up"*/;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).Target = 7;
                          (pIVar4->fields).Source =
                               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).SourceRange =
                               InControl_InputControlMapping_Range_TypeInfo->static_fields->Negative
                          ;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).TargetRange =
                               InControl_InputControlMapping_Range_TypeInfo->static_fields->Negative
                          ;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).Invert = true;
                          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                            element_class);
                          if (lVar5 == 0) goto LAB_0361ebb8;
                          if (6 < (uint)pIVar3->max_length) {
                            pIVar3->m_Items[6] = pIVar4;
                            thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                            pIVar4 = (InControl_InputControlMapping_o *)
                                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0361ebb0;
                            (pIVar4->fields).handle = StringLiteral_5028/*"DPad Down"*/;
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).Target = 8;
                            (pIVar4->fields).Source =
                                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
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
                            if (lVar5 == 0) goto LAB_0361ebb8;
                    /* try { // try from 0361eb74 to 0371eb7b has its CatchHandler @ 0361efe0 */
                            if (7 < (uint)pIVar3->max_length) {
                              pIVar3->m_Items[7] = pIVar4;
                              thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
                              ppIVar6 = &(__this->fields).super._AnalogMappings_k__BackingField;
                    /* try { // try from 0361eb90 to 0371eb97 has its CatchHandler @ 0361efd8 */
                              *ppIVar6 = pIVar3;
                    /* try { // try from 0361eba4 to 0371ebab has its CatchHandler @ 0361efcc */
                              thunk_FUN_01c20e04(ppIVar6,pIVar3);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_0361ebb4;
            }
          }
        }
      }
    }
  }
LAB_0361ebb0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

