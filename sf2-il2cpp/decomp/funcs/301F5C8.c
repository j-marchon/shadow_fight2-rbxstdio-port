// InControl.PlayStation4Profile$$.ctor @ RVA 0x301F5C8

void InControl_PlayStation4Profile___ctor
               (InControl_PlayStation4Profile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c3c & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_4361);
    FUN_01bab630(&StringLiteral_8380);
    FUN_01bab630(&StringLiteral_8383);
    FUN_01bab630(&StringLiteral_5029);
    FUN_01bab630(&StringLiteral_11387);
    FUN_01bab630(&StringLiteral_8381);
    FUN_01bab630(&StringLiteral_10300);
    FUN_01bab630(&StringLiteral_12324);
    FUN_01bab630(&StringLiteral_10056);
    FUN_01bab630(&StringLiteral_5030);
    FUN_01bab630(&StringLiteral_17379);
    FUN_01bab630(&StringLiteral_11386);
    FUN_01bab630(&StringLiteral_11383);
    FUN_01bab630(&StringLiteral_5031);
    FUN_01bab630(&StringLiteral_8379);
    FUN_01bab630(&StringLiteral_4900);
    FUN_01bab630(&StringLiteral_10296);
    FUN_01bab630(&StringLiteral_11385);
    FUN_01bab630(&StringLiteral_13920);
    FUN_01bab630(&StringLiteral_5028);
    FUN_01bab630(&StringLiteral_8382);
    FUN_01bab630(&StringLiteral_9974);
    FUN_01bab630(&StringLiteral_11384);
    DAT_04565c3c = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_10296;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_10300;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length == 0) {
LAB_0312031c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar1->m_Items[0] = StringLiteral_10056;
    thunk_FUN_01c20e04();
    ppSVar2 = &(__this->fields).super.SupportedPlatforms;
    *ppSVar2 = pSVar1;
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
    if (pSVar1 != (System_String_array *)0x0) {
      if ((int)pSVar1->max_length == 0) goto LAB_0312031c;
      pSVar1->m_Items[0] = StringLiteral_17379;
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).super.JoystickRegex;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      pIVar3 = (InControl_InputControlMapping_array *)
               FUN_01bab718(InControl_InputControlMapping___TypeInfo,9);
      pIVar4 = (InControl_InputControlMapping_o *)
               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
      if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
        (pIVar4->fields).handle = StringLiteral_4900;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 0xb;
        (pIVar4->fields).Source = InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0
        ;
        thunk_FUN_01c20e04();
        if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) {
LAB_03120310:
            uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar7,0);
          }
          if ((int)pIVar3->max_length == 0) goto LAB_0312031c;
          pIVar3->m_Items[0] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0312030c;
          (pIVar4->fields).handle = StringLiteral_4361;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xc;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button1;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_03120310;
          if ((uint)pIVar3->max_length < 2) goto LAB_0312031c;
          pIVar3->m_Items[1] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0312030c;
          (pIVar4->fields).handle = StringLiteral_12324;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xd;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button2;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_03120310;
          if ((uint)pIVar3->max_length < 3) goto LAB_0312031c;
          pIVar3->m_Items[2] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0312030c;
          (pIVar4->fields).handle = StringLiteral_13920;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xe;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button3;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_03120310;
          if ((uint)pIVar3->max_length < 4) goto LAB_0312031c;
          pIVar3->m_Items[3] = pIVar4;
                    /* try { // try from 0311fa40 to 0321fb03 has its CatchHandler @ 0311fa40
                       catch() { ... } // from try @ 0311fa40 with catch @ 0311fa40
                       catch() { ... } // from try @ 0311fb0c with catch @ 0311fa40
                       catch() { ... } // from try @ 0311fd50 with catch @ 0311fa40
                       catch() { ... } // from try @ 0311fd90 with catch @ 0311fa40 */
          thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0312030c;
          (pIVar4->fields).handle = StringLiteral_8379;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x11;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button4;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_03120310;
          if ((uint)pIVar3->max_length < 5) goto LAB_0312031c;
          pIVar3->m_Items[4] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0312030c;
          (pIVar4->fields).handle = StringLiteral_11383;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x12;
                    /* try { // try from 0311fb04 to 0321fb0b has its CatchHandler @ 0311fd20 */
                    /* try { // try from 0311fb0c to 0321fd37 has its CatchHandler @ 0311fa40 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_03120310;
          if ((uint)pIVar3->max_length < 6) goto LAB_0312031c;
          pIVar3->m_Items[5] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0312030c;
          (pIVar4->fields).handle = StringLiteral_9974;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x1b;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button7;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_03120310;
          if ((uint)pIVar3->max_length < 7) goto LAB_0312031c;
          pIVar3->m_Items[6] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0312030c;
          (pIVar4->fields).handle = StringLiteral_8380;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 3;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button8;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_03120310;
          if ((uint)pIVar3->max_length < 8) goto LAB_0312031c;
          pIVar3->m_Items[7] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0312030c;
          (pIVar4->fields).handle = StringLiteral_11384;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 6;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_03120310;
          if ((uint)pIVar3->max_length < 9) goto LAB_0312031c;
          pIVar3->m_Items[8] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
          ppIVar6 = &(__this->fields).super._ButtonMappings_k__BackingField;
          *ppIVar6 = pIVar3;
          thunk_FUN_01c20e04(ppIVar6,pIVar3);
          pIVar3 = (InControl_InputControlMapping_array *)
                   FUN_01bab718(InControl_InputControlMapping___TypeInfo,10);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
            (pIVar4->fields).handle = StringLiteral_8383;
            thunk_FUN_01c20e04();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0311fb04 with catch @ 0311fd20
                        */
            (pIVar4->fields).Target = 0xf;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog7;
                    /* try { // try from 0311fd38 to 0321fd4f has its CatchHandler @ 0311fd88 */
            thunk_FUN_01c20e04();
            if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 0311fd50 to 0321fd77 has its CatchHandler @ 0311fa40 */
              if (lVar5 == 0) goto LAB_03120310;
              if ((int)pIVar3->max_length != 0) {
                pIVar3->m_Items[0] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 0311fd78 to 0321fd87 has its CatchHandler @ 0311fd88 */
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0312030c;
                    /* catch() { ... } // from try @ 0311fd38 with catch @ 0311fd88
                       catch() { ... } // from try @ 0311fd78 with catch @ 0311fd88 */
                    /* try { // try from 0311fd8c to 0321fd8f has its CatchHandler @ 0311fd98 */
                    /* try { // try from 0311fd90 to 0321fd9b has its CatchHandler @ 0311fa40 */
                (pIVar4->fields).handle = StringLiteral_11387;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0311fd8c with catch @ 0311fd98
                        */
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 0x10;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog2;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Invert = true;
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) goto LAB_03120310;
                if (1 < (uint)pIVar3->max_length) {
                  pIVar3->m_Items[1] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0312030c;
                  (pIVar4->fields).handle = StringLiteral_8381;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Target = 1;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog0;
                  thunk_FUN_01c20e04();
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_03120310;
                  if (2 < (uint)pIVar3->max_length) {
                    pIVar3->m_Items[2] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0312030c;
                    (pIVar4->fields).handle = StringLiteral_8382;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 2;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Invert = true;
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_03120310;
                    if (3 < (uint)pIVar3->max_length) {
                      pIVar3->m_Items[3] = pIVar4;
                      thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0312030c;
                      (pIVar4->fields).handle = StringLiteral_11385;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).Target = 4;
                      (pIVar4->fields).Source =
                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog3;
                      thunk_FUN_01c20e04();
                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                      if (lVar5 == 0) goto LAB_03120310;
                      if (4 < (uint)pIVar3->max_length) {
                        pIVar3->m_Items[4] = pIVar4;
                        thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                        pIVar4 = (InControl_InputControlMapping_o *)
                                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0312030c;
                        (pIVar4->fields).handle = StringLiteral_11386;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Target = 5;
                        (pIVar4->fields).Source =
                             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Invert = true;
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                        if (lVar5 == 0) goto LAB_03120310;
                        if (5 < (uint)pIVar3->max_length) {
                          pIVar3->m_Items[5] = pIVar4;
                          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                          pIVar4 = (InControl_InputControlMapping_o *)
                                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0312030c;
                          (pIVar4->fields).handle = StringLiteral_5029;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).Target = 9;
                          (pIVar4->fields).Source =
                               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
                          thunk_FUN_01c20e04();
                    /* try { // try from 03120064 to 032200c7 has its CatchHandler @ 03120064
                       catch() { ... } // from try @ 03120064 with catch @ 03120064
                       catch() { ... } // from try @ 0312015c with catch @ 03120064
                       catch() { ... } // from try @ 031201d0 with catch @ 03120064
                       catch() { ... } // from try @ 03120270 with catch @ 03120064
                       catch() { ... } // from try @ 03120320 with catch @ 03120064 */
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
                          if (lVar5 == 0) goto LAB_03120310;
                          if (6 < (uint)pIVar3->max_length) {
                    /* try { // try from 031200c8 to 032200d3 has its CatchHandler @ 0312028c */
                            pIVar3->m_Items[6] = pIVar4;
                            thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                            pIVar4 = (InControl_InputControlMapping_o *)
                                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 031200e8 to 032200ff has its CatchHandler @ 03120294 */
                            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_0312030c;
                            (pIVar4->fields).handle = StringLiteral_5030;
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).Target = 10;
                    /* try { // try from 03120118 to 03220123 has its CatchHandler @ 03120280 */
                            (pIVar4->fields).Source =
                                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).SourceRange =
                                 InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                 Positive;
                            thunk_FUN_01c20e04();
                    /* try { // try from 0312013c to 0322014b has its CatchHandler @ 03120274 */
                            (pIVar4->fields).TargetRange =
                                 InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                 Positive;
                    /* try { // try from 03120150 to 0322015b has its CatchHandler @ 03120270 */
                            thunk_FUN_01c20e04();
                    /* try { // try from 0312015c to 032201cb has its CatchHandler @ 03120064 */
                            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                              element_class);
                            if (lVar5 == 0) goto LAB_03120310;
                            if (7 < (uint)pIVar3->max_length) {
                              pIVar3->m_Items[7] = pIVar4;
                              thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
                              pIVar4 = (InControl_InputControlMapping_o *)
                                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                              if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                              goto LAB_0312030c;
                              (pIVar4->fields).handle = StringLiteral_5031;
                              thunk_FUN_01c20e04();
                              (pIVar4->fields).Target = 7;
                    /* try { // try from 031201cc to 032201cf has its CatchHandler @ 03120290 */
                              (pIVar4->fields).Source =
                                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                   Analog6;
                    /* try { // try from 031201d0 to 032201d7 has its CatchHandler @ 03120064 */
                              thunk_FUN_01c20e04();
                    /* try { // try from 031201d8 to 0322021f has its CatchHandler @ 03120288 */
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
                              if (lVar5 == 0) goto LAB_03120310;
                    /* try { // try from 03120220 to 03220223 has its CatchHandler @ 03120284 */
                              if (8 < (uint)pIVar3->max_length) {
                    /* try { // try from 03120224 to 03220227 has its CatchHandler @ 0312027c */
                    /* try { // try from 03120228 to 0322026f has its CatchHandler @ 03120278 */
                                pIVar3->m_Items[8] = pIVar4;
                                thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
                                pIVar4 = (InControl_InputControlMapping_o *)
                                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                                if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                goto LAB_0312030c;
                                (pIVar4->fields).handle = StringLiteral_5028;
                                thunk_FUN_01c20e04();
                                (pIVar4->fields).Target = 8;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03120150 with catch @ 03120270
                       try { // try from 03120270 to 032202ab has its CatchHandler @ 03120064 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0312013c with catch @ 03120274
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03120228 with catch @ 03120278
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03120224 with catch @ 0312027c
                        */
                                (pIVar4->fields).Source =
                                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                     Analog6;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03120118 with catch @ 03120280
                        */
                                thunk_FUN_01c20e04();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03120220 with catch @ 03120284
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031201d8 with catch @ 03120288
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031200c8 with catch @ 0312028c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031201cc with catch @ 03120290
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031200e8 with catch @ 03120294
                        */
                                (pIVar4->fields).SourceRange =
                                     InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                     Negative;
                                thunk_FUN_01c20e04();
                    /* try { // try from 031202ac to 032202af has its CatchHandler @ 031202c0 */
                                (pIVar4->fields).TargetRange =
                                     InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                     Negative;
                                thunk_FUN_01c20e04();
                                (pIVar4->fields).Invert = true;
                    /* catch() { ... } // from try @ 031202ac with catch @ 031202c0 */
                                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                  element_class);
                                if (lVar5 == 0) goto LAB_03120310;
                                if (9 < (uint)pIVar3->max_length) {
                                  pIVar3->m_Items[9] = pIVar4;
                                  thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
                                  ppIVar6 = &(__this->fields).super._AnalogMappings_k__BackingField;
                                  *ppIVar6 = pIVar3;
                    /* try { // try from 031202f8 to 0322031f has its CatchHandler @ 03120334 */
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
              goto LAB_0312031c;
            }
          }
        }
      }
    }
  }
LAB_0312030c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

