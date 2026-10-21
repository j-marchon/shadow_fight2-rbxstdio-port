// TypeDefIndex 224
// Namespace: InControl
// [AutoDiscover]
// public class LogitechF310ModeDWinProfile : UnityInputDeviceProfile
// Fields:

// ===== public void .ctor()  [RVA 0x31254E4]
// InControl.LogitechF310ModeDWinProfile$$.ctor @ RVA 0x31254E4

void InControl_LogitechF310ModeDWinProfile___ctor
               (InControl_LogitechF310ModeDWinProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566658 & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_8380/*"Left Stick Button"*/);
    FUN_01bab630(&StringLiteral_8635/*"Logitech F310 Controller"*/);
    FUN_01bab630(&StringLiteral_8383/*"Left Trigger"*/);
    FUN_01bab630(&StringLiteral_5029/*"DPad Left"*/);
    FUN_01bab630(&StringLiteral_14965/*"Windows"*/);
    FUN_01bab630(&StringLiteral_11387/*"Right Trigger"*/);
    FUN_01bab630(&StringLiteral_3359/*"Back"*/);
    FUN_01bab630(&StringLiteral_8639/*"Logitech F310 Controller on Windows (DirectInput Mode)"*/);
    FUN_01bab630(&StringLiteral_8381/*"Left Stick X"*/);
    FUN_01bab630(&StringLiteral_8634/*"Logitech Dual Action"*/);
    FUN_01bab630(&StringLiteral_5030/*"DPad Right"*/);
    FUN_01bab630(&StringLiteral_11386/*"Right Stick Y"*/);
    FUN_01bab630(&StringLiteral_9686/*"OS X"*/);
    FUN_01bab630(&StringLiteral_12346/*"Start"*/);
    FUN_01bab630(&StringLiteral_11383/*"Right Bumper"*/);
    FUN_01bab630(&StringLiteral_5031/*"DPad Up"*/);
    FUN_01bab630(&StringLiteral_8379/*"Left Bumper"*/);
    FUN_01bab630(&StringLiteral_3279/*"B"*/);
    FUN_01bab630(&StringLiteral_11385/*"Right Stick X"*/);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
    FUN_01bab630(&StringLiteral_5028/*"DPad Down"*/);
    FUN_01bab630(&StringLiteral_8382/*"Left Stick Y"*/);
    FUN_01bab630(&StringLiteral_2529/*"A"*/);
    FUN_01bab630(&StringLiteral_11384/*"Right Stick Button"*/);
    DAT_04566658 = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_8635/*"Logitech F310 Controller"*/;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_8639/*"Logitech F310 Controller on Windows (DirectInput Mode)"*/;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,2);
  if (pSVar1 == (System_String_array *)0x0) goto LAB_032262e0;
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = StringLiteral_14965/*"Windows"*/;
    thunk_FUN_01c20e04(pSVar1->m_Items);
    if (1 < (uint)pSVar1->max_length) {
      pSVar1->m_Items[1] = StringLiteral_9686/*"OS X"*/;
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).super.SupportedPlatforms;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
      if (pSVar1 != (System_String_array *)0x0) {
        if ((int)pSVar1->max_length == 0) goto LAB_032262e4;
        pSVar1->m_Items[0] = StringLiteral_8634/*"Logitech Dual Action"*/;
        thunk_FUN_01c20e04();
        ppSVar2 = &(__this->fields).super.JoystickNames;
        *ppSVar2 = pSVar1;
        thunk_FUN_01c20e04(ppSVar2,pSVar1);
        pIVar3 = (InControl_InputControlMapping_array *)
                 FUN_01bab718(InControl_InputControlMapping___TypeInfo,0xc);
        pIVar4 = (InControl_InputControlMapping_o *)
                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
        if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
          (pIVar4->fields).handle = StringLiteral_2529/*"A"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xb;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button1;
          thunk_FUN_01c20e04();
          if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
            if (lVar5 == 0) {
LAB_032262e8:
              uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar7,0);
            }
            if ((int)pIVar3->max_length == 0) goto LAB_032262e4;
            pIVar3->m_Items[0] = pIVar4;
            thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
            pIVar4 = (InControl_InputControlMapping_o *)
                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_032262e0;
            (pIVar4->fields).handle = StringLiteral_3279/*"B"*/;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 0xc;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button2;
            thunk_FUN_01c20e04();
            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
            if (lVar5 == 0) goto LAB_032262e8;
            if ((uint)pIVar3->max_length < 2) goto LAB_032262e4;
            pIVar3->m_Items[1] = pIVar4;
            thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
            pIVar4 = (InControl_InputControlMapping_o *)
                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_032262e0;
            (pIVar4->fields).handle = StringLiteral_15021/*"X"*/;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 0xd;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0;
            thunk_FUN_01c20e04();
            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
            if (lVar5 == 0) goto LAB_032262e8;
            if ((uint)pIVar3->max_length < 3) goto LAB_032262e4;
            pIVar3->m_Items[2] = pIVar4;
            thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
            pIVar4 = (InControl_InputControlMapping_o *)
                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03225930 to 03325aef has its CatchHandler @ 03225930
                       catch() { ... } // from try @ 03225930 with catch @ 03225930
                       catch() { ... } // from try @ 03225c08 with catch @ 03225930
                       catch() { ... } // from try @ 03225c64 with catch @ 03225930
                       catch() { ... } // from try @ 03225ca8 with catch @ 03225930
                       catch() { ... } // from try @ 03225ce8 with catch @ 03225930 */
            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_032262e0;
            (pIVar4->fields).handle = StringLiteral_15134/*"Y"*/;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 0xe;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button3;
            thunk_FUN_01c20e04();
            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
            if (lVar5 == 0) goto LAB_032262e8;
            if ((uint)pIVar3->max_length < 4) goto LAB_032262e4;
            pIVar3->m_Items[3] = pIVar4;
            thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
            pIVar4 = (InControl_InputControlMapping_o *)
                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_032262e0;
            (pIVar4->fields).handle = StringLiteral_8379/*"Left Bumper"*/;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 0x11;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button4;
            thunk_FUN_01c20e04();
            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
            if (lVar5 == 0) goto LAB_032262e8;
            if ((uint)pIVar3->max_length < 5) goto LAB_032262e4;
            pIVar3->m_Items[4] = pIVar4;
            thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
            pIVar4 = (InControl_InputControlMapping_o *)
                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_032262e0;
            (pIVar4->fields).handle = StringLiteral_11383/*"Right Bumper"*/;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 0x12;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
            thunk_FUN_01c20e04();
            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
            if (lVar5 == 0) goto LAB_032262e8;
            if ((uint)pIVar3->max_length < 6) goto LAB_032262e4;
            pIVar3->m_Items[5] = pIVar4;
            thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
            pIVar4 = (InControl_InputControlMapping_o *)
                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_032262e0;
            (pIVar4->fields).handle = StringLiteral_8380/*"Left Stick Button"*/;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 3;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button10;
                    /* try { // try from 03225af0 to 03325af7 has its CatchHandler @ 03225c78 */
            thunk_FUN_01c20e04();
            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 03225b04 to 03325b0f has its CatchHandler @ 03225c68 */
            if (lVar5 == 0) goto LAB_032262e8;
            if ((uint)pIVar3->max_length < 7) goto LAB_032262e4;
                    /* try { // try from 03225b14 to 03325b43 has its CatchHandler @ 03225c88 */
            pIVar3->m_Items[6] = pIVar4;
            thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
            pIVar4 = (InControl_InputControlMapping_o *)
                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_032262e0;
                    /* try { // try from 03225b48 to 03325b77 has its CatchHandler @ 03225c84 */
            (pIVar4->fields).handle = StringLiteral_11384/*"Right Stick Button"*/;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 6;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button11;
            thunk_FUN_01c20e04();
                    /* try { // try from 03225b78 to 03325b87 has its CatchHandler @ 03225c74 */
            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
            if (lVar5 == 0) goto LAB_032262e8;
            if ((uint)pIVar3->max_length < 8) goto LAB_032262e4;
                    /* try { // try from 03225b98 to 03325c07 has its CatchHandler @ 03225c7c */
            pIVar3->m_Items[7] = pIVar4;
            thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
            pIVar4 = (InControl_InputControlMapping_o *)
                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_032262e0;
            (pIVar4->fields).handle = StringLiteral_3359/*"Back"*/;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 0x13;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button8;
            thunk_FUN_01c20e04();
            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
            if (lVar5 == 0) goto LAB_032262e8;
                    /* try { // try from 03225c08 to 03325c53 has its CatchHandler @ 03225930 */
            if ((uint)pIVar3->max_length < 9) goto LAB_032262e4;
            pIVar3->m_Items[8] = pIVar4;
            thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
            pIVar4 = (InControl_InputControlMapping_o *)
                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_032262e0;
            (pIVar4->fields).handle = StringLiteral_12346/*"Start"*/;
            thunk_FUN_01c20e04();
                    /* try { // try from 03225c54 to 03325c5b has its CatchHandler @ 03225c80 */
            (pIVar4->fields).Target = 0x14;
                    /* try { // try from 03225c5c to 03325c5f has its CatchHandler @ 03225c70 */
                    /* try { // try from 03225c60 to 03325c63 has its CatchHandler @ 03225c6c */
                    /* try { // try from 03225c64 to 03325ca3 has its CatchHandler @ 03225930 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03225b04 with catch @ 03225c68
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03225c60 with catch @ 03225c6c
                        */
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03225c5c with catch @ 03225c70
                        */
            thunk_FUN_01c20e04();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03225b78 with catch @ 03225c74
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03225af0 with catch @ 03225c78
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03225b98 with catch @ 03225c7c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03225c54 with catch @ 03225c80
                        */
            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03225b48 with catch @ 03225c84
                        */
            if (lVar5 == 0) goto LAB_032262e8;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03225b14 with catch @ 03225c88
                        */
            if ((uint)pIVar3->max_length < 10) goto LAB_032262e4;
            pIVar3->m_Items[9] = pIVar4;
            thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
                    /* try { // try from 03225ca4 to 03325ca7 has its CatchHandler @ 03225cd0 */
                    /* try { // try from 03225ca8 to 03325cdf has its CatchHandler @ 03225930 */
            pIVar4 = (InControl_InputControlMapping_o *)
                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_032262e0;
            (pIVar4->fields).handle = StringLiteral_8383/*"Left Trigger"*/;
                    /* catch() { ... } // from try @ 03225ca4 with catch @ 03225cd0 */
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 0xf;
                    /* try { // try from 03225ce0 to 03325ce7 has its CatchHandler @ 03225cfc */
                    /* try { // try from 03225ce8 to 03325cf3 has its CatchHandler @ 03225930 */
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button6;
            thunk_FUN_01c20e04();
                    /* try { // try from 03225cf4 to 03325cfb has its CatchHandler @ 03225cfc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03225ce0 with catch @ 03225cfc
                       catch(type#2 @ 00000000) { ... } // from try @ 03225cf4 with catch @ 03225cfc
                        */
            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
            if (lVar5 == 0) goto LAB_032262e8;
            if ((uint)pIVar3->max_length < 0xb) goto LAB_032262e4;
            pIVar3->m_Items[10] = pIVar4;
            thunk_FUN_01c20e04(pIVar3->m_Items + 10,pIVar4);
            pIVar4 = (InControl_InputControlMapping_o *)
                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_032262e0;
            (pIVar4->fields).handle = StringLiteral_11387/*"Right Trigger"*/;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 0x10;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button7;
            thunk_FUN_01c20e04();
            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
            if (lVar5 == 0) goto LAB_032262e8;
            if ((uint)pIVar3->max_length < 0xc) goto LAB_032262e4;
            pIVar3->m_Items[0xb] = pIVar4;
            thunk_FUN_01c20e04(pIVar3->m_Items + 0xb,pIVar4);
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
                if (lVar5 == 0) goto LAB_032262e8;
                if ((int)pIVar3->max_length != 0) {
                  pIVar3->m_Items[0] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_032262e0;
                  (pIVar4->fields).handle = StringLiteral_8382/*"Left Stick Y"*/;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Target = 2;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Invert = true;
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_032262e8;
                  if (1 < (uint)pIVar3->max_length) {
                    pIVar3->m_Items[1] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_032262e0;
                    (pIVar4->fields).handle = StringLiteral_11385/*"Right Stick X"*/;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 4;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog2;
                    thunk_FUN_01c20e04();
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_032262e8;
                    if (2 < (uint)pIVar3->max_length) {
                      pIVar3->m_Items[2] = pIVar4;
                      thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_032262e0;
                      (pIVar4->fields).handle = StringLiteral_11386/*"Right Stick Y"*/;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).Target = 5;
                      (pIVar4->fields).Source =
                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog3;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).Invert = true;
                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                      if (lVar5 == 0) goto LAB_032262e8;
                      if (3 < (uint)pIVar3->max_length) {
                        pIVar3->m_Items[3] = pIVar4;
                        thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                        pIVar4 = (InControl_InputControlMapping_o *)
                                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_032262e0;
                        (pIVar4->fields).handle = StringLiteral_5029/*"DPad Left"*/;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Target = 9;
                    /* try { // try from 03226018 to 033262ff has its CatchHandler @ 03226018
                       catch() { ... } // from try @ 03226018 with catch @ 03226018
                       catch() { ... } // from try @ 0322645c with catch @ 03226018
                       catch() { ... } // from try @ 03226508 with catch @ 03226018
                       catch() { ... } // from try @ 03226510 with catch @ 03226018
                       catch() { ... } // from try @ 032265cc with catch @ 03226018 */
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
                        (pIVar4->fields).TargetRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Negative;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Invert = true;
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                        if (lVar5 == 0) goto LAB_032262e8;
                        if (4 < (uint)pIVar3->max_length) {
                          pIVar3->m_Items[4] = pIVar4;
                          thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                          pIVar4 = (InControl_InputControlMapping_o *)
                                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_032262e0;
                          (pIVar4->fields).handle = StringLiteral_5030/*"DPad Right"*/;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).Target = 10;
                          (pIVar4->fields).Source =
                               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).SourceRange =
                               InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive
                          ;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).TargetRange =
                               InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive
                          ;
                          thunk_FUN_01c20e04();
                          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                            element_class);
                          if (lVar5 == 0) goto LAB_032262e8;
                          if (5 < (uint)pIVar3->max_length) {
                            pIVar3->m_Items[5] = pIVar4;
                            thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                            pIVar4 = (InControl_InputControlMapping_o *)
                                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_032262e0;
                            (pIVar4->fields).handle = StringLiteral_5031/*"DPad Up"*/;
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).Target = 7;
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
                            if (lVar5 == 0) goto LAB_032262e8;
                            if (6 < (uint)pIVar3->max_length) {
                              pIVar3->m_Items[6] = pIVar4;
                              thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                              pIVar4 = (InControl_InputControlMapping_o *)
                                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                              if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                              goto LAB_032262e0;
                              (pIVar4->fields).handle = StringLiteral_5028/*"DPad Down"*/;
                              thunk_FUN_01c20e04();
                              (pIVar4->fields).Target = 8;
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
                              if (lVar5 == 0) goto LAB_032262e8;
                              if (7 < (uint)pIVar3->max_length) {
                                pIVar3->m_Items[7] = pIVar4;
                                thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
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
                goto LAB_032262e4;
              }
            }
          }
        }
      }
LAB_032262e0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_032262e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

