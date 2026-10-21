// InControl.Xbox360WinProfile$$.ctor @ RVA 0x34B1E6C

void InControl_Xbox360WinProfile___ctor(InControl_Xbox360WinProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568569 & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_8380);
    FUN_01bab630(&StringLiteral_8383);
    FUN_01bab630(&StringLiteral_5029);
    FUN_01bab630(&StringLiteral_4687);
    FUN_01bab630(&StringLiteral_15068);
    FUN_01bab630(&StringLiteral_14965);
    FUN_01bab630(&StringLiteral_4695);
    FUN_01bab630(&StringLiteral_11387);
    FUN_01bab630(&StringLiteral_15064);
    FUN_01bab630(&StringLiteral_2030);
    FUN_01bab630(&StringLiteral_3359);
    FUN_01bab630(&StringLiteral_8381);
    FUN_01bab630(&StringLiteral_4682);
    FUN_01bab630(&StringLiteral_4686);
    FUN_01bab630(&StringLiteral_5030);
    FUN_01bab630(&StringLiteral_4679);
    FUN_01bab630(&StringLiteral_11386);
    FUN_01bab630(&StringLiteral_12346);
    FUN_01bab630(&StringLiteral_4680);
    FUN_01bab630(&StringLiteral_11383);
    FUN_01bab630(&StringLiteral_5031);
    FUN_01bab630(&StringLiteral_8379);
    FUN_01bab630(&StringLiteral_4697);
    FUN_01bab630(&StringLiteral_3279);
    FUN_01bab630(&StringLiteral_11385);
    FUN_01bab630(&StringLiteral_4683);
    FUN_01bab630(&StringLiteral_4696);
    FUN_01bab630(&StringLiteral_15134);
    FUN_01bab630(&StringLiteral_4685);
    FUN_01bab630(&StringLiteral_15021);
    FUN_01bab630(&StringLiteral_4684);
    FUN_01bab630(&StringLiteral_15061);
    FUN_01bab630(&StringLiteral_4690);
    FUN_01bab630(&StringLiteral_5028);
    FUN_01bab630(&StringLiteral_8382);
    FUN_01bab630(&StringLiteral_2529);
    FUN_01bab630(&StringLiteral_4689);
    FUN_01bab630(&StringLiteral_11384);
    DAT_04568569 = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_15064;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_15068;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = StringLiteral_14965;
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).super.SupportedPlatforms;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,0xe);
      if (pSVar1 == (System_String_array *)0x0) goto LAB_035b3060;
      if ((int)pSVar1->max_length != 0) {
        pSVar1->m_Items[0] = StringLiteral_4679;
        thunk_FUN_01c20e04(pSVar1->m_Items);
        if (1 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[1] = StringLiteral_4680;
          thunk_FUN_01c20e04(pSVar1->m_Items + 1);
          if (2 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[2] = StringLiteral_4682;
            thunk_FUN_01c20e04(pSVar1->m_Items + 2);
            if (3 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[3] = StringLiteral_4683;
              thunk_FUN_01c20e04(pSVar1->m_Items + 3);
              if (4 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[4] = StringLiteral_4685;
                thunk_FUN_01c20e04(pSVar1->m_Items + 4);
                if (5 < (uint)pSVar1->max_length) {
                  pSVar1->m_Items[5] = StringLiteral_4686;
                  thunk_FUN_01c20e04(pSVar1->m_Items + 5);
                  if (6 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[6] = StringLiteral_4687;
                    thunk_FUN_01c20e04(pSVar1->m_Items + 6);
                    if (7 < (uint)pSVar1->max_length) {
                      pSVar1->m_Items[7] = StringLiteral_4684;
                      thunk_FUN_01c20e04(pSVar1->m_Items + 7);
                      if (8 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[8] = StringLiteral_4689;
                        thunk_FUN_01c20e04(pSVar1->m_Items + 8);
                        if (9 < (uint)pSVar1->max_length) {
                          pSVar1->m_Items[9] = StringLiteral_4690;
                          thunk_FUN_01c20e04(pSVar1->m_Items + 9);
                          if (10 < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[10] = StringLiteral_4696;
                            thunk_FUN_01c20e04(pSVar1->m_Items + 10);
                            if (0xb < (uint)pSVar1->max_length) {
                              pSVar1->m_Items[0xb] = StringLiteral_4697;
                              thunk_FUN_01c20e04(pSVar1->m_Items + 0xb);
                              if (0xc < (uint)pSVar1->max_length) {
                                pSVar1->m_Items[0xc] = StringLiteral_15061;
                                thunk_FUN_01c20e04(pSVar1->m_Items + 0xc);
                                if (0xd < (uint)pSVar1->max_length) {
                                  pSVar1->m_Items[0xd] = StringLiteral_4695;
                                  thunk_FUN_01c20e04();
                                  ppSVar2 = &(__this->fields).super.JoystickNames;
                                  *ppSVar2 = pSVar1;
                                  thunk_FUN_01c20e04(ppSVar2,pSVar1);
                                  (__this->fields).super.LastResortRegex = StringLiteral_2030;
                                  thunk_FUN_01c20e04();
                                  pIVar3 = (InControl_InputControlMapping_array *)
                                           FUN_01bab718(InControl_InputControlMapping___TypeInfo,10)
                                  ;
                                  pIVar4 = (InControl_InputControlMapping_o *)
                                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo
                                                             );
                                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                                  if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
                                    (pIVar4->fields).handle = StringLiteral_2529;
                                    thunk_FUN_01c20e04();
                                    (pIVar4->fields).Target = 0xb;
                                    (pIVar4->fields).Source =
                                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                         Button0;
                                    thunk_FUN_01c20e04();
                                    if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
                                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                        element_class);
                                      if (lVar5 == 0) {
LAB_035b3064:
                                        uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                                        FUN_01bab798(uVar7,0);
                                      }
                                      if ((int)pIVar3->max_length == 0) goto LAB_035b305c;
                                      pIVar3->m_Items[0] = pIVar4;
                                      thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                                      pIVar4 = (InControl_InputControlMapping_o *)
                                               thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0)
                                      ;
                                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                      goto LAB_035b3060;
                                      (pIVar4->fields).handle = StringLiteral_3279;
                                      thunk_FUN_01c20e04();
                                      (pIVar4->fields).Target = 0xc;
                                      (pIVar4->fields).Source =
                                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields
                                           ->Button1;
                                      thunk_FUN_01c20e04();
                                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                        element_class);
                                      if (lVar5 == 0) goto LAB_035b3064;
                                      if ((uint)pIVar3->max_length < 2) goto LAB_035b305c;
                                      pIVar3->m_Items[1] = pIVar4;
                                      thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                                      pIVar4 = (InControl_InputControlMapping_o *)
                                               thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0)
                                      ;
                                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                      goto LAB_035b3060;
                                      (pIVar4->fields).handle = StringLiteral_15021;
                                      thunk_FUN_01c20e04();
                                      (pIVar4->fields).Target = 0xd;
                                      (pIVar4->fields).Source =
                                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields
                                           ->Button2;
                                      thunk_FUN_01c20e04();
                                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                        element_class);
                                      if (lVar5 == 0) goto LAB_035b3064;
                                      if ((uint)pIVar3->max_length < 3) goto LAB_035b305c;
                                      pIVar3->m_Items[2] = pIVar4;
                                      thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                                      pIVar4 = (InControl_InputControlMapping_o *)
                                               thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0)
                                      ;
                                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                      goto LAB_035b3060;
                                      (pIVar4->fields).handle = StringLiteral_15134;
                                      thunk_FUN_01c20e04();
                                      (pIVar4->fields).Target = 0xe;
                                      (pIVar4->fields).Source =
                                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields
                                           ->Button3;
                                      thunk_FUN_01c20e04();
                                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                        element_class);
                                      if (lVar5 == 0) goto LAB_035b3064;
                                      if ((uint)pIVar3->max_length < 4) goto LAB_035b305c;
                                      pIVar3->m_Items[3] = pIVar4;
                                      thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                                      pIVar4 = (InControl_InputControlMapping_o *)
                                               thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0)
                                      ;
                                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                      goto LAB_035b3060;
                                      (pIVar4->fields).handle = StringLiteral_8379;
                                      thunk_FUN_01c20e04();
                                      (pIVar4->fields).Target = 0x11;
                                      (pIVar4->fields).Source =
                                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields
                                           ->Button4;
                                      thunk_FUN_01c20e04();
                                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                        element_class);
                                      if (lVar5 == 0) goto LAB_035b3064;
                                      if ((uint)pIVar3->max_length < 5) goto LAB_035b305c;
                                      pIVar3->m_Items[4] = pIVar4;
                                      thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                                      pIVar4 = (InControl_InputControlMapping_o *)
                                               thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0)
                                      ;
                                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                      goto LAB_035b3060;
                                      (pIVar4->fields).handle = StringLiteral_11383;
                                      thunk_FUN_01c20e04();
                                      (pIVar4->fields).Target = 0x12;
                                      (pIVar4->fields).Source =
                                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields
                                           ->Button5;
                                      thunk_FUN_01c20e04();
                                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                        element_class);
                                      if (lVar5 == 0) goto LAB_035b3064;
                                      if ((uint)pIVar3->max_length < 6) goto LAB_035b305c;
                                      pIVar3->m_Items[5] = pIVar4;
                                      thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                                      pIVar4 = (InControl_InputControlMapping_o *)
                                               thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0)
                                      ;
                                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                      goto LAB_035b3060;
                                      (pIVar4->fields).handle = StringLiteral_8380;
                                      thunk_FUN_01c20e04();
                                      (pIVar4->fields).Target = 3;
                                      (pIVar4->fields).Source =
                                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields
                                           ->Button8;
                                      thunk_FUN_01c20e04();
                                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                        element_class);
                                      if (lVar5 == 0) goto LAB_035b3064;
                                      if ((uint)pIVar3->max_length < 7) goto LAB_035b305c;
                                      pIVar3->m_Items[6] = pIVar4;
                                      thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                                      pIVar4 = (InControl_InputControlMapping_o *)
                                               thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0)
                                      ;
                                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                      goto LAB_035b3060;
                                      (pIVar4->fields).handle = StringLiteral_11384;
                                      thunk_FUN_01c20e04();
                                      (pIVar4->fields).Target = 6;
                                      (pIVar4->fields).Source =
                                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields
                                           ->Button9;
                                      thunk_FUN_01c20e04();
                    /* try { // try from 035b2794 to 036b296b has its CatchHandler @ 035b2794
                       catch() { ... } // from try @ 035b2794 with catch @ 035b2794
                       catch() { ... } // from try @ 035b2a20 with catch @ 035b2794
                       catch() { ... } // from try @ 035b2ab8 with catch @ 035b2794
                       catch() { ... } // from try @ 035b2af8 with catch @ 035b2794 */
                                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                        element_class);
                                      if (lVar5 == 0) goto LAB_035b3064;
                                      if ((uint)pIVar3->max_length < 8) goto LAB_035b305c;
                                      pIVar3->m_Items[7] = pIVar4;
                                      thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
                                      pIVar4 = (InControl_InputControlMapping_o *)
                                               thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0)
                                      ;
                                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                      goto LAB_035b3060;
                                      (pIVar4->fields).handle = StringLiteral_3359;
                                      thunk_FUN_01c20e04();
                                      (pIVar4->fields).Target = 0x13;
                                      (pIVar4->fields).Source =
                                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields
                                           ->Button6;
                                      thunk_FUN_01c20e04();
                                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                        element_class);
                                      if (lVar5 == 0) goto LAB_035b3064;
                                      if ((uint)pIVar3->max_length < 9) goto LAB_035b305c;
                                      pIVar3->m_Items[8] = pIVar4;
                                      thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
                                      pIVar4 = (InControl_InputControlMapping_o *)
                                               thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0)
                                      ;
                                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                      goto LAB_035b3060;
                                      (pIVar4->fields).handle = StringLiteral_12346;
                                      thunk_FUN_01c20e04();
                                      (pIVar4->fields).Target = 0x14;
                                      (pIVar4->fields).Source =
                                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields
                                           ->Button7;
                                      thunk_FUN_01c20e04();
                                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                        element_class);
                                      if (lVar5 == 0) goto LAB_035b3064;
                                      if ((uint)pIVar3->max_length < 10) goto LAB_035b305c;
                                      pIVar3->m_Items[9] = pIVar4;
                                      thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
                                      ppIVar6 = &(__this->fields).super.
                                                 _ButtonMappings_k__BackingField;
                                      *ppIVar6 = pIVar3;
                                      thunk_FUN_01c20e04(ppIVar6,pIVar3);
                                      pIVar3 = (InControl_InputControlMapping_array *)
                                               FUN_01bab718(InControl_InputControlMapping___TypeInfo
                                                            ,0xc);
                                      pIVar4 = (InControl_InputControlMapping_o *)
                                               thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0)
                                      ;
                                      if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
                                        (pIVar4->fields).handle = StringLiteral_8381;
                                        thunk_FUN_01c20e04();
                                        (pIVar4->fields).Target = 1;
                                        (pIVar4->fields).Source =
                                             InControl_UnityInputDeviceProfile_TypeInfo->
                                             static_fields->Analog0;
                                        thunk_FUN_01c20e04();
                                        if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
                                          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->
                                                                            _1).element_class);
                                          if (lVar5 == 0) goto LAB_035b3064;
                                          if ((int)pIVar3->max_length != 0) {
                                            pIVar3->m_Items[0] = pIVar4;
                                            thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                    /* try { // try from 035b296c to 036b2973 has its CatchHandler @ 035b2a8c */
                                            pIVar4 = (InControl_InputControlMapping_o *)
                                                     thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                            InControl_InputControlMapping___ctor
                                                      (pIVar4,(MethodInfo *)0x0);
                                            if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                            goto LAB_035b3060;
                    /* try { // try from 035b2980 to 036b299f has its CatchHandler @ 035b2a98 */
                                            (pIVar4->fields).handle = StringLiteral_8382;
                                            thunk_FUN_01c20e04();
                                            (pIVar4->fields).Target = 2;
                    /* try { // try from 035b29a4 to 036b29c3 has its CatchHandler @ 035b2a94 */
                                            (pIVar4->fields).Source =
                                                 InControl_UnityInputDeviceProfile_TypeInfo->
                                                 static_fields->Analog1;
                                            thunk_FUN_01c20e04();
                                            (pIVar4->fields).Invert = true;
                    /* try { // try from 035b29c8 to 036b29e7 has its CatchHandler @ 035b2a90 */
                                            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)
                                                                              ->_1).element_class);
                                            if (lVar5 == 0) goto LAB_035b3064;
                                            if (1 < (uint)pIVar3->max_length) {
                                              pIVar3->m_Items[1] = pIVar4;
                    /* try { // try from 035b29ec to 036b2a1f has its CatchHandler @ 035b2a9c */
                                              thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                                              pIVar4 = (InControl_InputControlMapping_o *)
                                                       thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                              InControl_InputControlMapping___ctor
                                                        (pIVar4,(MethodInfo *)0x0);
                                              if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                              goto LAB_035b3060;
                                              (pIVar4->fields).handle = StringLiteral_11385;
                                              thunk_FUN_01c20e04();
                    /* try { // try from 035b2a20 to 036b2ab3 has its CatchHandler @ 035b2794 */
                                              (pIVar4->fields).Target = 4;
                                              (pIVar4->fields).Source =
                                                   InControl_UnityInputDeviceProfile_TypeInfo->
                                                   static_fields->Analog3;
                                              thunk_FUN_01c20e04();
                                              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).
                                                                                 klass)->_1).
                                                                                element_class);
                                              if (lVar5 == 0) goto LAB_035b3064;
                                              if (2 < (uint)pIVar3->max_length) {
                                                pIVar3->m_Items[2] = pIVar4;
                                                thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                                                pIVar4 = (InControl_InputControlMapping_o *)
                                                         thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                                InControl_InputControlMapping___ctor
                                                          (pIVar4,(MethodInfo *)0x0);
                                                if (pIVar4 == (InControl_InputControlMapping_o *)0x0
                                                   ) goto LAB_035b3060;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b296c with catch @ 035b2a8c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b29c8 with catch @ 035b2a90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b29a4 with catch @ 035b2a94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b2980 with catch @ 035b2a98
                        */
                                                (pIVar4->fields).handle = StringLiteral_11386;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b29ec with catch @ 035b2a9c
                        */
                                                thunk_FUN_01c20e04();
                                                (pIVar4->fields).Target = 5;
                    /* try { // try from 035b2ab4 to 036b2ab7 has its CatchHandler @ 035b2ae0 */
                    /* try { // try from 035b2ab8 to 036b2aef has its CatchHandler @ 035b2794 */
                                                (pIVar4->fields).Source =
                                                     InControl_UnityInputDeviceProfile_TypeInfo->
                                                     static_fields->Analog4;
                                                thunk_FUN_01c20e04();
                                                (pIVar4->fields).Invert = true;
                                                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).
                                                                                   klass)->_1).
                                                                                  element_class);
                                                if (lVar5 == 0) goto LAB_035b3064;
                    /* catch() { ... } // from try @ 035b2ab4 with catch @ 035b2ae0 */
                                                if (3 < (uint)pIVar3->max_length) {
                                                  pIVar3->m_Items[3] = pIVar4;
                    /* try { // try from 035b2af0 to 036b2af7 has its CatchHandler @ 035b2b0c */
                                                  thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                    /* try { // try from 035b2af8 to 036b2b03 has its CatchHandler @ 035b2794 */
                                                  pIVar4 = (InControl_InputControlMapping_o *)
                                                           thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 035b2b04 to 036b2b0b has its CatchHandler @ 035b2b0c */
                                                  InControl_InputControlMapping___ctor
                                                            (pIVar4,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035b2af0 with catch @ 035b2b0c
                       catch(type#2 @ 00000000) { ... } // from try @ 035b2b04 with catch @ 035b2b0c
                        */
                                                  if (pIVar4 == (InControl_InputControlMapping_o *)
                                                                0x0) goto LAB_035b3060;
                                                  (pIVar4->fields).handle = StringLiteral_5029;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).Target = 9;
                                                  (pIVar4->fields).Source =
                                                       InControl_UnityInputDeviceProfile_TypeInfo->
                                                       static_fields->Analog5;
                                                  thunk_FUN_01c20e04();
                                                  if ((InControl_InputControlMapping_Range_TypeInfo
                                                      ->_2).cctor_finished == 0) {
                                                    thunk_FUN_01ba7564();
                                                  }
                                                  (pIVar4->fields).SourceRange =
                                                       InControl_InputControlMapping_Range_TypeInfo
                                                       ->static_fields->Negative;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).TargetRange =
                                                       InControl_InputControlMapping_Range_TypeInfo
                                                       ->static_fields->Negative;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).Invert = true;
                                                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).
                                                                                     klass)->_1).
                                                                                    element_class);
                                                  if (lVar5 == 0) goto LAB_035b3064;
                                                  if (4 < (uint)pIVar3->max_length) {
                                                    pIVar3->m_Items[4] = pIVar4;
                                                    thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                                                    pIVar4 = (InControl_InputControlMapping_o *)
                                                             thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                                  InControl_InputControlMapping___ctor
                                                            (pIVar4,(MethodInfo *)0x0);
                                                  if (pIVar4 == (InControl_InputControlMapping_o *)
                                                                0x0) goto LAB_035b3060;
                                                  (pIVar4->fields).handle = StringLiteral_5030;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).Target = 10;
                                                  (pIVar4->fields).Source =
                                                       InControl_UnityInputDeviceProfile_TypeInfo->
                                                       static_fields->Analog5;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).SourceRange =
                                                       InControl_InputControlMapping_Range_TypeInfo
                                                       ->static_fields->Positive;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).TargetRange =
                                                       InControl_InputControlMapping_Range_TypeInfo
                                                       ->static_fields->Positive;
                                                  thunk_FUN_01c20e04();
                                                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).
                                                                                     klass)->_1).
                                                                                    element_class);
                                                  if (lVar5 == 0) goto LAB_035b3064;
                                                  if (5 < (uint)pIVar3->max_length) {
                                                    pIVar3->m_Items[5] = pIVar4;
                                                    thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                                                    pIVar4 = (InControl_InputControlMapping_o *)
                                                             thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                                  InControl_InputControlMapping___ctor
                                                            (pIVar4,(MethodInfo *)0x0);
                                                  if (pIVar4 == (InControl_InputControlMapping_o *)
                                                                0x0) goto LAB_035b3060;
                                                  (pIVar4->fields).handle = StringLiteral_5031;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).Target = 7;
                                                  (pIVar4->fields).Source =
                                                       InControl_UnityInputDeviceProfile_TypeInfo->
                                                       static_fields->Analog6;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).SourceRange =
                                                       InControl_InputControlMapping_Range_TypeInfo
                                                       ->static_fields->Positive;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).TargetRange =
                                                       InControl_InputControlMapping_Range_TypeInfo
                                                       ->static_fields->Positive;
                                                  thunk_FUN_01c20e04();
                                                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).
                                                                                     klass)->_1).
                                                                                    element_class);
                                                  if (lVar5 == 0) goto LAB_035b3064;
                                                  if (6 < (uint)pIVar3->max_length) {
                                                    pIVar3->m_Items[6] = pIVar4;
                                                    thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                                                    pIVar4 = (InControl_InputControlMapping_o *)
                                                             thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                                  InControl_InputControlMapping___ctor
                                                            (pIVar4,(MethodInfo *)0x0);
                                                  if (pIVar4 == (InControl_InputControlMapping_o *)
                                                                0x0) goto LAB_035b3060;
                                                  (pIVar4->fields).handle = StringLiteral_5028;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).Target = 8;
                                                  (pIVar4->fields).Source =
                                                       InControl_UnityInputDeviceProfile_TypeInfo->
                                                       static_fields->Analog6;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).SourceRange =
                                                       InControl_InputControlMapping_Range_TypeInfo
                                                       ->static_fields->Negative;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).TargetRange =
                                                       InControl_InputControlMapping_Range_TypeInfo
                                                       ->static_fields->Negative;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).Invert = true;
                                                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).
                                                                                     klass)->_1).
                                                                                    element_class);
                                                  if (lVar5 == 0) goto LAB_035b3064;
                                                  if (7 < (uint)pIVar3->max_length) {
                                                    pIVar3->m_Items[7] = pIVar4;
                                                    thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
                                                    pIVar4 = (InControl_InputControlMapping_o *)
                                                             thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                                  InControl_InputControlMapping___ctor
                                                            (pIVar4,(MethodInfo *)0x0);
                                                  if (pIVar4 == (InControl_InputControlMapping_o *)
                                                                0x0) goto LAB_035b3060;
                                                  (pIVar4->fields).handle = StringLiteral_8383;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).Target = 0xf;
                                                  (pIVar4->fields).Source =
                                                       InControl_UnityInputDeviceProfile_TypeInfo->
                                                       static_fields->Analog2;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).SourceRange =
                                                       InControl_InputControlMapping_Range_TypeInfo
                                                       ->static_fields->Positive;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).TargetRange =
                                                       InControl_InputControlMapping_Range_TypeInfo
                                                       ->static_fields->Positive;
                                                  thunk_FUN_01c20e04();
                                                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).
                                                                                     klass)->_1).
                                                                                    element_class);
                                                  if (lVar5 == 0) goto LAB_035b3064;
                                                  if (8 < (uint)pIVar3->max_length) {
                                                    pIVar3->m_Items[8] = pIVar4;
                                                    thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
                                                    pIVar4 = (InControl_InputControlMapping_o *)
                                                             thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                                  InControl_InputControlMapping___ctor
                                                            (pIVar4,(MethodInfo *)0x0);
                                                  if (pIVar4 == (InControl_InputControlMapping_o *)
                                                                0x0) goto LAB_035b3060;
                                                  (pIVar4->fields).handle = StringLiteral_11387;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).Target = 0x10;
                                                  (pIVar4->fields).Source =
                                                       InControl_UnityInputDeviceProfile_TypeInfo->
                                                       static_fields->Analog2;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).SourceRange =
                                                       InControl_InputControlMapping_Range_TypeInfo
                                                       ->static_fields->Negative;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).TargetRange =
                                                       InControl_InputControlMapping_Range_TypeInfo
                                                       ->static_fields->Negative;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).Invert = true;
                                                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).
                                                                                     klass)->_1).
                                                                                    element_class);
                                                  if (lVar5 == 0) goto LAB_035b3064;
                                                  if (9 < (uint)pIVar3->max_length) {
                                                    pIVar3->m_Items[9] = pIVar4;
                                                    thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
                                                    pIVar4 = (InControl_InputControlMapping_o *)
                                                             thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                                  InControl_InputControlMapping___ctor
                                                            (pIVar4,(MethodInfo *)0x0);
                                                  if (pIVar4 == (InControl_InputControlMapping_o *)
                                                                0x0) goto LAB_035b3060;
                                                  (pIVar4->fields).handle = StringLiteral_8383;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).Target = 0xf;
                                                  (pIVar4->fields).Source =
                                                       InControl_UnityInputDeviceProfile_TypeInfo->
                                                       static_fields->Analog8;
                                                  thunk_FUN_01c20e04();
                                                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).
                                                                                     klass)->_1).
                                                                                    element_class);
                                                  if (lVar5 == 0) goto LAB_035b3064;
                                                  if (10 < (uint)pIVar3->max_length) {
                                                    pIVar3->m_Items[10] = pIVar4;
                                                    thunk_FUN_01c20e04(pIVar3->m_Items + 10,pIVar4);
                                                    pIVar4 = (InControl_InputControlMapping_o *)
                                                             thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                                  InControl_InputControlMapping___ctor
                                                            (pIVar4,(MethodInfo *)0x0);
                                                  if (pIVar4 == (InControl_InputControlMapping_o *)
                                                                0x0) goto LAB_035b3060;
                                                  (pIVar4->fields).handle = StringLiteral_11387;
                                                  thunk_FUN_01c20e04();
                                                  (pIVar4->fields).Target = 0x10;
                                                  (pIVar4->fields).Source =
                                                       InControl_UnityInputDeviceProfile_TypeInfo->
                                                       static_fields->Analog9;
                                                  thunk_FUN_01c20e04();
                                                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).
                                                                                     klass)->_1).
                                                                                    element_class);
                                                  if (lVar5 == 0) goto LAB_035b3064;
                                                  if (0xb < (uint)pIVar3->max_length) {
                                                    pIVar3->m_Items[0xb] = pIVar4;
                                                    thunk_FUN_01c20e04(pIVar3->m_Items + 0xb,pIVar4)
                                                    ;
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
                                                }
                                              }
                                            }
                                          }
                                          goto LAB_035b305c;
                                        }
                                      }
                                    }
                                  }
                                  goto LAB_035b3060;
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
            }
          }
        }
      }
    }
LAB_035b305c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_035b3060:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

