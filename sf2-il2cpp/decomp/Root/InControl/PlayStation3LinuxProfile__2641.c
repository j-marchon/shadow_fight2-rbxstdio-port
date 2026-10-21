// TypeDefIndex 2641
// Namespace: InControl
// [AutoDiscover]
// public class PlayStation3LinuxProfile : UnityInputDeviceProfile
// Fields:

// ===== public void .ctor()  [RVA 0x33B3D10]
// InControl.PlayStation3LinuxProfile$$.ctor @ RVA 0x33B3D10

void InControl_PlayStation3LinuxProfile___ctor
               (InControl_PlayStation3LinuxProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  MethodInfo *in_x6;
  InControl_VersionInfo_o __this_00;
  undefined8 local_50;
  undefined8 uStack_48;
  
                    /* try { // try from 034b3d28 to 035b3d2f has its CatchHandler @ 034b4828 */
  if ((DAT_04567d68 & 1) == 0) {
                    /* try { // try from 034b3d40 to 035b3d47 has its CatchHandler @ 034b4820 */
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
                    /* try { // try from 034b3d48 to 035b3d63 has its CatchHandler @ 034b4a1c */
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
                    /* try { // try from 034b3d70 to 035b3d77 has its CatchHandler @ 034b4854 */
    FUN_01bab630(&StringLiteral_4361/*"Circle"*/);
    FUN_01bab630(&StringLiteral_12223/*"Sony PLAYSTATION(R)3 Controller"*/);
                    /* try { // try from 034b3d88 to 035b3d8f has its CatchHandler @ 034b487c */
    FUN_01bab630(&StringLiteral_8380/*"Left Stick Button"*/);
                    /* try { // try from 034b3d90 to 035b3d9b has its CatchHandler @ 034b47ac */
    FUN_01bab630(&StringLiteral_8383/*"Left Trigger"*/);
                    /* try { // try from 034b3da0 to 035b3da7 has its CatchHandler @ 034b479c */
    FUN_01bab630(&StringLiteral_5029/*"DPad Left"*/);
    FUN_01bab630(&StringLiteral_10293/*"PlayStation 3 Controller on Linux"*/);
    FUN_01bab630(&StringLiteral_11786/*"Select"*/);
                    /* try { // try from 034b3dc4 to 035b3dc7 has its CatchHandler @ 034b4a94 */
    FUN_01bab630(&StringLiteral_11387/*"Right Trigger"*/);
                    /* try { // try from 034b3dd4 to 035b3ddb has its CatchHandler @ 034b47d0 */
    FUN_01bab630(&StringLiteral_8381/*"Left Stick X"*/);
    FUN_01bab630(&StringLiteral_11601/*"SHENGHIC 2009/0708ZXW-V1Inc. PLAYSTATION(R)3Conteroller"*/);
                    /* try { // try from 034b3dec to 035b3df3 has its CatchHandler @ 034b4830 */
    FUN_01bab630(&StringLiteral_12584/*"System"*/);
                    /* try { // try from 034b3df4 to 035b3dff has its CatchHandler @ 034b4824 */
    FUN_01bab630(&StringLiteral_8471/*"Linux"*/);
    FUN_01bab630(&StringLiteral_12324/*"Square"*/);
    FUN_01bab630(&StringLiteral_5030/*"DPad Right"*/);
                    /* try { // try from 034b3e1c to 035b3e23 has its CatchHandler @ 034b47dc */
    FUN_01bab630(&StringLiteral_11386/*"Right Stick Y"*/);
    FUN_01bab630(&StringLiteral_12346/*"Start"*/);
    FUN_01bab630(&StringLiteral_11383/*"Right Bumper"*/);
                    /* try { // try from 034b3e38 to 035b3e5b has its CatchHandler @ 034b4a08 */
    FUN_01bab630(&StringLiteral_5031/*"DPad Up"*/);
    FUN_01bab630(&StringLiteral_8379/*"Left Bumper"*/);
    FUN_01bab630(&StringLiteral_4900/*"Cross"*/);
    FUN_01bab630(&StringLiteral_11385/*"Right Stick X"*/);
    FUN_01bab630(&StringLiteral_13920/*"Triangle"*/);
                    /* try { // try from 034b3e74 to 035b3e7b has its CatchHandler @ 034b47c4 */
    FUN_01bab630(&StringLiteral_10291/*"PlayStation 3 Controller"*/);
    FUN_01bab630(&StringLiteral_5028/*"DPad Down"*/);
                    /* try { // try from 034b3e90 to 035b3eb3 has its CatchHandler @ 034b4a04 */
    FUN_01bab630(&StringLiteral_8382/*"Left Stick Y"*/);
    FUN_01bab630(&StringLiteral_11384/*"Right Stick Button"*/);
    DAT_04567d68 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034b3ec0 to 035b3ec7 has its CatchHandler @ 034b4864 */
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
                    /* try { // try from 034b3ed8 to 035b3edb has its CatchHandler @ 034b4868 */
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_10291/*"PlayStation 3 Controller"*/;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_10293/*"PlayStation 3 Controller on Linux"*/;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
                    /* try { // try from 034b3f14 to 035b3f3b has its CatchHandler @ 034b43e4 */
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = StringLiteral_8471/*"Linux"*/;
      thunk_FUN_01c20e04();
      ppSVar2 = &(__this->fields).super.SupportedPlatforms;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,2);
      if (pSVar1 == (System_String_array *)0x0) goto LAB_034b4adc;
      if ((int)pSVar1->max_length != 0) {
                    /* try { // try from 034b3f70 to 035b3f9b has its CatchHandler @ 034b43e0 */
        pSVar1->m_Items[0] = StringLiteral_12223/*"Sony PLAYSTATION(R)3 Controller"*/;
        thunk_FUN_01c20e04(pSVar1->m_Items);
        if (1 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[1] = StringLiteral_11601/*"SHENGHIC 2009/0708ZXW-V1Inc. PLAYSTATION(R)3Conteroller"*/;
          thunk_FUN_01c20e04();
          ppSVar2 = &(__this->fields).super.JoystickNames;
          *ppSVar2 = pSVar1;
          thunk_FUN_01c20e04(ppSVar2,pSVar1);
                    /* try { // try from 034b3fd8 to 035b3fdf has its CatchHandler @ 034b43d4 */
          local_50 = 0;
          uStack_48 = 0;
          __this_00.fields.Patch = 4;
          __this_00.fields.Build = 0;
          __this_00.fields._0_8_ = &local_50;
          InControl_VersionInfo___ctor(__this_00,9,0,0,0,in_x6);
                    /* try { // try from 034b3fe4 to 035b3feb has its CatchHandler @ 034b43d8 */
          (__this->fields).super._MaxUnityVersion_k__BackingField.fields.Patch =
               (undefined4)uStack_48;
          (__this->fields).super._MaxUnityVersion_k__BackingField.fields.Build = uStack_48._4_4_;
          (__this->fields).super._MaxUnityVersion_k__BackingField.fields.Major =
               (undefined4)local_50;
          (__this->fields).super._MaxUnityVersion_k__BackingField.fields.Minor = local_50._4_4_;
          pIVar3 = (InControl_InputControlMapping_array *)
                   FUN_01bab718(InControl_InputControlMapping___TypeInfo,0x11);
                    /* try { // try from 034b3ffc to 035b4003 has its CatchHandler @ 034b43bc */
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 034b4014 to 035b401b has its CatchHandler @ 034b43c4 */
          if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
                    /* try { // try from 034b401c to 035b4027 has its CatchHandler @ 034b43c0 */
            (pIVar4->fields).handle = StringLiteral_4900/*"Cross"*/;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 0xb;
                    /* try { // try from 034b4038 to 035b403f has its CatchHandler @ 034b43c8 */
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button14;
            thunk_FUN_01c20e04();
                    /* try { // try from 034b4050 to 035b4057 has its CatchHandler @ 034b43b8 */
            if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
                    /* try { // try from 034b4058 to 035b4063 has its CatchHandler @ 034b43ac */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) {
LAB_034b4ae4:
                uVar7 = thunk_FUN_01be8e1c();
                    /* catch() { ... } // from try @ 034b4ad0 with catch @ 034b4ae8 */
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar7,0);
              }
              if ((int)pIVar3->max_length == 0) goto LAB_034b4ae0;
              pIVar3->m_Items[0] = pIVar4;
                    /* try { // try from 034b4078 to 035b40ff has its CatchHandler @ 034b43dc */
              thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
              (pIVar4->fields).handle = StringLiteral_4361/*"Circle"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0xc;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button13;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034b4ae4;
              if ((uint)pIVar3->max_length < 2) goto LAB_034b4ae0;
              pIVar3->m_Items[1] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
                    /* try { // try from 034b4118 to 035b418b has its CatchHandler @ 034b4a5c */
              (pIVar4->fields).handle = StringLiteral_12324/*"Square"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0xd;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button15;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034b4ae4;
              if ((uint)pIVar3->max_length < 3) goto LAB_034b4ae0;
              pIVar3->m_Items[2] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
                    /* try { // try from 034b41a8 to 035b41af has its CatchHandler @ 034b4780 */
              (pIVar4->fields).handle = StringLiteral_13920/*"Triangle"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0xe;
                    /* try { // try from 034b41c4 to 035b41cb has its CatchHandler @ 034b4748 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button12;
                    /* try { // try from 034b41cc to 035b41d7 has its CatchHandler @ 034b4770 */
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034b4ae4;
                    /* try { // try from 034b41ec to 035b41f3 has its CatchHandler @ 034b4744 */
              if ((uint)pIVar3->max_length < 4) goto LAB_034b4ae0;
              pIVar3->m_Items[3] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                    /* try { // try from 034b4204 to 035b420b has its CatchHandler @ 034b4750 */
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 034b420c to 035b4217 has its CatchHandler @ 034b475c */
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
              (pIVar4->fields).handle = StringLiteral_5031/*"DPad Up"*/;
                    /* try { // try from 034b422c to 035b4233 has its CatchHandler @ 034b4754 */
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 7;
                    /* try { // try from 034b4244 to 035b424b has its CatchHandler @ 034b4768 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button4;
                    /* try { // try from 034b424c to 035b4267 has its CatchHandler @ 034b4a0c */
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034b4ae4;
              if ((uint)pIVar3->max_length < 5) goto LAB_034b4ae0;
                    /* try { // try from 034b4274 to 035b427b has its CatchHandler @ 034b4760 */
              pIVar3->m_Items[4] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 034b428c to 035b4293 has its CatchHandler @ 034b4738 */
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 034b4294 to 035b42af has its CatchHandler @ 034b4a10 */
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
              (pIVar4->fields).handle = StringLiteral_5028/*"DPad Down"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 8;
                    /* try { // try from 034b42bc to 035b42c3 has its CatchHandler @ 034b477c */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button6;
              thunk_FUN_01c20e04();
                    /* try { // try from 034b42d4 to 035b42db has its CatchHandler @ 034b476c */
                    /* try { // try from 034b42dc to 035b42e7 has its CatchHandler @ 034b4740 */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034b4ae4;
              if ((uint)pIVar3->max_length < 6) goto LAB_034b4ae0;
              pIVar3->m_Items[5] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
              (pIVar4->fields).handle = StringLiteral_5029/*"DPad Left"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 9;
                    /* try { // try from 034b433c to 035b4367 has its CatchHandler @ 034b4758 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button7;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034b4ae4;
                    /* try { // try from 034b436c to 035b4373 has its CatchHandler @ 034b43e8 */
              if ((uint)pIVar3->max_length < 7) goto LAB_034b4ae0;
              pIVar3->m_Items[6] = pIVar4;
                    /* try { // try from 034b4378 to 035b437b has its CatchHandler @ 034b43d0 */
              thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                    /* try { // try from 034b4380 to 035b4383 has its CatchHandler @ 034b43cc */
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 034b4388 to 035b438b has its CatchHandler @ 034b43b4 */
                    /* try { // try from 034b4390 to 035b4393 has its CatchHandler @ 034b43b0 */
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
                    /* try { // try from 034b4398 to 035b439b has its CatchHandler @ 034b43cc */
                    /* try { // try from 034b43a0 to 035b43a3 has its CatchHandler @ 034b43a8 */
                    /* try { // try from 034b43a4 to 035b4403 has its CatchHandler @ 034b26b0 */
                    /* catch() { ... } // from try @ 034b43a0 with catch @ 034b43a8 */
              (pIVar4->fields).handle = StringLiteral_5030/*"DPad Right"*/;
                    /* catch() { ... } // from try @ 034b4058 with catch @ 034b43ac */
              thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 034b4390 with catch @ 034b43b0 */
                    /* catch() { ... } // from try @ 034b4388 with catch @ 034b43b4 */
              (pIVar4->fields).Target = 10;
                    /* catch() { ... } // from try @ 034b4050 with catch @ 034b43b8 */
                    /* catch() { ... } // from try @ 034b3ffc with catch @ 034b43bc */
                    /* catch() { ... } // from try @ 034b401c with catch @ 034b43c0 */
                    /* catch() { ... } // from try @ 034b4014 with catch @ 034b43c4 */
                    /* catch() { ... } // from try @ 034b4038 with catch @ 034b43c8 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
                    /* catch() { ... } // from try @ 034b4380 with catch @ 034b43cc
                       catch() { ... } // from try @ 034b4398 with catch @ 034b43cc */
              thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 034b4378 with catch @ 034b43d0 */
                    /* catch() { ... } // from try @ 034b3fd8 with catch @ 034b43d4 */
                    /* catch() { ... } // from try @ 034b3fe4 with catch @ 034b43d8 */
                    /* catch() { ... } // from try @ 034b4078 with catch @ 034b43dc */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* catch() { ... } // from try @ 034b3f70 with catch @ 034b43e0 */
              if (lVar5 == 0) goto LAB_034b4ae4;
                    /* catch() { ... } // from try @ 034b3f14 with catch @ 034b43e4 */
                    /* catch() { ... } // from try @ 034b436c with catch @ 034b43e8 */
              if ((uint)pIVar3->max_length < 8) goto LAB_034b4ae0;
              pIVar3->m_Items[7] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
                    /* try { // try from 034b4404 to 035b4407 has its CatchHandler @ 034b4684 */
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 034b4408 to 035b44cf has its CatchHandler @ 034b26b0 */
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
              (pIVar4->fields).handle = StringLiteral_8379/*"Left Bumper"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0x11;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button10;
              thunk_FUN_01c20e04();
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034b4ae4;
              if ((uint)pIVar3->max_length < 9) goto LAB_034b4ae0;
              pIVar3->m_Items[8] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
              (pIVar4->fields).handle = StringLiteral_11383/*"Right Bumper"*/;
              thunk_FUN_01c20e04();
              (pIVar4->fields).Target = 0x12;
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button11;
              thunk_FUN_01c20e04();
                    /* try { // try from 034b44d0 to 035b4523 has its CatchHandler @ 034b4c30 */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034b4ae4;
              if ((uint)pIVar3->max_length < 10) goto LAB_034b4ae0;
              pIVar3->m_Items[9] = pIVar4;
              thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
                    /* try { // try from 034b4528 to 035b452f has its CatchHandler @ 034b4aa4 */
              (pIVar4->fields).handle = StringLiteral_12346/*"Start"*/;
              thunk_FUN_01c20e04();
                    /* try { // try from 034b4530 to 035b4537 has its CatchHandler @ 034b4aa0 */
              (pIVar4->fields).Target = 0x14;
                    /* try { // try from 034b4548 to 035b455b has its CatchHandler @ 034b4c30 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button3;
              thunk_FUN_01c20e04();
                    /* try { // try from 034b455c to 035b455f has its CatchHandler @ 034b4a84 */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 034b4560 to 035b4563 has its CatchHandler @ 034b4a48 */
              if (lVar5 == 0) goto LAB_034b4ae4;
                    /* try { // try from 034b4564 to 035b4567 has its CatchHandler @ 034b49c4 */
                    /* try { // try from 034b4568 to 035b456b has its CatchHandler @ 034b49bc */
                    /* try { // try from 034b456c to 035b456f has its CatchHandler @ 034b49b8 */
              if ((uint)pIVar3->max_length < 0xb) goto LAB_034b4ae0;
                    /* try { // try from 034b4570 to 035b4573 has its CatchHandler @ 034b49b4 */
                    /* try { // try from 034b4574 to 035b4577 has its CatchHandler @ 034b49b0 */
              pIVar3->m_Items[10] = pIVar4;
                    /* try { // try from 034b4578 to 035b457b has its CatchHandler @ 034b49a4 */
                    /* try { // try from 034b457c to 035b457f has its CatchHandler @ 034b49a0 */
              thunk_FUN_01c20e04(pIVar3->m_Items + 10,pIVar4);
                    /* try { // try from 034b4580 to 035b4583 has its CatchHandler @ 034b499c */
                    /* try { // try from 034b4584 to 035b4587 has its CatchHandler @ 034b4998 */
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 034b4588 to 035b458b has its CatchHandler @ 034b4994 */
                    /* try { // try from 034b458c to 035b458f has its CatchHandler @ 034b4990 */
                    /* try { // try from 034b4590 to 035b4593 has its CatchHandler @ 034b498c */
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 034b4594 to 035b459b has its CatchHandler @ 034b4a60 */
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
                    /* try { // try from 034b459c to 035b459f has its CatchHandler @ 034b493c */
                    /* try { // try from 034b45a0 to 035b45a3 has its CatchHandler @ 034b4938 */
                    /* try { // try from 034b45a4 to 035b45a7 has its CatchHandler @ 034b4928 */
                    /* try { // try from 034b45a8 to 035b45ab has its CatchHandler @ 034b490c */
              (pIVar4->fields).handle = StringLiteral_11786/*"Select"*/;
                    /* try { // try from 034b45ac to 035b45af has its CatchHandler @ 034b4908 */
              thunk_FUN_01c20e04();
                    /* try { // try from 034b45b0 to 035b45b3 has its CatchHandler @ 034b48d4 */
                    /* try { // try from 034b45b4 to 035b45b7 has its CatchHandler @ 034b48c8 */
              (pIVar4->fields).Target = 0x15;
                    /* try { // try from 034b45b8 to 035b45bb has its CatchHandler @ 034b48c4 */
                    /* try { // try from 034b45bc to 035b45bf has its CatchHandler @ 034b48bc */
                    /* try { // try from 034b45c0 to 035b45c3 has its CatchHandler @ 034b48b8 */
                    /* try { // try from 034b45c4 to 035b45c7 has its CatchHandler @ 034b48b4 */
                    /* try { // try from 034b45c8 to 035b45cb has its CatchHandler @ 034b48a4 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0;
                    /* try { // try from 034b45cc to 035b45cf has its CatchHandler @ 034b489c */
              thunk_FUN_01c20e04();
                    /* try { // try from 034b45d0 to 035b45d3 has its CatchHandler @ 034b4878 */
                    /* try { // try from 034b45d4 to 035b45d7 has its CatchHandler @ 034b4874 */
                    /* try { // try from 034b45d8 to 035b45db has its CatchHandler @ 034b4870 */
                    /* try { // try from 034b45dc to 035b45df has its CatchHandler @ 034b484c */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 034b45e0 to 035b45e3 has its CatchHandler @ 034b4848 */
              if (lVar5 == 0) goto LAB_034b4ae4;
                    /* try { // try from 034b45e4 to 035b45e7 has its CatchHandler @ 034b4844 */
                    /* try { // try from 034b45e8 to 035b45eb has its CatchHandler @ 034b4838 */
                    /* try { // try from 034b45ec to 035b45f3 has its CatchHandler @ 034b4804 */
              if ((uint)pIVar3->max_length < 0xc) goto LAB_034b4ae0;
                    /* try { // try from 034b45f4 to 035b45f7 has its CatchHandler @ 034b47f8 */
              pIVar3->m_Items[0xb] = pIVar4;
                    /* try { // try from 034b45f8 to 035b45fb has its CatchHandler @ 034b47f0 */
                    /* try { // try from 034b45fc to 035b45ff has its CatchHandler @ 034b47d8 */
              thunk_FUN_01c20e04(pIVar3->m_Items + 0xb,pIVar4);
                    /* try { // try from 034b4600 to 035b4603 has its CatchHandler @ 034b47cc */
                    /* try { // try from 034b4604 to 035b4607 has its CatchHandler @ 034b47b4 */
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* try { // try from 034b4608 to 035b460b has its CatchHandler @ 034b47b0 */
                    /* try { // try from 034b460c to 035b460f has its CatchHandler @ 034b47a8 */
                    /* try { // try from 034b4610 to 035b4613 has its CatchHandler @ 034b4790 */
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* try { // try from 034b4614 to 035b4617 has its CatchHandler @ 034b4788 */
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
                    /* try { // try from 034b4618 to 035b461b has its CatchHandler @ 034b4784 */
                    /* try { // try from 034b461c to 035b461f has its CatchHandler @ 034b4778 */
                    /* try { // try from 034b4620 to 035b4623 has its CatchHandler @ 034b4774 */
                    /* try { // try from 034b4624 to 035b4627 has its CatchHandler @ 034b4a14 */
                    /* try { // try from 034b4628 to 035b462b has its CatchHandler @ 034b4764 */
              (pIVar4->fields).handle = StringLiteral_8383/*"Left Trigger"*/;
                    /* try { // try from 034b462c to 035b462f has its CatchHandler @ 034b4a14 */
              thunk_FUN_01c20e04();
                    /* try { // try from 034b4630 to 035b4633 has its CatchHandler @ 034b474c */
                    /* try { // try from 034b4634 to 035b4637 has its CatchHandler @ 034b473c */
              (pIVar4->fields).Target = 0xf;
                    /* try { // try from 034b4638 to 035b463b has its CatchHandler @ 034b26b0 */
                    /* try { // try from 034b463c to 035b463f has its CatchHandler @ 034b4710 */
                    /* try { // try from 034b4640 to 035b4643 has its CatchHandler @ 034b4708 */
                    /* try { // try from 034b4644 to 035b4647 has its CatchHandler @ 034b46f8 */
                    /* try { // try from 034b4648 to 035b464b has its CatchHandler @ 034b46f0 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button8;
                    /* try { // try from 034b464c to 035b464f has its CatchHandler @ 034b46ec */
              thunk_FUN_01c20e04();
                    /* try { // try from 034b4650 to 035b4653 has its CatchHandler @ 034b49c0 */
                    /* try { // try from 034b4654 to 035b4657 has its CatchHandler @ 034b46e0 */
                    /* try { // try from 034b4658 to 035b465b has its CatchHandler @ 034b46d8 */
                    /* try { // try from 034b465c to 035b465f has its CatchHandler @ 034b49c0 */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* try { // try from 034b4660 to 035b4663 has its CatchHandler @ 034b46cc */
              if (lVar5 == 0) goto LAB_034b4ae4;
                    /* try { // try from 034b4664 to 035b4667 has its CatchHandler @ 034b46bc */
                    /* try { // try from 034b4668 to 035b466b has its CatchHandler @ 034b46b8 */
                    /* try { // try from 034b466c to 035b466f has its CatchHandler @ 034b4698 */
              if ((uint)pIVar3->max_length < 0xd) goto LAB_034b4ae0;
                    /* try { // try from 034b4670 to 035b4677 has its CatchHandler @ 034b26b0 */
              pIVar3->m_Items[0xc] = pIVar4;
                    /* try { // try from 034b4678 to 035b467b has its CatchHandler @ 034b4694 */
                    /* try { // try from 034b467c to 035b4acf has its CatchHandler @ 034b26b0 */
              thunk_FUN_01c20e04(pIVar3->m_Items + 0xc,pIVar4);
                    /* catch() { ... } // from try @ 034b4404 with catch @ 034b4684 */
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 034b2d7c with catch @ 034b4690 */
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034b4678 with catch @ 034b4694 */
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
                    /* catch() { ... } // from try @ 034b466c with catch @ 034b4698 */
                    /* catch() { ... } // from try @ 034b2d44 with catch @ 034b469c */
                    /* catch() { ... } // from try @ 034b3b80 with catch @ 034b46a0 */
                    /* catch() { ... } // from try @ 034b3acc with catch @ 034b46a4 */
                    /* catch() { ... } // from try @ 034b2d88 with catch @ 034b46a8 */
              (pIVar4->fields).handle = StringLiteral_11387/*"Right Trigger"*/;
                    /* catch() { ... } // from try @ 034b2d80 with catch @ 034b46ac */
              thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 034b3c98 with catch @ 034b46b0 */
                    /* catch() { ... } // from try @ 034b3088 with catch @ 034b46b4 */
              (pIVar4->fields).Target = 0x10;
                    /* catch() { ... } // from try @ 034b4668 with catch @ 034b46b8 */
                    /* catch() { ... } // from try @ 034b4664 with catch @ 034b46bc */
                    /* catch() { ... } // from try @ 034b31ec with catch @ 034b46c0 */
                    /* catch() { ... } // from try @ 034b317c with catch @ 034b46c4 */
                    /* catch() { ... } // from try @ 034b2d48 with catch @ 034b46c8 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9;
                    /* catch() { ... } // from try @ 034b4660 with catch @ 034b46cc */
              thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 034b311c with catch @ 034b46d0 */
                    /* catch() { ... } // from try @ 034b31fc with catch @ 034b46d4 */
                    /* catch() { ... } // from try @ 034b4658 with catch @ 034b46d8 */
                    /* catch() { ... } // from try @ 034b30c8 with catch @ 034b46dc */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* catch() { ... } // from try @ 034b4654 with catch @ 034b46e0 */
              if (lVar5 == 0) goto LAB_034b4ae4;
                    /* catch() { ... } // from try @ 034b31ac with catch @ 034b46e4 */
                    /* catch() { ... } // from try @ 034b3134 with catch @ 034b46e8 */
                    /* catch() { ... } // from try @ 034b464c with catch @ 034b46ec */
              if ((uint)pIVar3->max_length < 0xe) goto LAB_034b4ae0;
                    /* catch() { ... } // from try @ 034b4648 with catch @ 034b46f0 */
                    /* catch() { ... } // from try @ 034b30dc with catch @ 034b46f4 */
              pIVar3->m_Items[0xd] = pIVar4;
                    /* catch() { ... } // from try @ 034b4644 with catch @ 034b46f8 */
                    /* catch() { ... } // from try @ 034b2d58 with catch @ 034b46fc */
              thunk_FUN_01c20e04(pIVar3->m_Items + 0xd,pIVar4);
                    /* catch() { ... } // from try @ 034b3164 with catch @ 034b4700 */
                    /* catch() { ... } // from try @ 034b32dc with catch @ 034b4704 */
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 034b4640 with catch @ 034b4708 */
                    /* catch() { ... } // from try @ 034b31bc with catch @ 034b470c */
                    /* catch() { ... } // from try @ 034b463c with catch @ 034b4710 */
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034b3098 with catch @ 034b4714 */
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
                    /* catch() { ... } // from try @ 034b30ec with catch @ 034b4718 */
                    /* catch() { ... } // from try @ 034b3bac with catch @ 034b471c */
                    /* catch() { ... } // from try @ 034b3b60 with catch @ 034b4720 */
                    /* catch() { ... } // from try @ 034b3af8 with catch @ 034b4724 */
                    /* catch() { ... } // from try @ 034b3aac with catch @ 034b4728 */
              (pIVar4->fields).handle = StringLiteral_8380/*"Left Stick Button"*/;
                    /* catch() { ... } // from try @ 034b3270 with catch @ 034b472c
                       catch() { ... } // from try @ 034b32a4 with catch @ 034b472c */
              thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 034b3b84 with catch @ 034b4730 */
                    /* catch() { ... } // from try @ 034b3ad0 with catch @ 034b4734 */
              (pIVar4->fields).Target = 3;
                    /* catch() { ... } // from try @ 034b428c with catch @ 034b4738 */
                    /* catch() { ... } // from try @ 034b4634 with catch @ 034b473c */
                    /* catch() { ... } // from try @ 034b42dc with catch @ 034b4740 */
                    /* catch() { ... } // from try @ 034b41ec with catch @ 034b4744 */
                    /* catch() { ... } // from try @ 034b41c4 with catch @ 034b4748 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button1;
                    /* catch() { ... } // from try @ 034b4630 with catch @ 034b474c */
              thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 034b4204 with catch @ 034b4750 */
                    /* catch() { ... } // from try @ 034b422c with catch @ 034b4754 */
                    /* catch() { ... } // from try @ 034b433c with catch @ 034b4758 */
                    /* catch() { ... } // from try @ 034b420c with catch @ 034b475c */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* catch() { ... } // from try @ 034b4274 with catch @ 034b4760 */
              if (lVar5 == 0) goto LAB_034b4ae4;
                    /* catch() { ... } // from try @ 034b4628 with catch @ 034b4764 */
                    /* catch() { ... } // from try @ 034b4244 with catch @ 034b4768 */
                    /* catch() { ... } // from try @ 034b42d4 with catch @ 034b476c */
              if ((uint)pIVar3->max_length < 0xf) goto LAB_034b4ae0;
                    /* catch() { ... } // from try @ 034b41cc with catch @ 034b4770 */
                    /* catch() { ... } // from try @ 034b4620 with catch @ 034b4774 */
              pIVar3->m_Items[0xe] = pIVar4;
                    /* catch() { ... } // from try @ 034b461c with catch @ 034b4778 */
                    /* catch() { ... } // from try @ 034b42bc with catch @ 034b477c */
              thunk_FUN_01c20e04(pIVar3->m_Items + 0xe,pIVar4);
                    /* catch() { ... } // from try @ 034b41a8 with catch @ 034b4780 */
                    /* catch() { ... } // from try @ 034b4618 with catch @ 034b4784 */
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 034b4614 with catch @ 034b4788 */
                    /* catch() { ... } // from try @ 034b3c68 with catch @ 034b478c */
                    /* catch() { ... } // from try @ 034b4610 with catch @ 034b4790 */
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034b3a68 with catch @ 034b4794 */
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
                    /* catch() { ... } // from try @ 034b399c with catch @ 034b4798 */
                    /* catch() { ... } // from try @ 034b3da0 with catch @ 034b479c */
                    /* catch() { ... } // from try @ 034b3a80 with catch @ 034b47a0 */
                    /* catch() { ... } // from try @ 034b3888 with catch @ 034b47a4 */
                    /* catch() { ... } // from try @ 034b460c with catch @ 034b47a8 */
              (pIVar4->fields).handle = StringLiteral_11384/*"Right Stick Button"*/;
                    /* catch() { ... } // from try @ 034b3d90 with catch @ 034b47ac */
              thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 034b4608 with catch @ 034b47b0 */
                    /* catch() { ... } // from try @ 034b4604 with catch @ 034b47b4 */
              (pIVar4->fields).Target = 6;
                    /* catch() { ... } // from try @ 034b3a88 with catch @ 034b47b8 */
                    /* catch() { ... } // from try @ 034b3b3c with catch @ 034b47bc */
                    /* catch() { ... } // from try @ 034b39b4 with catch @ 034b47c0 */
                    /* catch() { ... } // from try @ 034b3e74 with catch @ 034b47c4 */
                    /* catch() { ... } // from try @ 034b3ce0 with catch @ 034b47c8 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button2;
                    /* catch() { ... } // from try @ 034b4600 with catch @ 034b47cc */
              thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 034b3dd4 with catch @ 034b47d0 */
                    /* catch() { ... } // from try @ 034b3be8 with catch @ 034b47d4 */
                    /* catch() { ... } // from try @ 034b45fc with catch @ 034b47d8 */
                    /* catch() { ... } // from try @ 034b3e1c with catch @ 034b47dc */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* catch() { ... } // from try @ 034b3bf0 with catch @ 034b47e0 */
              if (lVar5 == 0) goto LAB_034b4ae4;
                    /* catch() { ... } // from try @ 034b3a20 with catch @ 034b47e4 */
                    /* catch() { ... } // from try @ 034b3a00 with catch @ 034b47e8 */
                    /* catch() { ... } // from try @ 034b3b1c with catch @ 034b47ec */
              if ((uint)pIVar3->max_length < 0x10) goto LAB_034b4ae0;
                    /* catch() { ... } // from try @ 034b45f8 with catch @ 034b47f0 */
                    /* catch() { ... } // from try @ 034b3934 with catch @ 034b47f4 */
              pIVar3->m_Items[0xf] = pIVar4;
                    /* catch() { ... } // from try @ 034b45f4 with catch @ 034b47f8 */
                    /* catch() { ... } // from try @ 034b38ec with catch @ 034b47fc */
              thunk_FUN_01c20e04(pIVar3->m_Items + 0xf,pIVar4);
                    /* catch() { ... } // from try @ 034b3cf8 with catch @ 034b4800 */
                    /* catch() { ... } // from try @ 034b45ec with catch @ 034b4804 */
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 034b3854 with catch @ 034b4808 */
                    /* catch() { ... } // from try @ 034b3a38 with catch @ 034b480c */
                    /* catch() { ... } // from try @ 034b3b34 with catch @ 034b4810 */
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034b3c28 with catch @ 034b4814 */
              if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
                    /* catch() { ... } // from try @ 034b39f8 with catch @ 034b4818 */
                    /* catch() { ... } // from try @ 034b394c with catch @ 034b481c */
                    /* catch() { ... } // from try @ 034b3d40 with catch @ 034b4820 */
                    /* catch() { ... } // from try @ 034b3df4 with catch @ 034b4824 */
                    /* catch() { ... } // from try @ 034b3d28 with catch @ 034b4828 */
              (pIVar4->fields).handle = StringLiteral_12584/*"System"*/;
                    /* catch() { ... } // from try @ 034b39e0 with catch @ 034b482c */
              thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 034b3dec with catch @ 034b4830 */
                    /* catch() { ... } // from try @ 034b3904 with catch @ 034b4834 */
              (pIVar4->fields).Target = 0x16;
                    /* catch() { ... } // from try @ 034b45e8 with catch @ 034b4838 */
                    /* catch() { ... } // from try @ 034b3c10 with catch @ 034b483c */
                    /* catch() { ... } // from try @ 034b3bd0 with catch @ 034b4840 */
                    /* catch() { ... } // from try @ 034b45e4 with catch @ 034b4844 */
                    /* catch() { ... } // from try @ 034b45e0 with catch @ 034b4848 */
              (pIVar4->fields).Source =
                   InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button16;
                    /* catch() { ... } // from try @ 034b45dc with catch @ 034b484c */
              thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 034b39a4 with catch @ 034b4850 */
                    /* catch() { ... } // from try @ 034b3d70 with catch @ 034b4854 */
                    /* catch() { ... } // from try @ 034b3c80 with catch @ 034b4858 */
                    /* catch() { ... } // from try @ 034b3cc4 with catch @ 034b485c */
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* catch() { ... } // from try @ 034b3984 with catch @ 034b4860 */
              if (lVar5 == 0) goto LAB_034b4ae4;
                    /* catch() { ... } // from try @ 034b3ec0 with catch @ 034b4864 */
                    /* catch() { ... } // from try @ 034b3ed8 with catch @ 034b4868 */
                    /* catch() { ... } // from try @ 034b38a0 with catch @ 034b486c */
              if ((uint)pIVar3->max_length < 0x11) goto LAB_034b4ae0;
                    /* catch() { ... } // from try @ 034b45d8 with catch @ 034b4870 */
                    /* catch() { ... } // from try @ 034b45d4 with catch @ 034b4874 */
              pIVar3->m_Items[0x10] = pIVar4;
                    /* catch() { ... } // from try @ 034b45d0 with catch @ 034b4878 */
                    /* catch() { ... } // from try @ 034b3d88 with catch @ 034b487c */
              thunk_FUN_01c20e04(pIVar3->m_Items + 0x10,pIVar4);
              ppIVar6 = &(__this->fields).super._ButtonMappings_k__BackingField;
              *ppIVar6 = pIVar3;
                    /* catch() { ... } // from try @ 034b37c8 with catch @ 034b4888 */
                    /* catch() { ... } // from try @ 034b3794 with catch @ 034b488c */
              thunk_FUN_01c20e04(ppIVar6,pIVar3);
                    /* catch() { ... } // from try @ 034b37b0 with catch @ 034b4890 */
                    /* catch() { ... } // from try @ 034b37d0 with catch @ 034b4894 */
                    /* catch() { ... } // from try @ 034b36d8 with catch @ 034b4898 */
              pIVar3 = (InControl_InputControlMapping_array *)
                       FUN_01bab718(InControl_InputControlMapping___TypeInfo,4);
                    /* catch() { ... } // from try @ 034b45cc with catch @ 034b489c */
                    /* catch() { ... } // from try @ 034b3690 with catch @ 034b48a0 */
                    /* catch() { ... } // from try @ 034b45c8 with catch @ 034b48a4 */
                    /* catch() { ... } // from try @ 034b35d8 with catch @ 034b48a8 */
              pIVar4 = (InControl_InputControlMapping_o *)
                       thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 034b378c with catch @ 034b48ac */
                    /* catch() { ... } // from try @ 034b36c0 with catch @ 034b48b0 */
                    /* catch() { ... } // from try @ 034b45c4 with catch @ 034b48b4 */
              InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034b45c0 with catch @ 034b48b8 */
              if (pIVar4 != (InControl_InputControlMapping_o *)0x0) {
                    /* catch() { ... } // from try @ 034b45bc with catch @ 034b48bc */
                    /* catch() { ... } // from try @ 034b362c with catch @ 034b48c0 */
                    /* catch() { ... } // from try @ 034b45b8 with catch @ 034b48c4 */
                    /* catch() { ... } // from try @ 034b45b4 with catch @ 034b48c8 */
                    /* catch() { ... } // from try @ 034b352c with catch @ 034b48cc */
                (pIVar4->fields).handle = StringLiteral_8381/*"Left Stick X"*/;
                    /* catch() { ... } // from try @ 034b3750 with catch @ 034b48d0 */
                thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 034b45b0 with catch @ 034b48d4 */
                    /* catch() { ... } // from try @ 034b3758 with catch @ 034b48d8 */
                (pIVar4->fields).Target = 1;
                    /* catch() { ... } // from try @ 034b3590 with catch @ 034b48dc */
                    /* catch() { ... } // from try @ 034b3678 with catch @ 034b48e0 */
                    /* catch() { ... } // from try @ 034b3634 with catch @ 034b48e4 */
                    /* catch() { ... } // from try @ 034b384c with catch @ 034b48e8 */
                    /* catch() { ... } // from try @ 034b3544 with catch @ 034b48ec */
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog0;
                    /* catch() { ... } // from try @ 034b3714 with catch @ 034b48f0 */
                thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 034b3738 with catch @ 034b48f4 */
                if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
                    /* catch() { ... } // from try @ 034b364c with catch @ 034b48f8 */
                    /* catch() { ... } // from try @ 034b3640 with catch @ 034b48fc */
                    /* catch() { ... } // from try @ 034b3834 with catch @ 034b4900 */
                    /* catch() { ... } // from try @ 034b3578 with catch @ 034b4904 */
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* catch() { ... } // from try @ 034b45ac with catch @ 034b4908 */
                  if (lVar5 == 0) goto LAB_034b4ae4;
                    /* catch() { ... } // from try @ 034b45a8 with catch @ 034b490c */
                    /* catch() { ... } // from try @ 034b37f0 with catch @ 034b4910 */
                  if ((int)pIVar3->max_length != 0) {
                    /* catch() { ... } // from try @ 034b36fc with catch @ 034b4914 */
                    /* catch() { ... } // from try @ 034b371c with catch @ 034b4918 */
                    pIVar3->m_Items[0] = pIVar4;
                    /* catch() { ... } // from try @ 034b381c with catch @ 034b491c */
                    /* catch() { ... } // from try @ 034b3808 with catch @ 034b4920 */
                    thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                    /* catch() { ... } // from try @ 034b35e0 with catch @ 034b4924 */
                    /* catch() { ... } // from try @ 034b45a4 with catch @ 034b4928 */
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 034b36e0 with catch @ 034b492c */
                    /* catch() { ... } // from try @ 034b3614 with catch @ 034b4930 */
                    /* catch() { ... } // from try @ 034b3774 with catch @ 034b4934 */
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034b45a0 with catch @ 034b4938 */
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
                    /* catch() { ... } // from try @ 034b459c with catch @ 034b493c */
                    /* catch() { ... } // from try @ 034b35c0 with catch @ 034b4940 */
                    /* catch() { ... } // from try @ 034b3034 with catch @ 034b4944
                       catch() { ... } // from try @ 034b328c with catch @ 034b4944 */
                    /* catch() { ... } // from try @ 034b3050 with catch @ 034b4948 */
                    /* catch() { ... } // from try @ 034b2de4 with catch @ 034b494c */
                    (pIVar4->fields).handle = StringLiteral_8382/*"Left Stick Y"*/;
                    /* catch() { ... } // from try @ 034b30f4 with catch @ 034b4950 */
                    thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 034b2e80 with catch @ 034b4954 */
                    /* catch() { ... } // from try @ 034b30a0 with catch @ 034b4958 */
                    (pIVar4->fields).Target = 2;
                    /* catch() { ... } // from try @ 034b2dfc with catch @ 034b495c */
                    /* catch() { ... } // from try @ 034b2f4c with catch @ 034b4960 */
                    /* catch() { ... } // from try @ 034b2f44 with catch @ 034b4964 */
                    /* catch() { ... } // from try @ 034b2f2c with catch @ 034b4968 */
                    /* catch() { ... } // from try @ 034b2e88 with catch @ 034b496c */
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
                    /* catch() { ... } // from try @ 034b2fc0 with catch @ 034b4970 */
                    thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 034b2f78 with catch @ 034b4974 */
                    /* catch() { ... } // from try @ 034b3204 with catch @ 034b4978 */
                    (pIVar4->fields).Invert = true;
                    /* catch() { ... } // from try @ 034b2cec with catch @ 034b497c */
                    /* catch() { ... } // from try @ 034b313c with catch @ 034b4980 */
                    /* catch() { ... } // from try @ 034b2ea4 with catch @ 034b4984 */
                    /* catch() { ... } // from try @ 034b2e4c with catch @ 034b4988 */
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* catch() { ... } // from try @ 034b4590 with catch @ 034b498c */
                    if (lVar5 == 0) goto LAB_034b4ae4;
                    /* catch() { ... } // from try @ 034b458c with catch @ 034b4990 */
                    /* catch() { ... } // from try @ 034b4588 with catch @ 034b4994 */
                    /* catch() { ... } // from try @ 034b4584 with catch @ 034b4998 */
                    if (1 < (uint)pIVar3->max_length) {
                    /* catch() { ... } // from try @ 034b4580 with catch @ 034b499c */
                    /* catch() { ... } // from try @ 034b457c with catch @ 034b49a0 */
                      pIVar3->m_Items[1] = pIVar4;
                    /* catch() { ... } // from try @ 034b4578 with catch @ 034b49a4 */
                    /* catch() { ... } // from try @ 034b2ca8 with catch @ 034b49a8 */
                      thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                    /* catch() { ... } // from try @ 034b2ebc with catch @ 034b49ac */
                    /* catch() { ... } // from try @ 034b4574 with catch @ 034b49b0 */
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 034b4570 with catch @ 034b49b4 */
                    /* catch() { ... } // from try @ 034b456c with catch @ 034b49b8 */
                    /* catch() { ... } // from try @ 034b4568 with catch @ 034b49bc */
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034b4650 with catch @ 034b49c0
                       catch() { ... } // from try @ 034b465c with catch @ 034b49c0 */
                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
                    /* catch() { ... } // from try @ 034b4564 with catch @ 034b49c4 */
                    /* catch() { ... } // from try @ 034b2e2c with catch @ 034b49c8 */
                    /* catch() { ... } // from try @ 034b2f68 with catch @ 034b49cc */
                    /* catch() { ... } // from try @ 034b2e44 with catch @ 034b49d0 */
                    /* catch() { ... } // from try @ 034b2da0 with catch @ 034b49d4 */
                      (pIVar4->fields).handle = StringLiteral_11385/*"Right Stick X"*/;
                    /* catch() { ... } // from try @ 034b2fa8 with catch @ 034b49d8 */
                      thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 034b2efc with catch @ 034b49dc */
                    /* catch() { ... } // from try @ 034b2d24 with catch @ 034b49e0 */
                      (pIVar4->fields).Target = 4;
                    /* catch() { ... } // from try @ 034b2e68 with catch @ 034b49e4 */
                    /* catch() { ... } // from try @ 034b2eec with catch @ 034b49e8 */
                    /* catch() { ... } // from try @ 034b2c98 with catch @ 034b49ec */
                    /* catch() { ... } // from try @ 034b2d18 with catch @ 034b49f0 */
                    /* catch() { ... } // from try @ 034b3184 with catch @ 034b49f4 */
                      (pIVar4->fields).Source =
                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog2;
                    /* catch() { ... } // from try @ 034b2cdc with catch @ 034b49f8 */
                      thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 034b306c with catch @ 034b49fc */
                    /* catch() { ... } // from try @ 034b31c4 with catch @ 034b4a00 */
                    /* catch() { ... } // from try @ 034b3e90 with catch @ 034b4a04 */
                    /* catch() { ... } // from try @ 034b3e38 with catch @ 034b4a08 */
                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    /* catch() { ... } // from try @ 034b424c with catch @ 034b4a0c */
                      if (lVar5 == 0) goto LAB_034b4ae4;
                    /* catch() { ... } // from try @ 034b4294 with catch @ 034b4a10 */
                    /* catch() { ... } // from try @ 034b4624 with catch @ 034b4a14
                       catch() { ... } // from try @ 034b462c with catch @ 034b4a14 */
                    /* catch() { ... } // from try @ 034b3a40 with catch @ 034b4a18 */
                      if (2 < (uint)pIVar3->max_length) {
                    /* catch() { ... } // from try @ 034b3d48 with catch @ 034b4a1c */
                    /* catch() { ... } // from try @ 034b3d00 with catch @ 034b4a20 */
                        pIVar3->m_Items[2] = pIVar4;
                    /* catch() { ... } // from try @ 034b3c44 with catch @ 034b4a24 */
                    /* catch() { ... } // from try @ 034b3860 with catch @ 034b4a28 */
                        thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                    /* catch() { ... } // from try @ 034b390c with catch @ 034b4a2c */
                    /* catch() { ... } // from try @ 034b38c4 with catch @ 034b4a30 */
                        pIVar4 = (InControl_InputControlMapping_o *)
                                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    /* catch() { ... } // from try @ 034b3698 with catch @ 034b4a34 */
                    /* catch() { ... } // from try @ 034b38a8 with catch @ 034b4a38 */
                    /* catch() { ... } // from try @ 034b3960 with catch @ 034b4a3c */
                        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034b34ec with catch @ 034b4a40 */
                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034b4adc;
                    /* catch() { ... } // from try @ 034b354c with catch @ 034b4a44 */
                    /* catch() { ... } // from try @ 034b4560 with catch @ 034b4a48 */
                    /* catch() { ... } // from try @ 034b3598 with catch @ 034b4a4c */
                    /* catch() { ... } // from try @ 034b35ec with catch @ 034b4a50 */
                    /* catch() { ... } // from try @ 034b34f8 with catch @ 034b4a54 */
                        (pIVar4->fields).handle = StringLiteral_11386/*"Right Stick Y"*/;
                    /* catch() { ... } // from try @ 034b3510 with catch @ 034b4a58 */
                        thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 034b4118 with catch @ 034b4a5c */
                    /* catch() { ... } // from try @ 034b4594 with catch @ 034b4a60 */
                        (pIVar4->fields).Target = 5;
                    /* catch() { ... } // from try @ 034b2f04 with catch @ 034b4a64 */
                    /* catch() { ... } // from try @ 034b2f80 with catch @ 034b4a68 */
                    /* catch() { ... } // from try @ 034b2ec4 with catch @ 034b4a6c */
                    /* catch() { ... } // from try @ 034b2fc8 with catch @ 034b4a70 */
                    /* catch() { ... } // from try @ 034b2c64 with catch @ 034b4a74 */
                        (pIVar4->fields).Source =
                             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog3;
                    /* catch() { ... } // from try @ 034b2cf4 with catch @ 034b4a78 */
                        thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 034b2c7c with catch @ 034b4a7c */
                    /* catch() { ... } // from try @ 034b2cb0 with catch @ 034b4a80 */
                        (pIVar4->fields).Invert = true;
                    /* catch() { ... } // from try @ 034b455c with catch @ 034b4a84 */
                    /* catch() { ... } // from try @ 034b2e04 with catch @ 034b4a88 */
                    /* catch() { ... } // from try @ 034b2dc0 with catch @ 034b4a8c */
                    /* catch() { ... } // from try @ 034b2c54 with catch @ 034b4a90 */
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                    /* catch() { ... } // from try @ 034b3664 with catch @ 034b4a94
                       catch() { ... } // from try @ 034b39cc with catch @ 034b4a94
                       catch() { ... } // from try @ 034b3dc4 with catch @ 034b4a94 */
                        if (lVar5 == 0) goto LAB_034b4ae4;
                    /* catch() { ... } // from try @ 034b34d0 with catch @ 034b4a98 */
                    /* catch() { ... } // from try @ 034b2c38 with catch @ 034b4a9c */
                    /* catch() { ... } // from try @ 034b4530 with catch @ 034b4aa0 */
                        if (3 < (uint)pIVar3->max_length) {
                    /* catch() { ... } // from try @ 034b4528 with catch @ 034b4aa4 */
                    /* catch() { ... } // from try @ 034b3470 with catch @ 034b4aa8 */
                          pIVar3->m_Items[3] = pIVar4;
                    /* catch() { ... } // from try @ 034b3414 with catch @ 034b4aac */
                          thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                          ppIVar6 = &(__this->fields).super._AnalogMappings_k__BackingField;
                          *ppIVar6 = pIVar3;
                          thunk_FUN_01c20e04(ppIVar6,pIVar3);
                    /* try { // try from 034b4ad0 to 035b4ad7 has its CatchHandler @ 034b4ae8 */
                          return;
                        }
                      }
                    }
                  }
                  goto LAB_034b4ae0;
                }
              }
            }
          }
          goto LAB_034b4adc;
        }
      }
    }
LAB_034b4ae0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_034b4adc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

