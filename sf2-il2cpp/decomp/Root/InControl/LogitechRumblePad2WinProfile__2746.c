// TypeDefIndex 2746
// Namespace: InControl
// [AutoDiscover]
// public class LogitechRumblePad2WinProfile : UnityInputDeviceProfile
// Fields:

// ===== public void .ctor()  [RVA 0x33F4DD0]
// InControl.LogitechRumblePad2WinProfile$$.ctor @ RVA 0x33F4DD0

void InControl_LogitechRumblePad2WinProfile___ctor
               (InControl_LogitechRumblePad2WinProfile_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  InControl_InputControlMapping_array *pIVar3;
  InControl_InputControlMapping_o *pIVar4;
  long lVar5;
  InControl_InputControlMapping_array **ppIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567f8f & 1) == 0) {
    FUN_01bab630(&InControl_InputControlMapping___TypeInfo);
    FUN_01bab630(&InControl_InputControlMapping_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&InControl_UnityInputDeviceProfile_TypeInfo);
    FUN_01bab630(&StringLiteral_8380/*"Left Stick Button"*/);
    FUN_01bab630(&StringLiteral_8383/*"Left Trigger"*/);
    FUN_01bab630(&StringLiteral_2019/*"3"*/);
    FUN_01bab630(&StringLiteral_5029/*"DPad Left"*/);
    FUN_01bab630(&StringLiteral_1943/*"2"*/);
    FUN_01bab630(&StringLiteral_2079/*"9"*/);
    FUN_01bab630(&StringLiteral_8658/*"Logitech Rumblepad 2 USB"*/);
    FUN_01bab630(&StringLiteral_14965/*"Windows"*/);
    FUN_01bab630(&StringLiteral_8655/*"Logitech RumblePad 2 Controller"*/);
    FUN_01bab630(&StringLiteral_11387/*"Right Trigger"*/);
    FUN_01bab630(&StringLiteral_8381/*"Left Stick X"*/);
    FUN_01bab630(&StringLiteral_5030/*"DPad Right"*/);
    FUN_01bab630(&StringLiteral_2036/*"4"*/);
    FUN_01bab630(&StringLiteral_11386/*"Right Stick Y"*/);
    FUN_01bab630(&StringLiteral_11383/*"Right Bumper"*/);
    FUN_01bab630(&StringLiteral_5031/*"DPad Up"*/);
    FUN_01bab630(&StringLiteral_8379/*"Left Bumper"*/);
    FUN_01bab630(&StringLiteral_1882/*"10"*/);
    FUN_01bab630(&StringLiteral_11385/*"Right Stick X"*/);
    FUN_01bab630(&StringLiteral_8656/*"Logitech RumblePad 2 Controller on Windows"*/);
    FUN_01bab630(&StringLiteral_5028/*"DPad Down"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_8382/*"Left Stick Y"*/);
    FUN_01bab630(&StringLiteral_11384/*"Right Stick Button"*/);
    DAT_04567f8f = 1;
    method = extraout_x1;
  }
  if ((InControl_UnityInputDeviceProfile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_UnityInputDeviceProfile_TypeInfo,method);
  }
  InControl_UnityInputDeviceProfile___ctor
            ((InControl_UnityInputDeviceProfile_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._Name_k__BackingField = StringLiteral_8655/*"Logitech RumblePad 2 Controller"*/;
  thunk_FUN_01c20e04();
  (__this->fields).super._Meta_k__BackingField = StringLiteral_8656/*"Logitech RumblePad 2 Controller on Windows"*/;
  thunk_FUN_01c20e04();
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length == 0) {
LAB_034f5ac4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar1->m_Items[0] = StringLiteral_14965/*"Windows"*/;
    thunk_FUN_01c20e04();
    ppSVar2 = &(__this->fields).super.SupportedPlatforms;
    *ppSVar2 = pSVar1;
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
    if (pSVar1 != (System_String_array *)0x0) {
      if ((int)pSVar1->max_length == 0) goto LAB_034f5ac4;
      pSVar1->m_Items[0] = StringLiteral_8658/*"Logitech Rumblepad 2 USB"*/;
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
        (pIVar4->fields).handle = StringLiteral_1606/*"1"*/;
        thunk_FUN_01c20e04();
        (pIVar4->fields).Target = 0xd;
        (pIVar4->fields).Source = InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button0
        ;
        thunk_FUN_01c20e04();
        if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) {
LAB_034f5ab8:
            uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar7,0);
          }
          if ((int)pIVar3->max_length == 0) goto LAB_034f5ac4;
          pIVar3->m_Items[0] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034f5ab4;
          (pIVar4->fields).handle = StringLiteral_1943/*"2"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xb;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button1;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_034f5ab8;
          if ((uint)pIVar3->max_length < 2) goto LAB_034f5ac4;
          pIVar3->m_Items[1] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034f5ab4;
          (pIVar4->fields).handle = StringLiteral_2019/*"3"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xc;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button2;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_034f5ab8;
          if ((uint)pIVar3->max_length < 3) goto LAB_034f5ac4;
          pIVar3->m_Items[2] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034f5ab4;
          (pIVar4->fields).handle = StringLiteral_2036/*"4"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xe;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button3;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_034f5ab8;
          if ((uint)pIVar3->max_length < 4) goto LAB_034f5ac4;
          pIVar3->m_Items[3] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034f5ab4;
          (pIVar4->fields).handle = StringLiteral_2079/*"9"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x13;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button8;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_034f5ab8;
          if ((uint)pIVar3->max_length < 5) goto LAB_034f5ac4;
          pIVar3->m_Items[4] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034f5ab4;
          (pIVar4->fields).handle = StringLiteral_1882/*"10"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x14;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button9;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_034f5ab8;
          if ((uint)pIVar3->max_length < 6) goto LAB_034f5ac4;
          pIVar3->m_Items[5] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034f5ab4;
          (pIVar4->fields).handle = StringLiteral_8380/*"Left Stick Button"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 3;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button11;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_034f5ab8;
          if ((uint)pIVar3->max_length < 7) goto LAB_034f5ac4;
          pIVar3->m_Items[6] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034f5ab4;
          (pIVar4->fields).handle = StringLiteral_11384/*"Right Stick Button"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 6;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button12;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_034f5ab8;
          if ((uint)pIVar3->max_length < 8) goto LAB_034f5ac4;
          pIVar3->m_Items[7] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 7,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034f5ab4;
          (pIVar4->fields).handle = StringLiteral_8379/*"Left Bumper"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x11;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button4;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_034f5ab8;
          if ((uint)pIVar3->max_length < 9) goto LAB_034f5ac4;
          pIVar3->m_Items[8] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 8,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034f5ab4;
          (pIVar4->fields).handle = StringLiteral_11383/*"Right Bumper"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x12;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button5;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_034f5ab8;
          if ((uint)pIVar3->max_length < 10) goto LAB_034f5ac4;
          pIVar3->m_Items[9] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 9,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034f5ab4;
          (pIVar4->fields).handle = StringLiteral_8383/*"Left Trigger"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0xf;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button6;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_034f5ab8;
          if ((uint)pIVar3->max_length < 0xb) goto LAB_034f5ac4;
          pIVar3->m_Items[10] = pIVar4;
          thunk_FUN_01c20e04(pIVar3->m_Items + 10,pIVar4);
          pIVar4 = (InControl_InputControlMapping_o *)
                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034f5ab4;
          (pIVar4->fields).handle = StringLiteral_11387/*"Right Trigger"*/;
          thunk_FUN_01c20e04();
          (pIVar4->fields).Target = 0x10;
          (pIVar4->fields).Source =
               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Button7;
          thunk_FUN_01c20e04();
          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_034f5ab8;
          if ((uint)pIVar3->max_length < 0xc) goto LAB_034f5ac4;
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
            (pIVar4->fields).handle = StringLiteral_8381/*"Left Stick X"*/;
            thunk_FUN_01c20e04();
            (pIVar4->fields).Target = 1;
            (pIVar4->fields).Source =
                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog0;
            thunk_FUN_01c20e04();
            if (pIVar3 != (InControl_InputControlMapping_array *)0x0) {
              lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
              if (lVar5 == 0) goto LAB_034f5ab8;
              if ((int)pIVar3->max_length != 0) {
                pIVar3->m_Items[0] = pIVar4;
                thunk_FUN_01c20e04(pIVar3->m_Items,pIVar4);
                pIVar4 = (InControl_InputControlMapping_o *)
                         thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034f5ab4;
                (pIVar4->fields).handle = StringLiteral_8382/*"Left Stick Y"*/;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Target = 2;
                (pIVar4->fields).Source =
                     InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog1;
                thunk_FUN_01c20e04();
                (pIVar4->fields).Invert = true;
                lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                if (lVar5 == 0) goto LAB_034f5ab8;
                if (1 < (uint)pIVar3->max_length) {
                  pIVar3->m_Items[1] = pIVar4;
                  thunk_FUN_01c20e04(pIVar3->m_Items + 1,pIVar4);
                  pIVar4 = (InControl_InputControlMapping_o *)
                           thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                  InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                  if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034f5ab4;
                  (pIVar4->fields).handle = StringLiteral_11385/*"Right Stick X"*/;
                  thunk_FUN_01c20e04();
                  (pIVar4->fields).Target = 4;
                  (pIVar4->fields).Source =
                       InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog2;
                  thunk_FUN_01c20e04();
                  lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                  if (lVar5 == 0) goto LAB_034f5ab8;
                  if (2 < (uint)pIVar3->max_length) {
                    pIVar3->m_Items[2] = pIVar4;
                    thunk_FUN_01c20e04(pIVar3->m_Items + 2,pIVar4);
                    pIVar4 = (InControl_InputControlMapping_o *)
                             thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                    InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                    if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034f5ab4;
                    (pIVar4->fields).handle = StringLiteral_11386/*"Right Stick Y"*/;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Target = 5;
                    (pIVar4->fields).Source =
                         InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog3;
                    thunk_FUN_01c20e04();
                    (pIVar4->fields).Invert = true;
                    lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                    if (lVar5 == 0) goto LAB_034f5ab8;
                    if (3 < (uint)pIVar3->max_length) {
                      pIVar3->m_Items[3] = pIVar4;
                      thunk_FUN_01c20e04(pIVar3->m_Items + 3,pIVar4);
                      pIVar4 = (InControl_InputControlMapping_o *)
                               thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                      InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                      if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034f5ab4;
                      (pIVar4->fields).handle = StringLiteral_5029/*"DPad Left"*/;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).Target = 9;
                      (pIVar4->fields).Source =
                           InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                      thunk_FUN_01c20e04();
                      (pIVar4->fields).Invert = true;
                      lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class);
                      if (lVar5 == 0) goto LAB_034f5ab8;
                      if (4 < (uint)pIVar3->max_length) {
                        pIVar3->m_Items[4] = pIVar4;
                        thunk_FUN_01c20e04(pIVar3->m_Items + 4,pIVar4);
                        pIVar4 = (InControl_InputControlMapping_o *)
                                 thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                        InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                        if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034f5ab4;
                        (pIVar4->fields).handle = StringLiteral_5030/*"DPad Right"*/;
                        thunk_FUN_01c20e04();
                        (pIVar4->fields).Target = 10;
                        (pIVar4->fields).Source =
                             InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog4;
                        thunk_FUN_01c20e04();
                        lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).element_class)
                        ;
                        if (lVar5 == 0) goto LAB_034f5ab8;
                        if (5 < (uint)pIVar3->max_length) {
                          pIVar3->m_Items[5] = pIVar4;
                          thunk_FUN_01c20e04(pIVar3->m_Items + 5,pIVar4);
                          pIVar4 = (InControl_InputControlMapping_o *)
                                   thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                          InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                          if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034f5ab4;
                          (pIVar4->fields).handle = StringLiteral_5031/*"DPad Up"*/;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).Target = 7;
                          (pIVar4->fields).Source =
                               InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
                          thunk_FUN_01c20e04();
                          (pIVar4->fields).Invert = true;
                          lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                            element_class);
                          if (lVar5 == 0) goto LAB_034f5ab8;
                          if (6 < (uint)pIVar3->max_length) {
                            pIVar3->m_Items[6] = pIVar4;
                            thunk_FUN_01c20e04(pIVar3->m_Items + 6,pIVar4);
                            pIVar4 = (InControl_InputControlMapping_o *)
                                     thunk_FUN_01bda818(InControl_InputControlMapping_TypeInfo);
                            InControl_InputControlMapping___ctor(pIVar4,(MethodInfo *)0x0);
                            if (pIVar4 == (InControl_InputControlMapping_o *)0x0) goto LAB_034f5ab4;
                            (pIVar4->fields).handle = StringLiteral_5028/*"DPad Down"*/;
                            thunk_FUN_01c20e04();
                            (pIVar4->fields).Target = 8;
                            (pIVar4->fields).Source =
                                 InControl_UnityInputDeviceProfile_TypeInfo->static_fields->Analog5;
                            thunk_FUN_01c20e04();
                            lVar5 = thunk_FUN_01bda71c(pIVar4,(((pIVar3->obj).klass)->_1).
                                                              element_class);
                            if (lVar5 == 0) goto LAB_034f5ab8;
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
              goto LAB_034f5ac4;
            }
          }
        }
      }
    }
  }
LAB_034f5ab4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

