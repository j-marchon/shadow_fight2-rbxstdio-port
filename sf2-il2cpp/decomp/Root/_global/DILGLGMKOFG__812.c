// TypeDefIndex 812
// Namespace: 
// public class DILGLGMKOFG : BCOICIIDFPD
// Fields:
//   public bool MBCNFGBPLEP; // 0x4C
//   public readonly string CHKJLPPEFDI; // 0x50

// ===== public void .ctor(MGNPHCAAEIO.OPCJEEFOCFB IMMNELPBGIF, bool HLODAPJEFEN = False)  [RVA 0x3075E40]
// DILGLGMKOFG$$.ctor @ RVA 0x3075E40

void DILGLGMKOFG___ctor(DILGLGMKOFG_o *__this,MGNPHCAAEIO_OPCJEEFOCFB_o *IMMNELPBGIF,
                       bool HLODAPJEFEN,MethodInfo *method)

{
  bool_conflict *pbVar1;
  MGNPHCAAEIO_OPCJEEFOCFB_o local_50;
  
  local_50.fields.OAPLLNNEONM = (IMMNELPBGIF->fields).OAPLLNNEONM;
  local_50.fields._33_7_ = *(undefined7 *)&(IMMNELPBGIF->fields).field_0x21;
  local_50.fields.KPDPJONADPJ = (IMMNELPBGIF->fields).KPDPJONADPJ;
  local_50.fields.JIJLBFGKNJK = (IMMNELPBGIF->fields).JIJLBFGKNJK;
  local_50.fields.GPOEEHGGIII = (IMMNELPBGIF->fields).GPOEEHGGIII;
  local_50.fields.ADCKCMDHIHM = (IMMNELPBGIF->fields).ADCKCMDHIHM;
  local_50.fields._20_4_ = *(undefined4 *)&(IMMNELPBGIF->fields).field_0x14;
  BCOICIIDFPD___ctor((BCOICIIDFPD_o *)__this,&local_50,(MethodInfo *)0x0);
  pbVar1 = &(__this->fields).MBCNFGBPLEP;
  *(undefined8 *)pbVar1 = 0;
  (__this->fields).super.field_0x3c = HLODAPJEFEN;
  thunk_FUN_01c20e04(pbVar1,0);
  return;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, ushort JDIHKNKFJMK, ushort EHEFEIEKHJO, int FDIGKDNAJJF = -2147483648, int FDGAGHPHOAF = 2147483647)  [RVA 0x3075E94]
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
    FUN_01bab630(&StringLiteral_3862/*"CancellingItem"*/);
    FUN_01bab630(&StringLiteral_9186/*"Money"*/);
    FUN_01bab630(&StringLiteral_14799/*"ViewType"*/);
    FUN_01bab630(&StringLiteral_4921/*"Currency"*/);
    FUN_01bab630(&StringLiteral_7340/*"Image"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
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
                       (pSVar1,StringLiteral_7340/*"Image"*/,(MethodInfo *)0x0);
    pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    (__this->fields).super._IANGGJCONIH_k__BackingField = pSVar3;
    thunk_FUN_01c20e04();
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_3862/*"CancellingItem"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      *(System_String_o **)&(__this->fields).MBCNFGBPLEP = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_14799/*"ViewType"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        (__this->fields).super._JHGGGMJEENP_k__BackingField = pSVar3;
        thunk_FUN_01c20e04();
        lVar4 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                          (AHDGNOJPPIB,StringLiteral_9186/*"Money"*/,
                           (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
        if (lVar4 == 0) {
          lVar4 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                            (AHDGNOJPPIB,StringLiteral_4921/*"Currency"*/,
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

