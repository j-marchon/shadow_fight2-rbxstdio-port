// HEINPCIAMNL$$HNIHOIAMDPC @ RVA 0x311D9E4

void HEINPCIAMNL__HNIHOIAMDPC
               (HEINPCIAMNL_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_Func_string__T__T__o *KECKMFEOIKH;
  System_Xml_XmlNode_o *pSVar2;
  System_Action_o *pSVar3;
  LCKCDEKNLOA_o *pLVar4;
  
  if ((DAT_04566604 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<MPAKDCNMLEG>__);
    FUN_01bab630(&System_Func<string,_MPAKDCNMLEG,_MPAKDCNMLEG>_TypeInfo);
    FUN_01bab630(&Method_HEINPCIAMNL_NDJAJHFFPKP__);
    FUN_01bab630(&Method_HEINPCIAMNL_ODPFFKGFEKI__);
    FUN_01bab630(&StringLiteral_12524);
    FUN_01bab630(&StringLiteral_3856);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_5840);
    DAT_04566604 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_13991,(MethodInfo *)0x0);
      KECKMFEOIKH = (System_Func_string__T__T__o *)
                    thunk_FUN_01bda818(System_Func<string,_MPAKDCNMLEG,_MPAKDCNMLEG>_TypeInfo);
      System_Func<object,_Int32Enum,_Int32Enum>___ctor();
      iVar1 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                        (LBJNDMNEJJB,KECKMFEOIKH,0,Method_EIABCPKDEBD_CKHGJBKDIID<MPAKDCNMLEG>__);
      *(int32_t *)&(__this->fields).super.field_0x54 = iVar1;
      pSVar2 = (System_Xml_XmlNode_o *)
               (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                         (NPLGCIFGFOK,StringLiteral_12524,
                          (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
      pLVar4 = *(LCKCDEKNLOA_o **)&(__this->fields).ACCIHBHMFPN;
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      BOFEMGGNODC__KIBBEDPGMBB((BOFEMGGNODC_o *)__this,pSVar2,pLVar4,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0321db98 to 0331dc6b has its CatchHandler @ 0321db98
                       catch() { ... } // from try @ 0321db98 with catch @ 0321db98
                       catch() { ... } // from try @ 0321dcb8 with catch @ 0321db98
                       catch() { ... } // from try @ 0321dce0 with catch @ 0321db98
                       catch() { ... } // from try @ 0321dd04 with catch @ 0321db98
                       catch() { ... } // from try @ 0321dd38 with catch @ 0321db98 */
      pSVar2 = (System_Xml_XmlNode_o *)
               (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                         (NPLGCIFGFOK,StringLiteral_5840,
                          (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
      pLVar4 = (__this->fields).PGLINMCHKGC;
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      BOFEMGGNODC__KIBBEDPGMBB((BOFEMGGNODC_o *)__this,pSVar2,pLVar4,pSVar3,(MethodInfo *)0x0);
      pSVar2 = (System_Xml_XmlNode_o *)
               (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                         (NPLGCIFGFOK,StringLiteral_3856,
                          (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
      pLVar4 = (__this->fields).EBAHJECPAHA;
      pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      BOFEMGGNODC__KIBBEDPGMBB((BOFEMGGNODC_o *)__this,pSVar2,pLVar4,pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

