// TypeDefIndex 3364
// Namespace: InControl
// [AutoDiscover]
// public class MaxFireBlaze5Profile : UnityInputDeviceProfile
// Fields:

// ===== public void .ctor()  [RVA 0x353B7E4]
// InControl.MaxFireBlaze5Profile$$.ctor @ RVA 0x353B7E4

void InControl_MaxFireBlaze5Profile___ctor
               (InControl_MaxFireBlaze5Profile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568ac5 & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_8380/*"Left Stick Button"*/);
    FUN_01bab630(&StringLiteral_8383/*"Left Trigger"*/);
    FUN_01bab630(&StringLiteral_2019/*"3"*/);
    FUN_01bab630(&StringLiteral_5029/*"DPad Left"*/);
    FUN_01bab630(&StringLiteral_4688/*"Controller (MaxFire Blaze5)"*/);
    FUN_01bab630(&StringLiteral_1943/*"2"*/);
    FUN_01bab630(&StringLiteral_11786/*"Select"*/);
    FUN_01bab630(&StringLiteral_14965/*"Windows"*/);
    FUN_01bab630(&StringLiteral_11387/*"Right Trigger"*/);
    FUN_01bab630(&StringLiteral_8381/*"Left Stick X"*/);
    FUN_01bab630(&StringLiteral_5030/*"DPad Right"*/);
    FUN_01bab630(&StringLiteral_2036/*"4"*/);
    FUN_01bab630(&StringLiteral_11386/*"Right Stick Y"*/);
    FUN_01bab630(&StringLiteral_12346/*"Start"*/);
    FUN_01bab630(&StringLiteral_11383/*"Right Bumper"*/);
    FUN_01bab630(&StringLiteral_8883/*"MaxFire Blaze5"*/);
    FUN_01bab630(&StringLiteral_5031/*"DPad Up"*/);
    FUN_01bab630(&StringLiteral_8379/*"Left Bumper"*/);
    FUN_01bab630(&StringLiteral_11385/*"Right Stick X"*/);
    FUN_01bab630(&StringLiteral_8884/*"MaxFire Blaze5 Controller on Windows"*/);
    FUN_01bab630(&StringLiteral_5028/*"DPad Down"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_8382/*"Left Stick Y"*/);
    FUN_01bab630(&StringLiteral_11384/*"Right Stick Button"*/);
    DAT_04568ac5 = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_8883/*"MaxFire Blaze5"*/;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_8884/*"MaxFire Blaze5 Controller on Windows"*/;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length == 0) {
LAB_0363c61c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar1->m_Items[0] = StringLiteral_14965/*"Windows"*/;
    thunk_FUN_01c20e04();
    ppSVar2 = &(__this->fields).super.SupportedPlatforms;
    *ppSVar2 = pSVar1;
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
    if (pSVar1 != (System_String_array *)0x0) {
      if ((int)pSVar1->max_length == 0) goto LAB_0363c61c;
      pSVar1->m_Items[0] = StringLiteral_4688/*"Controller (MaxFire Blaze5)"*/;
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).super.JoystickNames;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      pIVar3 = (InControl_InputControlMapping_array *)
               FUN_01bab718(InControl_InputControlMapping___TypeInfo,10);
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
LAB_0363c610:
            uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar7,0);
          }
          if ((int)pIVar3->max_length == 0) goto LAB_0363c61c;
          pIVar3->m_Items[0] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0363c60c;
          (pIVar4->fields).handle = StringLiteral_1943/*"2"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xc;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button1;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0363c610;
          if ((uint)pIVar3->max_length < 2) goto LAB_0363c61c;
          pIVar3->m_Items[1] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0363c60c;
          (pIVar4->fields).handle = StringLiteral_2019/*"3"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xd;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button2;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0363c610;
          if ((uint)pIVar3->max_length < 3) goto LAB_0363c61c;
          pIVar3->m_Items[2] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0363c60c;
          (pIVar4->fields).handle = StringLiteral_2036/*"4"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xe;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button3;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0363c610;
          if ((uint)pIVar3->max_length < 4) goto LAB_0363c61c;
          pIVar3->m_Items[3] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0363c60c;
          (pIVar4->fields).handle = StringLiteral_8379/*"Left Bumper"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x11;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button4;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0363c610;
          if ((uint)pIVar3->max_length < 5) goto LAB_0363c61c;
          pIVar3->m_Items[4] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0363c60c;
          (pIVar4->fields).handle = StringLiteral_11383/*"Right Bumper"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x12;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0363c610;
          if ((uint)pIVar3->max_length < 6) goto LAB_0363c61c;
          pIVar3->m_Items[5] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0363c60c;
          (pIVar4->fields).handle = StringLiteral_12346/*"Start"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x14;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button7;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0363c610;
          if ((uint)pIVar3->max_length < 7) goto LAB_0363c61c;
          pIVar3->m_Items[6] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0363c60c;
          (pIVar4->fields).handle = StringLiteral_11786/*"Select"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x15;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button6;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0363c610;
          if ((uint)pIVar3->max_length < 8) goto LAB_0363c61c;
          pIVar3->m_Items[7] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 0363be78 to 0373bf0f has its CatchHandler @ 0363be78
                       catch() { ... } // from try @ 0363be78 with catch @ 0363be78
                       catch() { ... } // from try @ 0363c114 with catch @ 0363be78
                       catch() { ... } // from try @ 0363c180 with catch @ 0363be78
                       catch() { ... } // from try @ 0363c318 with catch @ 0363be78
                       catch() { ... } // from try @ 0363c324 with catch @ 0363be78 */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0363c60c;
          (pIVar4->fields).handle = StringLiteral_8380/*"Left Stick Button"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 3;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button8;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0363c610;
          if ((uint)pIVar3->max_length < 9) goto LAB_0363c61c;
          pIVar3->m_Items[8] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0363c60c;
                    /* try { // try from 0363bf10 to 0373bf13 has its CatchHandler @ 0363c12c */
                    /* try { // try from 0363bf14 to 0373bf1b has its CatchHandler @ 0363c138 */
          (pIVar4->fields).handle = StringLiteral_11384/*"Right Stick Button"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 6;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0363c610;
          if ((uint)pIVar3->max_length < 10) goto LAB_0363c61c;
                    /* try { // try from 0363bf60 to 0373bf63 has its CatchHandler @ 0363c13c */
                    /* try { // try from 0363bf64 to 0373bf73 has its CatchHandler @ 0363c14c */
          pIVar3->m_Items[9] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
          ppIVar6 = &(__this->fields).super._ButtonMappings_k__BackingField;
          *ppIVar6 = pIVar3;
          thunk_FUN_01c20e04(ppIVar6,pIVar3);
                    /* try { // try from 0363bf84 to 0373bf8f has its CatchHandler @ 0363c148 */
          pIVar3 = (InControl_InputControlMapping_array *)
                   FUN_01bab718(InControl_InputControlMapping___TypeInfo,10);
                    /* try { // try from 0363bf90 to 0373bf9b has its CatchHandler @ 0363c144 */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
            (pIVar4->fields).handle = StringLiteral_8381/*"Left Stick X"*/;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 1;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog0;
                    /* try { // try from 0363bfe0 to 0373bfe7 has its CatchHandler @ 0363c128 */
            thunk_FUN_01c20e04();
            if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 0363bff8 to 0373bfff has its CatchHandler @ 0363c124 */
              if (lVar5 == 0) goto LAB_0363c610;
              if ((int)pIVar3->max_length != 0) {
                    /* try { // try from 0363c004 to 0373c00b has its CatchHandler @ 0363c120 */
                pIVar3->m_Items[0] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 0363c01c to 0373c023 has its CatchHandler @ 0363c11c */
                    /* try { // try from 0363c024 to 0373c033 has its CatchHandler @ 0363c118 */
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0363c60c;
                (pIVar4->fields).handle = StringLiteral_8382/*"Left Stick Y"*/;
                thunk_FUN_01c20e04();
                    /* try { // try from 0363c044 to 0373c04b has its CatchHandler @ 0363c114 */
                (pIVar4->fields).Target = 2;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
                    /* try { // try from 0363c060 to 0373c083 has its CatchHandler @ 0363c130 */
                thunk_FUN_01c20e04();
                (pIVar4->fields).Invert = true;
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) goto LAB_0363c610;
                if (1 < (uint)pIVar3->max_length) {
                    /* try { // try from 0363c090 to 0373c0df has its CatchHandler @ 0363c134 */
                  pIVar3->m_Items[1] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0363c60c;
                  (pIVar4->fields).handle = StringLiteral_11385/*"Right Stick X"*/;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Target = 4;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog3;
                    /* try { // try from 0363c0e8 to 0373c0eb has its CatchHandler @ 0363c150 */
                  thunk_FUN_01c20e04();
                    /* try { // try from 0363c0ec to 0373c0ef has its CatchHandler @ 0363c140 */
                    /* try { // try from 0363c0f0 to 0373c0f7 has its CatchHandler @ 0363c130 */
                    /* try { // try from 0363c0f8 to 0373c0fb has its CatchHandler @ 0363c134 */
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 0363c0fc to 0373c107 has its CatchHandler @ 0363c130 */
                  if (lVar5 == 0) goto LAB_0363c610;
                    /* try { // try from 0363c108 to 0373c113 has its CatchHandler @ 0363c134 */
                  if (2 < (uint)pIVar3->max_length) {
                    pIVar3->m_Items[2] = pIVar4;
                    /* catch() { ... } // from try @ 0363c044 with catch @ 0363c114
                       try { // try from 0363c114 to 0373c167 has its CatchHandler @ 0363be78 */
                    /* catch() { ... } // from try @ 0363c024 with catch @ 0363c118 */
                    thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                    /* catch() { ... } // from try @ 0363c01c with catch @ 0363c11c */
                    /* catch() { ... } // from try @ 0363c004 with catch @ 0363c120 */
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 0363bff8 with catch @ 0363c124 */
                    /* catch() { ... } // from try @ 0363bfe0 with catch @ 0363c128 */
                    /* catch() { ... } // from try @ 0363bf10 with catch @ 0363c12c */
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0363c060 with catch @ 0363c130
                       catch() { ... } // from try @ 0363c0f0 with catch @ 0363c130
                       catch() { ... } // from try @ 0363c0fc with catch @ 0363c130 */
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0363c60c;
                    /* catch() { ... } // from try @ 0363c090 with catch @ 0363c134
                       catch() { ... } // from try @ 0363c0f8 with catch @ 0363c134
                       catch() { ... } // from try @ 0363c108 with catch @ 0363c134 */
                    /* catch() { ... } // from try @ 0363bf14 with catch @ 0363c138 */
                    /* catch() { ... } // from try @ 0363bf60 with catch @ 0363c13c */
                    /* catch() { ... } // from try @ 0363c0ec with catch @ 0363c140 */
                    /* catch() { ... } // from try @ 0363bf90 with catch @ 0363c144 */
                    (pIVar4->fields).handle = StringLiteral_11386/*"Right Stick Y"*/;
                    /* catch() { ... } // from try @ 0363bf84 with catch @ 0363c148 */
                    thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 0363bf64 with catch @ 0363c14c */
                    /* catch() { ... } // from try @ 0363c0e8 with catch @ 0363c150 */
                    (pIVar4->fields).Target = 5;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                    /* try { // try from 0363c168 to 0373c17f has its CatchHandler @ 0363c31c */
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Invert = true;
                    /* try { // try from 0363c180 to 0373c307 has its CatchHandler @ 0363be78 */
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_0363c610;
                    if (3 < (uint)pIVar3->max_length) {
                      pIVar3->m_Items[3] = pIVar4;
                      thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0363c60c;
                      (pIVar4->fields).handle = StringLiteral_8383/*"Left Trigger"*/;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).Target = 0xf;
                      (pIVar4->fields).Source =
                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog8;
                      thunk_FUN_01c20e04();
                      if ((InControl_InputControlMapping_Range_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      (pIVar4->fields).SourceRange =
                           InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).TargetRange =
                           InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                      thunk_FUN_01c20e04();
                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                      if (lVar5 == 0) goto LAB_0363c610;
                      if (4 < (uint)pIVar3->max_length) {
                        pIVar3->m_Items[4] = pIVar4;
                        thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                        pIVar4 = (InControl_InputControlMapping_o *)
                                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0363c60c;
                        (pIVar4->fields).handle = StringLiteral_11387/*"Right Trigger"*/;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Target = 0x10;
                        (pIVar4->fields).Source =
                             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog9;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).SourceRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).TargetRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                        thunk_FUN_01c20e04();
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                        if (lVar5 == 0) goto LAB_0363c610;
                    /* try { // try from 0363c308 to 0373c317 has its CatchHandler @ 0363c31c */
                        if (5 < (uint)pIVar3->max_length) {
                          pIVar3->m_Items[5] = pIVar4;
                    /* try { // try from 0363c318 to 0373c31f has its CatchHandler @ 0363be78 */
                          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                    /* catch() { ... } // from try @ 0363c168 with catch @ 0363c31c
                       catch() { ... } // from try @ 0363c308 with catch @ 0363c31c */
                    /* try { // try from 0363c320 to 0373c323 has its CatchHandler @ 0363c32c */
                          pIVar4 = (InControl_InputControlMapping_o *)
                                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 0363c324 to 0373c32f has its CatchHandler @ 0363be78 */
                    /* catch() { ... } // from try @ 0363c320 with catch @ 0363c32c */
                          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0363c60c;
                          (pIVar4->fields).handle = StringLiteral_5029/*"DPad Left"*/;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).Target = 9;
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
                    /* try { // try from 0363c3a8 to 0373c477 has its CatchHandler @ 0363c3a8
                       catch() { ... } // from try @ 0363c3a8 with catch @ 0363c3a8
                       catch() { ... } // from try @ 0363c49c with catch @ 0363c3a8
                       catch() { ... } // from try @ 0363c4d0 with catch @ 0363c3a8
                       catch() { ... } // from try @ 0363c500 with catch @ 0363c3a8
                       catch() { ... } // from try @ 0363c540 with catch @ 0363c3a8 */
                          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                            element_class);
                          if (lVar5 == 0) goto LAB_0363c610;
                          if (6 < (uint)pIVar3->max_length) {
                            pIVar3->m_Items[6] = pIVar4;
                            thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                            pIVar4 = (InControl_InputControlMapping_o *)
                                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0363c60c;
                            (pIVar4->fields).handle = StringLiteral_5030/*"DPad Right"*/;
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).Target = 10;
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
                            if (lVar5 == 0) goto LAB_0363c610;
                            if (7 < (uint)pIVar3->max_length) {
                    /* try { // try from 0363c478 to 0373c47f has its CatchHandler @ 0363c4e4 */
                              pIVar3->m_Items[7] = pIVar4;
                              thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
                              pIVar4 = (InControl_InputControlMapping_o *)
                                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 0363c498 to 0373c49b has its CatchHandler @ 0363c4e0 */
                              if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                              goto LAB_0363c60c;
                    /* try { // try from 0363c49c to 0373c4cb has its CatchHandler @ 0363c3a8 */
                              (pIVar4->fields).handle = StringLiteral_5031/*"DPad Up"*/;
                              thunk_FUN_01c20e04();
                              (pIVar4->fields).Target = 7;
                    /* try { // try from 0363c4cc to 0373c4cf has its CatchHandler @ 0363c4d4 */
                              (pIVar4->fields).Source =
                                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                   Analog6;
                    /* try { // try from 0363c4d0 to 0373c4fb has its CatchHandler @ 0363c3a8 */
                              thunk_FUN_01c20e04();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363c4cc with catch @ 0363c4d4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363c498 with catch @ 0363c4e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363c478 with catch @ 0363c4e4
                        */
                              (pIVar4->fields).SourceRange =
                                   InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                   Positive;
                              thunk_FUN_01c20e04();
                    /* try { // try from 0363c4fc to 0373c4ff has its CatchHandler @ 0363c528 */
                              (pIVar4->fields).TargetRange =
                                   InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                   Positive;
                    /* try { // try from 0363c500 to 0373c537 has its CatchHandler @ 0363c3a8 */
                              thunk_FUN_01c20e04();
                              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                element_class);
                              if (lVar5 == 0) goto LAB_0363c610;
                              if (8 < (uint)pIVar3->max_length) {
                    /* catch() { ... } // from try @ 0363c4fc with catch @ 0363c528 */
                                pIVar3->m_Items[8] = pIVar4;
                                thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
                    /* try { // try from 0363c538 to 0373c53f has its CatchHandler @ 0363c554 */
                                pIVar4 = (InControl_InputControlMapping_o *)
                                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 0363c540 to 0373c54b has its CatchHandler @ 0363c3a8 */
                                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                                if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                goto LAB_0363c60c;
                    /* try { // try from 0363c54c to 0373c553 has its CatchHandler @ 0363c554 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0363c538 with catch @ 0363c554
                       catch(type#2 @ 00000000) { ... } // from try @ 0363c54c with catch @ 0363c554
                        */
                                (pIVar4->fields).handle = StringLiteral_5028/*"DPad Down"*/;
                                thunk_FUN_01c20e04();
                                (pIVar4->fields).Target = 8;
                                (pIVar4->fields).Source =
                                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                     Analog6;
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
                                if (lVar5 == 0) goto LAB_0363c610;
                                if (9 < (uint)pIVar3->max_length) {
                                  pIVar3->m_Items[9] = pIVar4;
                                  thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
                                  ppIVar6 = &(__this->fields).super._AnalogMappings_k__BackingField;
                                  *ppIVar6 = pIVar3;
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
                }
              }
              goto LAB_0363c61c;
            }
          }
        }
      }
    }
  }
LAB_0363c60c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

