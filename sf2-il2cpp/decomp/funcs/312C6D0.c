// InControl.XboxOneMacProfile$$.ctor @ RVA 0x312C6D0

void InControl_XboxOneMacProfile___ctor(InControl_XboxOneMacProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
  if ((DAT_045666a0 & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_8949);
    FUN_01bab630(&StringLiteral_8380);
    FUN_01bab630(&StringLiteral_8383);
    FUN_01bab630(&StringLiteral_5029);
    FUN_01bab630(&StringLiteral_6937);
    FUN_01bab630(&StringLiteral_11387);
    FUN_01bab630(&StringLiteral_8381);
    FUN_01bab630(&StringLiteral_9038);
    FUN_01bab630(&StringLiteral_5030);
    FUN_01bab630(&StringLiteral_11386);
    FUN_01bab630(&StringLiteral_9686);
                    /* try { // try from 0322c7c0 to 0332c8f3 has its CatchHandler @ 0322c7c0
                       catch() { ... } // from try @ 0322c7c0 with catch @ 0322c7c0
                       catch() { ... } // from try @ 0322c918 with catch @ 0322c7c0
                       catch() { ... } // from try @ 0322caa0 with catch @ 0322c7c0
                       catch() { ... } // from try @ 0322cacc with catch @ 0322c7c0
                       catch() { ... } // from try @ 0322cb0c with catch @ 0322c7c0 */
    FUN_01bab630(&StringLiteral_11383);
    FUN_01bab630(&StringLiteral_5031);
    FUN_01bab630(&StringLiteral_8379);
    FUN_01bab630(&StringLiteral_3279);
    FUN_01bab630(&StringLiteral_11385);
    FUN_01bab630(&StringLiteral_15071);
    FUN_01bab630(&StringLiteral_15134);
    FUN_01bab630(&StringLiteral_15070);
    FUN_01bab630(&StringLiteral_14797);
    FUN_01bab630(&StringLiteral_15021);
    FUN_01bab630(&StringLiteral_5028);
    FUN_01bab630(&StringLiteral_8382);
    FUN_01bab630(&StringLiteral_2529);
    FUN_01bab630(&StringLiteral_11384);
    DAT_045666a0 = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_15070;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_15071;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length == 0) {
LAB_0322d4d4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar1->m_Items[0] = StringLiteral_9686;
    thunk_FUN_01c20e04();
    ppSVar2 = &(__this->fields).super.SupportedPlatforms;
                    /* try { // try from 0322c8f4 to 0332c8fb has its CatchHandler @ 0322cab0 */
    *ppSVar2 = pSVar1;
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
    if (pSVar1 != (System_String_array *)0x0) {
                    /* try { // try from 0322c914 to 0332c917 has its CatchHandler @ 0322caac */
                    /* try { // try from 0322c918 to 0332ca9b has its CatchHandler @ 0322c7c0 */
      if ((int)pSVar1->max_length == 0) goto LAB_0322d4d4;
      pSVar1->m_Items[0] = StringLiteral_9038;
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
        (pIVar4->fields).handle = StringLiteral_2529;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 0xb;
        (pIVar4->fields).Source =
             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button16;
        thunk_FUN_01c20e04();
        if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) {
LAB_0322d4c8:
            uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar7,0);
          }
          if ((int)pIVar3->max_length == 0) goto LAB_0322d4d4;
          pIVar3->m_Items[0] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
          (pIVar4->fields).handle = StringLiteral_3279;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xc;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button17;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0322d4c8;
          if ((uint)pIVar3->max_length < 2) goto LAB_0322d4d4;
          pIVar3->m_Items[1] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
          (pIVar4->fields).handle = StringLiteral_15021;
          thunk_FUN_01c20e04();
                    /* try { // try from 0322ca9c to 0332ca9f has its CatchHandler @ 0322caa8 */
          (pIVar4->fields).Target = 0xd;
                    /* try { // try from 0322caa0 to 0332cac7 has its CatchHandler @ 0322c7c0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322ca9c with catch @ 0322caa8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322c914 with catch @ 0322caac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322c8f4 with catch @ 0322cab0
                        */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button18;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 0322cac8 to 0332cacb has its CatchHandler @ 0322caf4 */
          if (lVar5 == 0) goto LAB_0322d4c8;
                    /* try { // try from 0322cacc to 0332cb03 has its CatchHandler @ 0322c7c0 */
          if ((uint)pIVar3->max_length < 3) goto LAB_0322d4d4;
          pIVar3->m_Items[2] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 0322cac8 with catch @ 0322caf4 */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
                    /* try { // try from 0322cb04 to 0332cb0b has its CatchHandler @ 0322cb20 */
                    /* try { // try from 0322cb0c to 0332cb17 has its CatchHandler @ 0322c7c0 */
          (pIVar4->fields).handle = StringLiteral_15134;
          thunk_FUN_01c20e04();
                    /* try { // try from 0322cb18 to 0332cb1f has its CatchHandler @ 0322cb20 */
          (pIVar4->fields).Target = 0xe;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0322cb04 with catch @ 0322cb20
                       catch(type#2 @ 00000000) { ... } // from try @ 0322cb18 with catch @ 0322cb20
                        */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button19;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0322d4c8;
          if ((uint)pIVar3->max_length < 4) goto LAB_0322d4d4;
                    /* try { // try from 0322cb58 to 0332cca7 has its CatchHandler @ 0322cb58
                       catch() { ... } // from try @ 0322cb58 with catch @ 0322cb58
                       catch() { ... } // from try @ 0322cd50 with catch @ 0322cb58
                       catch() { ... } // from try @ 0322cde8 with catch @ 0322cb58
                       catch() { ... } // from try @ 0322ce24 with catch @ 0322cb58
                       catch() { ... } // from try @ 0322ce54 with catch @ 0322cb58 */
          pIVar3->m_Items[3] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
          (pIVar4->fields).handle = StringLiteral_5029;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 9;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button7;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0322d4c8;
          if ((uint)pIVar3->max_length < 5) goto LAB_0322d4d4;
          pIVar3->m_Items[4] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
          (pIVar4->fields).handle = StringLiteral_5030;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 10;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button8;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0322d4c8;
          if ((uint)pIVar3->max_length < 6) goto LAB_0322d4d4;
          pIVar3->m_Items[5] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
          (pIVar4->fields).handle = StringLiteral_5031;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 7;
                    /* try { // try from 0322cca8 to 0332ccaf has its CatchHandler @ 0322ce08 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
          thunk_FUN_01c20e04();
                    /* try { // try from 0322ccbc to 0332ccc7 has its CatchHandler @ 0322ce04 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 0322ccc8 to 0332ccd3 has its CatchHandler @ 0322cdfc */
          if (lVar5 == 0) goto LAB_0322d4c8;
          if ((uint)pIVar3->max_length < 7) goto LAB_0322d4d4;
          pIVar3->m_Items[6] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                    /* try { // try from 0322ccec to 0332ccf3 has its CatchHandler @ 0322cdf8 */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
                    /* try { // try from 0322cd04 to 0332cd07 has its CatchHandler @ 0322cdec */
          (pIVar4->fields).handle = StringLiteral_5028;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 8;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button6;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0322d4c8;
                    /* try { // try from 0322cd4c to 0332cd4f has its CatchHandler @ 0322cdf0 */
                    /* try { // try from 0322cd50 to 0332cd9b has its CatchHandler @ 0322cb58 */
          if ((uint)pIVar3->max_length < 8) goto LAB_0322d4d4;
          pIVar3->m_Items[7] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
          (pIVar4->fields).handle = StringLiteral_8379;
          thunk_FUN_01c20e04();
                    /* try { // try from 0322cd9c to 0332cd9f has its CatchHandler @ 0322ce00 */
          (pIVar4->fields).Target = 0x11;
                    /* try { // try from 0322cda0 to 0332cde7 has its CatchHandler @ 0322cdf4 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button13;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0322d4c8;
          if ((uint)pIVar3->max_length < 9) goto LAB_0322d4d4;
          pIVar3->m_Items[8] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
                    /* try { // try from 0322cde8 to 0332ce1f has its CatchHandler @ 0322cb58 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322cd04 with catch @ 0322cdec
                        */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322cd4c with catch @ 0322cdf0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322cda0 with catch @ 0322cdf4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322ccec with catch @ 0322cdf8
                        */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322ccc8 with catch @ 0322cdfc
                        */
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322cd9c with catch @ 0322ce00
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322ccbc with catch @ 0322ce04
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322cca8 with catch @ 0322ce08
                        */
          (pIVar4->fields).handle = StringLiteral_11383;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x12;
                    /* try { // try from 0322ce20 to 0332ce23 has its CatchHandler @ 0322ce44 */
                    /* try { // try from 0322ce24 to 0332ce4b has its CatchHandler @ 0322cb58 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button14;
          thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 0322ce20 with catch @ 0322ce44 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0322d4c8;
                    /* try { // try from 0322ce4c to 0332ce53 has its CatchHandler @ 0322ce68 */
                    /* try { // try from 0322ce54 to 0332ce5f has its CatchHandler @ 0322cb58 */
          if ((uint)pIVar3->max_length < 10) goto LAB_0322d4d4;
          pIVar3->m_Items[9] = pIVar4;
                    /* try { // try from 0322ce60 to 0332ce67 has its CatchHandler @ 0322ce68 */
          thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0322ce4c with catch @ 0322ce68
                       catch(type#2 @ 00000000) { ... } // from try @ 0322ce60 with catch @ 0322ce68
                        */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
          (pIVar4->fields).handle = StringLiteral_8380;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 3;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button11;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0322d4c8;
          if ((uint)pIVar3->max_length < 0xb) goto LAB_0322d4d4;
          pIVar3->m_Items[10] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 10,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
          (pIVar4->fields).handle = StringLiteral_11384;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 6;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button12;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0322d4c8;
          if ((uint)pIVar3->max_length < 0xc) goto LAB_0322d4d4;
          pIVar3->m_Items[0xb] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 0xb,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
          (pIVar4->fields).handle = StringLiteral_14797;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x1a;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button10;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0322d4c8;
          if ((uint)pIVar3->max_length < 0xd) goto LAB_0322d4d4;
          pIVar3->m_Items[0xc] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 0xc,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
          (pIVar4->fields).handle = StringLiteral_8949;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x18;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0322d4c8;
          if ((uint)pIVar3->max_length < 0xe) goto LAB_0322d4d4;
          pIVar3->m_Items[0xd] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 0xd,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
          (pIVar4->fields).handle = StringLiteral_6937;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x16;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button15;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0322d4c8;
          if ((uint)pIVar3->max_length < 0xf) goto LAB_0322d4d4;
          pIVar3->m_Items[0xe] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 0xe,pIVar4);
          ppIVar6 = &(__this->fields).super._ButtonMappings_k__BackingField;
          *ppIVar6 = pIVar3;
          thunk_FUN_01c20e04(ppIVar6,pIVar3);
          pIVar3 = (InControl_InputControlMapping_array *)
                   FUN_01bab718(InControl_InputControlMapping___TypeInfo,6);
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
              if (lVar5 == 0) goto LAB_0322d4c8;
              if ((int)pIVar3->max_length != 0) {
                pIVar3->m_Items[0] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
                (pIVar4->fields).handle = StringLiteral_8382;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 2;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Invert = true;
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) goto LAB_0322d4c8;
                if (1 < (uint)pIVar3->max_length) {
                  pIVar3->m_Items[1] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
                  (pIVar4->fields).handle = StringLiteral_11385;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Target = 4;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog2;
                  thunk_FUN_01c20e04();
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_0322d4c8;
                  if (2 < (uint)pIVar3->max_length) {
                    pIVar3->m_Items[2] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
                    (pIVar4->fields).handle = StringLiteral_11386;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 5;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog3;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Invert = true;
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_0322d4c8;
                    if (3 < (uint)pIVar3->max_length) {
                      pIVar3->m_Items[3] = pIVar4;
                      thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
                      (pIVar4->fields).handle = StringLiteral_8383;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).Target = 0xf;
                      (pIVar4->fields).Source =
                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                      thunk_FUN_01c20e04();
                      if ((InControl_InputControlMapping_Range_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      (pIVar4->fields).SourceRange =
                           InControl_InputControlMapping_Range_TypeInfo->static_fields->Complete;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).TargetRange =
                           InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).IgnoreInitialZeroValue = true;
                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                      if (lVar5 == 0) goto LAB_0322d4c8;
                      if (4 < (uint)pIVar3->max_length) {
                        pIVar3->m_Items[4] = pIVar4;
                        thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                        pIVar4 = (InControl_InputControlMapping_o *)
                                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0322d4c4;
                        (pIVar4->fields).handle = StringLiteral_11387;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Target = 0x10;
                        (pIVar4->fields).Source =
                             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).SourceRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Complete;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).TargetRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).IgnoreInitialZeroValue = true;
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                        if (lVar5 == 0) goto LAB_0322d4c8;
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
              goto LAB_0322d4d4;
            }
          }
        }
      }
    }
  }
LAB_0322d4c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

