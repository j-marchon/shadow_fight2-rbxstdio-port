// InControl.PlayStation4MacBTProfile$$.ctor @ RVA 0x35964F4

void InControl_PlayStation4MacBTProfile___ctor
               (InControl_PlayStation4MacBTProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03696518 to 03796533 has its CatchHandler @ 03696590 */
  if ((DAT_04568da5 & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
                    /* try { // try from 03696534 to 0379657b has its CatchHandler @ 036961e4 */
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_Range_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_4361);
    FUN_01bab630(&StringLiteral_8380);
                    /* try { // try from 0369657c to 0379657f has its CatchHandler @ 036965a0 */
                    /* try { // try from 03696580 to 03796583 has its CatchHandler @ 03696594 */
    FUN_01bab630(&StringLiteral_8383);
                    /* try { // try from 03696584 to 03796587 has its CatchHandler @ 036965a0 */
                    /* try { // try from 03696588 to 0379658f has its CatchHandler @ 0369659c */
    FUN_01bab630(&StringLiteral_5029);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03696518 with catch @ 03696590
                       try { // try from 03696590 to 037965bb has its CatchHandler @ 036961e4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03696580 with catch @ 03696594
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369642c with catch @ 03696598
                        */
    FUN_01bab630(&StringLiteral_14475);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03696588 with catch @ 0369659c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369657c with catch @ 036965a0
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03696584 with catch @ 036965a0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03696448 with catch @ 036965a4
                        */
    FUN_01bab630(&StringLiteral_11387);
    FUN_01bab630(&StringLiteral_8381);
                    /* try { // try from 036965bc to 037965bf has its CatchHandler @ 036965e8 */
    FUN_01bab630(&StringLiteral_12584);
                    /* try { // try from 036965c0 to 037965f7 has its CatchHandler @ 036961e4 */
    FUN_01bab630(&StringLiteral_12324);
    FUN_01bab630(&StringLiteral_10299);
    FUN_01bab630(&StringLiteral_13896);
                    /* catch() { ... } // from try @ 036965bc with catch @ 036965e8 */
    FUN_01bab630(&StringLiteral_5030);
                    /* try { // try from 036965f8 to 037965ff has its CatchHandler @ 03696614 */
    FUN_01bab630(&StringLiteral_11386);
                    /* try { // try from 03696600 to 0379660b has its CatchHandler @ 036961e4 */
    FUN_01bab630(&StringLiteral_9686);
                    /* try { // try from 0369660c to 03796613 has its CatchHandler @ 03696614 */
    FUN_01bab630(&StringLiteral_11383);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036965f8 with catch @ 03696614
                       catch(type#2 @ 00000000) { ... } // from try @ 0369660c with catch @ 03696614
                        */
                    /* try { // try from 03696618 to 0379677f has its CatchHandler @ 03696618
                       catch() { ... } // from try @ 03696618 with catch @ 03696618
                       catch() { ... } // from try @ 03696844 with catch @ 03696618
                       catch() { ... } // from try @ 03696868 with catch @ 03696618
                       catch() { ... } // from try @ 036968e4 with catch @ 03696618
                       catch() { ... } // from try @ 036968ec with catch @ 03696618
                       catch() { ... } // from try @ 03696928 with catch @ 03696618
                       catch() { ... } // from try @ 0369696c with catch @ 03696618 */
    FUN_01bab630(&StringLiteral_5031);
    FUN_01bab630(&StringLiteral_8379);
    FUN_01bab630(&StringLiteral_4900);
    FUN_01bab630(&StringLiteral_11981);
    FUN_01bab630(&StringLiteral_10296);
    FUN_01bab630(&StringLiteral_11385);
    FUN_01bab630(&StringLiteral_13920);
    FUN_01bab630(&StringLiteral_5028);
    FUN_01bab630(&StringLiteral_8382);
    FUN_01bab630(&StringLiteral_9974);
    FUN_01bab630(&StringLiteral_11384);
    DAT_04568da5 = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_10296;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_10299;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length == 0) {
LAB_036976e4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar1->m_Items[0] = StringLiteral_9686;
    thunk_FUN_01c20e04();
    ppSVar2 = &(__this->fields).super.SupportedPlatforms;
    *ppSVar2 = pSVar1;
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
    if (pSVar1 != (System_String_array *)0x0) {
      if ((int)pSVar1->max_length == 0) goto LAB_036976e4;
      pSVar1->m_Items[0] = StringLiteral_14475;
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).super.JoystickNames;
                    /* try { // try from 03696780 to 03796787 has its CatchHandler @ 03696914 */
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      pIVar3 = (InControl_InputControlMapping_array *)
               FUN_01bab718(InControl_InputControlMapping___TypeInfo,0xc);
                    /* try { // try from 03696798 to 037967a3 has its CatchHandler @ 03696900 */
      pIVar4 = (InControl_InputControlMapping_o *)
               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
      if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
                    /* try { // try from 036967b8 to 037967bf has its CatchHandler @ 03696854 */
        (pIVar4->fields).handle = StringLiteral_4900;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 0xb;
                    /* try { // try from 036967d8 to 037967df has its CatchHandler @ 03696848 */
        (pIVar4->fields).Source = InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button1
        ;
        thunk_FUN_01c20e04();
        if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
                    /* try { // try from 036967f4 to 037967fb has its CatchHandler @ 0369690c */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) {
LAB_036976d8:
            uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar7,0);
          }
          if ((int)pIVar3->max_length == 0) goto LAB_036976e4;
          pIVar3->m_Items[0] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                    /* try { // try from 03696824 to 0379682f has its CatchHandler @ 036968f8 */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_036976d4;
                    /* try { // try from 03696838 to 0379683b has its CatchHandler @ 03696850 */
                    /* try { // try from 03696840 to 03796843 has its CatchHandler @ 0369684c */
                    /* try { // try from 03696844 to 03796863 has its CatchHandler @ 03696618 */
                    /* catch() { ... } // from try @ 036967d8 with catch @ 03696848 */
          (pIVar4->fields).handle = StringLiteral_4361;
                    /* catch() { ... } // from try @ 03696840 with catch @ 0369684c */
          thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 03696838 with catch @ 03696850 */
                    /* catch() { ... } // from try @ 036967b8 with catch @ 03696854 */
          (pIVar4->fields).Target = 0xc;
                    /* try { // try from 03696864 to 03796867 has its CatchHandler @ 036968ec */
                    /* try { // try from 03696868 to 037968bb has its CatchHandler @ 03696618 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button2;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_036976d8;
          if ((uint)pIVar3->max_length < 2) goto LAB_036976e4;
          pIVar3->m_Items[1] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_036976d4;
                    /* try { // try from 036968bc to 037968d7 has its CatchHandler @ 03696980 */
          (pIVar4->fields).handle = StringLiteral_12324;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xd;
                    /* try { // try from 036968d8 to 037968df has its CatchHandler @ 03696910 */
                    /* try { // try from 036968e0 to 037968e3 has its CatchHandler @ 03696904 */
                    /* try { // try from 036968e4 to 037968e7 has its CatchHandler @ 03696618 */
                    /* try { // try from 036968e8 to 037968eb has its CatchHandler @ 036968fc */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0;
                    /* catch() { ... } // from try @ 03696864 with catch @ 036968ec
                       try { // try from 036968ec to 03796923 has its CatchHandler @ 03696618 */
          thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 03696824 with catch @ 036968f8 */
                    /* catch() { ... } // from try @ 036968e8 with catch @ 036968fc */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* catch() { ... } // from try @ 03696798 with catch @ 03696900 */
          if (lVar5 == 0) goto LAB_036976d8;
                    /* catch() { ... } // from try @ 036968e0 with catch @ 03696904 */
                    /* catch() { ... } // from try @ 036967f4 with catch @ 0369690c */
          if ((uint)pIVar3->max_length < 3) goto LAB_036976e4;
                    /* catch() { ... } // from try @ 036968d8 with catch @ 03696910 */
                    /* catch() { ... } // from try @ 03696780 with catch @ 03696914 */
          pIVar3->m_Items[2] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                    /* try { // try from 03696924 to 03796927 has its CatchHandler @ 03696954 */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03696928 to 03796963 has its CatchHandler @ 03696618 */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_036976d4;
          (pIVar4->fields).handle = StringLiteral_13920;
          thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 03696924 with catch @ 03696954 */
          (pIVar4->fields).Target = 0xe;
                    /* try { // try from 03696964 to 0379696b has its CatchHandler @ 03696980 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button3;
                    /* try { // try from 0369696c to 03796977 has its CatchHandler @ 03696618 */
          thunk_FUN_01c20e04();
                    /* try { // try from 03696978 to 0379697f has its CatchHandler @ 03696980 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* catch() { ... } // from try @ 036968bc with catch @ 03696980
                       catch() { ... } // from try @ 03696964 with catch @ 03696980
                       catch() { ... } // from try @ 03696978 with catch @ 03696980 */
          if (lVar5 == 0) goto LAB_036976d8;
                    /* try { // try from 03696984 to 03796a2f has its CatchHandler @ 03696984
                       catch() { ... } // from try @ 03696984 with catch @ 03696984
                       catch() { ... } // from try @ 03696a5c with catch @ 03696984
                       catch() { ... } // from try @ 03696a94 with catch @ 03696984
                       catch() { ... } // from try @ 03696ac0 with catch @ 03696984
                       catch() { ... } // from try @ 03696af0 with catch @ 03696984 */
          if ((uint)pIVar3->max_length < 4) goto LAB_036976e4;
          pIVar3->m_Items[3] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_036976d4;
          (pIVar4->fields).handle = StringLiteral_8379;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x11;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button4;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_036976d8;
          if ((uint)pIVar3->max_length < 5) goto LAB_036976e4;
          pIVar3->m_Items[4] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03696a30 to 03796a37 has its CatchHandler @ 03696aa4 */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_036976d4;
          (pIVar4->fields).handle = StringLiteral_11383;
          thunk_FUN_01c20e04();
                    /* try { // try from 03696a54 to 03796a5b has its CatchHandler @ 03696a98 */
          (pIVar4->fields).Target = 0x12;
                    /* try { // try from 03696a5c to 03796a8b has its CatchHandler @ 03696984 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_036976d8;
                    /* try { // try from 03696a8c to 03796a8f has its CatchHandler @ 03696aa0 */
          if ((uint)pIVar3->max_length < 6) goto LAB_036976e4;
                    /* try { // try from 03696a90 to 03796a93 has its CatchHandler @ 03696a9c */
                    /* try { // try from 03696a94 to 03796abb has its CatchHandler @ 03696984 */
          pIVar3->m_Items[5] = pIVar4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03696a54 with catch @ 03696a98
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03696a90 with catch @ 03696a9c
                        */
          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03696a8c with catch @ 03696aa0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03696a30 with catch @ 03696aa4
                        */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_036976d4;
                    /* try { // try from 03696abc to 03796abf has its CatchHandler @ 03696ae0 */
                    /* try { // try from 03696ac0 to 03796ae7 has its CatchHandler @ 03696984 */
          (pIVar4->fields).handle = StringLiteral_12584;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x16;
                    /* catch() { ... } // from try @ 03696abc with catch @ 03696ae0 */
                    /* try { // try from 03696ae8 to 03796aef has its CatchHandler @ 03696b04 */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button12;
          thunk_FUN_01c20e04();
                    /* try { // try from 03696af0 to 03796afb has its CatchHandler @ 03696984 */
                    /* try { // try from 03696afc to 03796b03 has its CatchHandler @ 03696b04 */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_036976d8;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03696ae8 with catch @ 03696b04
                       catch(type#2 @ 00000000) { ... } // from try @ 03696afc with catch @ 03696b04
                        */
          if ((uint)pIVar3->max_length < 7) goto LAB_036976e4;
          pIVar3->m_Items[6] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_036976d4;
          (pIVar4->fields).handle = StringLiteral_9974;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x1b;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_036976d8;
          if ((uint)pIVar3->max_length < 8) goto LAB_036976e4;
          pIVar3->m_Items[7] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_036976d4;
          (pIVar4->fields).handle = StringLiteral_11981;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x19;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button8;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_036976d8;
          if ((uint)pIVar3->max_length < 9) goto LAB_036976e4;
                    /* try { // try from 03696c10 to 03796cfb has its CatchHandler @ 03696c10
                       catch() { ... } // from try @ 03696c10 with catch @ 03696c10
                       catch() { ... } // from try @ 03696d20 with catch @ 03696c10
                       catch() { ... } // from try @ 03696d60 with catch @ 03696c10
                       catch() { ... } // from try @ 03696d88 with catch @ 03696c10
                       catch() { ... } // from try @ 03696dc0 with catch @ 03696c10 */
          pIVar3->m_Items[8] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_036976d4;
          (pIVar4->fields).handle = StringLiteral_8380;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 3;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button10;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_036976d8;
          if ((uint)pIVar3->max_length < 10) goto LAB_036976e4;
          pIVar3->m_Items[9] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_036976d4;
          (pIVar4->fields).handle = StringLiteral_11384;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 6;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button11;
          thunk_FUN_01c20e04();
                    /* try { // try from 03696cfc to 03796d03 has its CatchHandler @ 03696d6c */
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_036976d8;
          if ((uint)pIVar3->max_length < 0xb) goto LAB_036976e4;
                    /* try { // try from 03696d14 to 03796d1f has its CatchHandler @ 03696d64 */
          pIVar3->m_Items[10] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 10,pIVar4);
                    /* try { // try from 03696d20 to 03796d5b has its CatchHandler @ 03696c10 */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_036976d4;
          (pIVar4->fields).handle = StringLiteral_13896;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x20;
                    /* try { // try from 03696d5c to 03796d5f has its CatchHandler @ 03696d68 */
                    /* try { // try from 03696d60 to 03796d83 has its CatchHandler @ 03696c10 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03696d14 with catch @ 03696d64
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03696d5c with catch @ 03696d68
                        */
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button13;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03696cfc with catch @ 03696d6c
                        */
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_036976d8;
                    /* try { // try from 03696d84 to 03796d87 has its CatchHandler @ 03696db0 */
                    /* try { // try from 03696d88 to 03796db7 has its CatchHandler @ 03696c10 */
          if ((uint)pIVar3->max_length < 0xc) goto LAB_036976e4;
          pIVar3->m_Items[0xb] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 0xb,pIVar4);
          ppIVar6 = &(__this->fields).super._ButtonMappings_k__BackingField;
          *ppIVar6 = pIVar3;
          thunk_FUN_01c20e04(ppIVar6,pIVar3);
                    /* catch() { ... } // from try @ 03696d84 with catch @ 03696db0 */
                    /* try { // try from 03696db8 to 03796dbf has its CatchHandler @ 03696dd4 */
          pIVar3 = (InControl_InputControlMapping_array *)
                   FUN_01bab718(InControl_InputControlMapping___TypeInfo,0xe);
                    /* try { // try from 03696dc0 to 03796dcb has its CatchHandler @ 03696c10 */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03696dcc to 03796dd3 has its CatchHandler @ 03696dd4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03696db8 with catch @ 03696dd4
                       catch(type#2 @ 00000000) { ... } // from try @ 03696dcc with catch @ 03696dd4
                        */
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 03696dd8 to 03796f37 has its CatchHandler @ 03696dd8
                       catch() { ... } // from try @ 03696dd8 with catch @ 03696dd8
                       catch() { ... } // from try @ 03696f58 with catch @ 03696dd8
                       catch() { ... } // from try @ 03696fb8 with catch @ 03696dd8
                       catch() { ... } // from try @ 03696ff0 with catch @ 03696dd8 */
          if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
            (pIVar4->fields).handle = StringLiteral_8381;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 1;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog0;
            thunk_FUN_01c20e04();
            if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_036976d8;
              if ((int)pIVar3->max_length != 0) {
                pIVar3->m_Items[0] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_036976d4;
                (pIVar4->fields).handle = StringLiteral_8382;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 2;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Invert = true;
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) goto LAB_036976d8;
                if (1 < (uint)pIVar3->max_length) {
                  pIVar3->m_Items[1] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_036976d4;
                  (pIVar4->fields).handle = StringLiteral_11385;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Target = 4;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog2;
                  thunk_FUN_01c20e04();
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_036976d8;
                    /* try { // try from 03696f38 to 03796f3f has its CatchHandler @ 03696f9c */
                  if (2 < (uint)pIVar3->max_length) {
                    pIVar3->m_Items[2] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                    /* try { // try from 03696f4c to 03796f57 has its CatchHandler @ 03696f98 */
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03696f58 to 03796fb3 has its CatchHandler @ 03696dd8 */
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_036976d4;
                    (pIVar4->fields).handle = StringLiteral_11386;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 5;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog3;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03696f4c with catch @ 03696f98
                        */
                    thunk_FUN_01c20e04();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03696f38 with catch @ 03696f9c
                        */
                    (pIVar4->fields).Invert = true;
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 03696fb4 to 03796fb7 has its CatchHandler @ 03696fe0 */
                    if (lVar5 == 0) goto LAB_036976d8;
                    /* try { // try from 03696fb8 to 03796fe7 has its CatchHandler @ 03696dd8 */
                    if (3 < (uint)pIVar3->max_length) {
                      pIVar3->m_Items[3] = pIVar4;
                      thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 03696fb4 with catch @ 03696fe0 */
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 03696fe8 to 03796fef has its CatchHandler @ 03697004 */
                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_036976d4;
                    /* try { // try from 03696ff0 to 03796ffb has its CatchHandler @ 03696dd8 */
                    /* try { // try from 03696ffc to 03797003 has its CatchHandler @ 03697004 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03696fe8 with catch @ 03697004
                       catch(type#2 @ 00000000) { ... } // from try @ 03696ffc with catch @ 03697004
                        */
                      (pIVar4->fields).handle = StringLiteral_8383;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).Target = 0xf;
                      (pIVar4->fields).Source =
                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                      thunk_FUN_01c20e04();
                      if ((InControl_InputControlMapping_Range_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      (pIVar4->fields).TargetRange =
                           InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).IgnoreInitialZeroValue = true;
                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                      if (lVar5 == 0) goto LAB_036976d8;
                      if (4 < (uint)pIVar3->max_length) {
                        pIVar3->m_Items[4] = pIVar4;
                        thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                        pIVar4 = (InControl_InputControlMapping_o *)
                                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_036976d4;
                        (pIVar4->fields).handle = StringLiteral_11387;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Target = 0x10;
                        (pIVar4->fields).Source =
                             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).TargetRange =
                             InControl_InputControlMapping_Range_TypeInfo->static_fields->Positive;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).IgnoreInitialZeroValue = true;
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                        if (lVar5 == 0) goto LAB_036976d8;
                        if (5 < (uint)pIVar3->max_length) {
                          pIVar3->m_Items[5] = pIVar4;
                          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                          pIVar4 = (InControl_InputControlMapping_o *)
                                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_036976d4;
                          (pIVar4->fields).handle = StringLiteral_5029;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).Target = 9;
                          (pIVar4->fields).Source =
                               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog10;
                          thunk_FUN_01c20e04();
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
                          if (lVar5 == 0) goto LAB_036976d8;
                          if (6 < (uint)pIVar3->max_length) {
                            pIVar3->m_Items[6] = pIVar4;
                            thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                            pIVar4 = (InControl_InputControlMapping_o *)
                                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_036976d4;
                            (pIVar4->fields).handle = StringLiteral_5030;
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).Target = 10;
                            (pIVar4->fields).Source =
                                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog10
                            ;
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).SourceRange =
                                 InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                 Positive;
                            thunk_FUN_01c20e04();
                    /* try { // try from 0369724c to 037973db has its CatchHandler @ 0369724c
                       catch() { ... } // from try @ 0369724c with catch @ 0369724c
                       catch() { ... } // from try @ 03697478 with catch @ 0369724c
                       catch() { ... } // from try @ 036974e4 with catch @ 0369724c
                       catch() { ... } // from try @ 03697524 with catch @ 0369724c
                       catch() { ... } // from try @ 0369756c with catch @ 0369724c */
                            (pIVar4->fields).TargetRange =
                                 InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                 Positive;
                            thunk_FUN_01c20e04();
                            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                              element_class);
                            if (lVar5 == 0) goto LAB_036976d8;
                            if (7 < (uint)pIVar3->max_length) {
                              pIVar3->m_Items[7] = pIVar4;
                              thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
                              pIVar4 = (InControl_InputControlMapping_o *)
                                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                              if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                              goto LAB_036976d4;
                              (pIVar4->fields).handle = StringLiteral_5028;
                              thunk_FUN_01c20e04();
                              (pIVar4->fields).Target = 8;
                              (pIVar4->fields).Source =
                                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                   Analog11;
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
                              if (lVar5 == 0) goto LAB_036976d8;
                              if (8 < (uint)pIVar3->max_length) {
                                pIVar3->m_Items[8] = pIVar4;
                                thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
                                pIVar4 = (InControl_InputControlMapping_o *)
                                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                                if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                goto LAB_036976d4;
                                (pIVar4->fields).handle = StringLiteral_5031;
                                thunk_FUN_01c20e04();
                                (pIVar4->fields).Target = 7;
                                (pIVar4->fields).Source =
                                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                     Analog11;
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
                    /* try { // try from 036973dc to 037973e3 has its CatchHandler @ 03697508 */
                                if (lVar5 == 0) goto LAB_036976d8;
                                if (9 < (uint)pIVar3->max_length) {
                    /* try { // try from 036973f0 to 037973fb has its CatchHandler @ 03697504 */
                                  pIVar3->m_Items[9] = pIVar4;
                                  thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
                                  pIVar4 = (InControl_InputControlMapping_o *)
                                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo
                                                             );
                    /* try { // try from 0369740c to 03797413 has its CatchHandler @ 036974f4 */
                                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                  goto LAB_036976d4;
                                  (pIVar4->fields).handle = StringLiteral_5029;
                    /* try { // try from 03697420 to 0379742f has its CatchHandler @ 036974f8 */
                                  thunk_FUN_01c20e04();
                                  (pIVar4->fields).Target = 9;
                                  (pIVar4->fields).Source =
                                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                       Analog6;
                                  thunk_FUN_01c20e04();
                    /* try { // try from 03697450 to 0379745f has its CatchHandler @ 036974fc */
                                  (pIVar4->fields).SourceRange =
                                       InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                       Negative;
                                  thunk_FUN_01c20e04();
                    /* try { // try from 03697464 to 03797477 has its CatchHandler @ 03697500 */
                                  (pIVar4->fields).TargetRange =
                                       InControl_InputControlMapping_Range_TypeInfo->static_fields->
                                       Negative;
                                  thunk_FUN_01c20e04();
                    /* try { // try from 03697478 to 037974d3 has its CatchHandler @ 0369724c */
                                  (pIVar4->fields).Invert = true;
                                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                    element_class);
                                  if (lVar5 == 0) goto LAB_036976d8;
                                  if (10 < (uint)pIVar3->max_length) {
                                    pIVar3->m_Items[10] = pIVar4;
                                    thunk_FUN_01c20e04(pIVar3->m_Items + 10,pIVar4);
                                    pIVar4 = (InControl_InputControlMapping_o *)
                                             thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                    goto LAB_036976d4;
                                    (pIVar4->fields).handle = StringLiteral_5030;
                                    thunk_FUN_01c20e04();
                    /* try { // try from 036974d4 to 037974d7 has its CatchHandler @ 036974f0 */
                    /* try { // try from 036974d8 to 037974db has its CatchHandler @ 036974ec */
                                    (pIVar4->fields).Target = 10;
                    /* try { // try from 036974dc to 037974df has its CatchHandler @ 036974e8 */
                    /* try { // try from 036974e0 to 037974e3 has its CatchHandler @ 036974e4 */
                    /* catch() { ... } // from try @ 036974e0 with catch @ 036974e4
                       try { // try from 036974e4 to 0379751f has its CatchHandler @ 0369724c */
                    /* catch() { ... } // from try @ 036974dc with catch @ 036974e8 */
                    /* catch() { ... } // from try @ 036974d8 with catch @ 036974ec */
                                    (pIVar4->fields).Source =
                                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->
                                         Analog6;
                    /* catch() { ... } // from try @ 036974d4 with catch @ 036974f0 */
                                    thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 0369740c with catch @ 036974f4 */
                    /* catch() { ... } // from try @ 03697420 with catch @ 036974f8 */
                    /* catch() { ... } // from try @ 03697450 with catch @ 036974fc */
                    /* catch() { ... } // from try @ 03697464 with catch @ 03697500 */
                    /* catch() { ... } // from try @ 036973f0 with catch @ 03697504 */
                                    (pIVar4->fields).SourceRange =
                                         InControl_InputControlMapping_Range_TypeInfo->static_fields
                                         ->Positive;
                    /* catch() { ... } // from try @ 036973dc with catch @ 03697508 */
                                    thunk_FUN_01c20e04();
                                    (pIVar4->fields).TargetRange =
                                         InControl_InputControlMapping_Range_TypeInfo->static_fields
                                         ->Positive;
                    /* try { // try from 03697520 to 03797523 has its CatchHandler @ 03697554 */
                                    thunk_FUN_01c20e04();
                    /* try { // try from 03697524 to 03797563 has its CatchHandler @ 0369724c */
                                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                      element_class);
                                    if (lVar5 == 0) goto LAB_036976d8;
                                    if (0xb < (uint)pIVar3->max_length) {
                                      pIVar3->m_Items[0xb] = pIVar4;
                                      thunk_FUN_01c20e04(pIVar3->m_Items + 0xb,pIVar4);
                    /* catch() { ... } // from try @ 03697520 with catch @ 03697554 */
                                      pIVar4 = (InControl_InputControlMapping_o *)
                                               thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 03697564 to 0379756b has its CatchHandler @ 03697580 */
                                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0)
                                      ;
                                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                      goto LAB_036976d4;
                    /* try { // try from 0369756c to 03797577 has its CatchHandler @ 0369724c */
                                      (pIVar4->fields).handle = StringLiteral_5028;
                    /* try { // try from 03697578 to 0379757f has its CatchHandler @ 03697580 */
                                      thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 03697564 with catch @ 03697580
                       catch() { ... } // from try @ 03697578 with catch @ 03697580 */
                                      (pIVar4->fields).Target = 8;
                    /* try { // try from 03697584 to 03797683 has its CatchHandler @ 03697584
                       catch() { ... } // from try @ 03697584 with catch @ 03697584
                       catch() { ... } // from try @ 036976a4 with catch @ 03697584
                       catch() { ... } // from try @ 03697768 with catch @ 03697584
                       catch() { ... } // from try @ 036977b0 with catch @ 03697584
                       catch() { ... } // from try @ 036977d4 with catch @ 03697584
                       catch() { ... } // from try @ 03697810 with catch @ 03697584
                       catch() { ... } // from try @ 03697834 with catch @ 03697584
                       catch() { ... } // from try @ 03697864 with catch @ 03697584 */
                                      (pIVar4->fields).Source =
                                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields
                                           ->Analog7;
                                      thunk_FUN_01c20e04();
                                      (pIVar4->fields).SourceRange =
                                           InControl_InputControlMapping_Range_TypeInfo->
                                           static_fields->Positive;
                                      thunk_FUN_01c20e04();
                                      (pIVar4->fields).TargetRange =
                                           InControl_InputControlMapping_Range_TypeInfo->
                                           static_fields->Positive;
                                      thunk_FUN_01c20e04();
                                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                                        element_class);
                                      if (lVar5 == 0) goto LAB_036976d8;
                                      if (0xc < (uint)pIVar3->max_length) {
                                        pIVar3->m_Items[0xc] = pIVar4;
                                        thunk_FUN_01c20e04(pIVar3->m_Items + 0xc,pIVar4);
                                        pIVar4 = (InControl_InputControlMapping_o *)
                                                 thunk_FUN_01bda818(
                                                  InControl_InputControlMapping_TypeInfo);
                                        InControl_InputControlMapping___ctor
                                                  (pIVar4,(MethodInfo *)0x0);
                                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0)
                                        goto LAB_036976d4;
                                        (pIVar4->fields).handle = StringLiteral_5031;
                                        thunk_FUN_01c20e04();
                                        (pIVar4->fields).Target = 7;
                                        (pIVar4->fields).Source =
                                             InControl_UnityInputDeviceProfile_TypeInfo->
                                             static_fields->Analog7;
                                        thunk_FUN_01c20e04();
                                        (pIVar4->fields).SourceRange =
                                             InControl_InputControlMapping_Range_TypeInfo->
                                             static_fields->Negative;
                                        thunk_FUN_01c20e04();
                                        (pIVar4->fields).TargetRange =
                                             InControl_InputControlMapping_Range_TypeInfo->
                                             static_fields->Negative;
                                        thunk_FUN_01c20e04();
                                        (pIVar4->fields).Invert = true;
                    /* try { // try from 03697684 to 0379768b has its CatchHandler @ 03697818 */
                                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1
                                                                          ).element_class);
                                        if (lVar5 == 0) goto LAB_036976d8;
                                        if (0xd < (uint)pIVar3->max_length) {
                    /* try { // try from 0369769c to 037976a3 has its CatchHandler @ 03697810 */
                                          pIVar3->m_Items[0xd] = pIVar4;
                    /* try { // try from 036976a4 to 0379774b has its CatchHandler @ 03697584 */
                                          thunk_FUN_01c20e04(pIVar3->m_Items + 0xd,pIVar4);
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
                }
              }
              goto LAB_036976e4;
            }
          }
        }
      }
    }
  }
LAB_036976d4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

