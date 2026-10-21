// KCFIOKDFHIB$$GNCKPENHMCA @ RVA 0x30947D4

void KCFIOKDFHIB__GNCKPENHMCA(KCFIOKDFHIB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  long *plVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  int32_t *piVar5;
  
                    /* try { // try from 031947d4 to 032947fb has its CatchHandler @ 03194e6c */
  if ((DAT_045660c2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_8423);
    DAT_045660c2 = 1;
  }
  piVar5 = &(__this->fields).MJJBDELFBOM;
  *piVar5 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).JHFENACKNPG;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar1,StringLiteral_8423,
                                (pSVar1->klass->vtable)._51_get_Item.method);
                    /* try { // try from 03194838 to 0329485f has its CatchHandler @ 03194e68 */
    if (plVar2 != (long *)0x0) {
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (__this_00,StringLiteral_14694,(MethodInfo *)0x0);
                    /* try { // try from 03194870 to 03294873 has its CatchHandler @ 03194e54 */
        pSVar4 = System_Int32__ToString((int32_t)piVar5,(MethodInfo *)0x0);
        if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 03194888 to 032948d3 has its CatchHandler @ 03194e64 */
                    /* WARNING: Could not recover jumptable at 0x03194890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar3,pSVar4,(pSVar3->klass->vtable)._10_set_Value.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

