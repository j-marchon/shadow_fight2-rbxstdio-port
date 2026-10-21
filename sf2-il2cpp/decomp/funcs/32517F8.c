// InControl.LogitechF710ModeDWinProfile$$.ctor @ RVA 0x32517F8

void InControl_LogitechF710ModeDWinProfile___ctor
               (InControl_LogitechF710ModeDWinProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03351800 to 03451807 has its CatchHandler @ 033518c4 */
  if ((DAT_0456713b & 1) == 0) {
                    /* try { // try from 03351820 to 0345187f has its CatchHandler @ 033518c8 */
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_8380);
    FUN_01bab630(&StringLiteral_8383);
    FUN_01bab630(&StringLiteral_5029);
                    /* try { // try from 03351880 to 034518a7 has its CatchHandler @ 03351710 */
    FUN_01bab630(&StringLiteral_8633);
    FUN_01bab630(&StringLiteral_14965);
    FUN_01bab630(&StringLiteral_11387);
                    /* try { // try from 033518a8 to 034518af has its CatchHandler @ 033518cc */
    FUN_01bab630(&StringLiteral_3359);
                    /* try { // try from 033518b0 to 034518b3 has its CatchHandler @ 033518c0 */
                    /* try { // try from 033518b4 to 034518b7 has its CatchHandler @ 033518bc */
                    /* try { // try from 033518b8 to 034518db has its CatchHandler @ 03351710 */
    FUN_01bab630(&StringLiteral_8381);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033518b4 with catch @ 033518bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033518b0 with catch @ 033518c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03351800 with catch @ 033518c4
                        */
    FUN_01bab630(&StringLiteral_5030);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03351820 with catch @ 033518c8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033518a8 with catch @ 033518cc
                        */
    FUN_01bab630(&StringLiteral_11386);
                    /* try { // try from 033518dc to 034518df has its CatchHandler @ 03351904 */
    FUN_01bab630(&StringLiteral_12346);
                    /* try { // try from 033518e0 to 0345190b has its CatchHandler @ 03351710 */
    FUN_01bab630(&StringLiteral_11383);
    FUN_01bab630(&StringLiteral_5031);
    FUN_01bab630(&StringLiteral_8379);
                    /* catch() { ... } // from try @ 033518dc with catch @ 03351904 */
                    /* try { // try from 0335190c to 03451913 has its CatchHandler @ 03351928 */
    FUN_01bab630(&StringLiteral_3279);
                    /* try { // try from 03351914 to 0345191f has its CatchHandler @ 03351710 */
    FUN_01bab630(&StringLiteral_11385);
                    /* try { // try from 03351920 to 03451927 has its CatchHandler @ 03351928 */
    FUN_01bab630(&StringLiteral_8647);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0335190c with catch @ 03351928
                       catch(type#2 @ 00000000) { ... } // from try @ 03351920 with catch @ 03351928
                        */
    FUN_01bab630(&StringLiteral_15134);
    FUN_01bab630(&StringLiteral_8644);
    FUN_01bab630(&StringLiteral_15021);
    FUN_01bab630(&StringLiteral_5028);
    FUN_01bab630(&StringLiteral_8382);
    FUN_01bab630(&StringLiteral_2529);
    FUN_01bab630(&StringLiteral_11384);
    DAT_0456713b = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_8644;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_8647;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length == 0) {
LAB_033525d0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar1->m_Items[0] = StringLiteral_14965;
    thunk_FUN_01c20e04();
    ppSVar2 = &(__this->fields).super.SupportedPlatforms;
    *ppSVar2 = pSVar1;
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
    if (pSVar1 != (System_String_array *)0x0) {
      if ((int)pSVar1->max_length == 0) goto LAB_033525d0;
      pSVar1->m_Items[0] = StringLiteral_8633;
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
                    /* try { // try from 03351aa0 to 03451b3f has its CatchHandler @ 03351aa0
                       catch() { ... } // from try @ 03351aa0 with catch @ 03351aa0
                       catch() { ... } // from try @ 03351b48 with catch @ 03351aa0
                       catch() { ... } // from try @ 03351ba4 with catch @ 03351aa0
                       catch() { ... } // from try @ 03351bec with catch @ 03351aa0 */
        (pIVar4->fields).handle = StringLiteral_2529;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 0xb;
        (pIVar4->fields).Source = InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button1
        ;
        thunk_FUN_01c20e04();
        if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) {
LAB_033525c4:
            uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar7,0);
          }
          if ((int)pIVar3->max_length == 0) goto LAB_033525d0;
          pIVar3->m_Items[0] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033525c0;
          (pIVar4->fields).handle = StringLiteral_3279;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xc;
                    /* try { // try from 03351b40 to 03451b47 has its CatchHandler @ 03351b88 */
                    /* try { // try from 03351b48 to 03451b9f has its CatchHandler @ 03351aa0 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button2;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_033525c4;
          if ((uint)pIVar3->max_length < 2) goto LAB_033525d0;
          pIVar3->m_Items[1] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03351b40 with catch @ 03351b88
                        */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033525c0;
                    /* try { // try from 03351ba0 to 03451ba3 has its CatchHandler @ 03351bd4 */
                    /* try { // try from 03351ba4 to 03451be3 has its CatchHandler @ 03351aa0 */
          (pIVar4->fields).handle = StringLiteral_15021;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xd;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0;
          thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 03351ba0 with catch @ 03351bd4 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 03351be4 to 03451beb has its CatchHandler @ 03351c00 */
          if (lVar5 == 0) goto LAB_033525c4;
                    /* try { // try from 03351bec to 03451bf7 has its CatchHandler @ 03351aa0 */
          if ((uint)pIVar3->max_length < 3) goto LAB_033525d0;
                    /* try { // try from 03351bf8 to 03451bff has its CatchHandler @ 03351c00 */
          pIVar3->m_Items[2] = pIVar4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03351be4 with catch @ 03351c00
                       catch(type#2 @ 00000000) { ... } // from try @ 03351bf8 with catch @ 03351c00
                        */
          thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033525c0;
          (pIVar4->fields).handle = StringLiteral_15134;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xe;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button3;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_033525c4;
          if ((uint)pIVar3->max_length < 4) goto LAB_033525d0;
          pIVar3->m_Items[3] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03351c8c to 03451d17 has its CatchHandler @ 03351c8c
                       catch() { ... } // from try @ 03351c8c with catch @ 03351c8c
                       catch() { ... } // from try @ 03351d34 with catch @ 03351c8c
                       catch() { ... } // from try @ 03351d58 with catch @ 03351c8c
                       catch() { ... } // from try @ 03351d80 with catch @ 03351c8c
                       catch() { ... } // from try @ 03351dc0 with catch @ 03351c8c */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033525c0;
          (pIVar4->fields).handle = StringLiteral_3359;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x13;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button8;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_033525c4;
          if ((uint)pIVar3->max_length < 5) goto LAB_033525d0;
          pIVar3->m_Items[4] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 03351d18 to 03451d1f has its CatchHandler @ 03351d64 */
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033525c0;
                    /* try { // try from 03351d2c to 03451d33 has its CatchHandler @ 03351d60 */
          (pIVar4->fields).handle = StringLiteral_12346;
          thunk_FUN_01c20e04();
                    /* try { // try from 03351d34 to 03451d53 has its CatchHandler @ 03351c8c */
          (pIVar4->fields).Target = 0x14;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9;
          thunk_FUN_01c20e04();
                    /* try { // try from 03351d54 to 03451d57 has its CatchHandler @ 03351d5c */
                    /* try { // try from 03351d58 to 03451d7b has its CatchHandler @ 03351c8c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03351d54 with catch @ 03351d5c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03351d2c with catch @ 03351d60
                        */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03351d18 with catch @ 03351d64
                        */
          if (lVar5 == 0) goto LAB_033525c4;
          if ((uint)pIVar3->max_length < 6) goto LAB_033525d0;
          pIVar3->m_Items[5] = pIVar4;
                    /* try { // try from 03351d7c to 03451d7f has its CatchHandler @ 03351da8 */
                    /* try { // try from 03351d80 to 03451db7 has its CatchHandler @ 03351c8c */
          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033525c0;
                    /* catch() { ... } // from try @ 03351d7c with catch @ 03351da8 */
          (pIVar4->fields).handle = StringLiteral_8380;
          thunk_FUN_01c20e04();
                    /* try { // try from 03351db8 to 03451dbf has its CatchHandler @ 03351dd4 */
          (pIVar4->fields).Target = 3;
                    /* try { // try from 03351dc0 to 03451dcb has its CatchHandler @ 03351c8c */
                    /* try { // try from 03351dcc to 03451dd3 has its CatchHandler @ 03351dd4 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button10;
          thunk_FUN_01c20e04();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03351db8 with catch @ 03351dd4
                       catch(type#2 @ 00000000) { ... } // from try @ 03351dcc with catch @ 03351dd4
                        */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_033525c4;
          if ((uint)pIVar3->max_length < 7) goto LAB_033525d0;
          pIVar3->m_Items[6] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033525c0;
          (pIVar4->fields).handle = StringLiteral_11384;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 6;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button11;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_033525c4;
          if ((uint)pIVar3->max_length < 8) goto LAB_033525d0;
          pIVar3->m_Items[7] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033525c0;
                    /* try { // try from 03351ea4 to 03452007 has its CatchHandler @ 03351ea4
                       catch() { ... } // from try @ 03351ea4 with catch @ 03351ea4
                       catch() { ... } // from try @ 03352204 with catch @ 03351ea4
                       catch() { ... } // from try @ 033522c4 with catch @ 03351ea4
                       catch() { ... } // from try @ 033522cc with catch @ 03351ea4
                       catch() { ... } // from try @ 033523d4 with catch @ 03351ea4 */
          (pIVar4->fields).handle = StringLiteral_8379;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x11;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button4;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_033525c4;
          if ((uint)pIVar3->max_length < 9) goto LAB_033525d0;
          pIVar3->m_Items[8] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033525c0;
          (pIVar4->fields).handle = StringLiteral_11383;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x12;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_033525c4;
          if ((uint)pIVar3->max_length < 10) goto LAB_033525d0;
          pIVar3->m_Items[9] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033525c0;
          (pIVar4->fields).handle = StringLiteral_8383;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xf;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button6;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_033525c4;
          if ((uint)pIVar3->max_length < 0xb) goto LAB_033525d0;
          pIVar3->m_Items[10] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 10,pIVar4);
                    /* try { // try from 03352008 to 0345202f has its CatchHandler @ 03352310 */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033525c0;
          (pIVar4->fields).handle = StringLiteral_11387;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x10;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button7;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 03352064 to 0345208f has its CatchHandler @ 0335230c */
          if (lVar5 == 0) goto LAB_033525c4;
          if ((uint)pIVar3->max_length < 0xc) goto LAB_033525d0;
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
                    /* try { // try from 033520c8 to 034520d7 has its CatchHandler @ 03352324 */
            (pIVar4->fields).handle = StringLiteral_8381;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 1;
                    /* try { // try from 033520e8 to 034520ef has its CatchHandler @ 03352304 */
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog0;
            thunk_FUN_01c20e04();
                    /* try { // try from 033520f8 to 034520ff has its CatchHandler @ 03352300 */
            if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
                    /* try { // try from 03352100 to 0345211f has its CatchHandler @ 03352318 */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_033525c4;
              if ((int)pIVar3->max_length != 0) {
                pIVar3->m_Items[0] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                    /* try { // try from 0335212c to 03452133 has its CatchHandler @ 033522f8 */
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 0335213c to 03452143 has its CatchHandler @ 033522fc */
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033525c0;
                    /* try { // try from 03352144 to 0345215f has its CatchHandler @ 03352320 */
                (pIVar4->fields).handle = StringLiteral_8382;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 2;
                    /* try { // try from 0335216c to 03452173 has its CatchHandler @ 033522e4 */
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
                thunk_FUN_01c20e04();
                    /* try { // try from 0335217c to 03452183 has its CatchHandler @ 033522e0 */
                (pIVar4->fields).Invert = true;
                    /* try { // try from 03352184 to 0345219f has its CatchHandler @ 0335231c */
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) goto LAB_033525c4;
                if (1 < (uint)pIVar3->max_length) {
                  pIVar3->m_Items[1] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033525c0;
                  (pIVar4->fields).handle = StringLiteral_11385;
                  thunk_FUN_01c20e04();
                    /* try { // try from 033521e0 to 03452203 has its CatchHandler @ 033522dc */
                  (pIVar4->fields).Target = 4;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog2;
                  thunk_FUN_01c20e04();
                    /* try { // try from 03352204 to 0345229f has its CatchHandler @ 03351ea4 */
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_033525c4;
                  if (2 < (uint)pIVar3->max_length) {
                    pIVar3->m_Items[2] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033525c0;
                    (pIVar4->fields).handle = StringLiteral_11386;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 5;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog3;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Invert = true;
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_033525c4;
                    /* try { // try from 033522a0 to 034522a7 has its CatchHandler @ 03352308 */
                    if (3 < (uint)pIVar3->max_length) {
                    /* try { // try from 033522a8 to 034522ab has its CatchHandler @ 033522f4 */
                    /* try { // try from 033522ac to 034522af has its CatchHandler @ 033522f0 */
                      pIVar3->m_Items[3] = pIVar4;
                    /* try { // try from 033522b0 to 034522b3 has its CatchHandler @ 033522ec */
                    /* try { // try from 033522b4 to 034522b7 has its CatchHandler @ 033522e8 */
                      thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                    /* try { // try from 033522b8 to 034522bf has its CatchHandler @ 03352314 */
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 033522c0 to 034522c3 has its CatchHandler @ 033522d8 */
                    /* try { // try from 033522c4 to 034522c7 has its CatchHandler @ 03351ea4 */
                    /* try { // try from 033522c8 to 034522cb has its CatchHandler @ 033522d4 */
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 033522cc to 03452343 has its CatchHandler @ 03351ea4 */
                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033525c0;
                    /* catch() { ... } // from try @ 033522c8 with catch @ 033522d4 */
                    /* catch() { ... } // from try @ 033522c0 with catch @ 033522d8 */
                    /* catch() { ... } // from try @ 033521e0 with catch @ 033522dc */
                    /* catch() { ... } // from try @ 0335217c with catch @ 033522e0 */
                    /* catch() { ... } // from try @ 0335216c with catch @ 033522e4 */
                    /* catch() { ... } // from try @ 033522b4 with catch @ 033522e8 */
                      (pIVar4->fields).handle = StringLiteral_5029;
                    /* catch() { ... } // from try @ 033522b0 with catch @ 033522ec */
                      thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 033522ac with catch @ 033522f0 */
                    /* catch() { ... } // from try @ 033522a8 with catch @ 033522f4 */
                      (pIVar4->fields).Target = 9;
                    /* catch() { ... } // from try @ 0335212c with catch @ 033522f8 */
                    /* catch() { ... } // from try @ 0335213c with catch @ 033522fc */
                    /* catch() { ... } // from try @ 033520f8 with catch @ 03352300 */
                    /* catch() { ... } // from try @ 033520e8 with catch @ 03352304 */
                    /* catch() { ... } // from try @ 033522a0 with catch @ 03352308 */
                      (pIVar4->fields).Source =
                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                    /* catch() { ... } // from try @ 03352064 with catch @ 0335230c */
                      thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 03352008 with catch @ 03352310 */
                    /* catch() { ... } // from try @ 033522b8 with catch @ 03352314 */
                    /* catch() { ... } // from try @ 03352100 with catch @ 03352318 */
                      if ((InControl_InputControlMapping_Range_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03352184 with catch @ 0335231c */
                        thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 03352144 with catch @ 03352320 */
                      }
                    /* catch() { ... } // from try @ 033520c8 with catch @ 03352324 */
                      (pIVar4->fields).SourceRange =
                           InControl_InputControlMapping_Range_TypeInfo->static_fields->Negative;
                      thunk_FUN_01c20e04();
                    /* try { // try from 03352344 to 03452347 has its CatchHandler @ 03352354 */
                      (pIVar4->fields).TargetRange =
                           InControl_InputControlMapping_Range_TypeInfo->static_fields->Negative;
                      thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 03352344 with catch @ 03352354 */
                      (pIVar4->fields).Invert = true;
                    /* try { // try from 03352364 to 034523d3 has its CatchHandler @ 033523e8 */
                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                      if (lVar5 == 0) goto LAB_033525c4;
                      if (4 < (uint)pIVar3->max_length) {
                        pIVar3->m_Items[4] = pIVar4;
                        thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                        pIVar4 = (InControl_InputControlMapping_o *)
                                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033525c0;
                        (pIVar4->fields).handle = StringLiteral_5030;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Target = 10;
                        (pIVar4->fields).Source =
                             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                    /* try { // try from 033523d4 to 034523df has its CatchHandler @ 03351ea4 */
                        thunk_FUN_01c20e04();
                    /* try { // try from 033523e0 to 034523e7 has its CatchHandler @ 033523e8 */
                    /* catch() { ... } // from try @ 03352364 with catch @ 033523e8
                       catch() { ... } // from try @ 033523e0 with catch @ 033523e8 */
                        (pIVar4->fields).SourceRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).TargetRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                        thunk_FUN_01c20e04();
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                        if (lVar5 == 0) goto LAB_033525c4;
                        if (5 < (uint)pIVar3->max_length) {
                          pIVar3->m_Items[5] = pIVar4;
                          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                          pIVar4 = (InControl_InputControlMapping_o *)
                                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033525c0;
                          (pIVar4->fields).handle = StringLiteral_5031;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).Target = 7;
                          (pIVar4->fields).Source =
                               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
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
                          if (lVar5 == 0) goto LAB_033525c4;
                          if (6 < (uint)pIVar3->max_length) {
                            pIVar3->m_Items[6] = pIVar4;
                            thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                            pIVar4 = (InControl_InputControlMapping_o *)
                                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_033525c0;
                            (pIVar4->fields).handle = StringLiteral_5028;
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).Target = 8;
                            (pIVar4->fields).Source =
                                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
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
                            if (lVar5 == 0) goto LAB_033525c4;
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
              goto LAB_033525d0;
            }
          }
        }
      }
    }
  }
LAB_033525c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

