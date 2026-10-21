// TypeDefIndex 483
// Namespace: 
// public class CAAGJEKMDOA : IIMNGGHGKOD, FFACFPOGPAJ
// Fields:
//   private string NPFMOEOIEKM; // 0x48
//   private bool LLNHEOEJFCF; // 0x50
//   private string BFGKDFNOBIH; // 0x58
//   private bool NDNEMFBCJFC; // 0x60
//   private float DFNFFGCKNCM; // 0x64
//   private string <IMJDKOBJMAJ>k__BackingField; // 0x68

// ===== public bool LKLJLBKIFLA()  [RVA 0x358287C]
// CAAGJEKMDOA$$LKLJLBKIFLA @ RVA 0x358287C

bool CAAGJEKMDOA__LKLJLBKIFLA(CAAGJEKMDOA_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 036827d4 with catch @ 0368287c */
                    /* catch() { ... } // from try @ 036827d0 with catch @ 03682880 */
  return (__this->fields).NDNEMFBCJFC;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3582884]
// CAAGJEKMDOA$$.ctor @ RVA 0x3582884

void CAAGJEKMDOA___ctor(CAAGJEKMDOA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03682500 with catch @ 03682884 */
                    /* catch() { ... } // from try @ 036827c8 with catch @ 03682888 */
                    /* catch() { ... } // from try @ 03682558 with catch @ 0368288c */
                    /* catch() { ... } // from try @ 03682454 with catch @ 03682890 */
                    /* catch() { ... } // from try @ 036823f8 with catch @ 03682894 */
                    /* catch() { ... } // from try @ 036827e0 with catch @ 03682898 */
                    /* catch() { ... } // from try @ 036825bc with catch @ 0368289c */
  IIMNGGHGKOD___ctor((IIMNGGHGKOD_o *)__this,2,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0368250c with catch @ 036828a0 */
                    /* catch() { ... } // from try @ 036824c8 with catch @ 036828a4 */
                    /* WARNING: Could not recover jumptable at 0x036828b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x35828BC]
// CAAGJEKMDOA$$KCHJCGEMCGE @ RVA 0x35828BC

System_String_o * CAAGJEKMDOA__KCHJCGEMCGE(CAAGJEKMDOA_o *__this,MethodInfo *method)

{
  return (__this->fields).NPFMOEOIEKM;
}


// ===== private void HJAABOFBGLL(string CJNHFNHJHPE)  [RVA 0x35828C4]
// CAAGJEKMDOA$$HJAABOFBGLL @ RVA 0x35828C4

void CAAGJEKMDOA__HJAABOFBGLL(CAAGJEKMDOA_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 036828c4 to 037828c7 has its CatchHandler @ 036828d4 */
  (__this->fields)._IMJDKOBJMAJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x35828CC]
// CAAGJEKMDOA$$HNIHOIAMDPC @ RVA 0x35828CC

void CAAGJEKMDOA__HNIHOIAMDPC
               (CAAGJEKMDOA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  float fVar6;
  
                    /* catch() { ... } // from try @ 036828c4 with catch @ 036828d4 */
                    /* try { // try from 036828e4 to 03782953 has its CatchHandler @ 03682968 */
  if ((DAT_04568cdd & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_8667/*"Looped"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_10072/*"PackName"*/);
    FUN_01bab630(&StringLiteral_14831/*"Voice"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_14834/*"Volume"*/);
    DAT_04568cdd = 1;
  }
  IIMNGGHGKOD__HNIHOIAMDPC((IIMNGGHGKOD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* try { // try from 03682954 to 0378295f has its CatchHandler @ 03682230 */
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03682960 to 03782967 has its CatchHandler @ 03682968 */
                    /* catch() { ... } // from try @ 036828e4 with catch @ 03682968
                       catch() { ... } // from try @ 03682960 with catch @ 03682968 */
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 0368296c to 03782bdb has its CatchHandler @ 0368296c
                       catch() { ... } // from try @ 0368296c with catch @ 0368296c
                       catch() { ... } // from try @ 03682c68 with catch @ 0368296c
                       catch() { ... } // from try @ 03682c9c with catch @ 0368296c
                       catch() { ... } // from try @ 03682cc4 with catch @ 0368296c
                       catch() { ... } // from try @ 03682cf4 with catch @ 0368296c */
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).NPFMOEOIEKM = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_14834/*"Volume"*/,(MethodInfo *)0x0);
        fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,1.0,(MethodInfo *)0x0);
        (__this->fields).DFNFFGCKNCM = fVar6;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_8667/*"Looped"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
          (__this->fields).NDNEMFBCJFC = bVar1;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_14831/*"Voice"*/,(MethodInfo *)0x0);
            (__this->fields).LLNHEOEJFCF = pSVar3 == (System_Xml_XmlAttribute_o *)0x0;
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
            (__this->fields).BFGKDFNOBIH = pSVar4;
            thunk_FUN_01c20e04();
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_10072/*"PackName"*/,(MethodInfo *)0x0);
              pSVar4 = EIABCPKDEBD__JPKEHIBGOEM
                                 (pSVar3,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
              ppSVar5 = &(__this->fields)._IMJDKOBJMAJ_k__BackingField;
              *ppSVar5 = pSVar4;
              thunk_FUN_01c20e04(ppSVar5,pSVar4);
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


// ===== public float JHHKKJJOCIO()  [RVA 0x3582ADC]
// CAAGJEKMDOA$$JHHKKJJOCIO @ RVA 0x3582ADC

float CAAGJEKMDOA__JHHKKJJOCIO(CAAGJEKMDOA_o *__this,MethodInfo *method)

{
  return (__this->fields).DFNFFGCKNCM;
}


// ===== public string GAAFABHPGIG()  [RVA 0x3582AE4]
// CAAGJEKMDOA$$GAAFABHPGIG @ RVA 0x3582AE4

System_String_o * CAAGJEKMDOA__GAAFABHPGIG(CAAGJEKMDOA_o *__this,MethodInfo *method)

{
  return (__this->fields)._IMJDKOBJMAJ_k__BackingField;
}


// ===== public override void NCMDLPOGBPE()  [RVA 0x3582AEC]
// CAAGJEKMDOA$$NCMDLPOGBPE @ RVA 0x3582AEC

void CAAGJEKMDOA__NCMDLPOGBPE(CAAGJEKMDOA_o *__this,MethodInfo *method)

{
  bool bVar1;
  AAPGCAPGBLG_o *__this_00;
  System_String_o *BNCJPLDMJMH;
  
  if ((DAT_04568cde & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04568cde = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields)._IMJDKOBJMAJ_k__BackingField,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 == (AAPGCAPGBLG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = AAPGCAPGBLG__BAFDBLCFCPO
                      (__this_00,(__this->fields)._IMJDKOBJMAJ_k__BackingField,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
  }
  BNCJPLDMJMH = (__this->fields).NPFMOEOIEKM;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  PNLFHHJGDLI__PPMOLPPCNFC(BNCJPLDMJMH,(MethodInfo *)0x0);
  return;
}


// ===== public override void DPGIIHOJJDE(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x3582B84]
// CAAGJEKMDOA$$DPGIIHOJJDE @ RVA 0x3582B84

void CAAGJEKMDOA__DPGIIHOJJDE(CAAGJEKMDOA_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    OLKKAIFGGAK__AHNAGGGOLBK(BCKBBGCOMJD,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool IPDNPCFJOAN(string ECGFFJEGJEN)  [RVA 0x3582BA4]
// CAAGJEKMDOA$$IPDNPCFJOAN @ RVA 0x3582BA4

bool CAAGJEKMDOA__IPDNPCFJOAN(CAAGJEKMDOA_o *__this,System_String_o *ECGFFJEGJEN,MethodInfo *method)

{
  bool bVar1;
  
  if ((__this->fields).LLNHEOEJFCF != false) {
    return true;
  }
  bVar1 = System_String__op_Equality(ECGFFJEGJEN,(__this->fields).BFGKDFNOBIH,(MethodInfo *)0x0);
  return bVar1;
}

