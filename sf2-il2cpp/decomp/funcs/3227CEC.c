// KCLPNDAPADO$$.ctor @ RVA 0x3227CEC

void KCLPNDAPADO___ctor(KCLPNDAPADO_o *__this,System_Xml_XmlNode_o *MOINLMHNLAG,
                       ECENNHNBAME_o *LEAPPPMIBLJ,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  ECENNHNBAME_o **ppEVar5;
  
  if ((DAT_04566f82 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11023);
    FUN_01bab630(&StringLiteral_7289);
    FUN_01bab630(&StringLiteral_8263);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_5639);
    DAT_04566f82 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (MOINLMHNLAG != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(MOINLMHNLAG->klass->vtable)._16_get_Attributes.methodPtr)
                       (MOINLMHNLAG,(MOINLMHNLAG->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_7289,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).KPDPJONADPJ = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(MOINLMHNLAG->klass->vtable)._16_get_Attributes.methodPtr)
                         (MOINLMHNLAG,(MOINLMHNLAG->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_11023,(MethodInfo *)0x0);
        iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
        (__this->fields).GKAGCIBKONM = iVar1;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(MOINLMHNLAG->klass->vtable)._16_get_Attributes.methodPtr)
                           (MOINLMHNLAG,(MOINLMHNLAG->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_8263,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
          (__this->fields).MEHILFLIMCN = pSVar4;
          thunk_FUN_01c20e04();
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(MOINLMHNLAG->klass->vtable)._16_get_Attributes.methodPtr)
                             (MOINLMHNLAG,(MOINLMHNLAG->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_5639,(MethodInfo *)0x0);
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
            (__this->fields).PMOIHBCFLLK = pSVar4;
            thunk_FUN_01c20e04();
            if (LEAPPPMIBLJ != (ECENNHNBAME_o *)0x0) {
              (__this->fields).JIJLBFGKNJK = (LEAPPPMIBLJ->fields).JIJLBFGKNJK;
              thunk_FUN_01c20e04();
              ppEVar5 = &(__this->fields).FLIONKHMLLB;
              *ppEVar5 = LEAPPPMIBLJ;
              thunk_FUN_01c20e04(ppEVar5,LEAPPPMIBLJ);
              (__this->fields).HAEBIACJLHP = false;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

