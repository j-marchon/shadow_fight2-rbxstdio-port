// InControl.Xbox360MacProfile$$.ctor @ RVA 0x338A2F8

void InControl_Xbox360MacProfile___ctor(InControl_Xbox360MacProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567bd8 & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_8380);
    FUN_01bab630(&StringLiteral_15067);
    FUN_01bab630(&StringLiteral_8383);
    FUN_01bab630(&StringLiteral_5029);
    FUN_01bab630(&StringLiteral_22523);
    FUN_01bab630(&StringLiteral_2029);
    FUN_01bab630(&StringLiteral_8770);
    FUN_01bab630(&StringLiteral_11387);
    FUN_01bab630(&StringLiteral_15064);
    FUN_01bab630(&StringLiteral_3359);
    FUN_01bab630(&StringLiteral_8381);
    FUN_01bab630(&StringLiteral_12584);
    FUN_01bab630(&StringLiteral_5030);
    FUN_01bab630(&StringLiteral_11386);
    FUN_01bab630(&StringLiteral_9686);
    FUN_01bab630(&StringLiteral_12346);
    FUN_01bab630(&StringLiteral_11383);
    FUN_01bab630(&StringLiteral_5031);
    FUN_01bab630(&StringLiteral_8379);
    FUN_01bab630(&StringLiteral_22522);
    FUN_01bab630(&StringLiteral_3279);
    FUN_01bab630(&StringLiteral_9036);
    FUN_01bab630(&StringLiteral_11385);
    FUN_01bab630(&StringLiteral_15134);
    FUN_01bab630(&StringLiteral_15021);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_5028);
    FUN_01bab630(&StringLiteral_8382);
    FUN_01bab630(&StringLiteral_2529);
    FUN_01bab630(&StringLiteral_11384);
    DAT_04567bd8 = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_15064;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_15067;
                    /* try { // try from 0348a51c to 0358a6e3 has its CatchHandler @ 0348a51c
                       catch() { ... } // from try @ 0348a51c with catch @ 0348a51c
                       catch() { ... } // from try @ 0348a968 with catch @ 0348a51c
                       catch() { ... } // from try @ 0348aa9c with catch @ 0348a51c
                       catch() { ... } // from try @ 0348ab08 with catch @ 0348a51c
                       catch() { ... } // from try @ 0348aba0 with catch @ 0348a51c
                       catch() { ... } // from try @ 0348abe4 with catch @ 0348a51c */
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = StringLiteral_9686;
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).super.SupportedPlatforms;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
      if (pSVar1 == (System_String_array *)0x0) goto LAB_0348b1b4;
      if ((int)pSVar1->max_length != 0) {
        pSVar1->m_Items[0] = StringLiteral_1;
        thunk_FUN_01c20e04(pSVar1->m_Items);
        if (1 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[1] = StringLiteral_9036;
          thunk_FUN_01c20e04(pSVar1->m_Items + 1);
          if (2 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[2] = StringLiteral_8770;
            thunk_FUN_01c20e04(pSVar1->m_Items + 2);
            if (3 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[3] = StringLiteral_22522;
              thunk_FUN_01c20e04(pSVar1->m_Items + 3);
              if (4 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[4] = StringLiteral_22523;
                thunk_FUN_01c20e04();
                ppSVar2 = &(__this->fields).super.JoystickNames;
                *ppSVar2 = pSVar1;
                thunk_FUN_01c20e04(ppSVar2,pSVar1);
                (__this->fields).super.LastResortRegex = StringLiteral_2029;
                thunk_FUN_01c20e04();
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
                    /* try { // try from 0348a6e4 to 0358a6eb has its CatchHandler @ 0348ab80 */
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) {
LAB_0348b1b8:
                      uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                      FUN_01bab798(uVar7,0);
                    }
                    if ((int)pIVar3->max_length == 0) goto LAB_0348b1b0;
                    /* try { // try from 0348a6f8 to 0358a707 has its CatchHandler @ 0348ab7c */
                    pIVar3->m_Items[0] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0348b1b4;
                    /* try { // try from 0348a71c to 0358a71f has its CatchHandler @ 0348ab70 */
                    /* try { // try from 0348a720 to 0358a72b has its CatchHandler @ 0348ab74 */
                    (pIVar4->fields).handle = StringLiteral_3279;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 0xc;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button17;
                    thunk_FUN_01c20e04();
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_0348b1b8;
                    /* try { // try from 0348a770 to 0358a793 has its CatchHandler @ 0348ab68 */
                    if ((uint)pIVar3->max_length < 2) goto LAB_0348b1b0;
                    pIVar3->m_Items[1] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0348b1b4;
                    /* try { // try from 0348a7ac to 0358a7af has its CatchHandler @ 0348ab40 */
                    (pIVar4->fields).handle = StringLiteral_15021;
                    thunk_FUN_01c20e04();
                    /* try { // try from 0348a7b8 to 0358a7d7 has its CatchHandler @ 0348ab48 */
                    (pIVar4->fields).Target = 0xd;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button18;
                    thunk_FUN_01c20e04();
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_0348b1b8;
                    /* try { // try from 0348a7e8 to 0358a7f3 has its CatchHandler @ 0348ab60 */
                    if ((uint)pIVar3->max_length < 3) goto LAB_0348b1b0;
                    /* try { // try from 0348a7f8 to 0358a803 has its CatchHandler @ 0348ab64 */
                    pIVar3->m_Items[2] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0348b1b4;
                    (pIVar4->fields).handle = StringLiteral_15134;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 0xe;
                    /* try { // try from 0348a844 to 0358a847 has its CatchHandler @ 0348ab0c */
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button19;
                    /* try { // try from 0348a850 to 0358a86f has its CatchHandler @ 0348ab20 */
                    thunk_FUN_01c20e04();
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_0348b1b8;
                    if ((uint)pIVar3->max_length < 4) goto LAB_0348b1b0;
                    pIVar3->m_Items[3] = pIVar4;
                    /* try { // try from 0348a880 to 0358a88b has its CatchHandler @ 0348ab38 */
                    thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 0348a890 to 0358a89b has its CatchHandler @ 0348ab34 */
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0348b1b4;
                    (pIVar4->fields).handle = StringLiteral_5031;
                    thunk_FUN_01c20e04();
                    /* try { // try from 0348a8b8 to 0358a8bf has its CatchHandler @ 0348ab10 */
                    (pIVar4->fields).Target = 7;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
                    thunk_FUN_01c20e04();
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 0348a8e4 to 0358a8eb has its CatchHandler @ 0348ab08 */
                    if (lVar5 == 0) goto LAB_0348b1b8;
                    if ((uint)pIVar3->max_length < 5) goto LAB_0348b1b0;
                    pIVar3->m_Items[4] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 0348a90c to 0358a92b has its CatchHandler @ 0348ab1c */
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0348b1b4;
                    (pIVar4->fields).handle = StringLiteral_5028;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 8;
                    /* try { // try from 0348a940 to 0358a94b has its CatchHandler @ 0348ab14 */
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button6;
                    thunk_FUN_01c20e04();
                    /* try { // try from 0348a95c to 0358a967 has its CatchHandler @ 0348ab30 */
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_0348b1b8;
                    /* try { // try from 0348a968 to 0358aa93 has its CatchHandler @ 0348a51c */
                    if ((uint)pIVar3->max_length < 6) goto LAB_0348b1b0;
                    pIVar3->m_Items[5] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0348b1b4;
                    (pIVar4->fields).handle = StringLiteral_5029;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 9;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button7;
                    thunk_FUN_01c20e04();
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_0348b1b8;
                    if ((uint)pIVar3->max_length < 7) goto LAB_0348b1b0;
                    pIVar3->m_Items[6] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0348b1b4;
                    (pIVar4->fields).handle = StringLiteral_5030;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 10;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button8;
                    thunk_FUN_01c20e04();
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_0348b1b8;
                    if ((uint)pIVar3->max_length < 8) goto LAB_0348b1b0;
                    pIVar3->m_Items[7] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 0348aa94 to 0358aa9b has its CatchHandler @ 0348ab78 */
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0348b1b4;
                    /* try { // try from 0348aa9c to 0358aa9f has its CatchHandler @ 0348a51c */
                    /* try { // try from 0348aaa0 to 0358aaaf has its CatchHandler @ 0348ab6c */
                    (pIVar4->fields).handle = StringLiteral_8379;
                    /* try { // try from 0348aab0 to 0358aab7 has its CatchHandler @ 0348ab5c */
                    thunk_FUN_01c20e04();
                    /* try { // try from 0348aab8 to 0358aabf has its CatchHandler @ 0348ab58 */
                    (pIVar4->fields).Target = 0x11;
                    /* try { // try from 0348aac0 to 0358aac7 has its CatchHandler @ 0348ab54 */
                    /* try { // try from 0348aac8 to 0358aacf has its CatchHandler @ 0348ab50 */
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button13;
                    /* try { // try from 0348aad0 to 0358aad7 has its CatchHandler @ 0348ab4c */
                    thunk_FUN_01c20e04();
                    /* try { // try from 0348aad8 to 0358aadf has its CatchHandler @ 0348ab44 */
                    /* try { // try from 0348aae0 to 0358aae7 has its CatchHandler @ 0348ab3c */
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_0348b1b8;
                    /* try { // try from 0348aae8 to 0358aaef has its CatchHandler @ 0348ab2c */
                    /* try { // try from 0348aaf0 to 0358aaf7 has its CatchHandler @ 0348ab28 */
                    if ((uint)pIVar3->max_length < 9) goto LAB_0348b1b0;
                    /* try { // try from 0348aaf8 to 0358aaff has its CatchHandler @ 0348ab24 */
                    pIVar3->m_Items[8] = pIVar4;
                    /* try { // try from 0348ab00 to 0358ab07 has its CatchHandler @ 0348ab18 */
                    thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
                    /* catch() { ... } // from try @ 0348a8e4 with catch @ 0348ab08
                       try { // try from 0348ab08 to 0358ab9b has its CatchHandler @ 0348a51c */
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 0348a844 with catch @ 0348ab0c */
                    /* catch() { ... } // from try @ 0348a8b8 with catch @ 0348ab10 */
                    /* catch() { ... } // from try @ 0348a940 with catch @ 0348ab14 */
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0348ab00 with catch @ 0348ab18 */
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0348b1b4;
                    /* catch() { ... } // from try @ 0348a90c with catch @ 0348ab1c */
                    /* catch() { ... } // from try @ 0348a850 with catch @ 0348ab20 */
                    /* catch() { ... } // from try @ 0348aaf8 with catch @ 0348ab24 */
                    /* catch() { ... } // from try @ 0348aaf0 with catch @ 0348ab28 */
                    /* catch() { ... } // from try @ 0348aae8 with catch @ 0348ab2c */
                    (pIVar4->fields).handle = StringLiteral_11383;
                    /* catch() { ... } // from try @ 0348a95c with catch @ 0348ab30 */
                    thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 0348a890 with catch @ 0348ab34 */
                    /* catch() { ... } // from try @ 0348a880 with catch @ 0348ab38 */
                    (pIVar4->fields).Target = 0x12;
                    /* catch() { ... } // from try @ 0348aae0 with catch @ 0348ab3c */
                    /* catch() { ... } // from try @ 0348a7ac with catch @ 0348ab40 */
                    /* catch() { ... } // from try @ 0348aad8 with catch @ 0348ab44 */
                    /* catch() { ... } // from try @ 0348a7b8 with catch @ 0348ab48 */
                    /* catch() { ... } // from try @ 0348aad0 with catch @ 0348ab4c */
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button14;
                    /* catch() { ... } // from try @ 0348aac8 with catch @ 0348ab50 */
                    thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 0348aac0 with catch @ 0348ab54 */
                    /* catch() { ... } // from try @ 0348aab8 with catch @ 0348ab58 */
                    /* catch() { ... } // from try @ 0348aab0 with catch @ 0348ab5c */
                    /* catch() { ... } // from try @ 0348a7e8 with catch @ 0348ab60 */
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* catch() { ... } // from try @ 0348a7f8 with catch @ 0348ab64 */
                    if (lVar5 == 0) goto LAB_0348b1b8;
                    /* catch() { ... } // from try @ 0348a770 with catch @ 0348ab68 */
                    /* catch() { ... } // from try @ 0348aaa0 with catch @ 0348ab6c */
                    /* catch() { ... } // from try @ 0348a71c with catch @ 0348ab70 */
                    if ((uint)pIVar3->max_length < 10) goto LAB_0348b1b0;
                    /* catch() { ... } // from try @ 0348a720 with catch @ 0348ab74 */
                    /* catch() { ... } // from try @ 0348aa94 with catch @ 0348ab78 */
                    pIVar3->m_Items[9] = pIVar4;
                    /* catch() { ... } // from try @ 0348a6f8 with catch @ 0348ab7c */
                    /* catch() { ... } // from try @ 0348a6e4 with catch @ 0348ab80 */
                    thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0348b1b4;
                    /* try { // try from 0348ab9c to 0358ab9f has its CatchHandler @ 0348abcc */
                    /* try { // try from 0348aba0 to 0358abdb has its CatchHandler @ 0348a51c */
                    (pIVar4->fields).handle = StringLiteral_8380;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 3;
                    /* catch() { ... } // from try @ 0348ab9c with catch @ 0348abcc */
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button11;
                    thunk_FUN_01c20e04();
                    /* try { // try from 0348abdc to 0358abe3 has its CatchHandler @ 0348abf8 */
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 0348abe4 to 0358abef has its CatchHandler @ 0348a51c */
                    if (lVar5 == 0) goto LAB_0348b1b8;
                    /* try { // try from 0348abf0 to 0358abf7 has its CatchHandler @ 0348abf8 */
                    if ((uint)pIVar3->max_length < 0xb) goto LAB_0348b1b0;
                    /* catch() { ... } // from try @ 0348abdc with catch @ 0348abf8
                       catch() { ... } // from try @ 0348abf0 with catch @ 0348abf8 */
                    pIVar3->m_Items[10] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 10,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0348b1b4;
                    (pIVar4->fields).handle = StringLiteral_11384;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 6;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button12;
                    thunk_FUN_01c20e04();
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_0348b1b8;
                    if ((uint)pIVar3->max_length < 0xc) goto LAB_0348b1b0;
                    pIVar3->m_Items[0xb] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 0xb,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0348b1b4;
                    (pIVar4->fields).handle = StringLiteral_12346;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 0x14;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9;
                    thunk_FUN_01c20e04();
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_0348b1b8;
                    if ((uint)pIVar3->max_length < 0xd) goto LAB_0348b1b0;
                    pIVar3->m_Items[0xc] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 0xc,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0348b1b4;
                    (pIVar4->fields).handle = StringLiteral_3359;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 0x13;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button10;
                    thunk_FUN_01c20e04();
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_0348b1b8;
                    if ((uint)pIVar3->max_length < 0xe) goto LAB_0348b1b0;
                    pIVar3->m_Items[0xd] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 0xd,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0348b1b4;
                    (pIVar4->fields).handle = StringLiteral_12584;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 0x16;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button15;
                    thunk_FUN_01c20e04();
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_0348b1b8;
                    if ((uint)pIVar3->max_length < 0xf) goto LAB_0348b1b0;
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
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                        if (lVar5 == 0) goto LAB_0348b1b8;
                        if ((int)pIVar3->max_length != 0) {
                          pIVar3->m_Items[0] = pIVar4;
                          thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                          pIVar4 = (InControl_InputControlMapping_o *)
                                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0348b1b4;
                          (pIVar4->fields).handle = StringLiteral_8382;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).Target = 2;
                          (pIVar4->fields).Source =
                               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).Invert = true;
                          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                            element_class);
                          if (lVar5 == 0) goto LAB_0348b1b8;
                          if (1 < (uint)pIVar3->max_length) {
                            pIVar3->m_Items[1] = pIVar4;
                            thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                            pIVar4 = (InControl_InputControlMapping_o *)
                                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0348b1b4;
                            (pIVar4->fields).handle = StringLiteral_11385;
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).Target = 4;
                            (pIVar4->fields).Source =
                                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog2;
                            thunk_FUN_01c20e04();
                            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                              element_class);
                            if (lVar5 == 0) goto LAB_0348b1b8;
                            if (2 < (uint)pIVar3->max_length) {
                              pIVar3->m_Items[2] = pIVar4;
                              thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                              pIVar4 = (InControl_InputControlMapping_o *)
                                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                              if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                              goto LAB_0348b1b4;
                              (pIVar4->fields).handle = StringLiteral_11386;
                              thunk_FUN_01c20e04();
                              (pIVar4->fields).Target = 5;
                              (pIVar4->fields).Source =
                                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                   Analog3;
                              thunk_FUN_01c20e04();
                              (pIVar4->fields).Invert = true;
                              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                element_class);
                              if (lVar5 == 0) goto LAB_0348b1b8;
                              if (3 < (uint)pIVar3->max_length) {
                                pIVar3->m_Items[3] = pIVar4;
                                thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                                pIVar4 = (InControl_InputControlMapping_o *)
                                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                                if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                goto LAB_0348b1b4;
                                (pIVar4->fields).handle = StringLiteral_8383;
                                thunk_FUN_01c20e04();
                                (pIVar4->fields).Target = 0xf;
                                (pIVar4->fields).Source =
                                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                     Analog4;
                                thunk_FUN_01c20e04();
                                if ((InControl_InputControlMapping_Range_TypeInfo->_2).
                                    cctor_finished == 0) {
                                  thunk_FUN_01ba7564();
                                }
                                (pIVar4->fields).TargetRange =
                                     InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                     Positive;
                                thunk_FUN_01c20e04();
                                (pIVar4->fields).IgnoreInitialZeroValue = true;
                                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                  element_class);
                                if (lVar5 == 0) goto LAB_0348b1b8;
                                if (4 < (uint)pIVar3->max_length) {
                                  pIVar3->m_Items[4] = pIVar4;
                                  thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                                  pIVar4 = (InControl_InputControlMapping_o *)
                                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo
                                                             );
                                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                  goto LAB_0348b1b4;
                                  (pIVar4->fields).handle = StringLiteral_11387;
                                  thunk_FUN_01c20e04();
                                  (pIVar4->fields).Target = 0x10;
                                  (pIVar4->fields).Source =
                                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                       Analog5;
                                  thunk_FUN_01c20e04();
                                  (pIVar4->fields).TargetRange =
                                       InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                       Positive;
                                  thunk_FUN_01c20e04();
                                  (pIVar4->fields).IgnoreInitialZeroValue = true;
                                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                    element_class);
                                  if (lVar5 == 0) goto LAB_0348b1b8;
                                  if (5 < (uint)pIVar3->max_length) {
                                    pIVar3->m_Items[5] = pIVar4;
                                    thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                                    ppIVar6 = &(__this->fields).super.
                                               _AnalogMappings_k__BackingField;
                                    *ppIVar6 = pIVar3;
                                    thunk_FUN_01c20e04(ppIVar6,pIVar3);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto LAB_0348b1b0;
                      }
                    }
                  }
                }
                goto LAB_0348b1b4;
              }
            }
          }
        }
      }
    }
LAB_0348b1b0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_0348b1b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

