// OLKPEJMEBPJ$$PPCDKKPGEGI @ RVA 0x33AC85C

void OLKPEJMEBPJ__PPCDKKPGEGI(OLKPEJMEBPJ_o *__this,DNELIPCHKLK_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  undefined8 uVar3;
  DNELIPCHKLK_o *pDVar4;
  DNELIPCHKLK_o **ppDVar5;
  
  if ((DAT_04567d15 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327);
    DAT_04567d15 = 1;
  }
  ppDVar5 = &(__this->fields).BBELCDHPJIP;
  *ppDVar5 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppDVar5,CJNHFNHJHPE);
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 034ac8b0 to 035ac8db has its CatchHandler @ 034acba4 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
      pDVar4 = *ppDVar5;
                    /* try { // try from 034ac8e0 to 035ac8e7 has its CatchHandler @ 034ac9a8 */
      if ((pDVar4 != (DNELIPCHKLK_o *)0x0) &&
         (uVar3 = (*(pDVar4->klass->vtable)._3_ToString.methodPtr)
                            (pDVar4,(pDVar4->klass->vtable)._3_ToString.method),
         pSVar2 != (System_Xml_XmlAttribute_o *)0x0)) {
                    /* try { // try from 034ac8ec to 035ac8ef has its CatchHandler @ 034ac984 */
                    /* try { // try from 034ac8f4 to 035ac8f7 has its CatchHandler @ 034ac97c */
                    /* try { // try from 034ac8fc to 035ac8ff has its CatchHandler @ 034ac978 */
                    /* WARNING: Could not recover jumptable at 0x034ac904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 034ac904 to 035ac907 has its CatchHandler @ 034ac99c */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,uVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

