// TypeDefIndex 739
// Namespace: InControl
// [AutoDiscover]
// public class LogitechF310ModeXMacProfile : UnityInputDeviceProfile
// Fields:

// ===== public void .ctor()  [RVA 0x3048818]
// InControl.LogitechF310ModeXMacProfile$$.ctor @ RVA 0x3048818

void InControl_LogitechF310ModeXMacProfile___ctor
               (InControl_LogitechF310ModeXMacProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565dfb & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_8649/*"Logitech Gamepad F310"*/);
    FUN_01bab630(&StringLiteral_8380/*"Left Stick Button"*/);
    FUN_01bab630(&StringLiteral_8635/*"Logitech F310 Controller"*/);
    FUN_01bab630(&StringLiteral_8383/*"Left Trigger"*/);
    FUN_01bab630(&StringLiteral_5029/*"DPad Left"*/);
    FUN_01bab630(&StringLiteral_11387/*"Right Trigger"*/);
    FUN_01bab630(&StringLiteral_3359/*"Back"*/);
    FUN_01bab630(&StringLiteral_8381/*"Left Stick X"*/);
    FUN_01bab630(&StringLiteral_12584/*"System"*/);
    FUN_01bab630(&StringLiteral_5030/*"DPad Right"*/);
    FUN_01bab630(&StringLiteral_11386/*"Right Stick Y"*/);
    FUN_01bab630(&StringLiteral_9686/*"OS X"*/);
    FUN_01bab630(&StringLiteral_12346/*"Start"*/);
    FUN_01bab630(&StringLiteral_11383/*"Right Bumper"*/);
    FUN_01bab630(&StringLiteral_5031/*"DPad Up"*/);
    FUN_01bab630(&StringLiteral_8379/*"Left Bumper"*/);
    FUN_01bab630(&StringLiteral_3279/*"B"*/);
    FUN_01bab630(&StringLiteral_11385/*"Right Stick X"*/);
    FUN_01bab630(&StringLiteral_8638/*"Logitech F310 Controller on Mac (Mode X)"*/);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
                    /* catch() { ... } // from try @ 03148998 with catch @ 0314897c
                       catch() { ... } // from try @ 031489d8 with catch @ 0314897c
                       catch() { ... } // from try @ 03148a40 with catch @ 0314897c */
    FUN_01bab630(&StringLiteral_5028/*"DPad Down"*/);
    FUN_01bab630(&StringLiteral_8382/*"Left Stick Y"*/);
                    /* try { // try from 03148990 to 03248997 has its CatchHandler @ 031489a8 */
                    /* try { // try from 03148998 to 032489bf has its CatchHandler @ 0314897c */
    FUN_01bab630(&StringLiteral_2529/*"A"*/);
    FUN_01bab630(&StringLiteral_11384/*"Right Stick Button"*/);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03148990 with catch @ 031489a8
                        */
    DAT_04565dfb = 1;
    method = extraout_x1;
  }
                    /* try { // try from 031489c0 to 032489d7 has its CatchHandler @ 03148a38 */
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
                    /* try { // try from 031489d8 to 03248a27 has its CatchHandler @ 0314897c */
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_8635/*"Logitech F310 Controller"*/;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_8638/*"Logitech F310 Controller on Mac (Mode X)"*/;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length == 0) {
LAB_031495ec:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
                    /* try { // try from 03148a28 to 03248a37 has its CatchHandler @ 03148a38 */
    pSVar1->m_Items[0] = StringLiteral_9686/*"OS X"*/;
    thunk_FUN_01c20e04();
    ppSVar2 = &(__this->fields).super.SupportedPlatforms;
                    /* catch() { ... } // from try @ 031489c0 with catch @ 03148a38
                       catch() { ... } // from try @ 03148a28 with catch @ 03148a38 */
                    /* try { // try from 03148a3c to 03248a3f has its CatchHandler @ 03148a48 */
    *ppSVar2 = pSVar1;
                    /* try { // try from 03148a40 to 03248a4b has its CatchHandler @ 0314897c */
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03148a3c with catch @ 03148a48
                        */
                    /* try { // try from 03148a4c to 03248b2b has its CatchHandler @ 03148a4c
                       catch() { ... } // from try @ 03148a4c with catch @ 03148a4c
                       catch() { ... } // from try @ 03148b3c with catch @ 03148a4c
                       catch() { ... } // from try @ 03148bd8 with catch @ 03148a4c */
    pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
    if (pSVar1 != (System_String_array *)0x0) {
      if ((int)pSVar1->max_length == 0) goto LAB_031495ec;
      pSVar1->m_Items[0] = StringLiteral_8649/*"Logitech Gamepad F310"*/;
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).super.JoystickNames;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      pIVar3 = (InControl_InputControlMapping_array *)
               FUN_01bab718(InControl_InputControlMapping___TypeInfo,0xf);
      pIVar4 = (InControl_InputControlMapping_o *)
               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
      if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
        (pIVar4->fields).handle = StringLiteral_2529/*"A"*/;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 0xb;
        (pIVar4->fields).Source =
             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button16;
        thunk_FUN_01c20e04();
        if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) {
LAB_031495e0:
            uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar7,0);
          }
          if ((int)pIVar3->max_length == 0) goto LAB_031495ec;
          pIVar3->m_Items[0] = pIVar4;
                    /* try { // try from 03148b2c to 03248b3b has its CatchHandler @ 03148bc4 */
          thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03148b3c to 03248bd3 has its CatchHandler @ 03148a4c */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
          (pIVar4->fields).handle = StringLiteral_3279/*"B"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xc;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button17;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031495e0;
          if ((uint)pIVar3->max_length < 2) goto LAB_031495ec;
          pIVar3->m_Items[1] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03148b2c with catch @ 03148bc4
                        */
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
                    /* try { // try from 03148bd4 to 03248bd7 has its CatchHandler @ 03148c1c */
                    /* try { // try from 03148bd8 to 03248c33 has its CatchHandler @ 03148a4c */
          (pIVar4->fields).handle = StringLiteral_15021/*"X"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xd;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button18;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031495e0;
                    /* catch() { ... } // from try @ 03148bd4 with catch @ 03148c1c */
          if ((uint)pIVar3->max_length < 3) goto LAB_031495ec;
          pIVar3->m_Items[2] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                    /* try { // try from 03148c34 to 03248c3b has its CatchHandler @ 03148c3c */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03148c34 with catch @ 03148c3c
                        */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
          (pIVar4->fields).handle = StringLiteral_15134/*"Y"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xe;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button19;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031495e0;
          if ((uint)pIVar3->max_length < 4) goto LAB_031495ec;
          pIVar3->m_Items[3] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
                    /* try { // try from 03148cd4 to 03248d57 has its CatchHandler @ 03148cd4
                       catch() { ... } // from try @ 03148cd4 with catch @ 03148cd4
                       catch() { ... } // from try @ 03148dbc with catch @ 03148cd4
                       catch() { ... } // from try @ 03148e10 with catch @ 03148cd4
                       catch() { ... } // from try @ 03148e68 with catch @ 03148cd4 */
          (pIVar4->fields).handle = StringLiteral_5031/*"DPad Up"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 7;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031495e0;
          if ((uint)pIVar3->max_length < 5) goto LAB_031495ec;
          pIVar3->m_Items[4] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
                    /* try { // try from 03148d58 to 03248d67 has its CatchHandler @ 03148e24 */
          (pIVar4->fields).handle = StringLiteral_5028/*"DPad Down"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 8;
                    /* try { // try from 03148d70 to 03248d77 has its CatchHandler @ 03148e20 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button6;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 03148d90 to 03248d9f has its CatchHandler @ 03148e10 */
          if (lVar5 == 0) goto LAB_031495e0;
          if ((uint)pIVar3->max_length < 6) goto LAB_031495ec;
          pIVar3->m_Items[5] = pIVar4;
                    /* try { // try from 03148da8 to 03248dbb has its CatchHandler @ 03148e18 */
          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03148dbc to 03248e07 has its CatchHandler @ 03148cd4 */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
          (pIVar4->fields).handle = StringLiteral_5029/*"DPad Left"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 9;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button7;
          thunk_FUN_01c20e04();
                    /* try { // try from 03148e08 to 03248e0b has its CatchHandler @ 03148e1c */
                    /* try { // try from 03148e0c to 03248e0f has its CatchHandler @ 03148e14 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03148d90 with catch @ 03148e10
                       try { // try from 03148e10 to 03248e3b has its CatchHandler @ 03148cd4 */
          if (lVar5 == 0) goto LAB_031495e0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03148e0c with catch @ 03148e14
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03148da8 with catch @ 03148e18
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03148e08 with catch @ 03148e1c
                        */
          if ((uint)pIVar3->max_length < 7) goto LAB_031495ec;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03148d70 with catch @ 03148e20
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03148d58 with catch @ 03148e24
                        */
          pIVar3->m_Items[6] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03148e3c to 03248e3f has its CatchHandler @ 03148e4c */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
                    /* catch() { ... } // from try @ 03148e3c with catch @ 03148e4c */
                    /* try { // try from 03148e50 to 03248e67 has its CatchHandler @ 03148e7c */
          (pIVar4->fields).handle = StringLiteral_5030/*"DPad Right"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 10;
                    /* try { // try from 03148e68 to 03248e73 has its CatchHandler @ 03148cd4 */
                    /* try { // try from 03148e74 to 03248e7b has its CatchHandler @ 03148e7c */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button8;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03148e50 with catch @ 03148e7c
                       catch(type#2 @ 00000000) { ... } // from try @ 03148e74 with catch @ 03148e7c
                        */
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031495e0;
          if ((uint)pIVar3->max_length < 8) goto LAB_031495ec;
          pIVar3->m_Items[7] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
          (pIVar4->fields).handle = StringLiteral_8379/*"Left Bumper"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x11;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button13;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031495e0;
          if ((uint)pIVar3->max_length < 9) goto LAB_031495ec;
          pIVar3->m_Items[8] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
          (pIVar4->fields).handle = StringLiteral_11383/*"Right Bumper"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x12;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button14;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031495e0;
          if ((uint)pIVar3->max_length < 10) goto LAB_031495ec;
          pIVar3->m_Items[9] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
          (pIVar4->fields).handle = StringLiteral_8380/*"Left Stick Button"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 3;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button11;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031495e0;
          if ((uint)pIVar3->max_length < 0xb) goto LAB_031495ec;
          pIVar3->m_Items[10] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 10,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
          (pIVar4->fields).handle = StringLiteral_11384/*"Right Stick Button"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 6;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button12;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031495e0;
          if ((uint)pIVar3->max_length < 0xc) goto LAB_031495ec;
          pIVar3->m_Items[0xb] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 0xb,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
          (pIVar4->fields).handle = StringLiteral_12346/*"Start"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x14;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031495e0;
          if ((uint)pIVar3->max_length < 0xd) goto LAB_031495ec;
          pIVar3->m_Items[0xc] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 0xc,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
          (pIVar4->fields).handle = StringLiteral_3359/*"Back"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x15;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button10;
                    /* try { // try from 0314917c to 032491a7 has its CatchHandler @ 0314917c
                       catch() { ... } // from try @ 0314917c with catch @ 0314917c
                       catch() { ... } // from try @ 031491c8 with catch @ 0314917c
                       catch() { ... } // from try @ 03149214 with catch @ 0314917c
                       catch() { ... } // from try @ 03149260 with catch @ 0314917c
                       catch() { ... } // from try @ 0314929c with catch @ 0314917c
                       catch() { ... } // from try @ 031492ec with catch @ 0314917c */
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031495e0;
          if ((uint)pIVar3->max_length < 0xe) goto LAB_031495ec;
          pIVar3->m_Items[0xd] = pIVar4;
                    /* try { // try from 031491a8 to 032491b3 has its CatchHandler @ 03149214 */
          thunk_FUN_01c20e04(pIVar3->m_Items + 0xd,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 031491c4 to 032491c7 has its CatchHandler @ 0314921c */
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
                    /* try { // try from 031491c8 to 0324920f has its CatchHandler @ 0314917c */
          (pIVar4->fields).handle = StringLiteral_12584/*"System"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x16;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button15;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 03149210 to 03249213 has its CatchHandler @ 0314921c */
          if (lVar5 == 0) goto LAB_031495e0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031491a8 with catch @ 03149214
                       try { // try from 03149214 to 03249233 has its CatchHandler @ 0314917c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031491c4 with catch @ 0314921c
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03149210 with catch @ 0314921c
                        */
          if ((uint)pIVar3->max_length < 0xf) goto LAB_031495ec;
          pIVar3->m_Items[0xe] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 0xe,pIVar4);
          ppIVar6 = &(__this->fields).super._ButtonMappings_k__BackingField;
                    /* try { // try from 03149234 to 0324924b has its CatchHandler @ 03149290 */
          *ppIVar6 = pIVar3;
          thunk_FUN_01c20e04(ppIVar6,pIVar3);
          pIVar3 = (InControl_InputControlMapping_array *)
                   FUN_01bab718(InControl_InputControlMapping___TypeInfo,6);
                    /* try { // try from 03149254 to 03249257 has its CatchHandler @ 03149288 */
                    /* try { // try from 03149258 to 0324925f has its CatchHandler @ 03149284 */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03149260 to 03249273 has its CatchHandler @ 0314917c */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
                    /* try { // try from 03149274 to 03249283 has its CatchHandler @ 03149290 */
            (pIVar4->fields).handle = StringLiteral_8381/*"Left Stick X"*/;
            thunk_FUN_01c20e04();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03149258 with catch @ 03149284
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03149254 with catch @ 03149288
                        */
            (pIVar4->fields).Target = 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03149234 with catch @ 03149290
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03149274 with catch @ 03149290
                        */
                    /* try { // try from 03149298 to 0324929b has its CatchHandler @ 03149304 */
                    /* try { // try from 0314929c to 032492bb has its CatchHandler @ 0314917c */
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog0;
            thunk_FUN_01c20e04();
            if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_031495e0;
                    /* try { // try from 031492bc to 032492bf has its CatchHandler @ 031492d4 */
              if ((int)pIVar3->max_length != 0) {
                pIVar3->m_Items[0] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                    /* catch() { ... } // from try @ 031492bc with catch @ 031492d4 */
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 031492e0 to 032492eb has its CatchHandler @ 03149304 */
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
                    /* try { // try from 031492ec to 032492fb has its CatchHandler @ 0314917c */
                    /* try { // try from 031492fc to 03249303 has its CatchHandler @ 03149304 */
                (pIVar4->fields).handle = StringLiteral_8382/*"Left Stick Y"*/;
                thunk_FUN_01c20e04();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03149298 with catch @ 03149304
                       catch(type#2 @ 00000000) { ... } // from try @ 031492e0 with catch @ 03149304
                       catch(type#2 @ 00000000) { ... } // from try @ 031492fc with catch @ 03149304
                        */
                (pIVar4->fields).Target = 2;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Invert = true;
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) goto LAB_031495e0;
                if (1 < (uint)pIVar3->max_length) {
                  pIVar3->m_Items[1] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
                  (pIVar4->fields).handle = StringLiteral_11385/*"Right Stick X"*/;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Target = 4;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog2;
                  thunk_FUN_01c20e04();
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_031495e0;
                  if (2 < (uint)pIVar3->max_length) {
                    pIVar3->m_Items[2] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
                    (pIVar4->fields).handle = StringLiteral_11386/*"Right Stick Y"*/;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 5;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog3;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Invert = true;
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_031495e0;
                    if (3 < (uint)pIVar3->max_length) {
                      pIVar3->m_Items[3] = pIVar4;
                      thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
                      (pIVar4->fields).handle = StringLiteral_8383/*"Left Trigger"*/;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).Target = 0xf;
                      (pIVar4->fields).Source =
                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                      thunk_FUN_01c20e04();
                      if ((InControl_InputControlMapping_Range_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      (pIVar4->fields).TargetRange =
                           InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).IgnoreInitialZeroValue = true;
                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                      if (lVar5 == 0) goto LAB_031495e0;
                      if (4 < (uint)pIVar3->max_length) {
                        pIVar3->m_Items[4] = pIVar4;
                        thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                        pIVar4 = (InControl_InputControlMapping_o *)
                                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031495dc;
                        (pIVar4->fields).handle = StringLiteral_11387/*"Right Trigger"*/;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Target = 0x10;
                        (pIVar4->fields).Source =
                             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).TargetRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).IgnoreInitialZeroValue = true;
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                        if (lVar5 == 0) goto LAB_031495e0;
                        if (5 < (uint)pIVar3->max_length) {
                          pIVar3->m_Items[5] = pIVar4;
                          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
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
              goto LAB_031495ec;
            }
          }
        }
      }
    }
  }
LAB_031495dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

