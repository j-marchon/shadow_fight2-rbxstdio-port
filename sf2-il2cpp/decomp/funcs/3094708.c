// KCFIOKDFHIB$$GKKEMMNPNJE @ RVA 0x3094708

void KCFIOKDFHIB__GKKEMMNPNJE(KCFIOKDFHIB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  long *plVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  
  if ((DAT_045660c1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10385);
    FUN_01bab630(&StringLiteral_14694);
    DAT_045660c1 = 1;
  }
  pSVar1 = (__this->fields).JHFENACKNPG;
  (__this->fields).GMCNKDKMHII = CJNHFNHJHPE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar1,StringLiteral_10385,
                                (pSVar1->klass->vtable)._51_get_Item.method);
    if (plVar2 != (long *)0x0) {
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (__this_00,StringLiteral_14694,(MethodInfo *)0x0);
        pSVar4 = System_Int32__ToString((int)__this + 0x28,(MethodInfo *)0x0);
        if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031947c4. Too many branches */
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

