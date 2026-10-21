// DILGLGMKOFG$$.ctor @ RVA 0x3075E94

void DILGLGMKOFG___ctor(DILGLGMKOFG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,uint16_t JDIHKNKFJMK
                       ,uint16_t EHEFEIEKHJO,int32_t FDIGKDNAJJF,int32_t FDGAGHPHOAF,
                       MethodInfo *method)

{
  MCCHIAKPFEL_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  long lVar4;
  int32_t iVar5;
  
  if ((DAT_04565fa6 & 1) == 0) {
    FUN_01bab630(&MCCHIAKPFEL_TypeInfo);
    FUN_01bab630(&StringLiteral_3862);
    FUN_01bab630(&StringLiteral_9186);
    FUN_01bab630(&StringLiteral_14799);
    FUN_01bab630(&StringLiteral_4921);
    FUN_01bab630(&StringLiteral_7340);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565fa6 = 1;
  }
  BCOICIIDFPD___ctor((BCOICIIDFPD_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super.HMHEEKFFCPL = FDIGKDNAJJF;
  (__this->fields).super.EHOFCENCPNF = FDGAGHPHOAF;
  __this_00 = (MCCHIAKPFEL_o *)thunk_FUN_01bda818(MCCHIAKPFEL_TypeInfo);
  MCCHIAKPFEL___ctor(__this_00,AHDGNOJPPIB,JDIHKNKFJMK,EHEFEIEKHJO,(MethodInfo *)0x0);
  (__this->fields).super._BLIMDANKDIH_k__BackingField = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar1,StringLiteral_7340,(MethodInfo *)0x0);
    pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
    (__this->fields).super._IANGGJCONIH_k__BackingField = pSVar3;
    thunk_FUN_01c20e04();
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_3862,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
      *(System_String_o **)&(__this->fields).MBCNFGBPLEP = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_14799,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1,(MethodInfo *)0x0);
        (__this->fields).super._JHGGGMJEENP_k__BackingField = pSVar3;
        thunk_FUN_01c20e04();
        lVar4 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                          (AHDGNOJPPIB,StringLiteral_9186,
                           (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
        if (lVar4 == 0) {
          lVar4 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                            (AHDGNOJPPIB,StringLiteral_4921,
                             (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
          if (lVar4 == 0) {
            (__this->fields).super._FOBKGCDONOI_k__BackingField = 0;
            return;
          }
          iVar5 = 2;
        }
        else {
          iVar5 = 1;
        }
        (__this->fields).super._FOBKGCDONOI_k__BackingField = iVar5;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

