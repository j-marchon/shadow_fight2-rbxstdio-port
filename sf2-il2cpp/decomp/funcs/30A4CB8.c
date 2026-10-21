// IGFGDDANEPE$$JONJCPBEJDP @ RVA 0x30A4CB8

void IGFGDDANEPE__JONJCPBEJDP(IGFGDDANEPE_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlElement_o *pSVar2;
  System_String_o *pSVar3;
  AMJMGFCCAKN_o *pAVar4;
  int64_t local_28;
  
  if ((DAT_04566166 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11107);
    FUN_01bab630(&StringLiteral_5292);
    DAT_04566166 = 1;
  }
  local_28 = 0;
  pAVar4 = (__this->fields).HJLEJIJKJKD;
  if (pAVar4 == (AMJMGFCCAKN_o *)0x0) {
    return;
  }
  (pAVar4->fields).CJKLJJIMECK = CJNHFNHJHPE;
  pSVar1 = (__this->fields).DMLGJFCNNJF;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlElement_o *)
             (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar1,StringLiteral_11107,(pSVar1->klass->vtable)._51_get_Item.method);
    if (pSVar2 == (System_Xml_XmlElement_o *)0x0) {
      pSVar2 = EIABCPKDEBD__BHPIHHJHELJ
                         ((__this->fields).DMLGJFCNNJF,StringLiteral_11107,(MethodInfo *)0x0);
    }
    pAVar4 = (__this->fields).HJLEJIJKJKD;
    if (pAVar4 != (AMJMGFCCAKN_o *)0x0) {
      local_28 = (pAVar4->fields).CJKLJJIMECK;
      pSVar3 = System_Int64__ToString((int64_t)&local_28,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlElement_o *)0x0) {
        (*(pSVar2->klass->vtable)._66_SetAttribute.methodPtr)
                  (pSVar2,StringLiteral_5292,pSVar3,(pSVar2->klass->vtable)._66_SetAttribute.method)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

