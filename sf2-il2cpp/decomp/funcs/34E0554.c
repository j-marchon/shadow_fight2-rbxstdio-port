// ANFOHCGLHID$$AOJDPDOCMPN @ RVA 0x34E0554

void ANFOHCGLHID__AOJDPDOCMPN(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  FOKJBDHLIMG_o *__this;
  undefined8 *puVar2;
  System_Xml_XmlDocument_o *local_18;
  
  if ((DAT_04568729 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_5574);
    FUN_01bab630(&StringLiteral_1540);
    FUN_01bab630(&StringLiteral_10239);
    FUN_01bab630(&StringLiteral_5573);
    DAT_04568729 = 1;
  }
                    /* try { // try from 035e05cc to 036e07b3 has its CatchHandler @ 035e05cc
                       catch() { ... } // from try @ 035e05cc with catch @ 035e05cc
                       catch() { ... } // from try @ 035e08f0 with catch @ 035e05cc
                       catch() { ... } // from try @ 035e0a34 with catch @ 035e05cc
                       catch() { ... } // from try @ 035e0a3c with catch @ 035e05cc
                       catch() { ... } // from try @ 035e0af0 with catch @ 035e05cc */
  local_18 = (System_Xml_XmlDocument_o *)0x0;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1540,(MethodInfo *)0x0);
  DBHEKFDNJKG__GPFIKPJDGND(&local_18,pSVar1,(MethodInfo *)0x0);
  if (local_18 == (System_Xml_XmlDocument_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar2 = &StringLiteral_5574;
  }
  else {
    AHDGNOJPPIB = (System_Xml_XmlNode_o *)
                  (*(local_18->klass->vtable)._51_get_Item.methodPtr)
                            (local_18,StringLiteral_10239,
                             (local_18->klass->vtable)._51_get_Item.method);
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
      if (__this != (FOKJBDHLIMG_o *)0x0) {
        FOKJBDHLIMG__HNIHOIAMDPC(__this,AHDGNOJPPIB,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar2 = &StringLiteral_5573;
  }
  UnityEngine_Debug__LogError((Il2CppObject *)*puVar2,(MethodInfo *)0x0);
  return;
}

