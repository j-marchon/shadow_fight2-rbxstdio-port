// ANFOHCGLHID$$LOLAOCBNCJD @ RVA 0x34E041C

void ANFOHCGLHID__LOLAOCBNCJD(MethodInfo *method)

{
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  undefined1 auVar2 [16];
  
  if ((DAT_04568734 & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_5593);
    FUN_01bab630(&StringLiteral_12818);
    FUN_01bab630(&StringLiteral_21402);
    DAT_04568734 = 1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EIJDDKJONFO = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar1 = GIAMPEGMNHE__IBJOMPOLPCC
                     (EIJDDKJONFO,StringLiteral_21402,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar1 != (System_Xml_XmlDocument_o *)0x0) {
    auVar2 = (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar1,StringLiteral_12818,(pSVar1->klass->vtable)._51_get_Item.method);
    method_00 = auVar2._8_8_;
    if (auVar2._0_8_ != (System_Xml_XmlNode_o *)0x0) {
      if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1;
      }
      ANFOHCGLHID__OHHANEKKNJJ(auVar2._0_8_,method_00);
      return;
    }
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_5593,(MethodInfo *)0x0);
    return;
  }
  return;
}

