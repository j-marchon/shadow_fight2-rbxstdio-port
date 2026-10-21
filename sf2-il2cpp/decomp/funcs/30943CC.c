// KCFIOKDFHIB$$MNGPLNIAIHH @ RVA 0x30943CC

void KCFIOKDFHIB__MNGPLNIAIHH(KCFIOKDFHIB_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlNode_o *pSVar2;
  long *plVar3;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o **ppSVar5;
  
  if ((DAT_045660bd & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_10960);
    DAT_045660bd = 1;
  }
  ppSVar5 = &(__this->fields).LCHHKBLIBMM;
  *ppSVar5 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar5,CJNHFNHJHPE);
  pSVar2 = (__this->fields).JHFENACKNPG;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar2,StringLiteral_10960,
                                (pSVar2->klass->vtable)._51_get_Item.method);
    if (plVar3 != (long *)0x0) {
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
                    /* try { // try from 03194474 to 032947d3 has its CatchHandler @ 03194474
                       catch() { ... } // from try @ 03194474 with catch @ 03194474
                       catch() { ... } // from try @ 03194c88 with catch @ 03194474
                       catch() { ... } // from try @ 03194cec with catch @ 03194474
                       catch() { ... } // from try @ 03194e1c with catch @ 03194474
                       catch() { ... } // from try @ 03194e24 with catch @ 03194474
                       catch() { ... } // from try @ 03194f00 with catch @ 03194474 */
      if ((__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
         (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (__this_00,StringLiteral_9327,(MethodInfo *)0x0),
         pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
        pSVar1 = StringLiteral_1;
        if (*ppSVar5 != (System_String_o *)0x0) {
          pSVar1 = *ppSVar5;
        }
                    /* WARNING: Could not recover jumptable at 0x031944a0. Too many branches */
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

