// TypeDefIndex 1853
// Namespace: InControl
// [AutoDiscover]
// public class SpeedlinkStrikeMacProfile : UnityInputDeviceProfile
// Fields:

// ===== public void .ctor()  [RVA 0x3247B84]
// InControl.SpeedlinkStrikeMacProfile$$.ctor @ RVA 0x3247B84

void InControl_SpeedlinkStrikeMacProfile___ctor
               (InControl_SpeedlinkStrikeMacProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
  if ((DAT_045670d2 & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03347bc4 to 03447d9f has its CatchHandler @ 03347bc4
                       catch() { ... } // from try @ 03347bc4 with catch @ 03347bc4
                       catch() { ... } // from try @ 03348358 with catch @ 03347bc4
                       catch() { ... } // from try @ 033484a8 with catch @ 03347bc4
                       catch() { ... } // from try @ 033484b0 with catch @ 03347bc4
                       catch() { ... } // from try @ 033484cc with catch @ 03347bc4
                       catch() { ... } // from try @ 03348680 with catch @ 03347bc4 */
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_8380/*"Left Stick Button"*/);
    FUN_01bab630(&StringLiteral_8383/*"Left Trigger"*/);
    FUN_01bab630(&StringLiteral_2019/*"3"*/);
    FUN_01bab630(&StringLiteral_5029/*"DPad Left"*/);
    FUN_01bab630(&StringLiteral_1943/*"2"*/);
    FUN_01bab630(&StringLiteral_2079/*"9"*/);
    FUN_01bab630(&StringLiteral_11387/*"Right Trigger"*/);
    FUN_01bab630(&StringLiteral_8381/*"Left Stick X"*/);
    FUN_01bab630(&StringLiteral_12299/*"Speedlink Strike Controller on Mac (Analog Mode)"*/);
    FUN_01bab630(&StringLiteral_5481/*"DragonRise Inc.   Generic   USB  Joystick  "*/);
    FUN_01bab630(&StringLiteral_5030/*"DPad Right"*/);
    FUN_01bab630(&StringLiteral_2036/*"4"*/);
    FUN_01bab630(&StringLiteral_11386/*"Right Stick Y"*/);
    FUN_01bab630(&StringLiteral_9686/*"OS X"*/);
    FUN_01bab630(&StringLiteral_11383/*"Right Bumper"*/);
    FUN_01bab630(&StringLiteral_5031/*"DPad Up"*/);
    FUN_01bab630(&StringLiteral_8379/*"Left Bumper"*/);
    FUN_01bab630(&StringLiteral_1882/*"10"*/);
    FUN_01bab630(&StringLiteral_12298/*"Speedlink Strike Controller"*/);
    FUN_01bab630(&StringLiteral_11385/*"Right Stick X"*/);
    FUN_01bab630(&StringLiteral_5028/*"DPad Down"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_8382/*"Left Stick Y"*/);
    FUN_01bab630(&StringLiteral_11384/*"Right Stick Button"*/);
    DAT_045670d2 = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_12298/*"Speedlink Strike Controller"*/;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_12299/*"Speedlink Strike Controller on Mac (Analog Mode)"*/;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length == 0) {
LAB_0334895c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar1->m_Items[0] = StringLiteral_9686/*"OS X"*/;
    thunk_FUN_01c20e04();
    ppSVar2 = &(__this->fields).super.SupportedPlatforms;
    *ppSVar2 = pSVar1;
                    /* try { // try from 03347da0 to 03447dc7 has its CatchHandler @ 033485e4 */
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
    if (pSVar1 != (System_String_array *)0x0) {
      if ((int)pSVar1->max_length == 0) goto LAB_0334895c;
      pSVar1->m_Items[0] = StringLiteral_5481/*"DragonRise Inc.   Generic   USB  Joystick  "*/;
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).super.JoystickNames;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
                    /* try { // try from 03347e04 to 03447e3f has its CatchHandler @ 033485e8 */
      pIVar3 = (InControl_InputControlMapping_array *)
               FUN_01bab718(InControl_InputControlMapping___TypeInfo,0xc);
      pIVar4 = (InControl_InputControlMapping_o *)
               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
      if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
        (pIVar4->fields).handle = StringLiteral_2019/*"3"*/;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 0xb;
                    /* try { // try from 03347e48 to 03447e67 has its CatchHandler @ 033485d4 */
        (pIVar4->fields).Source = InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button2
        ;
        thunk_FUN_01c20e04();
        if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) {
LAB_03348950:
            uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar7,0);
          }
          if ((int)pIVar3->max_length == 0) goto LAB_0334895c;
                    /* try { // try from 03347e80 to 03447e87 has its CatchHandler @ 033485e0 */
          pIVar3->m_Items[0] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03347e98 to 03447e9f has its CatchHandler @ 033485c4 */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0334894c;
                    /* try { // try from 03347eb0 to 03447eb7 has its CatchHandler @ 033485d0 */
          (pIVar4->fields).handle = StringLiteral_1943/*"2"*/;
                    /* try { // try from 03347ebc to 03447ec3 has its CatchHandler @ 033485c8 */
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xc;
                    /* try { // try from 03347ed4 to 03447edb has its CatchHandler @ 033485cc */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button1;
                    /* try { // try from 03347edc to 03447eef has its CatchHandler @ 033485c0 */
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 03347ef0 to 03447efb has its CatchHandler @ 033485bc */
          if (lVar5 == 0) goto LAB_03348950;
          if ((uint)pIVar3->max_length < 2) goto LAB_0334895c;
          pIVar3->m_Items[1] = pIVar4;
                    /* try { // try from 03347f08 to 03447f0f has its CatchHandler @ 033485a8 */
          thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03347f20 to 03447f27 has its CatchHandler @ 0334859c */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0334894c;
                    /* try { // try from 03347f2c to 03447f33 has its CatchHandler @ 03348598 */
          (pIVar4->fields).handle = StringLiteral_2036/*"4"*/;
          thunk_FUN_01c20e04();
                    /* try { // try from 03347f44 to 03447f4b has its CatchHandler @ 033485a4 */
          (pIVar4->fields).Target = 0xd;
                    /* try { // try from 03347f4c to 03447f5f has its CatchHandler @ 033485a0 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button3;
          thunk_FUN_01c20e04();
                    /* try { // try from 03347f60 to 03447f6b has its CatchHandler @ 03348594 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_03348950;
                    /* try { // try from 03347f78 to 03447f7f has its CatchHandler @ 03348588 */
          if ((uint)pIVar3->max_length < 3) goto LAB_0334895c;
          pIVar3->m_Items[2] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                    /* try { // try from 03347f90 to 03447f97 has its CatchHandler @ 0334858c */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03347f9c to 03447fa3 has its CatchHandler @ 0334857c */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0334894c;
                    /* try { // try from 03347fb4 to 03447fbb has its CatchHandler @ 03348584 */
          (pIVar4->fields).handle = StringLiteral_1606/*"1"*/;
                    /* try { // try from 03347fbc to 03447fcf has its CatchHandler @ 03348580 */
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xe;
                    /* try { // try from 03347fd0 to 03447fdb has its CatchHandler @ 03348578 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0;
          thunk_FUN_01c20e04();
                    /* try { // try from 03347fe8 to 03447fef has its CatchHandler @ 03348564 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_03348950;
          if ((uint)pIVar3->max_length < 4) goto LAB_0334895c;
                    /* try { // try from 03348000 to 03448007 has its CatchHandler @ 03348570 */
          pIVar3->m_Items[3] = pIVar4;
                    /* try { // try from 0334800c to 03448013 has its CatchHandler @ 03348574 */
          thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 03348024 to 0344802b has its CatchHandler @ 0334856c */
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0334894c;
                    /* try { // try from 0334802c to 0344803f has its CatchHandler @ 03348568 */
          (pIVar4->fields).handle = StringLiteral_8379/*"Left Bumper"*/;
          thunk_FUN_01c20e04();
                    /* try { // try from 03348040 to 0344804b has its CatchHandler @ 03348560 */
          (pIVar4->fields).Target = 0x11;
                    /* try { // try from 03348058 to 0344805f has its CatchHandler @ 03348550 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button4;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 03348070 to 03448077 has its CatchHandler @ 0334855c */
          if (lVar5 == 0) goto LAB_03348950;
                    /* try { // try from 0334807c to 03448083 has its CatchHandler @ 03348548 */
          if ((uint)pIVar3->max_length < 5) goto LAB_0334895c;
          pIVar3->m_Items[4] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                    /* try { // try from 03348094 to 0344809b has its CatchHandler @ 0334854c */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 0334809c to 034480af has its CatchHandler @ 03348558 */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0334894c;
                    /* try { // try from 033480b0 to 034480bb has its CatchHandler @ 03348554 */
          (pIVar4->fields).handle = StringLiteral_11383/*"Right Bumper"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x12;
                    /* try { // try from 033480cc to 034480cf has its CatchHandler @ 03348590 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
                    /* try { // try from 033480dc to 034480ff has its CatchHandler @ 033485ac */
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_03348950;
          if ((uint)pIVar3->max_length < 6) goto LAB_0334895c;
          pIVar3->m_Items[5] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03348118 to 03448123 has its CatchHandler @ 033485b8 */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0334894c;
                    /* try { // try from 03348134 to 03448137 has its CatchHandler @ 033484f0 */
          (pIVar4->fields).handle = StringLiteral_1882/*"10"*/;
          thunk_FUN_01c20e04();
                    /* try { // try from 03348144 to 03448167 has its CatchHandler @ 03348520 */
          (pIVar4->fields).Target = 0x14;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_03348950;
                    /* try { // try from 03348178 to 0344817f has its CatchHandler @ 03348530 */
          if ((uint)pIVar3->max_length < 7) goto LAB_0334895c;
          pIVar3->m_Items[6] = pIVar4;
                    /* try { // try from 0334818c to 03448197 has its CatchHandler @ 03348528 */
          thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 033481a0 to 034481b7 has its CatchHandler @ 03348534 */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0334894c;
          (pIVar4->fields).handle = StringLiteral_2079/*"9"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x15;
                    /* try { // try from 033481c8 to 034481cf has its CatchHandler @ 03348504 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button8;
          thunk_FUN_01c20e04();
                    /* try { // try from 033481e0 to 034481e7 has its CatchHandler @ 03348500 */
                    /* try { // try from 033481ec to 034481f3 has its CatchHandler @ 03348510 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_03348950;
          if ((uint)pIVar3->max_length < 8) goto LAB_0334895c;
                    /* try { // try from 03348204 to 0344820b has its CatchHandler @ 0334850c */
          pIVar3->m_Items[7] = pIVar4;
                    /* try { // try from 0334820c to 0344822f has its CatchHandler @ 03348538 */
          thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0334894c;
                    /* try { // try from 03348234 to 0344823f has its CatchHandler @ 0334851c */
          (pIVar4->fields).handle = StringLiteral_8383/*"Left Trigger"*/;
          thunk_FUN_01c20e04();
                    /* try { // try from 03348240 to 0344824f has its CatchHandler @ 033484f4 */
          (pIVar4->fields).Target = 0xf;
                    /* try { // try from 03348258 to 0344827b has its CatchHandler @ 03348524 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button6;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_03348950;
                    /* try { // try from 0334827c to 03448283 has its CatchHandler @ 033484fc */
          if ((uint)pIVar3->max_length < 9) goto LAB_0334895c;
          pIVar3->m_Items[8] = pIVar4;
                    /* try { // try from 0334828c to 03448293 has its CatchHandler @ 03348508 */
          thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0334894c;
                    /* try { // try from 033482a8 to 034482af has its CatchHandler @ 033484d8 */
          (pIVar4->fields).handle = StringLiteral_11387/*"Right Trigger"*/;
          thunk_FUN_01c20e04();
                    /* try { // try from 033482c0 to 034482c7 has its CatchHandler @ 033484dc */
          (pIVar4->fields).Target = 0x10;
                    /* try { // try from 033482cc to 034482d3 has its CatchHandler @ 033484ec */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button7;
          thunk_FUN_01c20e04();
                    /* try { // try from 033482e4 to 034482eb has its CatchHandler @ 033484e4 */
                    /* try { // try from 033482ec to 034482ff has its CatchHandler @ 033484e0 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_03348950;
          if ((uint)pIVar3->max_length < 10) goto LAB_0334895c;
                    /* try { // try from 03348300 to 0344830b has its CatchHandler @ 033484e8 */
          pIVar3->m_Items[9] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0334894c;
                    /* try { // try from 03348328 to 0344832b has its CatchHandler @ 033484f0 */
                    /* try { // try from 0334832c to 03448333 has its CatchHandler @ 033484d0 */
          (pIVar4->fields).handle = StringLiteral_8380/*"Left Stick Button"*/;
          thunk_FUN_01c20e04();
                    /* try { // try from 03348340 to 03448357 has its CatchHandler @ 033484cc */
          (pIVar4->fields).Target = 3;
                    /* try { // try from 03348358 to 03448497 has its CatchHandler @ 03347bc4 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button10;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_03348950;
          if ((uint)pIVar3->max_length < 0xb) goto LAB_0334895c;
          pIVar3->m_Items[10] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 10,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0334894c;
          (pIVar4->fields).handle = StringLiteral_11384/*"Right Stick Button"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 6;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button11;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_03348950;
          if ((uint)pIVar3->max_length < 0xc) goto LAB_0334895c;
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
                    /* try { // try from 03348498 to 0344849b has its CatchHandler @ 033485dc */
              if (lVar5 == 0) goto LAB_03348950;
                    /* try { // try from 0334849c to 0344849f has its CatchHandler @ 033485d8 */
                    /* try { // try from 033484a0 to 034484a3 has its CatchHandler @ 033485b4 */
              if ((int)pIVar3->max_length != 0) {
                    /* try { // try from 033484a4 to 034484a7 has its CatchHandler @ 033485b0 */
                    /* try { // try from 033484a8 to 034484ab has its CatchHandler @ 03347bc4 */
                pIVar3->m_Items[0] = pIVar4;
                    /* try { // try from 033484ac to 034484af has its CatchHandler @ 0334853c */
                    /* try { // try from 033484b0 to 034484b7 has its CatchHandler @ 03347bc4 */
                thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                    /* try { // try from 033484b8 to 034484bb has its CatchHandler @ 0334852c */
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 033484bc to 034484bf has its CatchHandler @ 03348518 */
                    /* try { // try from 033484c0 to 034484c3 has its CatchHandler @ 03348514 */
                    /* try { // try from 033484c4 to 034484c7 has its CatchHandler @ 033484f8 */
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 033484c8 to 034484cb has its CatchHandler @ 033484d4 */
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0334894c;
                    /* catch() { ... } // from try @ 03348340 with catch @ 033484cc
                       try { // try from 033484cc to 034485ff has its CatchHandler @ 03347bc4 */
                    /* catch() { ... } // from try @ 0334832c with catch @ 033484d0 */
                    /* catch() { ... } // from try @ 033484c8 with catch @ 033484d4 */
                    /* catch() { ... } // from try @ 033482a8 with catch @ 033484d8 */
                    /* catch() { ... } // from try @ 033482c0 with catch @ 033484dc */
                (pIVar4->fields).handle = StringLiteral_8382/*"Left Stick Y"*/;
                    /* catch() { ... } // from try @ 033482ec with catch @ 033484e0 */
                thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 033482e4 with catch @ 033484e4 */
                    /* catch() { ... } // from try @ 03348300 with catch @ 033484e8 */
                (pIVar4->fields).Target = 2;
                    /* catch() { ... } // from try @ 033482cc with catch @ 033484ec */
                    /* catch() { ... } // from try @ 03348134 with catch @ 033484f0
                       catch() { ... } // from try @ 03348328 with catch @ 033484f0 */
                    /* catch() { ... } // from try @ 03348240 with catch @ 033484f4 */
                    /* catch() { ... } // from try @ 033484c4 with catch @ 033484f8 */
                    /* catch() { ... } // from try @ 0334827c with catch @ 033484fc */
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
                    /* catch() { ... } // from try @ 033481e0 with catch @ 03348500 */
                thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 033481c8 with catch @ 03348504 */
                    /* catch() { ... } // from try @ 0334828c with catch @ 03348508 */
                (pIVar4->fields).Invert = true;
                    /* catch() { ... } // from try @ 03348204 with catch @ 0334850c */
                    /* catch() { ... } // from try @ 033481ec with catch @ 03348510 */
                    /* catch() { ... } // from try @ 033484c0 with catch @ 03348514 */
                    /* catch() { ... } // from try @ 033484bc with catch @ 03348518 */
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* catch() { ... } // from try @ 03348234 with catch @ 0334851c */
                if (lVar5 == 0) goto LAB_03348950;
                    /* catch() { ... } // from try @ 03348144 with catch @ 03348520 */
                    /* catch() { ... } // from try @ 03348258 with catch @ 03348524 */
                    /* catch() { ... } // from try @ 0334818c with catch @ 03348528 */
                if (1 < (uint)pIVar3->max_length) {
                    /* catch() { ... } // from try @ 033484b8 with catch @ 0334852c */
                    /* catch() { ... } // from try @ 03348178 with catch @ 03348530 */
                  pIVar3->m_Items[1] = pIVar4;
                    /* catch() { ... } // from try @ 033481a0 with catch @ 03348534 */
                    /* catch() { ... } // from try @ 0334820c with catch @ 03348538 */
                  thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                    /* catch() { ... } // from try @ 033484ac with catch @ 0334853c */
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 0334807c with catch @ 03348548 */
                    /* catch() { ... } // from try @ 03348094 with catch @ 0334854c */
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03348058 with catch @ 03348550 */
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0334894c;
                    /* catch() { ... } // from try @ 033480b0 with catch @ 03348554 */
                    /* catch() { ... } // from try @ 0334809c with catch @ 03348558 */
                    /* catch() { ... } // from try @ 03348070 with catch @ 0334855c */
                    /* catch() { ... } // from try @ 03348040 with catch @ 03348560 */
                    /* catch() { ... } // from try @ 03347fe8 with catch @ 03348564 */
                  (pIVar4->fields).handle = StringLiteral_11385/*"Right Stick X"*/;
                    /* catch() { ... } // from try @ 0334802c with catch @ 03348568 */
                  thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 03348024 with catch @ 0334856c */
                    /* catch() { ... } // from try @ 03348000 with catch @ 03348570 */
                  (pIVar4->fields).Target = 4;
                    /* catch() { ... } // from try @ 0334800c with catch @ 03348574 */
                    /* catch() { ... } // from try @ 03347fd0 with catch @ 03348578 */
                    /* catch() { ... } // from try @ 03347f9c with catch @ 0334857c */
                    /* catch() { ... } // from try @ 03347fbc with catch @ 03348580 */
                    /* catch() { ... } // from try @ 03347fb4 with catch @ 03348584 */
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog3;
                    /* catch() { ... } // from try @ 03347f78 with catch @ 03348588 */
                  thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 03347f90 with catch @ 0334858c */
                    /* catch() { ... } // from try @ 033480cc with catch @ 03348590 */
                    /* catch() { ... } // from try @ 03347f60 with catch @ 03348594 */
                    /* catch() { ... } // from try @ 03347f2c with catch @ 03348598 */
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* catch() { ... } // from try @ 03347f20 with catch @ 0334859c */
                  if (lVar5 == 0) goto LAB_03348950;
                    /* catch() { ... } // from try @ 03347f4c with catch @ 033485a0 */
                    /* catch() { ... } // from try @ 03347f44 with catch @ 033485a4 */
                    /* catch() { ... } // from try @ 03347f08 with catch @ 033485a8 */
                  if (2 < (uint)pIVar3->max_length) {
                    /* catch() { ... } // from try @ 033480dc with catch @ 033485ac */
                    /* catch() { ... } // from try @ 033484a4 with catch @ 033485b0 */
                    pIVar3->m_Items[2] = pIVar4;
                    /* catch() { ... } // from try @ 033484a0 with catch @ 033485b4 */
                    /* catch() { ... } // from try @ 03348118 with catch @ 033485b8 */
                    thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                    /* catch() { ... } // from try @ 03347ef0 with catch @ 033485bc */
                    /* catch() { ... } // from try @ 03347edc with catch @ 033485c0 */
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 03347e98 with catch @ 033485c4 */
                    /* catch() { ... } // from try @ 03347ebc with catch @ 033485c8 */
                    /* catch() { ... } // from try @ 03347ed4 with catch @ 033485cc */
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03347eb0 with catch @ 033485d0 */
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0334894c;
                    /* catch() { ... } // from try @ 03347e48 with catch @ 033485d4 */
                    /* catch() { ... } // from try @ 0334849c with catch @ 033485d8 */
                    /* catch() { ... } // from try @ 03348498 with catch @ 033485dc */
                    /* catch() { ... } // from try @ 03347e80 with catch @ 033485e0 */
                    /* catch() { ... } // from try @ 03347da0 with catch @ 033485e4 */
                    (pIVar4->fields).handle = StringLiteral_11386/*"Right Stick Y"*/;
                    /* catch() { ... } // from try @ 03347e04 with catch @ 033485e8 */
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 5;
                    /* try { // try from 03348600 to 03448603 has its CatchHandler @ 03348618 */
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Invert = true;
                    /* catch() { ... } // from try @ 03348600 with catch @ 03348618 */
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_03348950;
                    if (3 < (uint)pIVar3->max_length) {
                      pIVar3->m_Items[3] = pIVar4;
                      thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 03348658 to 0344867f has its CatchHandler @ 03348694 */
                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0334894c;
                      (pIVar4->fields).handle = StringLiteral_5029/*"DPad Left"*/;
                      thunk_FUN_01c20e04();
                    /* try { // try from 03348680 to 0344868b has its CatchHandler @ 03347bc4 */
                      (pIVar4->fields).Target = 9;
                    /* try { // try from 0334868c to 03448693 has its CatchHandler @ 03348694 */
                    /* catch() { ... } // from try @ 03348658 with catch @ 03348694
                       catch() { ... } // from try @ 0334868c with catch @ 03348694 */
                      (pIVar4->fields).Source =
                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
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
                      if (lVar5 == 0) goto LAB_03348950;
                      if (4 < (uint)pIVar3->max_length) {
                        pIVar3->m_Items[4] = pIVar4;
                        thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                        pIVar4 = (InControl_InputControlMapping_o *)
                                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0334894c;
                        (pIVar4->fields).handle = StringLiteral_5030/*"DPad Right"*/;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Target = 10;
                        (pIVar4->fields).Source =
                             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).SourceRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).TargetRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                        thunk_FUN_01c20e04();
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                        if (lVar5 == 0) goto LAB_03348950;
                        if (5 < (uint)pIVar3->max_length) {
                          pIVar3->m_Items[5] = pIVar4;
                          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                          pIVar4 = (InControl_InputControlMapping_o *)
                                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0334894c;
                          (pIVar4->fields).handle = StringLiteral_5028/*"DPad Down"*/;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).Target = 8;
                          (pIVar4->fields).Source =
                               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog6;
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
                          if (lVar5 == 0) goto LAB_03348950;
                          if (6 < (uint)pIVar3->max_length) {
                            pIVar3->m_Items[6] = pIVar4;
                            thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                            pIVar4 = (InControl_InputControlMapping_o *)
                                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0334894c;
                            (pIVar4->fields).handle = StringLiteral_5031/*"DPad Up"*/;
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).Target = 7;
                            (pIVar4->fields).Source =
                                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog6;
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
                            if (lVar5 == 0) goto LAB_03348950;
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
              goto LAB_0334895c;
            }
          }
        }
      }
    }
  }
LAB_0334894c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

