// TypeDefIndex 2091
// Namespace: InControl
// [AutoDiscover]
// public class PlayStation3MacProfile : UnityInputDeviceProfile
// Fields:

// ===== public void .ctor()  [RVA 0x32C6034]
// InControl.PlayStation3MacProfile$$.ctor @ RVA 0x32C6034

void InControl_PlayStation3MacProfile___ctor
               (InControl_PlayStation3MacProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
  if ((DAT_045674ec & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_4361/*"Circle"*/);
    FUN_01bab630(&StringLiteral_12223/*"Sony PLAYSTATION(R)3 Controller"*/);
    FUN_01bab630(&StringLiteral_8380/*"Left Stick Button"*/);
    FUN_01bab630(&StringLiteral_8383/*"Left Trigger"*/);
                    /* try { // try from 033c60c0 to 034c6187 has its CatchHandler @ 033c60c0
                       catch() { ... } // from try @ 033c60c0 with catch @ 033c60c0
                       catch() { ... } // from try @ 033c61ac with catch @ 033c60c0
                       catch() { ... } // from try @ 033c61d4 with catch @ 033c60c0
                       catch() { ... } // from try @ 033c61fc with catch @ 033c60c0
                       catch() { ... } // from try @ 033c623c with catch @ 033c60c0 */
    FUN_01bab630(&StringLiteral_5029/*"DPad Left"*/);
    FUN_01bab630(&StringLiteral_11786/*"Select"*/);
    FUN_01bab630(&StringLiteral_11387/*"Right Trigger"*/);
    FUN_01bab630(&StringLiteral_8381/*"Left Stick X"*/);
    FUN_01bab630(&StringLiteral_11601/*"SHENGHIC 2009/0708ZXW-V1Inc. PLAYSTATION(R)3Conteroller"*/);
    FUN_01bab630(&StringLiteral_12584/*"System"*/);
    FUN_01bab630(&StringLiteral_10294/*"PlayStation 3 Controller on Mac"*/);
    FUN_01bab630(&StringLiteral_12324/*"Square"*/);
    FUN_01bab630(&StringLiteral_5030/*"DPad Right"*/);
    FUN_01bab630(&StringLiteral_11386/*"Right Stick Y"*/);
    FUN_01bab630(&StringLiteral_9686/*"OS X"*/);
    FUN_01bab630(&StringLiteral_12346/*"Start"*/);
    FUN_01bab630(&StringLiteral_11383/*"Right Bumper"*/);
    FUN_01bab630(&StringLiteral_5031/*"DPad Up"*/);
    FUN_01bab630(&StringLiteral_8379/*"Left Bumper"*/);
    FUN_01bab630(&StringLiteral_4900/*"Cross"*/);
    FUN_01bab630(&StringLiteral_11385/*"Right Stick X"*/);
                    /* try { // try from 033c6188 to 034c618f has its CatchHandler @ 033c61e0 */
    FUN_01bab630(&StringLiteral_13920/*"Triangle"*/);
    FUN_01bab630(&StringLiteral_10291/*"PlayStation 3 Controller"*/);
                    /* try { // try from 033c61a8 to 034c61ab has its CatchHandler @ 033c61dc */
    FUN_01bab630(&StringLiteral_5028/*"DPad Down"*/);
                    /* try { // try from 033c61ac to 034c61cf has its CatchHandler @ 033c60c0 */
    FUN_01bab630(&StringLiteral_8382/*"Left Stick Y"*/);
    FUN_01bab630(&StringLiteral_11384/*"Right Stick Button"*/);
    DAT_045674ec = 1;
    method = extraout_x1;
  }
                    /* try { // try from 033c61d0 to 034c61d3 has its CatchHandler @ 033c61d8 */
                    /* try { // try from 033c61d4 to 034c61f7 has its CatchHandler @ 033c60c0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c61d0 with catch @ 033c61d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c61a8 with catch @ 033c61dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c6188 with catch @ 033c61e0
                        */
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
                    /* try { // try from 033c61f8 to 034c61fb has its CatchHandler @ 033c6224 */
                    /* try { // try from 033c61fc to 034c6233 has its CatchHandler @ 033c60c0 */
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_10291/*"PlayStation 3 Controller"*/;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_10294/*"PlayStation 3 Controller on Mac"*/;
  thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 033c61f8 with catch @ 033c6224 */
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
                    /* try { // try from 033c6234 to 034c623b has its CatchHandler @ 033c6250 */
    if ((int)pSVar1->max_length != 0) {
                    /* try { // try from 033c623c to 034c6247 has its CatchHandler @ 033c60c0 */
                    /* try { // try from 033c6248 to 034c624f has its CatchHandler @ 033c6250 */
      pSVar1->m_Items[0] = StringLiteral_9686/*"OS X"*/;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033c6234 with catch @ 033c6250
                       catch(type#2 @ 00000000) { ... } // from try @ 033c6248 with catch @ 033c6250
                        */
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).super.SupportedPlatforms;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,2);
      if (pSVar1 == (System_String_array *)0x0) goto LAB_033c6dc8;
      if ((int)pSVar1->max_length != 0) {
        pSVar1->m_Items[0] = StringLiteral_12223/*"Sony PLAYSTATION(R)3 Controller"*/;
        thunk_FUN_01c20e04(pSVar1->m_Items);
        if (1 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[1] = StringLiteral_11601/*"SHENGHIC 2009/0708ZXW-V1Inc. PLAYSTATION(R)3Conteroller"*/;
          thunk_FUN_01c20e04();
          ppSVar2 = &(__this->fields).super.JoystickNames;
          *ppSVar2 = pSVar1;
          thunk_FUN_01c20e04(ppSVar2,pSVar1);
          pIVar3 = (InControl_InputControlMapping_array *)
                   FUN_01bab718(InControl_InputControlMapping___TypeInfo,0x11);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
            (pIVar4->fields).handle = StringLiteral_4900/*"Cross"*/;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 0xb;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button14;
            thunk_FUN_01c20e04();
            if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) {
LAB_033c6dd0:
                uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar7,0);
              }
              if ((int)pIVar3->max_length == 0) goto LAB_033c6dcc;
              pIVar3->m_Items[0] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
              (pIVar4->fields).handle = StringLiteral_4361/*"Circle"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0xc;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button13;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_033c6dd0;
              if ((uint)pIVar3->max_length < 2) goto LAB_033c6dcc;
              pIVar3->m_Items[1] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
              (pIVar4->fields).handle = StringLiteral_12324/*"Square"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0xd;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button15;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_033c6dd0;
              if ((uint)pIVar3->max_length < 3) goto LAB_033c6dcc;
              pIVar3->m_Items[2] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
              (pIVar4->fields).handle = StringLiteral_13920/*"Triangle"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0xe;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button12;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_033c6dd0;
              if ((uint)pIVar3->max_length < 4) goto LAB_033c6dcc;
              pIVar3->m_Items[3] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
              (pIVar4->fields).handle = StringLiteral_5031/*"DPad Up"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 7;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button4;
              thunk_FUN_01c20e04();
                    /* try { // try from 033c6550 to 034c666f has its CatchHandler @ 033c6550
                       catch() { ... } // from try @ 033c6550 with catch @ 033c6550
                       catch() { ... } // from try @ 033c6694 with catch @ 033c6550
                       catch() { ... } // from try @ 033c66bc with catch @ 033c6550
                       catch() { ... } // from try @ 033c66e4 with catch @ 033c6550
                       catch() { ... } // from try @ 033c6714 with catch @ 033c6550 */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_033c6dd0;
              if ((uint)pIVar3->max_length < 5) goto LAB_033c6dcc;
              pIVar3->m_Items[4] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
              (pIVar4->fields).handle = StringLiteral_5028/*"DPad Down"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 8;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button6;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_033c6dd0;
              if ((uint)pIVar3->max_length < 6) goto LAB_033c6dcc;
              pIVar3->m_Items[5] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
              (pIVar4->fields).handle = StringLiteral_5029/*"DPad Left"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 9;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button7;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_033c6dd0;
              if ((uint)pIVar3->max_length < 7) goto LAB_033c6dcc;
              pIVar3->m_Items[6] = pIVar4;
                    /* try { // try from 033c6670 to 034c6677 has its CatchHandler @ 033c66c8 */
              thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
                    /* try { // try from 033c6690 to 034c6693 has its CatchHandler @ 033c66c4 */
                    /* try { // try from 033c6694 to 034c66b7 has its CatchHandler @ 033c6550 */
              (pIVar4->fields).handle = StringLiteral_5030/*"DPad Right"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 10;
                    /* try { // try from 033c66b8 to 034c66bb has its CatchHandler @ 033c66c0 */
                    /* try { // try from 033c66bc to 034c66df has its CatchHandler @ 033c6550 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c66b8 with catch @ 033c66c0
                        */
              thunk_FUN_01c20e04();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c6690 with catch @ 033c66c4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c6670 with catch @ 033c66c8
                        */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_033c6dd0;
                    /* try { // try from 033c66e0 to 034c66e3 has its CatchHandler @ 033c6704 */
              if ((uint)pIVar3->max_length < 8) goto LAB_033c6dcc;
                    /* try { // try from 033c66e4 to 034c670b has its CatchHandler @ 033c6550 */
              pIVar3->m_Items[7] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 033c66e0 with catch @ 033c6704 */
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
                    /* try { // try from 033c670c to 034c6713 has its CatchHandler @ 033c6728 */
                    /* try { // try from 033c6714 to 034c671f has its CatchHandler @ 033c6550 */
              (pIVar4->fields).handle = StringLiteral_8379/*"Left Bumper"*/;
                    /* try { // try from 033c6720 to 034c6727 has its CatchHandler @ 033c6728 */
              thunk_FUN_01c20e04();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033c670c with catch @ 033c6728
                       catch(type#2 @ 00000000) { ... } // from try @ 033c6720 with catch @ 033c6728
                        */
              (pIVar4->fields).Target = 0x11;
                    /* try { // try from 033c672c to 034c67cb has its CatchHandler @ 033c672c
                       catch() { ... } // from try @ 033c672c with catch @ 033c672c
                       catch() { ... } // from try @ 033c67ec with catch @ 033c672c
                       catch() { ... } // from try @ 033c6830 with catch @ 033c672c
                       catch() { ... } // from try @ 033c6870 with catch @ 033c672c */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button10;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_033c6dd0;
              if ((uint)pIVar3->max_length < 9) goto LAB_033c6dcc;
              pIVar3->m_Items[8] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
              (pIVar4->fields).handle = StringLiteral_11383/*"Right Bumper"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0x12;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button11;
              thunk_FUN_01c20e04();
                    /* try { // try from 033c67cc to 034c67d3 has its CatchHandler @ 033c6814 */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_033c6dd0;
                    /* try { // try from 033c67e0 to 034c67eb has its CatchHandler @ 033c6810 */
              if ((uint)pIVar3->max_length < 10) goto LAB_033c6dcc;
              pIVar3->m_Items[9] = pIVar4;
                    /* try { // try from 033c67ec to 034c682b has its CatchHandler @ 033c672c */
              thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c67e0 with catch @ 033c6810
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033c67cc with catch @ 033c6814
                        */
              (pIVar4->fields).handle = StringLiteral_12346/*"Start"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0x14;
                    /* try { // try from 033c682c to 034c682f has its CatchHandler @ 033c6858 */
                    /* try { // try from 033c6830 to 034c6867 has its CatchHandler @ 033c672c */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button3;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_033c6dd0;
                    /* catch() { ... } // from try @ 033c682c with catch @ 033c6858 */
              if ((uint)pIVar3->max_length < 0xb) goto LAB_033c6dcc;
                    /* try { // try from 033c6868 to 034c686f has its CatchHandler @ 033c6884 */
              pIVar3->m_Items[10] = pIVar4;
                    /* try { // try from 033c6870 to 034c687b has its CatchHandler @ 033c672c */
              thunk_FUN_01c20e04(pIVar3->m_Items + 10,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 033c687c to 034c6883 has its CatchHandler @ 033c6884 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033c6868 with catch @ 033c6884
                       catch(type#2 @ 00000000) { ... } // from try @ 033c687c with catch @ 033c6884
                        */
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
              (pIVar4->fields).handle = StringLiteral_11786/*"Select"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0x15;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_033c6dd0;
              if ((uint)pIVar3->max_length < 0xc) goto LAB_033c6dcc;
              pIVar3->m_Items[0xb] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 0xb,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
              (pIVar4->fields).handle = StringLiteral_8383/*"Left Trigger"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0xf;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button8;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_033c6dd0;
              if ((uint)pIVar3->max_length < 0xd) goto LAB_033c6dcc;
              pIVar3->m_Items[0xc] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 0xc,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
              (pIVar4->fields).handle = StringLiteral_11387/*"Right Trigger"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0x10;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_033c6dd0;
              if ((uint)pIVar3->max_length < 0xe) goto LAB_033c6dcc;
              pIVar3->m_Items[0xd] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 0xd,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
              (pIVar4->fields).handle = StringLiteral_8380/*"Left Stick Button"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 3;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button1;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_033c6dd0;
              if ((uint)pIVar3->max_length < 0xf) goto LAB_033c6dcc;
              pIVar3->m_Items[0xe] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 0xe,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
              (pIVar4->fields).handle = StringLiteral_11384/*"Right Stick Button"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 6;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button2;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_033c6dd0;
              if ((uint)pIVar3->max_length < 0x10) goto LAB_033c6dcc;
              pIVar3->m_Items[0xf] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 0xf,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
              (pIVar4->fields).handle = StringLiteral_12584/*"System"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0x16;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button16;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_033c6dd0;
              if ((uint)pIVar3->max_length < 0x11) goto LAB_033c6dcc;
              pIVar3->m_Items[0x10] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 0x10,pIVar4);
              ppIVar6 = &(__this->fields).super._ButtonMappings_k__BackingField;
              *ppIVar6 = pIVar3;
              thunk_FUN_01c20e04(ppIVar6,pIVar3);
              pIVar3 = (InControl_InputControlMapping_array *)
                       FUN_01bab718(InControl_InputControlMapping___TypeInfo,4);
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
                  if (lVar5 == 0) goto LAB_033c6dd0;
                  if ((int)pIVar3->max_length != 0) {
                    pIVar3->m_Items[0] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
                    (pIVar4->fields).handle = StringLiteral_8382/*"Left Stick Y"*/;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 2;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Invert = true;
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_033c6dd0;
                    if (1 < (uint)pIVar3->max_length) {
                      pIVar3->m_Items[1] = pIVar4;
                      thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
                      (pIVar4->fields).handle = StringLiteral_11385/*"Right Stick X"*/;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).Target = 4;
                      (pIVar4->fields).Source =
                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog2;
                      thunk_FUN_01c20e04();
                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                      if (lVar5 == 0) goto LAB_033c6dd0;
                      if (2 < (uint)pIVar3->max_length) {
                        pIVar3->m_Items[2] = pIVar4;
                        thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                        pIVar4 = (InControl_InputControlMapping_o *)
                                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033c6dc8;
                        (pIVar4->fields).handle = StringLiteral_11386/*"Right Stick Y"*/;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Target = 5;
                        (pIVar4->fields).Source =
                             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog3;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Invert = true;
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                        if (lVar5 == 0) goto LAB_033c6dd0;
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
                  goto LAB_033c6dcc;
                }
              }
            }
          }
          goto LAB_033c6dc8;
        }
      }
    }
LAB_033c6dcc:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_033c6dc8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

