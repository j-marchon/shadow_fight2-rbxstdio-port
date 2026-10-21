// InControl.PlayStation4LinuxProfile$$.ctor @ RVA 0x33AAA28

void InControl_PlayStation4LinuxProfile___ctor
               (InControl_PlayStation4LinuxProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034aaa38 to 035aaa7f has its CatchHandler @ 034aabac */
  if ((DAT_04567d0c & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_4361);
    FUN_01bab630(&StringLiteral_8380);
    FUN_01bab630(&StringLiteral_8383);
    FUN_01bab630(&StringLiteral_5029);
                    /* try { // try from 034aaac0 to 035aaae3 has its CatchHandler @ 034aab98 */
    FUN_01bab630(&StringLiteral_11387);
    FUN_01bab630(&StringLiteral_12221);
    FUN_01bab630(&StringLiteral_8381);
                    /* try { // try from 034aaae4 to 035aab73 has its CatchHandler @ 034aa70c */
    FUN_01bab630(&StringLiteral_8471);
    FUN_01bab630(&StringLiteral_12324);
    FUN_01bab630(&StringLiteral_13896);
    FUN_01bab630(&StringLiteral_5030);
    FUN_01bab630(&StringLiteral_12222);
    FUN_01bab630(&StringLiteral_11386);
    FUN_01bab630(&StringLiteral_11383);
    FUN_01bab630(&StringLiteral_5031);
    FUN_01bab630(&StringLiteral_8379);
    FUN_01bab630(&StringLiteral_4900);
    FUN_01bab630(&StringLiteral_10296);
    FUN_01bab630(&StringLiteral_11385);
                    /* try { // try from 034aab74 to 035aab7b has its CatchHandler @ 034aab9c */
    FUN_01bab630(&StringLiteral_10298);
                    /* try { // try from 034aab7c to 035aab83 has its CatchHandler @ 034aaba8 */
                    /* try { // try from 034aab84 to 035aab87 has its CatchHandler @ 034aa70c */
    FUN_01bab630(&StringLiteral_13920);
                    /* try { // try from 034aab88 to 035aab8b has its CatchHandler @ 034aab94 */
                    /* try { // try from 034aab8c to 035aabc3 has its CatchHandler @ 034aa70c */
    FUN_01bab630(&StringLiteral_5028);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034aab88 with catch @ 034aab94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034aaac0 with catch @ 034aab98
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034aab74 with catch @ 034aab9c
                        */
    FUN_01bab630(&StringLiteral_8382);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034aaa04 with catch @ 034aaba0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034aa9a8 with catch @ 034aaba4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034aab7c with catch @ 034aaba8
                        */
    FUN_01bab630(&StringLiteral_9974);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034aaa38 with catch @ 034aabac
                        */
    FUN_01bab630(&StringLiteral_11384);
    DAT_04567d0c = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034aabc4 to 035aabc7 has its CatchHandler @ 034aabd4 */
                    /* catch() { ... } // from try @ 034aabc4 with catch @ 034aabd4 */
                    /* try { // try from 034aabdc to 035aac43 has its CatchHandler @ 034aac58 */
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_10296;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_10298;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = StringLiteral_8471;
                    /* try { // try from 034aac44 to 035aac4f has its CatchHandler @ 034aa70c */
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).super.SupportedPlatforms;
      *ppSVar2 = pSVar1;
                    /* try { // try from 034aac50 to 035aac57 has its CatchHandler @ 034aac58 */
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034aabdc with catch @ 034aac58
                       catch(type#2 @ 00000000) { ... } // from try @ 034aac50 with catch @ 034aac58
                        */
      pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,2);
      if (pSVar1 == (System_String_array *)0x0) goto LAB_034ab824;
      if ((int)pSVar1->max_length != 0) {
        pSVar1->m_Items[0] = StringLiteral_12221;
        thunk_FUN_01c20e04(pSVar1->m_Items);
        if (1 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[1] = StringLiteral_12222;
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
            (pIVar4->fields).handle = StringLiteral_4900;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 0xb;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button1;
            thunk_FUN_01c20e04();
            if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) {
LAB_034ab82c:
                    /* try { // try from 034ab82c to 035ab853 has its CatchHandler @ 034aba50 */
                uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar7,0);
              }
              if ((int)pIVar3->max_length == 0) goto LAB_034ab828;
              pIVar3->m_Items[0] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034ab824;
              (pIVar4->fields).handle = StringLiteral_4361;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0xc;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button2;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034ab82c;
              if ((uint)pIVar3->max_length < 2) goto LAB_034ab828;
              pIVar3->m_Items[1] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034ab824;
              (pIVar4->fields).handle = StringLiteral_12324;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0xd;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034ab82c;
              if ((uint)pIVar3->max_length < 3) goto LAB_034ab828;
              pIVar3->m_Items[2] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034ab824;
              (pIVar4->fields).handle = StringLiteral_13920;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0xe;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button3;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034ab82c;
              if ((uint)pIVar3->max_length < 4) goto LAB_034ab828;
              pIVar3->m_Items[3] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034ab824;
              (pIVar4->fields).handle = StringLiteral_8379;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0x11;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button4;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034ab82c;
              if ((uint)pIVar3->max_length < 5) goto LAB_034ab828;
              pIVar3->m_Items[4] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034ab824;
              (pIVar4->fields).handle = StringLiteral_11383;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0x12;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034ab82c;
              if ((uint)pIVar3->max_length < 6) goto LAB_034ab828;
              pIVar3->m_Items[5] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034ab824;
              (pIVar4->fields).handle = StringLiteral_9974;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0x1b;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034ab82c;
              if ((uint)pIVar3->max_length < 7) goto LAB_034ab828;
              pIVar3->m_Items[6] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034ab824;
              (pIVar4->fields).handle = StringLiteral_8383;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0xf;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button6;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034ab82c;
              if ((uint)pIVar3->max_length < 8) goto LAB_034ab828;
              pIVar3->m_Items[7] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034ab824;
              (pIVar4->fields).handle = StringLiteral_11387;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0x10;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button7;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034ab82c;
              if ((uint)pIVar3->max_length < 9) goto LAB_034ab828;
              pIVar3->m_Items[8] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034ab824;
              (pIVar4->fields).handle = StringLiteral_8380;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 3;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button10;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034ab82c;
              if ((uint)pIVar3->max_length < 10) goto LAB_034ab828;
              pIVar3->m_Items[9] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034ab824;
              (pIVar4->fields).handle = StringLiteral_11384;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 6;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button11;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034ab82c;
              if ((uint)pIVar3->max_length < 0xb) goto LAB_034ab828;
              pIVar3->m_Items[10] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 10,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034ab824;
              (pIVar4->fields).handle = StringLiteral_13896;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0x20;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button13;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034ab82c;
              if ((uint)pIVar3->max_length < 0xc) goto LAB_034ab828;
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
                (pIVar4->fields).handle = StringLiteral_8381;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 1;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog0;
                thunk_FUN_01c20e04();
                if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_034ab82c;
                  if ((int)pIVar3->max_length != 0) {
                    pIVar3->m_Items[0] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034ab824;
                    (pIVar4->fields).handle = StringLiteral_8382;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 2;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Invert = true;
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_034ab82c;
                    if (1 < (uint)pIVar3->max_length) {
                      pIVar3->m_Items[1] = pIVar4;
                      thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034ab824;
                      (pIVar4->fields).handle = StringLiteral_11385;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).Target = 4;
                      (pIVar4->fields).Source =
                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog2;
                      thunk_FUN_01c20e04();
                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                      if (lVar5 == 0) goto LAB_034ab82c;
                      if (2 < (uint)pIVar3->max_length) {
                        pIVar3->m_Items[2] = pIVar4;
                        thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                        pIVar4 = (InControl_InputControlMapping_o *)
                                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034ab824;
                        (pIVar4->fields).handle = StringLiteral_11386;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Target = 5;
                        (pIVar4->fields).Source =
                             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Invert = true;
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                        if (lVar5 == 0) goto LAB_034ab82c;
                        if (3 < (uint)pIVar3->max_length) {
                          pIVar3->m_Items[3] = pIVar4;
                          thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                          pIVar4 = (InControl_InputControlMapping_o *)
                                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034ab824;
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
                          if (lVar5 == 0) goto LAB_034ab82c;
                          if (4 < (uint)pIVar3->max_length) {
                            pIVar3->m_Items[4] = pIVar4;
                            thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                            pIVar4 = (InControl_InputControlMapping_o *)
                                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034ab824;
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
                            if (lVar5 == 0) goto LAB_034ab82c;
                            if (5 < (uint)pIVar3->max_length) {
                              pIVar3->m_Items[5] = pIVar4;
                              thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                              pIVar4 = (InControl_InputControlMapping_o *)
                                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                              if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                              goto LAB_034ab824;
                              (pIVar4->fields).handle = StringLiteral_5028;
                              thunk_FUN_01c20e04();
                              (pIVar4->fields).Target = 8;
                    /* try { // try from 034ab6e0 to 035ab82b has its CatchHandler @ 034ab6e0
                       catch() { ... } // from try @ 034ab6e0 with catch @ 034ab6e0
                       catch() { ... } // from try @ 034ab960 with catch @ 034ab6e0
                       catch() { ... } // from try @ 034aba10 with catch @ 034ab6e0
                       catch() { ... } // from try @ 034aba18 with catch @ 034ab6e0
                       catch() { ... } // from try @ 034abae4 with catch @ 034ab6e0 */
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
                              if (lVar5 == 0) goto LAB_034ab82c;
                              if (6 < (uint)pIVar3->max_length) {
                                pIVar3->m_Items[6] = pIVar4;
                                thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                                pIVar4 = (InControl_InputControlMapping_o *)
                                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                                if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                goto LAB_034ab824;
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
                                if (lVar5 == 0) goto LAB_034ab82c;
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
                  goto LAB_034ab828;
                }
              }
            }
          }
          goto LAB_034ab824;
        }
      }
    }
LAB_034ab828:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_034ab824:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

