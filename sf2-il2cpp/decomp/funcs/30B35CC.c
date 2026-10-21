// InControl.PlayStationVitaPSMProfile$$.ctor @ RVA 0x30B35CC

void InControl_PlayStationVitaPSMProfile___ctor
               (InControl_PlayStationVitaPSMProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 031b34e8 with catch @ 031b35cc */
                    /* catch() { ... } // from try @ 031b3328 with catch @ 031b35d0 */
                    /* catch() { ... } // from try @ 031b34d8 with catch @ 031b35d4 */
                    /* catch() { ... } // from try @ 031b33a0 with catch @ 031b35d8 */
                    /* catch() { ... } // from try @ 031b33d8 with catch @ 031b35dc */
                    /* catch() { ... } // from try @ 031b35a4 with catch @ 031b35e0 */
                    /* catch() { ... } // from try @ 031b3420 with catch @ 031b35e4
                       catch() { ... } // from try @ 031b35a8 with catch @ 031b35e4 */
                    /* catch() { ... } // from try @ 031b3534 with catch @ 031b35e8 */
                    /* catch() { ... } // from try @ 031b3530 with catch @ 031b35ec */
                    /* catch() { ... } // from try @ 031b3310 with catch @ 031b35f0 */
  if ((DAT_045661f2 & 1) == 0) {
                    /* catch() { ... } // from try @ 031b34c0 with catch @ 031b35f4 */
                    /* catch() { ... } // from try @ 031b34bc with catch @ 031b35f8 */
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 031b3610 to 032b3627 has its CatchHandler @ 031b36d4 */
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
                    /* try { // try from 031b3628 to 032b36bb has its CatchHandler @ 031b3244 */
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_4361);
    FUN_01bab630(&StringLiteral_10059);
    FUN_01bab630(&StringLiteral_5029);
    FUN_01bab630(&StringLiteral_11786);
    FUN_01bab630(&StringLiteral_8381);
    FUN_01bab630(&StringLiteral_10304);
    FUN_01bab630(&StringLiteral_12324);
    FUN_01bab630(&StringLiteral_5030);
    FUN_01bab630(&StringLiteral_10058);
    FUN_01bab630(&StringLiteral_11386);
    FUN_01bab630(&StringLiteral_12346);
                    /* try { // try from 031b36bc to 032b36cb has its CatchHandler @ 031b36d4 */
    FUN_01bab630(&StringLiteral_10054);
    FUN_01bab630(&StringLiteral_11383);
                    /* try { // try from 031b36cc to 032b36d7 has its CatchHandler @ 031b3244 */
                    /* catch() { ... } // from try @ 031b3610 with catch @ 031b36d4
                       catch() { ... } // from try @ 031b36bc with catch @ 031b36d4 */
    FUN_01bab630(&StringLiteral_5031);
                    /* try { // try from 031b36d8 to 032b36db has its CatchHandler @ 031b36e4 */
                    /* try { // try from 031b36dc to 032b36e7 has its CatchHandler @ 031b3244 */
    FUN_01bab630(&StringLiteral_8379);
                    /* catch() { ... } // from try @ 031b36d8 with catch @ 031b36e4 */
    FUN_01bab630(&StringLiteral_4900);
    FUN_01bab630(&StringLiteral_11385);
    FUN_01bab630(&StringLiteral_10303);
    FUN_01bab630(&StringLiteral_13920);
    FUN_01bab630(&StringLiteral_5028);
    FUN_01bab630(&StringLiteral_8382);
    FUN_01bab630(&StringLiteral_10057);
    FUN_01bab630(&StringLiteral_10055);
    DAT_045661f2 = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_10303;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_10304;
  thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 031b37fc with catch @ 031b37a4
                       catch() { ... } // from try @ 031b3830 with catch @ 031b37a4
                       catch() { ... } // from try @ 031b3864 with catch @ 031b37a4
                       catch() { ... } // from try @ 031b390c with catch @ 031b37a4 */
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,4);
  if (pSVar1 == (System_String_array *)0x0) goto LAB_031b4200;
  if ((int)pSVar1->max_length != 0) {
                    /* try { // try from 031b37cc to 032b37d7 has its CatchHandler @ 031b3830 */
    pSVar1->m_Items[0] = StringLiteral_10058;
    thunk_FUN_01c20e04(pSVar1->m_Items);
    if (1 < (uint)pSVar1->max_length) {
                    /* try { // try from 031b37f0 to 032b37fb has its CatchHandler @ 031b3834 */
      pSVar1->m_Items[1] = StringLiteral_10057;
                    /* try { // try from 031b37fc to 032b382b has its CatchHandler @ 031b37a4 */
      thunk_FUN_01c20e04(pSVar1->m_Items + 1);
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = StringLiteral_10054;
        thunk_FUN_01c20e04(pSVar1->m_Items + 2);
                    /* try { // try from 031b382c to 032b382f has its CatchHandler @ 031b3834 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031b37cc with catch @ 031b3830
                       try { // try from 031b3830 to 032b384b has its CatchHandler @ 031b37a4 */
        if (3 < (uint)pSVar1->max_length) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031b37f0 with catch @ 031b3834
                       catch(type#1 @ 03f99f68) { ... } // from try @ 031b382c with catch @ 031b3834
                        */
          pSVar1->m_Items[3] = StringLiteral_10059;
          thunk_FUN_01c20e04();
          ppSVar2 = &(__this->fields).super.SupportedPlatforms;
                    /* try { // try from 031b384c to 032b3863 has its CatchHandler @ 031b3904 */
          *ppSVar2 = pSVar1;
          thunk_FUN_01c20e04(ppSVar2,pSVar1);
                    /* try { // try from 031b3864 to 032b38f3 has its CatchHandler @ 031b37a4 */
          pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
          if (pSVar1 != (System_String_array *)0x0) {
            if ((int)pSVar1->max_length == 0) goto LAB_031b4204;
            pSVar1->m_Items[0] = StringLiteral_10055;
            thunk_FUN_01c20e04();
            ppSVar2 = &(__this->fields).super.JoystickNames;
            *ppSVar2 = pSVar1;
            thunk_FUN_01c20e04(ppSVar2,pSVar1);
            pIVar3 = (InControl_InputControlMapping_array *)
                     FUN_01bab718(InControl_InputControlMapping___TypeInfo,8);
            pIVar4 = (InControl_InputControlMapping_o *)
                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
            if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
              (pIVar4->fields).handle = StringLiteral_4900;
              thunk_FUN_01c20e04();
                    /* try { // try from 031b38f4 to 032b3903 has its CatchHandler @ 031b3904 */
              (pIVar4->fields).Target = 0xb;
                    /* catch() { ... } // from try @ 031b384c with catch @ 031b3904
                       catch() { ... } // from try @ 031b38f4 with catch @ 031b3904 */
                    /* try { // try from 031b3908 to 032b390b has its CatchHandler @ 031b3914 */
                    /* try { // try from 031b390c to 032b3917 has its CatchHandler @ 031b37a4 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0;
              thunk_FUN_01c20e04();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031b3908 with catch @ 031b3914
                        */
              if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) {
LAB_031b4208:
                  uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                  FUN_01bab798(uVar7,0);
                }
                if ((int)pIVar3->max_length == 0) goto LAB_031b4204;
                pIVar3->m_Items[0] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031b4200;
                (pIVar4->fields).handle = StringLiteral_4361;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 0xc;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button1;
                thunk_FUN_01c20e04();
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) goto LAB_031b4208;
                if ((uint)pIVar3->max_length < 2) goto LAB_031b4204;
                pIVar3->m_Items[1] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031b4200;
                (pIVar4->fields).handle = StringLiteral_12324;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 0xd;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button2;
                thunk_FUN_01c20e04();
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) goto LAB_031b4208;
                if ((uint)pIVar3->max_length < 3) goto LAB_031b4204;
                pIVar3->m_Items[2] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031b4200;
                (pIVar4->fields).handle = StringLiteral_13920;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 0xe;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button3;
                thunk_FUN_01c20e04();
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) goto LAB_031b4208;
                if ((uint)pIVar3->max_length < 4) goto LAB_031b4204;
                pIVar3->m_Items[3] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031b4200;
                (pIVar4->fields).handle = StringLiteral_8379;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 0x11;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button4;
                thunk_FUN_01c20e04();
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) goto LAB_031b4208;
                if ((uint)pIVar3->max_length < 5) goto LAB_031b4204;
                pIVar3->m_Items[4] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031b4200;
                (pIVar4->fields).handle = StringLiteral_11383;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 0x12;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
                thunk_FUN_01c20e04();
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) goto LAB_031b4208;
                if ((uint)pIVar3->max_length < 6) goto LAB_031b4204;
                pIVar3->m_Items[5] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031b4200;
                (pIVar4->fields).handle = StringLiteral_11786;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 0x15;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button6;
                thunk_FUN_01c20e04();
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) goto LAB_031b4208;
                if ((uint)pIVar3->max_length < 7) goto LAB_031b4204;
                pIVar3->m_Items[6] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031b4200;
                (pIVar4->fields).handle = StringLiteral_12346;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 0x14;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button7;
                thunk_FUN_01c20e04();
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) goto LAB_031b4208;
                if ((uint)pIVar3->max_length < 8) goto LAB_031b4204;
                pIVar3->m_Items[7] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
                ppIVar6 = &(__this->fields).super._ButtonMappings_k__BackingField;
                *ppIVar6 = pIVar3;
                thunk_FUN_01c20e04(ppIVar6,pIVar3);
                pIVar3 = (InControl_InputControlMapping_array *)
                         FUN_01bab718(InControl_InputControlMapping___TypeInfo,8);
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
                    if (lVar5 == 0) goto LAB_031b4208;
                    if ((int)pIVar3->max_length != 0) {
                      pIVar3->m_Items[0] = pIVar4;
                      thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031b4200;
                      (pIVar4->fields).handle = StringLiteral_8382;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).Target = 2;
                      (pIVar4->fields).Source =
                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).Invert = true;
                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                      if (lVar5 == 0) goto LAB_031b4208;
                      if (1 < (uint)pIVar3->max_length) {
                    /* try { // try from 031b3de4 to 032b3e67 has its CatchHandler @ 031b3de4
                       catch() { ... } // from try @ 031b3de4 with catch @ 031b3de4
                       catch() { ... } // from try @ 031b3ebc with catch @ 031b3de4
                       catch() { ... } // from try @ 031b3fa8 with catch @ 031b3de4
                       catch() { ... } // from try @ 031b4004 with catch @ 031b3de4
                       catch() { ... } // from try @ 031b4024 with catch @ 031b3de4
                       catch() { ... } // from try @ 031b406c with catch @ 031b3de4 */
                        pIVar3->m_Items[1] = pIVar4;
                        thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                        pIVar4 = (InControl_InputControlMapping_o *)
                                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031b4200;
                        (pIVar4->fields).handle = StringLiteral_11385;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Target = 4;
                        (pIVar4->fields).Source =
                             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog3;
                        thunk_FUN_01c20e04();
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                        if (lVar5 == 0) goto LAB_031b4208;
                        if (2 < (uint)pIVar3->max_length) {
                          pIVar3->m_Items[2] = pIVar4;
                    /* try { // try from 031b3e68 to 032b3e83 has its CatchHandler @ 031b3f2c */
                          thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                          pIVar4 = (InControl_InputControlMapping_o *)
                                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031b4200;
                    /* try { // try from 031b3e88 to 032b3e97 has its CatchHandler @ 031b3f28 */
                          (pIVar4->fields).handle = StringLiteral_11386;
                    /* try { // try from 031b3e9c to 032b3ebb has its CatchHandler @ 031b3f24 */
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).Target = 5;
                          (pIVar4->fields).Source =
                               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                    /* try { // try from 031b3ebc to 032b3f43 has its CatchHandler @ 031b3de4 */
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).Invert = true;
                          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                            element_class);
                          if (lVar5 == 0) goto LAB_031b4208;
                          if (3 < (uint)pIVar3->max_length) {
                            pIVar3->m_Items[3] = pIVar4;
                            thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                            pIVar4 = (InControl_InputControlMapping_o *)
                                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_031b4200;
                    /* catch() { ... } // from try @ 031b3e9c with catch @ 031b3f24 */
                    /* catch() { ... } // from try @ 031b3e88 with catch @ 031b3f28 */
                            (pIVar4->fields).handle = StringLiteral_5029;
                    /* catch() { ... } // from try @ 031b3e68 with catch @ 031b3f2c */
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).Target = 9;
                    /* try { // try from 031b3f44 to 032b3f5b has its CatchHandler @ 031b3ff8 */
                            (pIVar4->fields).Source =
                                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
                            thunk_FUN_01c20e04();
                            if ((InControl_InputControlMapping_Range_TypeInfo->_2).cctor_finished ==
                                0) {
                              thunk_FUN_01ba7564();
                            }
                    /* try { // try from 031b3f64 to 032b3f67 has its CatchHandler @ 031b3ff0 */
                    /* try { // try from 031b3f68 to 032b3f73 has its CatchHandler @ 031b3fec */
                            (pIVar4->fields).SourceRange =
                                 InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                 Negative;
                            thunk_FUN_01c20e04();
                    /* try { // try from 031b3f78 to 032b3f93 has its CatchHandler @ 031b3fe8 */
                            (pIVar4->fields).TargetRange =
                                 InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                 Negative;
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).Invert = true;
                    /* try { // try from 031b3f98 to 032b3fa7 has its CatchHandler @ 031b3fdc */
                            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                              element_class);
                    /* try { // try from 031b3fa8 to 032b3fbb has its CatchHandler @ 031b3de4 */
                            if (lVar5 == 0) goto LAB_031b4208;
                            if (4 < (uint)pIVar3->max_length) {
                    /* try { // try from 031b3fbc to 032b3fcb has its CatchHandler @ 031b3ff8 */
                              pIVar3->m_Items[4] = pIVar4;
                              thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                    /* try { // try from 031b3fcc to 032b3fdb has its CatchHandler @ 031b3fe0 */
                              pIVar4 = (InControl_InputControlMapping_o *)
                                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031b3f98 with catch @ 031b3fdc */
                              if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                              goto LAB_031b4200;
                    /* catch() { ... } // from try @ 031b3fcc with catch @ 031b3fe0 */
                    /* catch() { ... } // from try @ 031b3f78 with catch @ 031b3fe8 */
                    /* catch() { ... } // from try @ 031b3f68 with catch @ 031b3fec */
                    /* catch() { ... } // from try @ 031b3f64 with catch @ 031b3ff0 */
                              (pIVar4->fields).handle = StringLiteral_5030;
                              thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 031b3f44 with catch @ 031b3ff8
                       catch() { ... } // from try @ 031b3fbc with catch @ 031b3ff8 */
                              (pIVar4->fields).Target = 10;
                    /* try { // try from 031b4000 to 032b4003 has its CatchHandler @ 031b4080 */
                    /* try { // try from 031b4004 to 032b401f has its CatchHandler @ 031b3de4 */
                              (pIVar4->fields).Source =
                                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                   Analog5;
                              thunk_FUN_01c20e04();
                    /* try { // try from 031b4020 to 032b4023 has its CatchHandler @ 031b4058 */
                    /* try { // try from 031b4024 to 032b405f has its CatchHandler @ 031b3de4 */
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
                    /* catch() { ... } // from try @ 031b4020 with catch @ 031b4058 */
                              if (lVar5 == 0) goto LAB_031b4208;
                    /* try { // try from 031b4060 to 032b406b has its CatchHandler @ 031b4080 */
                              if (5 < (uint)pIVar3->max_length) {
                    /* try { // try from 031b406c to 032b4077 has its CatchHandler @ 031b3de4 */
                                pIVar3->m_Items[5] = pIVar4;
                                thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                    /* try { // try from 031b4078 to 032b407f has its CatchHandler @ 031b4080 */
                                pIVar4 = (InControl_InputControlMapping_o *)
                                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 031b4000 with catch @ 031b4080
                       catch() { ... } // from try @ 031b4060 with catch @ 031b4080
                       catch() { ... } // from try @ 031b4078 with catch @ 031b4080 */
                                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                                if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                goto LAB_031b4200;
                                (pIVar4->fields).handle = StringLiteral_5031;
                                thunk_FUN_01c20e04();
                                (pIVar4->fields).Target = 7;
                                (pIVar4->fields).Source =
                                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                     Analog6;
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
                                if (lVar5 == 0) goto LAB_031b4208;
                                if (6 < (uint)pIVar3->max_length) {
                                  pIVar3->m_Items[6] = pIVar4;
                                  thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                                  pIVar4 = (InControl_InputControlMapping_o *)
                                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo
                                                             );
                                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                  goto LAB_031b4200;
                                  (pIVar4->fields).handle = StringLiteral_5028;
                                  thunk_FUN_01c20e04();
                                  (pIVar4->fields).Target = 8;
                                  (pIVar4->fields).Source =
                                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                       Analog6;
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
                                  if (lVar5 == 0) goto LAB_031b4208;
                                  if (7 < (uint)pIVar3->max_length) {
                                    pIVar3->m_Items[7] = pIVar4;
                                    thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
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
                      }
                    }
                    goto LAB_031b4204;
                  }
                }
              }
            }
          }
LAB_031b4200:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
    }
  }
LAB_031b4204:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

