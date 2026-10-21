// OHDDKGHEEPA$$HNIHOIAMDPC @ RVA 0x3336428

void OHDDKGHEEPA__HNIHOIAMDPC
               (OHDDKGHEEPA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_Xml_XmlNode_o *pSVar5;
  OHDDKGHEEPA_NHCNEOLLGHG_o *__this_00;
  MethodInfo *pMVar6;
  OHDDKGHEEPA_PKBJJBGAIGC_o *__this_01;
  OHDDKGHEEPA_NHCNEOLLGHG_o **ppOVar7;
  
  if ((DAT_0456794e & 1) == 0) {
    FUN_01bab630(&OHDDKGHEEPA_NHCNEOLLGHG_TypeInfo);
    FUN_01bab630(&StringLiteral_8580);
    FUN_01bab630(&StringLiteral_10933);
    FUN_01bab630(&StringLiteral_5253);
    FUN_01bab630(&StringLiteral_10837);
    FUN_01bab630(&StringLiteral_2751);
    DAT_0456794e = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_10933,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
      (__this->fields)._DNENMENCFFI_k__BackingField = iVar2;
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_5253,(MethodInfo *)0x0);
        bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
        (__this->fields)._MHOHOBABBNK_k__BackingField = bVar1;
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_2751,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
          (__this->fields)._PLEKIDHFFPB_k__BackingField = bVar1;
          pMVar6 = (AHDGNOJPPIB->klass->vtable)._51_get_Item.method;
          pSVar5 = (System_Xml_XmlNode_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                             (AHDGNOJPPIB,StringLiteral_10837);
          __this_01 = (__this->fields).OJPLGFNIGBC;
          if (__this_01 != (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
            OHDDKGHEEPA_PKBJJBGAIGC__HNIHOIAMDPC(__this_01,pSVar5,pMVar6);
            pMVar6 = (AHDGNOJPPIB->klass->vtable)._51_get_Item.method;
            pSVar5 = (System_Xml_XmlNode_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_8580);
            if (pSVar5 != (System_Xml_XmlNode_o *)0x0) {
              __this_00 = (OHDDKGHEEPA_NHCNEOLLGHG_o *)
                          thunk_FUN_01bda818(OHDDKGHEEPA_NHCNEOLLGHG_TypeInfo);
              OHDDKGHEEPA_NHCNEOLLGHG___ctor(__this_00,pSVar5,pMVar6);
              ppOVar7 = &(__this->fields)._FHGDHAIAPBG_k__BackingField;
              *ppOVar7 = __this_00;
              thunk_FUN_01c20e04(ppOVar7,__this_00);
              return;
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

