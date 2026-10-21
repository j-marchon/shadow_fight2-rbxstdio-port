// ACHLOMELAJE$$GDCHAJOJGBH @ RVA 0x3068030

void ACHLOMELAJE__GDCHAJOJGBH(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlDocument_o *pSVar3;
  System_String_o *pSVar4;
  AJOGJBFNELI_o *__this_00;
  MethodInfo *method_00;
  
                    /* try { // try from 03168040 to 0326804f has its CatchHandler @ 03168070 */
  if ((DAT_04565f05 & 1) == 0) {
                    /* catch() { ... } // from try @ 03168004 with catch @ 03168054 */
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
                    /* catch() { ... } // from try @ 03167f98 with catch @ 03168058 */
                    /* catch() { ... } // from try @ 03168010 with catch @ 0316805c */
                    /* catch() { ... } // from try @ 03167fe8 with catch @ 03168060 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 03167fd0 with catch @ 03168064 */
                    /* catch() { ... } // from try @ 03167fb4 with catch @ 03168068 */
    DAT_04565f05 = 1;
  }
                    /* catch() { ... } // from try @ 03167f9c with catch @ 0316806c */
                    /* catch() { ... } // from try @ 03167f78 with catch @ 03168070
                       catch() { ... } // from try @ 03168040 with catch @ 03168070 */
  CIOBNDOOGIM__GDCHAJOJGBH((CIOBNDOOGIM_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 03168078 to 0326807b has its CatchHandler @ 03168110 */
                    /* try { // try from 0316807c to 0326809f has its CatchHandler @ 03167d78 */
  ACHLOMELAJE__DFEDPHHCOBN(__this,method_00);
                    /* catch() { ... } // from try @ 03167e3c with catch @ 03168080 */
  pSVar2 = (__this->fields).super.HJKLIDCAEOE;
                    /* catch() { ... } // from try @ 03167f00 with catch @ 03168084
                       catch() { ... } // from try @ 03167f30 with catch @ 03168084 */
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 031680a0 to 032680b7 has its CatchHandler @ 03168100 */
    pSVar3 = (System_Xml_XmlDocument_o *)
             (*(pSVar2->klass->vtable)._17_get_OwnerDocument.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._17_get_OwnerDocument.method);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031680b8 to 032680ef has its CatchHandler @ 03167d78 */
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    pSVar4 = NLPJLHOEAOE__LJAKPLJDGBJ((MethodInfo *)0x0);
    GIAMPEGMNHE__DGLLHFNFGNO(pSVar3,pSVar4,(MethodInfo *)0x0);
    pSVar4 = NLPJLHOEAOE__LJAKPLJDGBJ((MethodInfo *)0x0);
    if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031680f0 to 032680ff has its CatchHandler @ 03168100 */
      thunk_FUN_01ba7564(EOOEOHKLOFJ_TypeInfo);
    }
                    /* catch() { ... } // from try @ 031680a0 with catch @ 03168100
                       catch() { ... } // from try @ 031680f0 with catch @ 03168100 */
    bVar1 = EOOEOHKLOFJ__EGFIEDINDAC(pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 03168104 to 03268107 has its CatchHandler @ 03168110 */
    if (!bVar1) {
                    /* try { // try from 03168108 to 03268113 has its CatchHandler @ 03167d78 */
      pSVar2 = (__this->fields).super.HJKLIDCAEOE;
      if (pSVar2 == (System_Xml_XmlNode_o *)0x0) goto LAB_03168180;
                    /* catch() { ... } // from try @ 03168078 with catch @ 03168110
                       catch() { ... } // from try @ 03168104 with catch @ 03168110 */
      pSVar3 = (System_Xml_XmlDocument_o *)
               (*(pSVar2->klass->vtable)._17_get_OwnerDocument.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._17_get_OwnerDocument.method);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
      }
      pSVar4 = NLPJLHOEAOE__DGBOOECJDDG((MethodInfo *)0x0);
      GIAMPEGMNHE__DGLLHFNFGNO(pSVar3,pSVar4,(MethodInfo *)0x0);
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
    if (__this_00 != (AJOGJBFNELI_o *)0x0) {
      AJOGJBFNELI__CHLJMDILNBI(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03168180:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

