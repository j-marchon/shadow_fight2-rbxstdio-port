// BOFEMGGNODC$$KIBBEDPGMBB @ RVA 0x32CD2F0

void BOFEMGGNODC__KIBBEDPGMBB
               (BOFEMGGNODC_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,LCKCDEKNLOA_o *DLOFGOGAGAA,
               System_Action_o *IELDNEAAPBE,MethodInfo *method)

{
  System_Action_c *pSVar1;
  System_Delegate_o *b;
  LCKCDEKNLOA_Fields *pLVar2;
  System_Action_o *pSVar3;
  
  if ((DAT_04567529 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_BOFEMGGNODC_NCMDBJEPELD__);
    DAT_04567529 = 1;
  }
  (*(__this->klass->vtable)._6_IEFEBMICIHN.methodPtr)
            (__this,NPLGCIFGFOK,DLOFGOGAGAA,IELDNEAAPBE,
             (__this->klass->vtable)._6_IEFEBMICIHN.method);
  if (DLOFGOGAGAA != (LCKCDEKNLOA_o *)0x0) {
    pLVar2 = &DLOFGOGAGAA->fields;
    pSVar3 = pLVar2->IGHHPBIADKJ;
    b = (System_Delegate_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    pSVar3 = (System_Action_o *)
             System_Delegate__Combine((System_Delegate_o *)pSVar3,b,(MethodInfo *)0x0);
    pSVar1 = System_Action_TypeInfo;
    if (pSVar3 == (System_Action_o *)0x0) {
      pLVar2->IGHHPBIADKJ = (System_Action_o *)0x0;
    }
    else if ((pSVar3->klass != System_Action_TypeInfo) ||
            (pLVar2->IGHHPBIADKJ = pSVar3, pSVar3->klass != pSVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar3);
    }
    thunk_FUN_01c20e04(pLVar2,pSVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

