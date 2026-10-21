// IFKFDFGNMMN$$.ctor @ RVA 0x31B9A04

void IFKFDFGNMMN___ctor(IFKFDFGNMMN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  MethodInfo *pMVar2;
  IFKFDFGNMMN_Fields *pIVar3;
  
  if ((DAT_04566bd2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4277);
    FUN_01bab630(&StringLiteral_14877);
    FUN_01bab630(&StringLiteral_10601);
    FUN_01bab630(&StringLiteral_8593);
    DAT_04566bd2 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_10601,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    pIVar3 = &__this->fields;
    pIVar3->_OLIGHNIEIGK_k__BackingField = pSVar1;
    thunk_FUN_01c20e04(pIVar3,pSVar1);
    pSVar1 = pIVar3->_OLIGHNIEIGK_k__BackingField;
    if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
      pMVar2 = (pSVar1->klass->vtable)._51_get_Item.method;
      pSVar1 = (System_Xml_XmlNode_o *)
               (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)(pSVar1,StringLiteral_4277);
      IFKFDFGNMMN__NNOFKDAPECF(__this,pSVar1,pMVar2);
      pSVar1 = (__this->fields)._OLIGHNIEIGK_k__BackingField;
      if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
        pMVar2 = (pSVar1->klass->vtable)._51_get_Item.method;
        pSVar1 = (System_Xml_XmlNode_o *)
                 (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)(pSVar1,StringLiteral_8593);
        IFKFDFGNMMN__BIDIELKCDJD(__this,pSVar1,pMVar2);
        pSVar1 = (__this->fields)._OLIGHNIEIGK_k__BackingField;
        if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
          pMVar2 = (pSVar1->klass->vtable)._51_get_Item.method;
          pSVar1 = (System_Xml_XmlNode_o *)
                   (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)(pSVar1,StringLiteral_14877);
          IFKFDFGNMMN__CDEIIJGKFBB(__this,pSVar1,pMVar2);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

