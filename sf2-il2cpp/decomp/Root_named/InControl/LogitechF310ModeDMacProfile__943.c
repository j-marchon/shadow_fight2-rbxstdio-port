// TypeDefIndex 943
// Namespace: InControl
// [AutoDiscover]
// public class LogitechF310ModeDMacProfile : UnityInputDeviceProfile
// Fields:

// ===== public void .ctor()  [RVA 0x30A8838]
// InControl.LogitechF310ModeDMacProfile$$.ctor @ RVA 0x30A8838

void InControl_LogitechF310ModeDMacProfile___ctor
               (InControl_LogitechF310ModeDMacProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 031a8858 to 032a885b has its CatchHandler @ 031a8a54 */
                    /* try { // try from 031a885c to 032a8863 has its CatchHandler @ 031a8a80 */
  if ((DAT_0456618d & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
                    /* try { // try from 031a886c to 032a887b has its CatchHandler @ 031a8a7c */
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
                    /* try { // try from 031a8894 to 032a8897 has its CatchHandler @ 031a8a50 */
                    /* try { // try from 031a8898 to 032a889f has its CatchHandler @ 031a8a6c */
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_8380/*"Left Stick Button"*/);
                    /* try { // try from 031a88a8 to 032a88b7 has its CatchHandler @ 031a8a64 */
    FUN_01bab630(&StringLiteral_8635/*"Logitech F310 Controller"*/);
    FUN_01bab630(&StringLiteral_8383/*"Left Trigger"*/);
    FUN_01bab630(&StringLiteral_5029/*"DPad Left"*/);
                    /* try { // try from 031a88d0 to 032a88d3 has its CatchHandler @ 031a8a4c */
                    /* try { // try from 031a88d4 to 032a88db has its CatchHandler @ 031a8a68 */
    FUN_01bab630(&StringLiteral_8653/*"Logitech Logitech Dual Action"*/);
    FUN_01bab630(&StringLiteral_11387/*"Right Trigger"*/);
                    /* try { // try from 031a88e4 to 032a88f3 has its CatchHandler @ 031a8a60 */
    FUN_01bab630(&StringLiteral_3359/*"Back"*/);
    FUN_01bab630(&StringLiteral_8637/*"Logitech F310 Controller on Mac (Mode D)"*/);
                    /* try { // try from 031a8904 to 032a890f has its CatchHandler @ 031a8bc4 */
    FUN_01bab630(&StringLiteral_8381/*"Left Stick X"*/);
    FUN_01bab630(&StringLiteral_5030/*"DPad Right"*/);
    FUN_01bab630(&StringLiteral_11386/*"Right Stick Y"*/);
                    /* try { // try from 031a8920 to 032a8927 has its CatchHandler @ 031a8bb8 */
    FUN_01bab630(&StringLiteral_9686/*"OS X"*/);
                    /* try { // try from 031a8930 to 032a8943 has its CatchHandler @ 031a8a84 */
    FUN_01bab630(&StringLiteral_12346/*"Start"*/);
    FUN_01bab630(&StringLiteral_11383/*"Right Bumper"*/);
    FUN_01bab630(&StringLiteral_5031/*"DPad Up"*/);
                    /* try { // try from 031a8950 to 032a896b has its CatchHandler @ 031a8bbc */
    FUN_01bab630(&StringLiteral_8379/*"Left Bumper"*/);
    FUN_01bab630(&StringLiteral_3279/*"B"*/);
    FUN_01bab630(&StringLiteral_11385/*"Right Stick X"*/);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
    FUN_01bab630(&StringLiteral_5028/*"DPad Down"*/);
    FUN_01bab630(&StringLiteral_8382/*"Left Stick Y"*/);
                    /* try { // try from 031a89ac to 032a89df has its CatchHandler @ 031a8bc8 */
    FUN_01bab630(&StringLiteral_2529/*"A"*/);
    FUN_01bab630(&StringLiteral_11384/*"Right Stick Button"*/);
    DAT_0456618d = 1;
    method = extraout_x1;
  }
                    /* try { // try from 031a89e0 to 032a89ff has its CatchHandler @ 031a83ec */
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 031a8a00 to 032a8a37 has its CatchHandler @ 031a8bc0 */
  (__this->fields).super._Name_k__BackingField = StringLiteral_8635/*"Logitech F310 Controller"*/;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_8637/*"Logitech F310 Controller on Mac (Mode D)"*/;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length == 0) {
LAB_031a9610:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
                    /* try { // try from 031a8a3c to 032a8a3f has its CatchHandler @ 031a8bc8 */
                    /* try { // try from 031a8a44 to 032a8a47 has its CatchHandler @ 031a8a5c */
    pSVar1->m_Items[0] = StringLiteral_9686/*"OS X"*/;
                    /* try { // try from 031a8a48 to 032a8ab7 has its CatchHandler @ 031a83ec */
    thunk_FUN_01c20e04();
    ppSVar2 = &(__this->fields).super.SupportedPlatforms;
                    /* catch() { ... } // from try @ 031a88d0 with catch @ 031a8a4c */
                    /* catch() { ... } // from try @ 031a8894 with catch @ 031a8a50 */
    *ppSVar2 = pSVar1;
                    /* catch() { ... } // from try @ 031a8858 with catch @ 031a8a54 */
                    /* catch() { ... } // from try @ 031a8828 with catch @ 031a8a58 */
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
                    /* catch() { ... } // from try @ 031a8a44 with catch @ 031a8a5c */
                    /* catch() { ... } // from try @ 031a88e4 with catch @ 031a8a60 */
                    /* catch() { ... } // from try @ 031a88a8 with catch @ 031a8a64 */
    pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
                    /* catch() { ... } // from try @ 031a88d4 with catch @ 031a8a68 */
    if (pSVar1 != (System_String_array *)0x0) {
                    /* catch() { ... } // from try @ 031a8898 with catch @ 031a8a6c */
                    /* catch() { ... } // from try @ 031a8790 with catch @ 031a8a70 */
                    /* catch() { ... } // from try @ 031a8714 with catch @ 031a8a74 */
      if ((int)pSVar1->max_length == 0) goto LAB_031a9610;
                    /* catch() { ... } // from try @ 031a8804 with catch @ 031a8a78 */
                    /* catch() { ... } // from try @ 031a886c with catch @ 031a8a7c */
                    /* catch() { ... } // from try @ 031a885c with catch @ 031a8a80 */
                    /* catch() { ... } // from try @ 031a8930 with catch @ 031a8a84 */
                    /* catch() { ... } // from try @ 031a8760 with catch @ 031a8a88 */
                    /* catch() { ... } // from try @ 031a86e0 with catch @ 031a8a8c */
                    /* catch() { ... } // from try @ 031a8728 with catch @ 031a8a90 */
                    /* catch() { ... } // from try @ 031a86a4 with catch @ 031a8a94 */
                    /* catch() { ... } // from try @ 031a8738 with catch @ 031a8a98 */
      pSVar1->m_Items[0] = StringLiteral_8653/*"Logitech Logitech Dual Action"*/;
                    /* catch() { ... } // from try @ 031a86b8 with catch @ 031a8a9c */
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).super.JoystickNames;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
                    /* try { // try from 031a8ab8 to 032a8acf has its CatchHandler @ 031a8ba8 */
      pIVar3 = (InControl_InputControlMapping_array *)
               FUN_01bab718(InControl_InputControlMapping___TypeInfo,0xc);
      pIVar4 = (InControl_InputControlMapping_o *)
               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 031a8ad8 to 032a8adb has its CatchHandler @ 031a8ba4 */
      if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
                    /* try { // try from 031a8adc to 032a8af3 has its CatchHandler @ 031a8ba0 */
        (pIVar4->fields).handle = StringLiteral_2529/*"A"*/;
        thunk_FUN_01c20e04();
                    /* try { // try from 031a8af4 to 032a8afb has its CatchHandler @ 031a8b9c */
        (pIVar4->fields).Target = 0xb;
                    /* try { // try from 031a8b08 to 032a8b0f has its CatchHandler @ 031a8b98 */
        (pIVar4->fields).Source = InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button1
        ;
        thunk_FUN_01c20e04();
        if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
                    /* try { // try from 031a8b18 to 032a8b3b has its CatchHandler @ 031a8b94 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) {
LAB_031a9604:
            uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar7,0);
          }
          if ((int)pIVar3->max_length == 0) goto LAB_031a9610;
          pIVar3->m_Items[0] = pIVar4;
                    /* try { // try from 031a8b3c to 032a8b67 has its CatchHandler @ 031a8b90 */
          thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031a9600;
                    /* try { // try from 031a8b68 to 032a8b7b has its CatchHandler @ 031a83ec */
          (pIVar4->fields).handle = StringLiteral_3279/*"B"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xc;
                    /* try { // try from 031a8b7c to 032a8b8b has its CatchHandler @ 031a8ba8 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button2;
                    /* catch() { ... } // from try @ 031a8b3c with catch @ 031a8b90 */
          thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 031a8b18 with catch @ 031a8b94 */
                    /* catch() { ... } // from try @ 031a8b08 with catch @ 031a8b98 */
                    /* catch() { ... } // from try @ 031a8af4 with catch @ 031a8b9c */
                    /* catch() { ... } // from try @ 031a8adc with catch @ 031a8ba0 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* catch() { ... } // from try @ 031a8ad8 with catch @ 031a8ba4 */
          if (lVar5 == 0) goto LAB_031a9604;
                    /* catch() { ... } // from try @ 031a8ab8 with catch @ 031a8ba8
                       catch() { ... } // from try @ 031a8b7c with catch @ 031a8ba8 */
                    /* try { // try from 031a8bb0 to 032a8bb3 has its CatchHandler @ 031a8db4 */
          if ((uint)pIVar3->max_length < 2) goto LAB_031a9610;
                    /* try { // try from 031a8bb4 to 032a8be3 has its CatchHandler @ 031a83ec */
                    /* catch() { ... } // from try @ 031a8920 with catch @ 031a8bb8 */
          pIVar3->m_Items[1] = pIVar4;
                    /* catch() { ... } // from try @ 031a8950 with catch @ 031a8bbc */
                    /* catch() { ... } // from try @ 031a8a00 with catch @ 031a8bc0 */
          thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                    /* catch() { ... } // from try @ 031a8904 with catch @ 031a8bc4 */
                    /* catch() { ... } // from try @ 031a89ac with catch @ 031a8bc8
                       catch() { ... } // from try @ 031a8a3c with catch @ 031a8bc8 */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031a9600;
                    /* try { // try from 031a8be4 to 032a8bfb has its CatchHandler @ 031a8da0 */
          (pIVar4->fields).handle = StringLiteral_15021/*"X"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xd;
                    /* try { // try from 031a8bfc to 032a8d83 has its CatchHandler @ 031a83ec */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031a9604;
          if ((uint)pIVar3->max_length < 3) goto LAB_031a9610;
          pIVar3->m_Items[2] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031a9600;
          (pIVar4->fields).handle = StringLiteral_15134/*"Y"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xe;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button3;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031a9604;
          if ((uint)pIVar3->max_length < 4) goto LAB_031a9610;
          pIVar3->m_Items[3] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031a9600;
          (pIVar4->fields).handle = StringLiteral_8379/*"Left Bumper"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x11;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button4;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031a9604;
          if ((uint)pIVar3->max_length < 5) goto LAB_031a9610;
          pIVar3->m_Items[4] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031a9600;
          (pIVar4->fields).handle = StringLiteral_11383/*"Right Bumper"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x12;
                    /* try { // try from 031a8d84 to 032a8d93 has its CatchHandler @ 031a8d9c */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
          thunk_FUN_01c20e04();
                    /* try { // try from 031a8d94 to 032a8da3 has its CatchHandler @ 031a83ec */
                    /* catch() { ... } // from try @ 031a8d84 with catch @ 031a8d9c */
                    /* catch() { ... } // from try @ 031a8be4 with catch @ 031a8da0 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 031a8da4 to 032a8da7 has its CatchHandler @ 031a8db0 */
          if (lVar5 == 0) goto LAB_031a9604;
                    /* try { // try from 031a8da8 to 032a8db7 has its CatchHandler @ 031a83ec */
                    /* catch() { ... } // from try @ 031a8da4 with catch @ 031a8db0 */
          if ((uint)pIVar3->max_length < 6) goto LAB_031a9610;
                    /* catch() { ... } // from try @ 031a8bb0 with catch @ 031a8db4 */
                    /* try { // try from 031a8db8 to 032a90f3 has its CatchHandler @ 031a8db8
                       catch() { ... } // from try @ 031a8db8 with catch @ 031a8db8
                       catch() { ... } // from try @ 031a93f0 with catch @ 031a8db8
                       catch() { ... } // from try @ 031a9520 with catch @ 031a8db8
                       catch() { ... } // from try @ 031a95c8 with catch @ 031a8db8
                       catch() { ... } // from try @ 031a96b8 with catch @ 031a8db8
                       catch() { ... } // from try @ 031a97b4 with catch @ 031a8db8
                       catch() { ... } // from try @ 031a97c8 with catch @ 031a8db8
                       catch() { ... } // from try @ 031a97f0 with catch @ 031a8db8 */
          pIVar3->m_Items[5] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031a9600;
          (pIVar4->fields).handle = StringLiteral_8380/*"Left Stick Button"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 3;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button10;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031a9604;
          if ((uint)pIVar3->max_length < 7) goto LAB_031a9610;
          pIVar3->m_Items[6] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031a9600;
          (pIVar4->fields).handle = StringLiteral_11384/*"Right Stick Button"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 6;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button11;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031a9604;
          if ((uint)pIVar3->max_length < 8) goto LAB_031a9610;
          pIVar3->m_Items[7] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031a9600;
          (pIVar4->fields).handle = StringLiteral_3359/*"Back"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x13;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button8;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031a9604;
          if ((uint)pIVar3->max_length < 9) goto LAB_031a9610;
          pIVar3->m_Items[8] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031a9600;
          (pIVar4->fields).handle = StringLiteral_12346/*"Start"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x14;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031a9604;
          if ((uint)pIVar3->max_length < 10) goto LAB_031a9610;
          pIVar3->m_Items[9] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031a9600;
          (pIVar4->fields).handle = StringLiteral_8383/*"Left Trigger"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xf;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button6;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031a9604;
          if ((uint)pIVar3->max_length < 0xb) goto LAB_031a9610;
          pIVar3->m_Items[10] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 10,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031a9600;
          (pIVar4->fields).handle = StringLiteral_11387/*"Right Trigger"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x10;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button7;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_031a9604;
          if ((uint)pIVar3->max_length < 0xc) goto LAB_031a9610;
          pIVar3->m_Items[0xb] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 0xb,pIVar4);
          ppIVar6 = &(__this->fields).super._ButtonMappings_k__BackingField;
          *ppIVar6 = pIVar3;
          thunk_FUN_01c20e04(ppIVar6,pIVar3);
          pIVar3 = (InControl_InputControlMapping_array *)
                   FUN_01bab718(InControl_InputControlMapping___TypeInfo,8);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 031a90f4 to 032a90fb has its CatchHandler @ 031a9594 */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
                    /* try { // try from 031a910c to 032a911f has its CatchHandler @ 031a9578 */
            (pIVar4->fields).handle = StringLiteral_8381/*"Left Stick X"*/;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 1;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog0;
                    /* try { // try from 031a9134 to 032a914b has its CatchHandler @ 031a954c */
            thunk_FUN_01c20e04();
            if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_031a9604;
                    /* try { // try from 031a9154 to 032a9163 has its CatchHandler @ 031a9560 */
              if ((int)pIVar3->max_length != 0) {
                pIVar3->m_Items[0] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 031a9174 to 032a917f has its CatchHandler @ 031a955c */
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031a9600;
                    /* try { // try from 031a9184 to 032a9193 has its CatchHandler @ 031a9554 */
                (pIVar4->fields).handle = StringLiteral_8382/*"Left Stick Y"*/;
                    /* try { // try from 031a9194 to 032a91b3 has its CatchHandler @ 031a9550 */
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 2;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
                thunk_FUN_01c20e04();
                    /* try { // try from 031a91b8 to 032a91d3 has its CatchHandler @ 031a9540 */
                (pIVar4->fields).Invert = true;
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) goto LAB_031a9604;
                if (1 < (uint)pIVar3->max_length) {
                    /* try { // try from 031a91e0 to 032a91e7 has its CatchHandler @ 031a958c */
                  pIVar3->m_Items[1] = pIVar4;
                    /* try { // try from 031a91ec to 032a91fb has its CatchHandler @ 031a9580 */
                  thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 031a91fc to 032a9217 has its CatchHandler @ 031a957c */
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031a9600;
                  (pIVar4->fields).handle = StringLiteral_11385/*"Right Stick X"*/;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Target = 4;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog2;
                  thunk_FUN_01c20e04();
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_031a9604;
                    /* try { // try from 031a925c to 032a9283 has its CatchHandler @ 031a9588 */
                  if (2 < (uint)pIVar3->max_length) {
                    pIVar3->m_Items[2] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031a9600;
                    /* try { // try from 031a9298 to 032a92bb has its CatchHandler @ 031a956c */
                    (pIVar4->fields).handle = StringLiteral_11386/*"Right Stick Y"*/;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 5;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog3;
                    /* try { // try from 031a92bc to 032a92c7 has its CatchHandler @ 031a9558 */
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Invert = true;
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 031a92d8 to 032a92ff has its CatchHandler @ 031a9568 */
                    if (lVar5 == 0) goto LAB_031a9604;
                    if (3 < (uint)pIVar3->max_length) {
                      pIVar3->m_Items[3] = pIVar4;
                      thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 031a930c to 032a939b has its CatchHandler @ 031a9590 */
                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031a9600;
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
                      if (lVar5 == 0) goto LAB_031a9604;
                      if (4 < (uint)pIVar3->max_length) {
                        pIVar3->m_Items[4] = pIVar4;
                        thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                    /* try { // try from 031a93c8 to 032a93cf has its CatchHandler @ 031a9584 */
                        pIVar4 = (InControl_InputControlMapping_o *)
                                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 031a93d4 to 032a93ef has its CatchHandler @ 031a9570 */
                        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031a9600;
                    /* try { // try from 031a93f0 to 032a9407 has its CatchHandler @ 031a8db8 */
                        (pIVar4->fields).handle = StringLiteral_5030/*"DPad Right"*/;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Target = 10;
                    /* try { // try from 031a9408 to 032a940b has its CatchHandler @ 031a9598 */
                    /* try { // try from 031a9410 to 032a9427 has its CatchHandler @ 031a9574 */
                        (pIVar4->fields).Source =
                             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                        thunk_FUN_01c20e04();
                    /* try { // try from 031a9428 to 032a942f has its CatchHandler @ 031a9544 */
                        (pIVar4->fields).SourceRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                        thunk_FUN_01c20e04();
                    /* try { // try from 031a943c to 032a943f has its CatchHandler @ 031a953c */
                        (pIVar4->fields).TargetRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                    /* try { // try from 031a9444 to 032a9447 has its CatchHandler @ 031a9564 */
                        thunk_FUN_01c20e04();
                    /* try { // try from 031a944c to 032a9463 has its CatchHandler @ 031a9548 */
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                        if (lVar5 == 0) goto LAB_031a9604;
                    /* try { // try from 031a9464 to 032a946b has its CatchHandler @ 031a9538 */
                        if (5 < (uint)pIVar3->max_length) {
                          pIVar3->m_Items[5] = pIVar4;
                    /* try { // try from 031a9470 to 032a948f has its CatchHandler @ 031a9530 */
                          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                          pIVar4 = (InControl_InputControlMapping_o *)
                                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031a9600;
                    /* try { // try from 031a9490 to 032a94b7 has its CatchHandler @ 031a9528 */
                          (pIVar4->fields).handle = StringLiteral_5028/*"DPad Down"*/;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).Target = 8;
                    /* try { // try from 031a94bc to 032a94bf has its CatchHandler @ 031a9590 */
                          (pIVar4->fields).Source =
                               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
                          thunk_FUN_01c20e04();
                    /* try { // try from 031a94cc to 032a94cf has its CatchHandler @ 031a9534 */
                    /* try { // try from 031a94d4 to 032a94f7 has its CatchHandler @ 031a952c */
                          (pIVar4->fields).SourceRange =
                               InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive
                          ;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).TargetRange =
                               InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive
                          ;
                          thunk_FUN_01c20e04();
                    /* try { // try from 031a94f8 to 032a951f has its CatchHandler @ 031a9524 */
                          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                            element_class);
                          if (lVar5 == 0) goto LAB_031a9604;
                          if (6 < (uint)pIVar3->max_length) {
                            pIVar3->m_Items[6] = pIVar4;
                    /* try { // try from 031a9520 to 032a95af has its CatchHandler @ 031a8db8 */
                    /* catch() { ... } // from try @ 031a94f8 with catch @ 031a9524 */
                            thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                    /* catch() { ... } // from try @ 031a9490 with catch @ 031a9528 */
                    /* catch() { ... } // from try @ 031a94d4 with catch @ 031a952c */
                            pIVar4 = (InControl_InputControlMapping_o *)
                                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 031a9470 with catch @ 031a9530 */
                    /* catch() { ... } // from try @ 031a94cc with catch @ 031a9534 */
                    /* catch() { ... } // from try @ 031a9464 with catch @ 031a9538 */
                            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031a943c with catch @ 031a953c */
                            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031a9600;
                    /* catch() { ... } // from try @ 031a91b8 with catch @ 031a9540 */
                    /* catch() { ... } // from try @ 031a9428 with catch @ 031a9544 */
                    /* catch() { ... } // from try @ 031a944c with catch @ 031a9548 */
                    /* catch() { ... } // from try @ 031a9134 with catch @ 031a954c */
                    /* catch() { ... } // from try @ 031a9194 with catch @ 031a9550 */
                            (pIVar4->fields).handle = StringLiteral_5031/*"DPad Up"*/;
                    /* catch() { ... } // from try @ 031a9184 with catch @ 031a9554 */
                            thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 031a92bc with catch @ 031a9558 */
                    /* catch() { ... } // from try @ 031a9174 with catch @ 031a955c */
                            (pIVar4->fields).Target = 7;
                    /* catch() { ... } // from try @ 031a9154 with catch @ 031a9560 */
                    /* catch() { ... } // from try @ 031a9444 with catch @ 031a9564 */
                    /* catch() { ... } // from try @ 031a92d8 with catch @ 031a9568 */
                    /* catch() { ... } // from try @ 031a9298 with catch @ 031a956c */
                    /* catch() { ... } // from try @ 031a93d4 with catch @ 031a9570 */
                            (pIVar4->fields).Source =
                                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
                    /* catch() { ... } // from try @ 031a9410 with catch @ 031a9574 */
                            thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 031a910c with catch @ 031a9578 */
                    /* catch() { ... } // from try @ 031a91fc with catch @ 031a957c */
                    /* catch() { ... } // from try @ 031a91ec with catch @ 031a9580 */
                    /* catch() { ... } // from try @ 031a93c8 with catch @ 031a9584 */
                    /* catch() { ... } // from try @ 031a925c with catch @ 031a9588 */
                            (pIVar4->fields).SourceRange =
                                 InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                 Negative;
                    /* catch() { ... } // from try @ 031a91e0 with catch @ 031a958c */
                            thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 031a930c with catch @ 031a9590
                       catch() { ... } // from try @ 031a94bc with catch @ 031a9590 */
                    /* catch() { ... } // from try @ 031a90f4 with catch @ 031a9594 */
                    /* catch() { ... } // from try @ 031a9408 with catch @ 031a9598 */
                            (pIVar4->fields).TargetRange =
                                 InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                 Negative;
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).Invert = true;
                    /* try { // try from 031a95b0 to 032a95c7 has its CatchHandler @ 031a97c0 */
                            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                              element_class);
                            if (lVar5 == 0) goto LAB_031a9604;
                    /* try { // try from 031a95c8 to 032a9687 has its CatchHandler @ 031a8db8 */
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
              goto LAB_031a9610;
            }
          }
        }
      }
    }
  }
LAB_031a9600:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

