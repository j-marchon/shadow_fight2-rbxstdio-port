// JNPDKJKGGNE.<>c$$JBCLNEBFCBA @ RVA 0x303290C

void JNPDKJKGGNE_<>c__JBCLNEBFCBA
               (JNPDKJKGGNE___c_o *__this,IGFGDDANEPE_o *userItem,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  
  if ((DAT_04565d10 & 1) == 0) {
    __this = (JNPDKJKGGNE___c_o *)FUN_01bab630(&StringLiteral_5703);
    DAT_04565d10 = 1;
  }
  if ((userItem != (IGFGDDANEPE_o *)0x0) &&
     (pSVar1 = (userItem->fields).DMLGJFCNNJF, __this = (JNPDKJKGGNE___c_o *)0x0,
     pSVar1 != (System_Xml_XmlNode_o *)0x0)) {
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar1,StringLiteral_5703,(pSVar1->klass->vtable)._51_get_Item.method);
    if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
      IGFGDDANEPE__LPLGJMMAKJG(userItem,pSVar1,true,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

