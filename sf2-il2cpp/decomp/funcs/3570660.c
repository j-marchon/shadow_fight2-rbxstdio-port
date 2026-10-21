// InControl.SpeedlinkStrikeWinProfile$$.ctor @ RVA 0x3570660

void InControl_SpeedlinkStrikeWinProfile___ctor
               (InControl_SpeedlinkStrikeWinProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03670664 to 0377066f has its CatchHandler @ 03672f70 */
                    /* try { // try from 03670680 to 03770687 has its CatchHandler @ 03672c54 */
  if ((DAT_04568c62 & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
                    /* try { // try from 03670698 to 0377069f has its CatchHandler @ 03672c50 */
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
                    /* try { // try from 036706ac to 037706b3 has its CatchHandler @ 03672c4c */
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
                    /* try { // try from 036706c4 to 037706cb has its CatchHandler @ 03672c48 */
                    /* try { // try from 036706cc to 037706db has its CatchHandler @ 03672c44 */
    FUN_01bab630(&StringLiteral_14949);
    FUN_01bab630(&StringLiteral_8380);
    FUN_01bab630(&StringLiteral_8383);
    FUN_01bab630(&StringLiteral_12300);
                    /* try { // try from 036706f4 to 037706f7 has its CatchHandler @ 03673328 */
                    /* try { // try from 036706f8 to 0377071b has its CatchHandler @ 03673244 */
    FUN_01bab630(&StringLiteral_2019);
    FUN_01bab630(&StringLiteral_5029);
    FUN_01bab630(&StringLiteral_1943);
    FUN_01bab630(&StringLiteral_2079);
                    /* try { // try from 03670728 to 0377072f has its CatchHandler @ 03672f6c */
    FUN_01bab630(&StringLiteral_11387);
    FUN_01bab630(&StringLiteral_8381);
                    /* try { // try from 03670740 to 03770747 has its CatchHandler @ 03672f68 */
    FUN_01bab630(&StringLiteral_5030);
    FUN_01bab630(&StringLiteral_2036);
                    /* try { // try from 03670754 to 0377075b has its CatchHandler @ 03672f64 */
    FUN_01bab630(&StringLiteral_11386);
    FUN_01bab630(&StringLiteral_11383);
                    /* try { // try from 0367076c to 03770773 has its CatchHandler @ 03672f60 */
                    /* try { // try from 03670774 to 03770787 has its CatchHandler @ 03672f5c */
    FUN_01bab630(&StringLiteral_5031);
    FUN_01bab630(&StringLiteral_8379);
    FUN_01bab630(&StringLiteral_1882);
                    /* try { // try from 03670794 to 03770797 has its CatchHandler @ 03672f58 */
    FUN_01bab630(&StringLiteral_11621);
    FUN_01bab630(&StringLiteral_12298);
                    /* try { // try from 036707a8 to 037707af has its CatchHandler @ 03673240 */
    FUN_01bab630(&StringLiteral_11385);
                    /* try { // try from 036707bc to 037707c3 has its CatchHandler @ 03672f54 */
    FUN_01bab630(&StringLiteral_5028);
    FUN_01bab630(&StringLiteral_1606);
                    /* try { // try from 036707d4 to 037707db has its CatchHandler @ 03672f50 */
    FUN_01bab630(&StringLiteral_8382);
    FUN_01bab630(&StringLiteral_11384);
                    /* try { // try from 036707e8 to 037707ef has its CatchHandler @ 03672f4c */
    DAT_04568c62 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03670800 to 03770807 has its CatchHandler @ 03672f48 */
                    /* try { // try from 03670808 to 03770817 has its CatchHandler @ 03672f44 */
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_12298;
  thunk_FUN_01c20e04();
                    /* try { // try from 03670830 to 0377086b has its CatchHandler @ 03673218 */
  (__this->fields).super._Meta_k__BackingField = StringLiteral_12300;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length == 0) {
LAB_03671438:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03671438 to 03771447 has its CatchHandler @ 03673424 */
      FUN_01bab8d0();
    }
    pSVar1->m_Items[0] = StringLiteral_14949;
    thunk_FUN_01c20e04();
    ppSVar2 = &(__this->fields).super.SupportedPlatforms;
    *ppSVar2 = pSVar1;
                    /* try { // try from 03670880 to 0377088b has its CatchHandler @ 03672f40 */
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
    if (pSVar1 != (System_String_array *)0x0) {
                    /* try { // try from 0367089c to 037708ab has its CatchHandler @ 0367323c */
      if ((int)pSVar1->max_length == 0) goto LAB_03671438;
                    /* try { // try from 036708b8 to 037708bf has its CatchHandler @ 03672f3c */
      pSVar1->m_Items[0] = StringLiteral_11621;
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).super.JoystickNames;
      *ppSVar2 = pSVar1;
                    /* try { // try from 036708d0 to 037708d7 has its CatchHandler @ 03672f38 */
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      pIVar3 = (InControl_InputControlMapping_array *)
               FUN_01bab718(InControl_InputControlMapping___TypeInfo,0xc);
                    /* try { // try from 036708e4 to 037708eb has its CatchHandler @ 03672f34 */
      pIVar4 = (InControl_InputControlMapping_o *)
               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 036708fc to 03770903 has its CatchHandler @ 03672f30 */
      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
      if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
                    /* try { // try from 03670904 to 03770913 has its CatchHandler @ 03672f2c */
        (pIVar4->fields).handle = StringLiteral_2019;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 0xb;
                    /* try { // try from 03670924 to 0377092b has its CatchHandler @ 03672f28 */
        (pIVar4->fields).Source = InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button2
        ;
        thunk_FUN_01c20e04();
                    /* try { // try from 0367093c to 03770943 has its CatchHandler @ 03672f24 */
        if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 03670950 to 03770957 has its CatchHandler @ 03672f20 */
          if (lVar5 == 0) {
LAB_0367142c:
            uVar7 = thunk_FUN_01be8e1c();
                    /* try { // try from 03671430 to 03771437 has its CatchHandler @ 03673420 */
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar7,0);
          }
          if ((int)pIVar3->max_length == 0) goto LAB_03671438;
          pIVar3->m_Items[0] = pIVar4;
                    /* try { // try from 03670968 to 0377096f has its CatchHandler @ 03672f1c */
          thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                    /* try { // try from 03670970 to 0377097f has its CatchHandler @ 03672f18 */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 03670980 to 037709a3 has its CatchHandler @ 036732f0 */
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03671428;
          (pIVar4->fields).handle = StringLiteral_1943;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xc;
                    /* try { // try from 036709b0 to 037709b7 has its CatchHandler @ 03672f14 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button1;
          thunk_FUN_01c20e04();
                    /* try { // try from 036709c8 to 037709cf has its CatchHandler @ 03672f10 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0367142c;
          if ((uint)pIVar3->max_length < 2) goto LAB_03671438;
                    /* try { // try from 036709dc to 037709e3 has its CatchHandler @ 03672f0c */
          pIVar3->m_Items[1] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 036709f4 to 037709fb has its CatchHandler @ 03672f08 */
                    /* try { // try from 036709fc to 03770a0b has its CatchHandler @ 03672f04 */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03671428;
          (pIVar4->fields).handle = StringLiteral_2036;
          thunk_FUN_01c20e04();
                    /* try { // try from 03670a1c to 03770a23 has its CatchHandler @ 03672f00 */
          (pIVar4->fields).Target = 0xd;
                    /* try { // try from 03670a34 to 03770a3b has its CatchHandler @ 03672efc */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button3;
          thunk_FUN_01c20e04();
                    /* try { // try from 03670a48 to 03770a4f has its CatchHandler @ 03672ef8 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0367142c;
          if ((uint)pIVar3->max_length < 3) goto LAB_03671438;
                    /* try { // try from 03670a60 to 03770a67 has its CatchHandler @ 03672ef4 */
          pIVar3->m_Items[2] = pIVar4;
                    /* try { // try from 03670a68 to 03770a77 has its CatchHandler @ 03672ef0 */
          thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03670a78 to 03770a97 has its CatchHandler @ 03673238 */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03671428;
          (pIVar4->fields).handle = StringLiteral_1606;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xe;
                    /* try { // try from 03670aa4 to 03770aab has its CatchHandler @ 03672eec */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0;
          thunk_FUN_01c20e04();
                    /* try { // try from 03670abc to 03770ac3 has its CatchHandler @ 03672ee8 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0367142c;
                    /* try { // try from 03670ad0 to 03770ad7 has its CatchHandler @ 03672ee4 */
          if ((uint)pIVar3->max_length < 4) goto LAB_03671438;
          pIVar3->m_Items[3] = pIVar4;
                    /* try { // try from 03670ae8 to 03770aef has its CatchHandler @ 03672ee0 */
          thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                    /* try { // try from 03670af0 to 03770aff has its CatchHandler @ 03672edc */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03671428;
                    /* try { // try from 03670b04 to 03770b0f has its CatchHandler @ 03672ed8 */
          (pIVar4->fields).handle = StringLiteral_8379;
          thunk_FUN_01c20e04();
                    /* try { // try from 03670b20 to 03770b27 has its CatchHandler @ 03672c40 */
          (pIVar4->fields).Target = 0x11;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button4;
                    /* try { // try from 03670b38 to 03770b3f has its CatchHandler @ 03672c3c */
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 03670b4c to 03770b53 has its CatchHandler @ 03672c38 */
          if (lVar5 == 0) goto LAB_0367142c;
          if ((uint)pIVar3->max_length < 5) goto LAB_03671438;
          pIVar3->m_Items[4] = pIVar4;
                    /* try { // try from 03670b64 to 03770b6b has its CatchHandler @ 03672c34 */
          thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                    /* try { // try from 03670b6c to 03770b7b has its CatchHandler @ 03672c30 */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03671428;
                    /* try { // try from 03670b94 to 03770b97 has its CatchHandler @ 03673328 */
          (pIVar4->fields).handle = StringLiteral_11383;
                    /* try { // try from 03670b98 to 03770bbb has its CatchHandler @ 03673234 */
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x12;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
          thunk_FUN_01c20e04();
                    /* try { // try from 03670bc8 to 03770bcf has its CatchHandler @ 03672ed4 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0367142c;
          if ((uint)pIVar3->max_length < 6) goto LAB_03671438;
                    /* try { // try from 03670be0 to 03770be7 has its CatchHandler @ 03672ed0 */
          pIVar3->m_Items[5] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03670bf4 to 03770bfb has its CatchHandler @ 03672ecc */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03671428;
                    /* try { // try from 03670c0c to 03770c13 has its CatchHandler @ 03672ec8 */
                    /* try { // try from 03670c14 to 03770c27 has its CatchHandler @ 03672ec4 */
          (pIVar4->fields).handle = StringLiteral_1882;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x14;
                    /* try { // try from 03670c34 to 03770c37 has its CatchHandler @ 03672ec0 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9;
          thunk_FUN_01c20e04();
                    /* try { // try from 03670c48 to 03770c67 has its CatchHandler @ 036732e8 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0367142c;
          if ((uint)pIVar3->max_length < 7) goto LAB_03671438;
          pIVar3->m_Items[6] = pIVar4;
                    /* try { // try from 03670c68 to 03770c6b has its CatchHandler @ 03673230 */
          thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03670c7c to 03770c83 has its CatchHandler @ 03672ebc */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03671428;
          (pIVar4->fields).handle = StringLiteral_2079;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x15;
                    /* try { // try from 03670ca8 to 03770caf has its CatchHandler @ 036735ac */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button8;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 03670ccc to 03770d07 has its CatchHandler @ 03673658 */
          if (lVar5 == 0) goto LAB_0367142c;
          if ((uint)pIVar3->max_length < 8) goto LAB_03671438;
          pIVar3->m_Items[7] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03671428;
          (pIVar4->fields).handle = StringLiteral_8383;
          thunk_FUN_01c20e04();
                    /* try { // try from 03670d1c to 03770d27 has its CatchHandler @ 03673598 */
          (pIVar4->fields).Target = 0xf;
                    /* try { // try from 03670d30 to 03770d57 has its CatchHandler @ 036735c4 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button6;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0367142c;
                    /* try { // try from 03670d58 to 03770d5b has its CatchHandler @ 03673594 */
          if ((uint)pIVar3->max_length < 9) goto LAB_03671438;
          pIVar3->m_Items[8] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
                    /* try { // try from 03670d6c to 03770d73 has its CatchHandler @ 036735a8 */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03671428;
          (pIVar4->fields).handle = StringLiteral_11387;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x10;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button7;
          thunk_FUN_01c20e04();
                    /* try { // try from 03670dc0 to 03770dcb has its CatchHandler @ 0367369c */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0367142c;
          if ((uint)pIVar3->max_length < 10) goto LAB_03671438;
                    /* try { // try from 03670de0 to 03770deb has its CatchHandler @ 03673728 */
          pIVar3->m_Items[9] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03671428;
                    /* try { // try from 03670e04 to 03770e0f has its CatchHandler @ 03673714 */
          (pIVar4->fields).handle = StringLiteral_8380;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 3;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button10;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0367142c;
                    /* try { // try from 03670e50 to 03770e53 has its CatchHandler @ 03673314 */
          if ((uint)pIVar3->max_length < 0xb) goto LAB_03671438;
          pIVar3->m_Items[10] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 10,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03670e7c to 03770e7f has its CatchHandler @ 036733bc */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03671428;
          (pIVar4->fields).handle = StringLiteral_11384;
          thunk_FUN_01c20e04();
                    /* try { // try from 03670e9c to 03770e9f has its CatchHandler @ 03673528 */
          (pIVar4->fields).Target = 6;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button11;
          thunk_FUN_01c20e04();
                    /* try { // try from 03670ec8 to 03770ecb has its CatchHandler @ 03673330 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_0367142c;
                    /* try { // try from 03670ed4 to 03770ed7 has its CatchHandler @ 03673528 */
          if ((uint)pIVar3->max_length < 0xc) goto LAB_03671438;
          pIVar3->m_Items[0xb] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 0xb,pIVar4);
          ppIVar6 = &(__this->fields).super._ButtonMappings_k__BackingField;
          *ppIVar6 = pIVar3;
          thunk_FUN_01c20e04(ppIVar6,pIVar3);
          pIVar3 = (InControl_InputControlMapping_array *)
                   FUN_01bab718(InControl_InputControlMapping___TypeInfo,8);
                    /* try { // try from 03670f08 to 03770f17 has its CatchHandler @ 03673668 */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 03670f24 to 03770f2b has its CatchHandler @ 03673550 */
          if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
            (pIVar4->fields).handle = StringLiteral_8381;
                    /* try { // try from 03670f3c to 03770f43 has its CatchHandler @ 03673578 */
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 1;
                    /* try { // try from 03670f50 to 03770f57 has its CatchHandler @ 03673590 */
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog0;
            thunk_FUN_01c20e04();
            if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
                    /* try { // try from 03670f68 to 03770f6f has its CatchHandler @ 03673574 */
                    /* try { // try from 03670f70 to 03770f7f has its CatchHandler @ 03673554 */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_0367142c;
              if ((int)pIVar3->max_length != 0) {
                pIVar3->m_Items[0] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03670f98 to 03770f9b has its CatchHandler @ 036733d4 */
                    /* try { // try from 03670f9c to 03770fc3 has its CatchHandler @ 03673664 */
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03671428;
                (pIVar4->fields).handle = StringLiteral_8382;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 2;
                    /* try { // try from 03670fd0 to 03770fd7 has its CatchHandler @ 0367358c */
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Invert = true;
                    /* try { // try from 03670fe8 to 03770fef has its CatchHandler @ 03673560 */
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) goto LAB_0367142c;
                    /* try { // try from 03670ffc to 03771003 has its CatchHandler @ 03673580 */
                if (1 < (uint)pIVar3->max_length) {
                  pIVar3->m_Items[1] = pIVar4;
                    /* try { // try from 03671014 to 0377101b has its CatchHandler @ 03673564 */
                  thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                    /* try { // try from 0367101c to 0377102b has its CatchHandler @ 03673588 */
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03671428;
                  (pIVar4->fields).handle = StringLiteral_11385;
                  thunk_FUN_01c20e04();
                    /* try { // try from 03671048 to 0377104f has its CatchHandler @ 036733d0 */
                  (pIVar4->fields).Target = 4;
                    /* try { // try from 03671060 to 03771067 has its CatchHandler @ 036733cc */
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog2;
                  thunk_FUN_01c20e04();
                    /* try { // try from 03671074 to 0377107b has its CatchHandler @ 036733c4 */
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_0367142c;
                  if (2 < (uint)pIVar3->max_length) {
                    /* try { // try from 0367108c to 03771093 has its CatchHandler @ 036733c8 */
                    pIVar3->m_Items[2] = pIVar4;
                    /* try { // try from 03671094 to 037710a3 has its CatchHandler @ 036733d8 */
                    thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03671428;
                    /* try { // try from 036710bc to 037710bf has its CatchHandler @ 03673528 */
                    /* try { // try from 036710c0 to 037710e3 has its CatchHandler @ 03673660 */
                    (pIVar4->fields).handle = StringLiteral_11386;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 5;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog3;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Invert = true;
                    /* try { // try from 036710f0 to 037710f7 has its CatchHandler @ 03673558 */
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_0367142c;
                    /* try { // try from 03671108 to 0377110f has its CatchHandler @ 0367355c */
                    if (3 < (uint)pIVar3->max_length) {
                      pIVar3->m_Items[3] = pIVar4;
                    /* try { // try from 0367111c to 03771123 has its CatchHandler @ 03673570 */
                      thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 03671134 to 0377113b has its CatchHandler @ 0367357c */
                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03671428;
                    /* try { // try from 0367113c to 0377114b has its CatchHandler @ 03673584 */
                    /* try { // try from 03671150 to 0377115b has its CatchHandler @ 03673568 */
                      (pIVar4->fields).handle = StringLiteral_5029;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).Target = 9;
                    /* try { // try from 0367116c to 03771173 has its CatchHandler @ 0367345c */
                      (pIVar4->fields).Source =
                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                      thunk_FUN_01c20e04();
                      if ((InControl_InputControlMapping_Range_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03671184 to 0377118b has its CatchHandler @ 03673454 */
                        thunk_FUN_01ba7564();
                      }
                    /* try { // try from 03671198 to 0377119f has its CatchHandler @ 03673450 */
                      (pIVar4->fields).SourceRange =
                           InControl_InputControlMapping_Range_TypeInfo->static_fields->Negative;
                      thunk_FUN_01c20e04();
                    /* try { // try from 036711b0 to 037711b7 has its CatchHandler @ 03673458 */
                      (pIVar4->fields).TargetRange =
                           InControl_InputControlMapping_Range_TypeInfo->static_fields->Negative;
                      thunk_FUN_01c20e04();
                    /* try { // try from 036711b8 to 037711c7 has its CatchHandler @ 0367344c */
                      (pIVar4->fields).Invert = true;
                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                      if (lVar5 == 0) goto LAB_0367142c;
                      if (4 < (uint)pIVar3->max_length) {
                    /* try { // try from 036711e0 to 037711e3 has its CatchHandler @ 03673528 */
                    /* try { // try from 036711e4 to 03771207 has its CatchHandler @ 0367365c */
                        pIVar3->m_Items[4] = pIVar4;
                        thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                        pIVar4 = (InControl_InputControlMapping_o *)
                                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03671428;
                    /* try { // try from 03671218 to 0377121f has its CatchHandler @ 0367346c */
                        (pIVar4->fields).handle = StringLiteral_5030;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Target = 10;
                    /* try { // try from 03671230 to 03771237 has its CatchHandler @ 03673478 */
                        (pIVar4->fields).Source =
                             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                        thunk_FUN_01c20e04();
                    /* try { // try from 03671244 to 0377124b has its CatchHandler @ 03673460 */
                        (pIVar4->fields).SourceRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                        thunk_FUN_01c20e04();
                    /* try { // try from 0367125c to 03771263 has its CatchHandler @ 03673468 */
                    /* try { // try from 03671264 to 03771277 has its CatchHandler @ 0367347c */
                        (pIVar4->fields).TargetRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                        thunk_FUN_01c20e04();
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                    /* try { // try from 03671280 to 03771287 has its CatchHandler @ 03673474 */
                        if (lVar5 == 0) goto LAB_0367142c;
                        if (5 < (uint)pIVar3->max_length) {
                          pIVar3->m_Items[5] = pIVar4;
                    /* try { // try from 03671298 to 0377129f has its CatchHandler @ 03673470 */
                          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                          pIVar4 = (InControl_InputControlMapping_o *)
                                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 036712ac to 037712b3 has its CatchHandler @ 0367353c */
                          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03671428;
                    /* try { // try from 036712c4 to 037712cb has its CatchHandler @ 03673544 */
                          (pIVar4->fields).handle = StringLiteral_5028;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).Target = 8;
                    /* try { // try from 036712d8 to 037712df has its CatchHandler @ 0367354c */
                          (pIVar4->fields).Source =
                               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
                          thunk_FUN_01c20e04();
                    /* try { // try from 036712f0 to 037712f7 has its CatchHandler @ 03673530 */
                    /* try { // try from 036712f8 to 0377130b has its CatchHandler @ 03673534 */
                          (pIVar4->fields).SourceRange =
                               InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive
                          ;
                          thunk_FUN_01c20e04();
                    /* try { // try from 03671318 to 0377131b has its CatchHandler @ 03673540 */
                          (pIVar4->fields).TargetRange =
                               InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive
                          ;
                          thunk_FUN_01c20e04();
                    /* try { // try from 0367132c to 03771333 has its CatchHandler @ 03673548 */
                          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                            element_class);
                          if (lVar5 == 0) goto LAB_0367142c;
                          if (6 < (uint)pIVar3->max_length) {
                            pIVar3->m_Items[6] = pIVar4;
                    /* try { // try from 0367134c to 03771353 has its CatchHandler @ 0367322c */
                            thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                            pIVar4 = (InControl_InputControlMapping_o *)
                                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_03671428;
                            (pIVar4->fields).handle = StringLiteral_5031;
                            thunk_FUN_01c20e04();
                    /* try { // try from 03671384 to 0377138f has its CatchHandler @ 03672c2c */
                            (pIVar4->fields).Target = 7;
                            (pIVar4->fields).Source =
                                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
                            thunk_FUN_01c20e04();
                    /* try { // try from 036713a4 to 037713a7 has its CatchHandler @ 03673328 */
                    /* try { // try from 036713a8 to 037713ab has its CatchHandler @ 03672e10 */
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
                            if (lVar5 == 0) goto LAB_0367142c;
                    /* try { // try from 036713ec to 037713f3 has its CatchHandler @ 03673414 */
                            if (7 < (uint)pIVar3->max_length) {
                              pIVar3->m_Items[7] = pIVar4;
                    /* try { // try from 03671404 to 0377140b has its CatchHandler @ 03673418 */
                              thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
                              ppIVar6 = &(__this->fields).super._AnalogMappings_k__BackingField;
                              *ppIVar6 = pIVar3;
                    /* try { // try from 03671418 to 0377141f has its CatchHandler @ 0367341c */
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
              goto LAB_03671438;
            }
          }
        }
      }
    }
  }
LAB_03671428:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

