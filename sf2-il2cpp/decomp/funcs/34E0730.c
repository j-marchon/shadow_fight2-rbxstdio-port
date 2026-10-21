// ANFOHCGLHID$$BOPANCPIEIC @ RVA 0x34E0730

void ANFOHCGLHID__BOPANCPIEIC(MethodInfo *method)

{
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_04568728 & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_5590);
    FUN_01bab630(&StringLiteral_10511);
    FUN_01bab630(&StringLiteral_4278);
    FUN_01bab630(&StringLiteral_5589);
    DAT_04568728 = 1;
  }
                    /* try { // try from 035e07b4 to 036e07db has its CatchHandler @ 035e0a54 */
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EIJDDKJONFO = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar1 = GIAMPEGMNHE__IBJOMPOLPCC
                     (EIJDDKJONFO,StringLiteral_4278,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar1 == (System_Xml_XmlDocument_o *)0x0) {
                    /* try { // try from 035e0844 to 036e088b has its CatchHandler @ 035e0a5c */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar2 = &StringLiteral_5589;
  }
  else {
    auVar3 = (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar1,StringLiteral_10511,(pSVar1->klass->vtable)._51_get_Item.method);
    method_00 = auVar3._8_8_;
    if (auVar3._0_8_ != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 035e0810 to 036e083b has its CatchHandler @ 035e0a50 */
      if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1;
      }
      ANFOHCGLHID__KIGGIKNDOLP(auVar3._0_8_,method_00);
      return;
    }
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar2 = &StringLiteral_5590;
  }
  UnityEngine_Debug__Log((Il2CppObject *)*puVar2,(MethodInfo *)0x0);
  return;
}

