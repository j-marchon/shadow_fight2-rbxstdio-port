// InControl.ExecutionerXProfile$$.ctor @ RVA 0x3523B48

void InControl_ExecutionerXProfile___ctor
               (InControl_ExecutionerXProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
  if ((DAT_045689ef & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_8380);
    FUN_01bab630(&StringLiteral_8383);
    FUN_01bab630(&StringLiteral_2019);
    FUN_01bab630(&StringLiteral_5029);
    FUN_01bab630(&StringLiteral_1943);
    FUN_01bab630(&StringLiteral_6038);
    FUN_01bab630(&StringLiteral_14965);
    FUN_01bab630(&StringLiteral_11387);
    FUN_01bab630(&StringLiteral_8381);
    FUN_01bab630(&StringLiteral_5030);
    FUN_01bab630(&StringLiteral_2036);
    FUN_01bab630(&StringLiteral_11386);
    FUN_01bab630(&StringLiteral_9686);
    FUN_01bab630(&StringLiteral_12346);
    FUN_01bab630(&StringLiteral_11383);
                    /* try { // try from 03623c68 to 03723e17 has its CatchHandler @ 03623c68
                       catch() { ... } // from try @ 03623c68 with catch @ 03623c68
                       catch() { ... } // from try @ 03623f6c with catch @ 03623c68
                       catch() { ... } // from try @ 03623f98 with catch @ 03623c68
                       catch() { ... } // from try @ 03624014 with catch @ 03623c68
                       catch() { ... } // from try @ 03624068 with catch @ 03623c68
                       catch() { ... } // from try @ 036240a8 with catch @ 03623c68 */
    FUN_01bab630(&StringLiteral_15294);
    FUN_01bab630(&StringLiteral_5031);
    FUN_01bab630(&StringLiteral_15293);
    FUN_01bab630(&StringLiteral_8379);
    FUN_01bab630(&StringLiteral_11385);
    FUN_01bab630(&StringLiteral_5028);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_8382);
    FUN_01bab630(&StringLiteral_9974);
    FUN_01bab630(&StringLiteral_11384);
    DAT_045689ef = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_6038;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_6038;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,2);
  if (pSVar1 == (System_String_array *)0x0) goto LAB_03624964;
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = StringLiteral_14965;
    thunk_FUN_01c20e04(pSVar1->m_Items);
    if (1 < (uint)pSVar1->max_length) {
      pSVar1->m_Items[1] = StringLiteral_9686;
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).super.SupportedPlatforms;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,2);
      if (pSVar1 == (System_String_array *)0x0) goto LAB_03624964;
      if ((int)pSVar1->max_length != 0) {
        pSVar1->m_Items[0] = StringLiteral_15293;
        thunk_FUN_01c20e04(pSVar1->m_Items);
        if (1 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[1] = StringLiteral_15294;
          thunk_FUN_01c20e04();
          ppSVar2 = &(__this->fields).super.JoystickNames;
          *ppSVar2 = pSVar1;
          thunk_FUN_01c20e04(ppSVar2,pSVar1);
                    /* try { // try from 03623e18 to 03723e1f has its CatchHandler @ 03624044 */
          pIVar3 = (InControl_InputControlMapping_array *)
                   FUN_01bab718(InControl_InputControlMapping___TypeInfo,0xc);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03623e38 to 03723e47 has its CatchHandler @ 03624048 */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
            (pIVar4->fields).handle = StringLiteral_2019;
            thunk_FUN_01c20e04();
                    /* try { // try from 03623e58 to 03723e63 has its CatchHandler @ 0362402c */
            (pIVar4->fields).Target = 0xb;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button2;
            thunk_FUN_01c20e04();
            if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
                    /* try { // try from 03623e7c to 03723e7f has its CatchHandler @ 03624024 */
                    /* try { // try from 03623e80 to 03723ea7 has its CatchHandler @ 0362404c */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) {
LAB_0362496c:
                uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar7,0);
              }
              if ((int)pIVar3->max_length == 0) goto LAB_03624968;
              pIVar3->m_Items[0] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03623eb4 to 03723ebb has its CatchHandler @ 03624040 */
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03624964;
                    /* try { // try from 03623ed0 to 03723ed7 has its CatchHandler @ 03623f78 */
              (pIVar4->fields).handle = StringLiteral_1943;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0xc;
                    /* try { // try from 03623ef0 to 03723ef7 has its CatchHandler @ 03623f74 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button1;
              thunk_FUN_01c20e04();
                    /* try { // try from 03623f04 to 03723f33 has its CatchHandler @ 03623f7c */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_0362496c;
              if ((uint)pIVar3->max_length < 2) goto LAB_03624968;
              pIVar3->m_Items[1] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03624964;
                    /* try { // try from 03623f4c to 03723f53 has its CatchHandler @ 0362403c */
              (pIVar4->fields).handle = StringLiteral_2036;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0xd;
                    /* try { // try from 03623f68 to 03723f6b has its CatchHandler @ 03623f70 */
                    /* try { // try from 03623f6c to 03723f93 has its CatchHandler @ 03623c68 */
                    /* catch() { ... } // from try @ 03623f68 with catch @ 03623f70 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button3;
                    /* catch() { ... } // from try @ 03623ef0 with catch @ 03623f74 */
              thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 03623ed0 with catch @ 03623f78 */
                    /* catch() { ... } // from try @ 03623f04 with catch @ 03623f7c */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_0362496c;
                    /* try { // try from 03623f94 to 03723f97 has its CatchHandler @ 03624018 */
              if ((uint)pIVar3->max_length < 3) goto LAB_03624968;
                    /* try { // try from 03623f98 to 03723fe7 has its CatchHandler @ 03623c68 */
              pIVar3->m_Items[2] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03624964;
              (pIVar4->fields).handle = StringLiteral_1606;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0xe;
                    /* try { // try from 03623fe8 to 03723fff has its CatchHandler @ 036240bc */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0;
              thunk_FUN_01c20e04();
                    /* try { // try from 03624000 to 03724003 has its CatchHandler @ 03624038 */
                    /* try { // try from 03624004 to 03724007 has its CatchHandler @ 03624034 */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 03624008 to 0372400b has its CatchHandler @ 03624030 */
              if (lVar5 == 0) goto LAB_0362496c;
                    /* try { // try from 0362400c to 03724013 has its CatchHandler @ 03624028 */
                    /* try { // try from 03624014 to 03724063 has its CatchHandler @ 03623c68 */
              if ((uint)pIVar3->max_length < 4) goto LAB_03624968;
                    /* catch() { ... } // from try @ 03623f94 with catch @ 03624018 */
              pIVar3->m_Items[3] = pIVar4;
                    /* catch() { ... } // from try @ 03623e7c with catch @ 03624024 */
              thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                    /* catch() { ... } // from try @ 0362400c with catch @ 03624028 */
                    /* catch() { ... } // from try @ 03623e58 with catch @ 0362402c */
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 03624008 with catch @ 03624030 */
                    /* catch() { ... } // from try @ 03624004 with catch @ 03624034 */
                    /* catch() { ... } // from try @ 03624000 with catch @ 03624038 */
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03623f4c with catch @ 0362403c */
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03624964;
                    /* catch() { ... } // from try @ 03623eb4 with catch @ 03624040 */
                    /* catch() { ... } // from try @ 03623e18 with catch @ 03624044 */
                    /* catch() { ... } // from try @ 03623e38 with catch @ 03624048 */
                    /* catch() { ... } // from try @ 03623e80 with catch @ 0362404c */
              (pIVar4->fields).handle = StringLiteral_8379;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0x11;
                    /* try { // try from 03624064 to 03724067 has its CatchHandler @ 03624090 */
                    /* try { // try from 03624068 to 0372409f has its CatchHandler @ 03623c68 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button6;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_0362496c;
                    /* catch() { ... } // from try @ 03624064 with catch @ 03624090 */
              if ((uint)pIVar3->max_length < 5) goto LAB_03624968;
              pIVar3->m_Items[4] = pIVar4;
                    /* try { // try from 036240a0 to 037240a7 has its CatchHandler @ 036240bc */
              thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                    /* try { // try from 036240a8 to 037240b3 has its CatchHandler @ 03623c68 */
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 036240b4 to 037240bb has its CatchHandler @ 036240bc */
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03623fe8 with catch @ 036240bc
                       catch() { ... } // from try @ 036240a0 with catch @ 036240bc
                       catch() { ... } // from try @ 036240b4 with catch @ 036240bc */
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03624964;
                    /* try { // try from 036240c0 to 0372414f has its CatchHandler @ 036240c0
                       catch() { ... } // from try @ 036240c0 with catch @ 036240c0
                       catch() { ... } // from try @ 03624260 with catch @ 036240c0
                       catch() { ... } // from try @ 03624300 with catch @ 036240c0
                       catch() { ... } // from try @ 036243a8 with catch @ 036240c0
                       catch() { ... } // from try @ 03624468 with catch @ 036240c0
                       catch() { ... } // from try @ 03624508 with catch @ 036240c0 */
              (pIVar4->fields).handle = StringLiteral_11383;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0x12;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button7;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_0362496c;
              if ((uint)pIVar3->max_length < 6) goto LAB_03624968;
              pIVar3->m_Items[5] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03624964;
                    /* try { // try from 03624150 to 03724167 has its CatchHandler @ 036243c8 */
              (pIVar4->fields).handle = StringLiteral_12346;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0x14;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button11;
                    /* try { // try from 03624174 to 03724187 has its CatchHandler @ 036243b8 */
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_0362496c;
                    /* try { // try from 03624194 to 0372419b has its CatchHandler @ 03624300 */
              if ((uint)pIVar3->max_length < 7) goto LAB_03624968;
              pIVar3->m_Items[6] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03624964;
              (pIVar4->fields).handle = StringLiteral_9974;
                    /* try { // try from 036241d4 to 037241fb has its CatchHandler @ 036243e4 */
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0x15;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button8;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_0362496c;
              if ((uint)pIVar3->max_length < 8) goto LAB_03624968;
              pIVar3->m_Items[7] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03624238 to 0372425f has its CatchHandler @ 036243d8 */
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03624964;
              (pIVar4->fields).handle = StringLiteral_8383;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0xf;
                    /* try { // try from 03624260 to 037242eb has its CatchHandler @ 036240c0 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button4;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_0362496c;
              if ((uint)pIVar3->max_length < 9) goto LAB_03624968;
              pIVar3->m_Items[8] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03624964;
              (pIVar4->fields).handle = StringLiteral_11387;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0x10;
                    /* try { // try from 036242ec to 037242ef has its CatchHandler @ 03624304 */
                    /* try { // try from 036242f0 to 037242f7 has its CatchHandler @ 036243d8 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
              thunk_FUN_01c20e04();
                    /* try { // try from 036242f8 to 037242ff has its CatchHandler @ 036243e4 */
                    /* catch() { ... } // from try @ 03624194 with catch @ 03624300
                       try { // try from 03624300 to 03724323 has its CatchHandler @ 036240c0 */
                    /* catch() { ... } // from try @ 036242ec with catch @ 03624304 */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_0362496c;
              if ((uint)pIVar3->max_length < 10) goto LAB_03624968;
              pIVar3->m_Items[9] = pIVar4;
                    /* try { // try from 03624324 to 03724327 has its CatchHandler @ 036243a8 */
              thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03624964;
              (pIVar4->fields).handle = StringLiteral_8380;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 3;
                    /* try { // try from 03624370 to 037243a7 has its CatchHandler @ 0362451c */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_0362496c;
              if ((uint)pIVar3->max_length < 0xb) goto LAB_03624968;
              pIVar3->m_Items[10] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 10,pIVar4);
                    /* catch() { ... } // from try @ 03624324 with catch @ 036243a8
                       try { // try from 036243a8 to 037243ff has its CatchHandler @ 036240c0 */
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 03624174 with catch @ 036243b8 */
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03624964;
                    /* catch() { ... } // from try @ 03624150 with catch @ 036243c8 */
              (pIVar4->fields).handle = StringLiteral_11384;
              thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 03624238 with catch @ 036243d8
                       catch() { ... } // from try @ 036242f0 with catch @ 036243d8 */
              (pIVar4->fields).Target = 6;
                    /* catch() { ... } // from try @ 036241d4 with catch @ 036243e4
                       catch() { ... } // from try @ 036242f8 with catch @ 036243e4 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button10;
              thunk_FUN_01c20e04();
                    /* try { // try from 03624400 to 03724403 has its CatchHandler @ 03624498 */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_0362496c;
              if ((uint)pIVar3->max_length < 0xc) goto LAB_03624968;
              pIVar3->m_Items[0xb] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 0xb,pIVar4);
              ppIVar6 = &(__this->fields).super._ButtonMappings_k__BackingField;
              *ppIVar6 = pIVar3;
              thunk_FUN_01c20e04(ppIVar6,pIVar3);
                    /* try { // try from 03624440 to 03724467 has its CatchHandler @ 0362451c */
              pIVar3 = (InControl_InputControlMapping_array *)
                       FUN_01bab718(InControl_InputControlMapping___TypeInfo,8);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
                    /* try { // try from 03624468 to 0372447f has its CatchHandler @ 036240c0 */
                (pIVar4->fields).handle = StringLiteral_8381;
                thunk_FUN_01c20e04();
                    /* try { // try from 03624480 to 03724483 has its CatchHandler @ 036244a8 */
                (pIVar4->fields).Target = 1;
                    /* try { // try from 03624490 to 03724507 has its CatchHandler @ 0362451c */
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog0;
                    /* catch() { ... } // from try @ 03624400 with catch @ 03624498 */
                thunk_FUN_01c20e04();
                if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
                    /* catch() { ... } // from try @ 03624480 with catch @ 036244a8 */
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_0362496c;
                  if ((int)pIVar3->max_length != 0) {
                    pIVar3->m_Items[0] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03624964;
                    (pIVar4->fields).handle = StringLiteral_8382;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 2;
                    /* try { // try from 03624508 to 03724513 has its CatchHandler @ 036240c0 */
                    /* try { // try from 03624514 to 0372451b has its CatchHandler @ 0362451c */
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
                    thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 03624370 with catch @ 0362451c
                       catch() { ... } // from try @ 03624440 with catch @ 0362451c
                       catch() { ... } // from try @ 03624490 with catch @ 0362451c
                       catch() { ... } // from try @ 03624514 with catch @ 0362451c */
                    (pIVar4->fields).Invert = true;
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_0362496c;
                    if (1 < (uint)pIVar3->max_length) {
                      pIVar3->m_Items[1] = pIVar4;
                      thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03624964;
                      (pIVar4->fields).handle = StringLiteral_11385;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).Target = 4;
                      (pIVar4->fields).Source =
                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog2;
                      thunk_FUN_01c20e04();
                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                      if (lVar5 == 0) goto LAB_0362496c;
                      if (2 < (uint)pIVar3->max_length) {
                        pIVar3->m_Items[2] = pIVar4;
                        thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                        pIVar4 = (InControl_InputControlMapping_o *)
                                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03624964;
                        (pIVar4->fields).handle = StringLiteral_11386;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Target = 5;
                        (pIVar4->fields).Source =
                             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog3;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Invert = true;
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                        if (lVar5 == 0) goto LAB_0362496c;
                        if (3 < (uint)pIVar3->max_length) {
                          pIVar3->m_Items[3] = pIVar4;
                          thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                          pIVar4 = (InControl_InputControlMapping_o *)
                                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03624964;
                          (pIVar4->fields).handle = StringLiteral_5029;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).Target = 9;
                          (pIVar4->fields).Source =
                               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog6;
                          thunk_FUN_01c20e04();
                          if ((InControl_InputControlMapping_Range_TypeInfo->_2).cctor_finished == 0
                             ) {
                            thunk_FUN_01ba7564();
                          }
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
                          if (lVar5 == 0) goto LAB_0362496c;
                          if (4 < (uint)pIVar3->max_length) {
                            pIVar3->m_Items[4] = pIVar4;
                            thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                            pIVar4 = (InControl_InputControlMapping_o *)
                                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03624964;
                            (pIVar4->fields).handle = StringLiteral_5030;
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).Target = 10;
                            (pIVar4->fields).Source =
                                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog6;
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
                            if (lVar5 == 0) goto LAB_0362496c;
                            if (5 < (uint)pIVar3->max_length) {
                              pIVar3->m_Items[5] = pIVar4;
                              thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                              pIVar4 = (InControl_InputControlMapping_o *)
                                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                              if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                              goto LAB_03624964;
                              (pIVar4->fields).handle = StringLiteral_5028;
                              thunk_FUN_01c20e04();
                              (pIVar4->fields).Target = 8;
                              (pIVar4->fields).Source =
                                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                   Analog7;
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
                              if (lVar5 == 0) goto LAB_0362496c;
                              if (6 < (uint)pIVar3->max_length) {
                                pIVar3->m_Items[6] = pIVar4;
                                thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                                pIVar4 = (InControl_InputControlMapping_o *)
                                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                                if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                goto LAB_03624964;
                                (pIVar4->fields).handle = StringLiteral_5031;
                                thunk_FUN_01c20e04();
                                (pIVar4->fields).Target = 7;
                                (pIVar4->fields).Source =
                                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                     Analog7;
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
                                if (lVar5 == 0) goto LAB_0362496c;
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
                  goto LAB_03624968;
                }
              }
            }
          }
LAB_03624964:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
    }
  }
LAB_03624968:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

