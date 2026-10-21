// TypeDefIndex 1332
// Namespace: 
// public class BLFFMBFLIMI : IALJKCECCLB
// Fields:

// ===== private int FAMOFCBLIAM(string KGLJICLJHEL)  [RVA 0x315D3DC]
// BLFFMBFLIMI$$FAMOFCBLIAM @ RVA 0x315D3DC

int32_t BLFFMBFLIMI__FAMOFCBLIAM
                  (BLFFMBFLIMI_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04566874 & 1) == 0) {
    FUN_01bab630(&StringLiteral_13972/*"Turtle"*/);
    FUN_01bab630(&StringLiteral_7019/*"Hard"*/);
    FUN_01bab630(&StringLiteral_4848/*"Crazy"*/);
    FUN_01bab630(&StringLiteral_2789/*"Aggressive"*/);
    FUN_01bab630(&StringLiteral_6273/*"Fantastic"*/);
    FUN_01bab630(&StringLiteral_3572/*"Brutal"*/);
    DAT_04566874 = 1;
  }
  bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_13972/*"Turtle"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 0;
  }
  else {
    bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_7019/*"Hard"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 1;
    }
    else {
      bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_3572/*"Brutal"*/,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = 2;
      }
      else {
        bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_2789/*"Aggressive"*/,(MethodInfo *)0x0);
        if (bVar1) {
          iVar2 = 3;
        }
        else {
          bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_4848/*"Crazy"*/,(MethodInfo *)0x0);
          if (bVar1) {
            iVar2 = 4;
          }
          else {
            bVar1 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_6273/*"Fantastic"*/,(MethodInfo *)0x0);
            iVar2 = 5;
            if (!bVar1) {
              iVar2 = -1;
            }
          }
        }
      }
    }
  }
  return iVar2;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x315D528]
// BLFFMBFLIMI$$HNIHOIAMDPC @ RVA 0x315D528

void BLFFMBFLIMI__HNIHOIAMDPC
               (BLFFMBFLIMI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  BLFFMBFLIMI_o *pBVar5;
  MethodInfo *pMVar6;
  PICIKPNGDBE_o *pPVar7;
  
                    /* try { // try from 0325d538 to 0335d6ab has its CatchHandler @ 0325d538
                       catch() { ... } // from try @ 0325d538 with catch @ 0325d538
                       catch() { ... } // from try @ 0325d9a4 with catch @ 0325d538
                       catch() { ... } // from try @ 0325da6c with catch @ 0325d538
                       catch() { ... } // from try @ 0325da74 with catch @ 0325d538
                       catch() { ... } // from try @ 0325dbb8 with catch @ 0325d538 */
  if ((DAT_04566875 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8868/*"Max"*/);
    FUN_01bab630(&StringLiteral_9058/*"Min"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566875 = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9058/*"Min"*/,(MethodInfo *)0x0);
      pMVar6 = (MethodInfo *)0x0;
      pBVar5 = (BLFFMBFLIMI_o *)EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      iVar1 = BLFFMBFLIMI__FAMOFCBLIAM(pBVar5,(System_String_o *)pBVar5,pMVar6);
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_8868/*"Max"*/,(MethodInfo *)0x0);
        pMVar6 = (MethodInfo *)0x0;
        pBVar5 = (BLFFMBFLIMI_o *)EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0)
        ;
        iVar2 = BLFFMBFLIMI__FAMOFCBLIAM(pBVar5,(System_String_o *)pBVar5,pMVar6);
        pPVar7 = (__this->fields).super.DKGMKMJDMPC;
        if (pPVar7 != (PICIKPNGDBE_o *)0x0) {
          PICIKPNGDBE__CHKGAHCDFJF(pPVar7,(MethodInfo *)0x0);
          if (iVar1 != -1) {
            pPVar7 = (__this->fields).super.DKGMKMJDMPC;
            if (pPVar7 == (PICIKPNGDBE_o *)0x0) goto LAB_0325d674;
            (pPVar7->fields)._BIOJBFDLNNA_k__BackingField = (float)iVar1;
            (pPVar7->fields)._LEIDJIGJIAE_k__BackingField = false;
          }
          if (iVar2 != -1) {
            pPVar7 = (__this->fields).super.DKGMKMJDMPC;
            if (pPVar7 == (PICIKPNGDBE_o *)0x0) goto LAB_0325d674;
            (pPVar7->fields)._IJMLJAMCGPF_k__BackingField = (float)iVar2;
            (pPVar7->fields)._DONOGHEAFON_k__BackingField = false;
          }
          return;
        }
      }
    }
  }
LAB_0325d674:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x315D678]
// BLFFMBFLIMI$$.ctor @ RVA 0x315D678

void BLFFMBFLIMI___ctor(BLFFMBFLIMI_o *__this,MethodInfo *method)

{
  IALJKCECCLB___ctor((IALJKCECCLB_o *)__this,(MethodInfo *)0x0);
  ILGLOCBJFEG__GNLPNKGBAFL((ILGLOCBJFEG_o *)__this,2,(MethodInfo *)0x0);
  return;
}


// ===== public override bool EPBENPDCBFE(Model INNMCFJNEAE, List<string> FPEHEJBLCAO)  [RVA 0x315D69C]
// BLFFMBFLIMI$$EPBENPDCBFE @ RVA 0x315D69C

bool BLFFMBFLIMI__EPBENPDCBFE
               (BLFFMBFLIMI_o *__this,Model_o *INNMCFJNEAE,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  bool bVar1;
  Model_o *pOVar2;
  
  pOVar2 = ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,INNMCFJNEAE,(MethodInfo *)0x0);
                    /* try { // try from 0325d6ac to 0335d6d3 has its CatchHandler @ 0325db00 */
  if (pOVar2 != (Model_o *)0x0) {
    bVar1 = IALJKCECCLB__KPIJNMIFOGC
                      ((IALJKCECCLB_o *)__this,(float)(pOVar2->fields).OCAFPNJDBEE,(MethodInfo *)0x0
                      );
    return bVar1;
  }
  return false;
}

