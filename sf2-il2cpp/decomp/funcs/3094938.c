// KCFIOKDFHIB$$NBFLGFJIJCL @ RVA 0x3094938

void KCFIOKDFHIB__NBFLGFJIJCL(KCFIOKDFHIB_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlNode_o *pSVar2;
  long *plVar3;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar4;
  KCFIOKDFHIB_Fields *pKVar5;
  
                    /* try { // try from 03194938 to 03294943 has its CatchHandler @ 03194e50 */
  if ((DAT_045660c4 & 1) == 0) {
                    /* try { // try from 03194954 to 0329495b has its CatchHandler @ 03194e64 */
    FUN_01bab630(&StringLiteral_6310);
    FUN_01bab630(&StringLiteral_9327);
                    /* try { // try from 03194970 to 03294977 has its CatchHandler @ 03194e50 */
    FUN_01bab630(&StringLiteral_1);
    DAT_045660c4 = 1;
  }
  pKVar5 = &__this->fields;
  pKVar5->NPFHCGIADBL = CJNHFNHJHPE;
  thunk_FUN_01c20e04(pKVar5,CJNHFNHJHPE);
  pSVar2 = (__this->fields).JHFENACKNPG;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 031949b0 to 032949d7 has its CatchHandler @ 03194cc4 */
    plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar2,StringLiteral_6310,
                                (pSVar2->klass->vtable)._51_get_Item.method);
    if (plVar3 != (long *)0x0) {
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
                    /* try { // try from 031949e0 to 032949ef has its CatchHandler @ 03194cc8 */
      if ((__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
         (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (__this_00,StringLiteral_9327,(MethodInfo *)0x0),
         pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
        pSVar1 = StringLiteral_1;
        if (pKVar5->NPFHCGIADBL != (System_String_o *)0x0) {
          pSVar1 = pKVar5->NPFHCGIADBL;
        }
                    /* WARNING: Could not recover jumptable at 0x03194a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,pSVar1,(pSVar4->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

