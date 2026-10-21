// TypeDefIndex 2228
// Namespace: 
// public class GKHBKFABJKA : HJNEOLCKEMD
// Fields:
//   private string <NBOKMEFHKLA>k__BackingField; // 0x60
//   private NILLKLHKLHG <CKHLOIHFIAC>k__BackingField; // 0x68

// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x32F0988]
// GKHBKFABJKA$$HNIHOIAMDPC @ RVA 0x32F0988

void GKHBKFABJKA__HNIHOIAMDPC
               (GKHBKFABJKA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *JEIGFGPCGMM;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *FGLEGAOAEAO;
  NILLKLHKLHG_o *__this_00;
  NILLKLHKLHG_o **ppNVar4;
  
  if ((DAT_0456766b & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_14750/*"Variable"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456766b = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,4,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_14750/*"Variable"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields)._NBOKMEFHKLA_k__BackingField = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 033f0ab0 to 034f0ad7 has its CatchHandler @ 033f2078 */
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        JEIGFGPCGMM = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                      thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
        System_Action<object>___ctor();
        FGLEGAOAEAO = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                      thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
                    /* try { // try from 033f0b0c to 034f0b37 has its CatchHandler @ 033f2074 */
        System_Action<object>___ctor();
        __this_00 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
        NILLKLHKLHG___ctor(__this_00,pSVar3,JEIGFGPCGMM,FGLEGAOAEAO,(Il2CppObject *)__this,
                           (MethodInfo *)0x0);
        ppNVar4 = &(__this->fields)._CKHLOIHFIAC_k__BackingField;
        *ppNVar4 = __this_00;
        thunk_FUN_01c20e04(ppNVar4,__this_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string AHDDLIHBDJK()  [RVA 0x32F0B64]
// GKHBKFABJKA$$AHDDLIHBDJK @ RVA 0x32F0B64

System_String_o * GKHBKFABJKA__AHDDLIHBDJK(GKHBKFABJKA_o *__this,MethodInfo *method)

{
  return (__this->fields)._NBOKMEFHKLA_k__BackingField;
}


// ===== public void .ctor()  [RVA 0x32F0B6C]
// GKHBKFABJKA$$.ctor @ RVA 0x32F0B6C

void GKHBKFABJKA___ctor(GKHBKFABJKA_o *__this,MethodInfo *method)

{
                    /* try { // try from 033f0b6c to 034f0b77 has its CatchHandler @ 033f1f8c */
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor(GKHBKFABJKA IBKIPBJJCPG)  [RVA 0x32F0B74]
// GKHBKFABJKA$$.ctor @ RVA 0x32F0B74

void GKHBKFABJKA___ctor(GKHBKFABJKA_o *__this,GKHBKFABJKA_o *IBKIPBJJCPG,MethodInfo *method)

{
  NILLKLHKLHG_o **ppNVar1;
  
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(HJNEOLCKEMD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
                    /* try { // try from 033f0b8c to 034f0b93 has its CatchHandler @ 033f1f54 */
  if (IBKIPBJJCPG != (GKHBKFABJKA_o *)0x0) {
    ppNVar1 = &(__this->fields)._CKHLOIHFIAC_k__BackingField;
    *ppNVar1 = (IBKIPBJJCPG->fields)._CKHLOIHFIAC_k__BackingField;
                    /* try { // try from 033f0b9c to 034f0ba3 has its CatchHandler @ 033f1f58 */
    thunk_FUN_01c20e04(ppNVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public NILLKLHKLHG IAEPFOENELI()  [RVA 0x32F0BAC]
// GKHBKFABJKA$$IAEPFOENELI @ RVA 0x32F0BAC

NILLKLHKLHG_o * GKHBKFABJKA__IAEPFOENELI(GKHBKFABJKA_o *__this,MethodInfo *method)

{
  return (__this->fields)._CKHLOIHFIAC_k__BackingField;
}


// ===== protected void HNMHJDOECLJ(string CJNHFNHJHPE)  [RVA 0x32F0BB4]
// GKHBKFABJKA$$HNMHJDOECLJ @ RVA 0x32F0BB4

void GKHBKFABJKA__HNMHJDOECLJ(GKHBKFABJKA_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 033f0bb4 to 034f0bb7 has its CatchHandler @ 033f1ebc */
  (__this->fields)._NBOKMEFHKLA_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected void JHNJPEJGFBK(NILLKLHKLHG CJNHFNHJHPE)  [RVA 0x32F0BBC]
// GKHBKFABJKA$$JHNJPEJGFBK @ RVA 0x32F0BBC

void GKHBKFABJKA__JHNJPEJGFBK(GKHBKFABJKA_o *__this,NILLKLHKLHG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CKHLOIHFIAC_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

