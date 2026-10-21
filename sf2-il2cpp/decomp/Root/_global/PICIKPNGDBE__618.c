// TypeDefIndex 618
// Namespace: 
// public class PICIKPNGDBE
// Fields:
//   private float <BIOJBFDLNNA>k__BackingField; // 0x10
//   private float <IJMLJAMCGPF>k__BackingField; // 0x14
//   private bool <LEIDJIGJIAE>k__BackingField; // 0x18
//   private bool <DONOGHEAFON>k__BackingField; // 0x19
//   private NILLKLHKLHG <ADDLOEHIBFF>k__BackingField; // 0x20
//   private NILLKLHKLHG <LHLFLPOLGDI>k__BackingField; // 0x28

// ===== public bool GIBHIENJBKD()  [RVA 0x35C3234]
// PICIKPNGDBE$$GIBHIENJBKD @ RVA 0x35C3234

bool PICIKPNGDBE__GIBHIENJBKD(PICIKPNGDBE_o *__this,MethodInfo *method)

{
  return (__this->fields)._LEIDJIGJIAE_k__BackingField;
}


// ===== public bool MDPIGGBOCGC()  [RVA 0x35C323C]
// PICIKPNGDBE$$MDPIGGBOCGC @ RVA 0x35C323C

bool PICIKPNGDBE__MDPIGGBOCGC(PICIKPNGDBE_o *__this,MethodInfo *method)

{
  return (__this->fields)._DONOGHEAFON_k__BackingField;
}


// ===== protected void MPINDFBMOKM(NILLKLHKLHG CJNHFNHJHPE)  [RVA 0x35C3244]
// PICIKPNGDBE$$MPINDFBMOKM @ RVA 0x35C3244

void PICIKPNGDBE__MPINDFBMOKM(PICIKPNGDBE_o *__this,NILLKLHKLHG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._ADDLOEHIBFF_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void LCEFGMEFPPC(float CJNHFNHJHPE)  [RVA 0x35C324C]
// PICIKPNGDBE$$LCEFGMEFPPC @ RVA 0x35C324C

void PICIKPNGDBE__LCEFGMEFPPC(PICIKPNGDBE_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 036c324c to 037c326f has its CatchHandler @ 036c30c4 */
  (__this->fields)._IJMLJAMCGPF_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB, ILGLOCBJFEG PFDEAPMMFAP, HEFOANCOHDC CBNHOPLBEPA)  [RVA 0x35C3254]
// PICIKPNGDBE$$HNIHOIAMDPC @ RVA 0x35C3254

void PICIKPNGDBE__HNIHOIAMDPC
               (PICIKPNGDBE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,ILGLOCBJFEG_o *PFDEAPMMFAP,
               HEFOANCOHDC_o *CBNHOPLBEPA,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *pSVar5;
  Il2CppObject **ppIVar6;
  NILLKLHKLHG_o *pNVar7;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o **ppSVar8;
  NILLKLHKLHG_Fields *pNVar9;
  
                    /* try { // try from 036c3270 to 037c3277 has its CatchHandler @ 036c32c0 */
                    /* try { // try from 036c3278 to 037c3287 has its CatchHandler @ 036c32cc */
  if ((DAT_04568f4f & 1) == 0) {
                    /* try { // try from 036c3288 to 037c32e3 has its CatchHandler @ 036c30c4 */
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
    FUN_01bab630(&StringLiteral_8868/*"Max"*/);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c3230 with catch @ 036c32bc
                        */
    FUN_01bab630(&StringLiteral_9058/*"Min"*/);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c3270 with catch @ 036c32c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c31d0 with catch @ 036c32c4
                        */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c3278 with catch @ 036c32cc
                        */
    DAT_04568f4f = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 036c32e4 to 037c32e7 has its CatchHandler @ 036c3308 */
                    /* try { // try from 036c32e8 to 037c330f has its CatchHandler @ 036c30c4 */
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9058/*"Min"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036c32e4 with catch @ 036c3308 */
      bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 036c3310 to 037c3317 has its CatchHandler @ 036c332c */
      if (!bVar1) {
                    /* try { // try from 036c3318 to 037c3323 has its CatchHandler @ 036c30c4 */
                    /* try { // try from 036c3324 to 037c332b has its CatchHandler @ 036c332c */
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c3310 with catch @ 036c332c
                       catch(type#2 @ 00000000) { ... } // from try @ 036c3324 with catch @ 036c332c
                        */
        pNVar7 = (__this->fields)._ADDLOEHIBFF_k__BackingField;
                    /* try { // try from 036c3330 to 037c33e3 has its CatchHandler @ 036c3330
                       catch() { ... } // from try @ 036c3330 with catch @ 036c3330
                       catch() { ... } // from try @ 036c3444 with catch @ 036c3330
                       catch() { ... } // from try @ 036c3474 with catch @ 036c3330
                       catch() { ... } // from try @ 036c34a4 with catch @ 036c3330
                       catch() { ... } // from try @ 036c34d4 with catch @ 036c3330 */
        if (pNVar7 == (NILLKLHKLHG_o *)0x0) goto LAB_036c34dc;
        NILLKLHKLHG__HNIHOIAMDPC(pNVar7,pSVar4,(MethodInfo *)0x0);
        (__this->fields)._LEIDJIGJIAE_k__BackingField = false;
      }
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_8868/*"Max"*/,(MethodInfo *)0x0);
        bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar3,(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          pNVar7 = (__this->fields)._LHLFLPOLGDI_k__BackingField;
          if (pNVar7 == (NILLKLHKLHG_o *)0x0) goto LAB_036c34dc;
          NILLKLHKLHG__HNIHOIAMDPC(pNVar7,pSVar4,(MethodInfo *)0x0);
          (__this->fields)._DONOGHEAFON_k__BackingField = false;
        }
        pNVar7 = (__this->fields)._ADDLOEHIBFF_k__BackingField;
        pSVar5 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                 thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
                    /* try { // try from 036c33e4 to 037c33eb has its CatchHandler @ 036c3484 */
        System_Action<object>___ctor();
        if (pNVar7 != (NILLKLHKLHG_o *)0x0) {
          ppSVar8 = &(pNVar7->fields)._KFMEPBBGDFG_k__BackingField;
          *ppSVar8 = pSVar5;
                    /* try { // try from 036c33f8 to 037c3403 has its CatchHandler @ 036c3480 */
          thunk_FUN_01c20e04(ppSVar8,pSVar5);
          pNVar7 = (__this->fields)._ADDLOEHIBFF_k__BackingField;
          pSVar5 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                   thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
          System_Action<object>___ctor();
          if (pNVar7 != (NILLKLHKLHG_o *)0x0) {
            pNVar9 = &pNVar7->fields;
            pNVar9->_PGFJLBODEHE_k__BackingField = pSVar5;
            thunk_FUN_01c20e04(pNVar9,pSVar5);
                    /* try { // try from 036c3438 to 037c3443 has its CatchHandler @ 036c3478 */
            pNVar7 = (__this->fields)._ADDLOEHIBFF_k__BackingField;
            if (pNVar7 != (NILLKLHKLHG_o *)0x0) {
              ppIVar6 = &(pNVar7->fields).KAEBCKDNFHH;
              *ppIVar6 = (Il2CppObject *)PFDEAPMMFAP;
                    /* try { // try from 036c3444 to 037c3467 has its CatchHandler @ 036c3330 */
              thunk_FUN_01c20e04(ppIVar6,PFDEAPMMFAP);
              pNVar7 = (__this->fields)._LHLFLPOLGDI_k__BackingField;
              pSVar5 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                       thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
                    /* try { // try from 036c3468 to 037c3473 has its CatchHandler @ 036c347c */
              System_Action<object>___ctor();
              if (pNVar7 != (NILLKLHKLHG_o *)0x0) {
                ppSVar8 = &(pNVar7->fields)._KFMEPBBGDFG_k__BackingField;
                *ppSVar8 = pSVar5;
                    /* try { // try from 036c3474 to 037c349f has its CatchHandler @ 036c3330 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c3438 with catch @ 036c3478
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c3468 with catch @ 036c347c
                        */
                thunk_FUN_01c20e04(ppSVar8,pSVar5);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c33f8 with catch @ 036c3480
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c33e4 with catch @ 036c3484
                        */
                pNVar7 = (__this->fields)._LHLFLPOLGDI_k__BackingField;
                pSVar5 = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                         thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
                System_Action<object>___ctor();
                    /* try { // try from 036c34a0 to 037c34a3 has its CatchHandler @ 036c34c4 */
                if (pNVar7 != (NILLKLHKLHG_o *)0x0) {
                  pNVar9 = &pNVar7->fields;
                    /* try { // try from 036c34a4 to 037c34cb has its CatchHandler @ 036c3330 */
                  pNVar9->_PGFJLBODEHE_k__BackingField = pSVar5;
                  thunk_FUN_01c20e04(pNVar9,pSVar5);
                  pNVar7 = (__this->fields)._LHLFLPOLGDI_k__BackingField;
                  if (pNVar7 != (NILLKLHKLHG_o *)0x0) {
                    ppIVar6 = &(pNVar7->fields).KAEBCKDNFHH;
                    *ppIVar6 = (Il2CppObject *)PFDEAPMMFAP;
                    /* catch() { ... } // from try @ 036c34a0 with catch @ 036c34c4 */
                    /* try { // try from 036c34cc to 037c34d3 has its CatchHandler @ 036c34e8 */
                    /* try { // try from 036c34d4 to 037c34df has its CatchHandler @ 036c3330 */
                    thunk_FUN_01c20e04(ppIVar6,PFDEAPMMFAP);
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
LAB_036c34dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float CIEJJEEMJDF()  [RVA 0x35C34E0]
// PICIKPNGDBE$$CIEJJEEMJDF @ RVA 0x35C34E0

float PICIKPNGDBE__CIEJJEEMJDF(PICIKPNGDBE_o *__this,MethodInfo *method)

{
                    /* try { // try from 036c34e0 to 037c34e7 has its CatchHandler @ 036c34e8 */
  return (__this->fields)._IJMLJAMCGPF_k__BackingField;
}


// ===== public void CHKGAHCDFJF()  [RVA 0x35C34E8]
// PICIKPNGDBE$$CHKGAHCDFJF @ RVA 0x35C34E8

void PICIKPNGDBE__CHKGAHCDFJF(PICIKPNGDBE_o *__this,MethodInfo *method)

{
  NILLKLHKLHG_o *pNVar1;
  MMFIDKMDADC_o *pMVar2;
  MMFIDKMDADC_o *pMVar3;
  float fVar4;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c34cc with catch @ 036c34e8
                       catch(type#2 @ 00000000) { ... } // from try @ 036c34e0 with catch @ 036c34e8
                        */
                    /* try { // try from 036c34ec to 037c35bb has its CatchHandler @ 036c34ec
                       catch() { ... } // from try @ 036c34ec with catch @ 036c34ec
                       catch() { ... } // from try @ 036c3628 with catch @ 036c34ec
                       catch() { ... } // from try @ 036c365c with catch @ 036c34ec
                       catch() { ... } // from try @ 036c3688 with catch @ 036c34ec
                       catch() { ... } // from try @ 036c36b8 with catch @ 036c34ec */
  pNVar1 = (__this->fields)._ADDLOEHIBFF_k__BackingField;
  if (pNVar1 != (NILLKLHKLHG_o *)0x0) {
    pMVar2 = NILLKLHKLHG__CHKGAHCDFJF(pNVar1,false,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._LHLFLPOLGDI_k__BackingField;
    if ((pNVar1 != (NILLKLHKLHG_o *)0x0) &&
       (pMVar3 = NILLKLHKLHG__CHKGAHCDFJF(pNVar1,false,(MethodInfo *)0x0),
       pMVar2 != (MMFIDKMDADC_o *)0x0)) {
      fVar4 = PCOEHCPGBBG__OFFODGKLGOP((pMVar2->fields).HPACPFLKHPK,0.0,(MethodInfo *)0x0);
      (__this->fields)._BIOJBFDLNNA_k__BackingField = fVar4;
      if (pMVar3 != (MMFIDKMDADC_o *)0x0) {
        fVar4 = PCOEHCPGBBG__OFFODGKLGOP((pMVar3->fields).HPACPFLKHPK,0.0,(MethodInfo *)0x0);
        (__this->fields)._IJMLJAMCGPF_k__BackingField = fVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public NILLKLHKLHG OJNCMGNBGFE()  [RVA 0x35C3568]
// PICIKPNGDBE$$OJNCMGNBGFE @ RVA 0x35C3568

NILLKLHKLHG_o * PICIKPNGDBE__OJNCMGNBGFE(PICIKPNGDBE_o *__this,MethodInfo *method)

{
  return (__this->fields)._LHLFLPOLGDI_k__BackingField;
}


// ===== public void MILDHJBAGCJ(float CJNHFNHJHPE)  [RVA 0x35C3570]
// PICIKPNGDBE$$MILDHJBAGCJ @ RVA 0x35C3570

void PICIKPNGDBE__MILDHJBAGCJ(PICIKPNGDBE_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BIOJBFDLNNA_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void NJEMJKPDPOP(bool CJNHFNHJHPE)  [RVA 0x35C3578]
// PICIKPNGDBE$$NJEMJKPDPOP @ RVA 0x35C3578

void PICIKPNGDBE__NJEMJKPDPOP(PICIKPNGDBE_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._LEIDJIGJIAE_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== protected void PIGKOJNHHDK(NILLKLHKLHG CJNHFNHJHPE)  [RVA 0x35C3584]
// PICIKPNGDBE$$PIGKOJNHHDK @ RVA 0x35C3584

void PICIKPNGDBE__PIGKOJNHHDK(PICIKPNGDBE_o *__this,NILLKLHKLHG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._LHLFLPOLGDI_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void EFDCEMCEJCF(bool CJNHFNHJHPE)  [RVA 0x35C358C]
// PICIKPNGDBE$$EFDCEMCEJCF @ RVA 0x35C358C

void PICIKPNGDBE__EFDCEMCEJCF(PICIKPNGDBE_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._DONOGHEAFON_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public float GINAGGGDGCM()  [RVA 0x35C3598]
// PICIKPNGDBE$$GINAGGGDGCM @ RVA 0x35C3598

float PICIKPNGDBE__GINAGGGDGCM(PICIKPNGDBE_o *__this,MethodInfo *method)

{
  return (__this->fields)._BIOJBFDLNNA_k__BackingField;
}


// ===== public void .ctor()  [RVA 0x35C35A0]
// PICIKPNGDBE$$.ctor @ RVA 0x35C35A0

void PICIKPNGDBE___ctor(PICIKPNGDBE_o *__this,MethodInfo *method)

{
  NILLKLHKLHG_o *pNVar1;
  NILLKLHKLHG_o **ppNVar2;
  
                    /* try { // try from 036c35bc to 037c35c3 has its CatchHandler @ 036c3664 */
  if ((DAT_04568f50 & 1) == 0) {
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    DAT_04568f50 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._BIOJBFDLNNA_k__BackingField = 0.0;
  (__this->fields)._IJMLJAMCGPF_k__BackingField = 0.0;
  (__this->fields)._LEIDJIGJIAE_k__BackingField = true;
  (__this->fields)._DONOGHEAFON_k__BackingField = true;
  pNVar1 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
  NILLKLHKLHG___ctor(pNVar1,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields)._ADDLOEHIBFF_k__BackingField;
  *ppNVar2 = pNVar1;
                    /* try { // try from 036c360c to 037c3627 has its CatchHandler @ 036c3660 */
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  pNVar1 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
  NILLKLHKLHG___ctor(pNVar1,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields)._LHLFLPOLGDI_k__BackingField;
  *ppNVar2 = pNVar1;
                    /* try { // try from 036c3628 to 037c364b has its CatchHandler @ 036c34ec */
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  return;
}


// ===== public NILLKLHKLHG HOKNOMHMGLN()  [RVA 0x35C363C]
// PICIKPNGDBE$$HOKNOMHMGLN @ RVA 0x35C363C

NILLKLHKLHG_o * PICIKPNGDBE__HOKNOMHMGLN(PICIKPNGDBE_o *__this,MethodInfo *method)

{
  return (__this->fields)._ADDLOEHIBFF_k__BackingField;
}

