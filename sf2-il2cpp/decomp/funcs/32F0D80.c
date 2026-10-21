// NCNJEIBHGBH$$KKKGNGNJGCA @ RVA 0x32F0D80

void NCNJEIBHGBH__KKKGNGNJGCA(NCNJEIBHGBH_o *__this,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlNode_o *pSVar2;
  ACHLOMELAJE_o *__this_00;
  
                    /* try { // try from 033f0d80 to 034f0d87 has its CatchHandler @ 033f1e88 */
                    /* try { // try from 033f0d98 to 034f0d9f has its CatchHandler @ 033f1ea4 */
  if ((DAT_04567672 & 1) == 0) {
                    /* try { // try from 033f0db0 to 034f0db7 has its CatchHandler @ 033f1e94 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 033f0dbc to 034f0dc3 has its CatchHandler @ 033f1ea0 */
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_3606);
                    /* try { // try from 033f0dd4 to 034f0ddb has its CatchHandler @ 033f1e9c */
    DAT_04567672 = 1;
  }
                    /* try { // try from 033f0df0 to 034f0e13 has its CatchHandler @ 033f1ee8 */
  pSVar1 = EIABCPKDEBD__MHJPHEMBOLK
                     ((__this->fields).DMLGJFCNNJF,StringLiteral_3606,StringLiteral_9327,AFKICLAFDKC
                      ,(MethodInfo *)0x0);
  if (pSVar1 == (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 033f0ed8 to 034f0ee3 has its CatchHandler @ 033f1e7c */
    return;
  }
  pSVar2 = (__this->fields).DMLGJFCNNJF;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    (*(pSVar2->klass->vtable)._25_RemoveChild.methodPtr)
              (pSVar2,pSVar1,(pSVar2->klass->vtable)._25_RemoveChild.method);
                    /* try { // try from 033f0e20 to 034f0e77 has its CatchHandler @ 033f1f40 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 033f0e84 to 034f0e8b has its CatchHandler @ 033f1ed8 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033f0ea8 to 034f0eaf has its CatchHandler @ 033f1ec4 */
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

