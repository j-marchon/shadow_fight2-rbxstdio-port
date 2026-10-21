// KLFOGICEHJC$$HNIHOIAMDPC @ RVA 0x2FED3FC

void KLFOGICEHJC__HNIHOIAMDPC
               (KLFOGICEHJC_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Action_o *pSVar2;
  LCKCDEKNLOA_o *pLVar3;
  
  if ((DAT_04565a3f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_KLFOGICEHJC_NKGIJKODGAN__);
    FUN_01bab630(&StringLiteral_12524);
    FUN_01bab630(&StringLiteral_5840);
    DAT_04565a3f = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                       (NPLGCIFGFOK,StringLiteral_12524,
                        (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
    pLVar3 = (__this->fields).KFJLNJDDGDO;
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    BOFEMGGNODC__KIBBEDPGMBB((BOFEMGGNODC_o *)__this,pSVar1,pLVar3,pSVar2,(MethodInfo *)0x0);
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(NPLGCIFGFOK->klass->vtable)._51_get_Item.methodPtr)
                       (NPLGCIFGFOK,StringLiteral_5840,
                        (NPLGCIFGFOK->klass->vtable)._51_get_Item.method);
    pLVar3 = (__this->fields).MJMJIDBBMON;
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    BOFEMGGNODC__KIBBEDPGMBB((BOFEMGGNODC_o *)__this,pSVar1,pLVar3,pSVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

