// TypeDefIndex 2538
// Namespace: 
// public class CBLABOPKBKD : NJLIJIPPKLD
// Fields:
//   public string BGHFADDGPAD; // 0x38
//   public long HIGJNLHJGON; // 0x40
//   public long ACBJIJCAOOD; // 0x48
//   public string BMGMGAAPFGO; // 0x50
//   public string MEONABNPAPF; // 0x58
//   public bool NMDOMADFIOI; // 0x60
//   public string BLBMGMJLEEL; // 0x68
//   public string ACDDBLNKPCA; // 0x70
//   public string EDBONKLOHNK; // 0x78

// ===== public bool FPBFCPPDGNI()  [RVA 0x33931DC]
// CBLABOPKBKD$$FPBFCPPDGNI @ RVA 0x33931DC

bool CBLABOPKBKD__FPBFCPPDGNI(CBLABOPKBKD_o *__this,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  MethodInfo *extraout_x1;
  long lVar3;
  
  if ((DAT_04567c36 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567c36 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  iVar2 = MGNPHCAAEIO__EAHFGGKENCK((MethodInfo *)0x0);
  if ((__this->fields).HIGJNLHJGON < iVar2) {
    lVar3 = (__this->fields).ACBJIJCAOOD;
    bVar1 = iVar2 < lVar3 || lVar3 < 1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== public bool OBOCLEJEDOC()  [RVA 0x3393260]
// CBLABOPKBKD$$OBOCLEJEDOC @ RVA 0x3393260

bool CBLABOPKBKD__OBOCLEJEDOC(CBLABOPKBKD_o *__this,MethodInfo *method)

{
  bool bVar1;
  AAPGCAPGBLG_o *__this_00;
  
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).EDBONKLOHNK,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  __this_00 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (AAPGCAPGBLG_o *)0x0) {
    bVar1 = AAPGCAPGBLG__BAFDBLCFCPO(__this_00,(__this->fields).EDBONKLOHNK,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x33932A4]
// CBLABOPKBKD$$.ctor @ RVA 0x33932A4

void CBLABOPKBKD___ctor(CBLABOPKBKD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  int64_t iVar5;
  System_String_o **ppSVar6;
  
  if ((DAT_04567c37 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12358/*"StartDate"*/);
    FUN_01bab630(&StringLiteral_21854/*"url"*/);
    FUN_01bab630(&StringLiteral_5730/*"EndDate"*/);
    FUN_01bab630(&StringLiteral_7350/*"ImageURLHash"*/);
    FUN_01bab630(&StringLiteral_12097/*"ShowGlow"*/);
    FUN_01bab630(&StringLiteral_3511/*"BlockBy"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_7349/*"ImageURL"*/);
    FUN_01bab630(&StringLiteral_8110/*"ItemName"*/);
    FUN_01bab630(&StringLiteral_2965/*"AnimPath"*/);
    FUN_01bab630(&StringLiteral_7344/*"ImagePath"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_9365/*"NeedPack"*/);
    DAT_04567c37 = 1;
  }
  NJLIJIPPKLD___ctor((NJLIJIPPKLD_o *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).BGHFADDGPAD = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_21854/*"url"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        (__this->fields).super._HOHLBKMCIDD_k__BackingField = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_7349/*"ImageURL"*/,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          (__this->fields).super._FEKJKEFIKEK_k__BackingField = pSVar4;
          thunk_FUN_01c20e04();
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_7350/*"ImageURLHash"*/,(MethodInfo *)0x0);
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
            (__this->fields).super._HFPMHKHBAEF_k__BackingField = pSVar4;
            thunk_FUN_01c20e04();
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_12358/*"StartDate"*/,(MethodInfo *)0x0);
              iVar5 = EIABCPKDEBD__HNIGPBMJJOL(pSVar3,0,(MethodInfo *)0x0);
              (__this->fields).HIGJNLHJGON = iVar5;
              pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar2,StringLiteral_5730/*"EndDate"*/,(MethodInfo *)0x0);
                iVar5 = EIABCPKDEBD__HNIGPBMJJOL(pSVar3,0,(MethodInfo *)0x0);
                (__this->fields).ACBJIJCAOOD = iVar5;
                pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar2,StringLiteral_8110/*"ItemName"*/,(MethodInfo *)0x0);
                  pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                  (__this->fields).BMGMGAAPFGO = pSVar4;
                  thunk_FUN_01c20e04();
                  pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar2,StringLiteral_7344/*"ImagePath"*/,(MethodInfo *)0x0);
                    pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                                       (pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
                    (__this->fields).MEONABNPAPF = pSVar4;
                    thunk_FUN_01c20e04();
                    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                       (AHDGNOJPPIB,
                                        (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar2,StringLiteral_12097/*"ShowGlow"*/,(MethodInfo *)0x0);
                      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,true,(MethodInfo *)0x0);
                      (__this->fields).NMDOMADFIOI = bVar1;
                      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                         (AHDGNOJPPIB,
                                          (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                           (pSVar2,StringLiteral_2965/*"AnimPath"*/,(MethodInfo *)0x0);
                        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                                           (pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
                        (__this->fields).BLBMGMJLEEL = pSVar4;
                        thunk_FUN_01c20e04();
                        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                           (AHDGNOJPPIB,
                                            (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar2,StringLiteral_3511/*"BlockBy"*/,(MethodInfo *)0x0);
                          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                                             (pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
                          (__this->fields).ACDDBLNKPCA = pSVar4;
                          thunk_FUN_01c20e04();
                          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                             (AHDGNOJPPIB,
                                              (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                             );
                          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                               (pSVar2,StringLiteral_9365/*"NeedPack"*/,(MethodInfo *)0x0);
                            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                                               (pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
                            ppSVar6 = &(__this->fields).EDBONKLOHNK;
                            *ppSVar6 = pSVar4;
                            thunk_FUN_01c20e04(ppSVar6,pSVar4);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

