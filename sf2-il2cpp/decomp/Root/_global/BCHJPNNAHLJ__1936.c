// TypeDefIndex 1936
// Namespace: 
// public class BCHJPNNAHLJ : HJNEOLCKEMD
// Fields:
//   private string <DJGKODFAHGB>k__BackingField; // 0x60
//   private NILLKLHKLHG <OICGFKLBNPE>k__BackingField; // 0x68
//   private string <BFEKLJGLHEH>k__BackingField; // 0x70

// ===== protected void CHHNIOPKKDG(string CJNHFNHJHPE)  [RVA 0x326E04C]
// BCHJPNNAHLJ$$CHHNIOPKKDG @ RVA 0x326E04C

void BCHJPNNAHLJ__CHHNIOPKKDG(BCHJPNNAHLJ_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._DJGKODFAHGB_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(BCHJPNNAHLJ IBKIPBJJCPG)  [RVA 0x326E054]
// BCHJPNNAHLJ$$.ctor @ RVA 0x326E054

void BCHJPNNAHLJ___ctor(BCHJPNNAHLJ_o *__this,BCHJPNNAHLJ_o *IBKIPBJJCPG,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
                    /* try { // try from 0336e05c to 0346e063 has its CatchHandler @ 0336e1d8 */
                    /* try { // try from 0336e068 to 0346e06f has its CatchHandler @ 0336e1d0 */
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (BCHJPNNAHLJ_o *)0x0) {
                    /* try { // try from 0336e074 to 0346e0db has its CatchHandler @ 0336e1e4 */
    (__this->fields)._OICGFKLBNPE_k__BackingField =
         (IBKIPBJJCPG->fields)._OICGFKLBNPE_k__BackingField;
    thunk_FUN_01c20e04();
    ppSVar1 = &(__this->fields)._BFEKLJGLHEH_k__BackingField;
    *ppSVar1 = (IBKIPBJJCPG->fields)._BFEKLJGLHEH_k__BackingField;
    thunk_FUN_01c20e04(ppSVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x326E09C]
// BCHJPNNAHLJ$$HNIHOIAMDPC @ RVA 0x326E09C

void BCHJPNNAHLJ__HNIHOIAMDPC
               (BCHJPNNAHLJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *JEIGFGPCGMM;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *FGLEGAOAEAO;
  NILLKLHKLHG_o *__this_00;
  NILLKLHKLHG_o **ppNVar5;
  System_String_o **ppSVar6;
  
  if ((DAT_04567203 & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
                    /* try { // try from 0336e0ec to 0346e0f3 has its CatchHandler @ 0336e1c4 */
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&StringLiteral_4476/*"Color"*/);
                    /* try { // try from 0336e100 to 0346e107 has its CatchHandler @ 0336e1c0 */
    FUN_01bab630(&StringLiteral_12880/*"Text"*/);
                    /* try { // try from 0336e108 to 0346e197 has its CatchHandler @ 0336dea0 */
    FUN_01bab630(&StringLiteral_8460/*"LineName"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567203 = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  (__this->fields).super._KPCCNJJEIAN_k__BackingField = false;
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0x18,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_8460/*"LineName"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* try { // try from 0336e198 to 0346e19f has its CatchHandler @ 0336e1ec */
      (__this->fields)._DJGKODFAHGB_k__BackingField = pSVar4;
      thunk_FUN_01c20e04();
                    /* try { // try from 0336e1a0 to 0346e1a3 has its CatchHandler @ 0336e1d4 */
                    /* try { // try from 0336e1a4 to 0346e1ab has its CatchHandler @ 0336e1e8 */
                    /* try { // try from 0336e1ac to 0346e1af has its CatchHandler @ 0336dea0 */
                    /* try { // try from 0336e1b0 to 0346e1b3 has its CatchHandler @ 0336e1cc */
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 0336e1b4 to 0346e1bb has its CatchHandler @ 0336dea0 */
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0336e1bc to 0346e1bf has its CatchHandler @ 0336e1c8 */
                    /* catch() { ... } // from try @ 0336e100 with catch @ 0336e1c0
                       try { // try from 0336e1c0 to 0346e203 has its CatchHandler @ 0336dea0 */
                    /* catch() { ... } // from try @ 0336e0ec with catch @ 0336e1c4 */
                    /* catch() { ... } // from try @ 0336e1bc with catch @ 0336e1c8 */
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_12880/*"Text"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0336e1b0 with catch @ 0336e1cc */
                    /* catch() { ... } // from try @ 0336e068 with catch @ 0336e1d0 */
                    /* catch() { ... } // from try @ 0336e1a0 with catch @ 0336e1d4 */
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0336e05c with catch @ 0336e1d8 */
                    /* catch() { ... } // from try @ 0336dff4 with catch @ 0336e1dc */
                    /* catch() { ... } // from try @ 0336df98 with catch @ 0336e1e0 */
        bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0336e074 with catch @ 0336e1e4 */
        if (!bVar1) {
                    /* catch() { ... } // from try @ 0336e1a4 with catch @ 0336e1e8 */
                    /* catch() { ... } // from try @ 0336e198 with catch @ 0336e1ec */
          JEIGFGPCGMM = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                        thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
                    /* try { // try from 0336e204 to 0346e207 has its CatchHandler @ 0336e214 */
                    /* catch() { ... } // from try @ 0336e204 with catch @ 0336e214 */
          System_Action<object>___ctor();
                    /* try { // try from 0336e21c to 0346e283 has its CatchHandler @ 0336e298 */
          FGLEGAOAEAO = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                        thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
          System_Action<object>___ctor();
          __this_00 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
          NILLKLHKLHG___ctor(__this_00,pSVar4,JEIGFGPCGMM,FGLEGAOAEAO,(Il2CppObject *)__this,
                             (MethodInfo *)0x0);
          ppNVar5 = &(__this->fields)._OICGFKLBNPE_k__BackingField;
          *ppNVar5 = __this_00;
          thunk_FUN_01c20e04(ppNVar5,__this_00);
        }
                    /* try { // try from 0336e284 to 0346e28f has its CatchHandler @ 0336dea0 */
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 0336e290 to 0346e297 has its CatchHandler @ 0336e298 */
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 0336e21c with catch @ 0336e298
                       catch() { ... } // from try @ 0336e290 with catch @ 0336e298 */
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_4476/*"Color"*/,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          if (pSVar4 != (System_String_o *)0x0) {
            pSVar4 = System_String__ToLower(pSVar4,(MethodInfo *)0x0);
            ppSVar6 = &(__this->fields)._BFEKLJGLHEH_k__BackingField;
            *ppSVar6 = pSVar4;
            thunk_FUN_01c20e04(ppSVar6,pSVar4);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void LJGIFDBOCNN(string CJNHFNHJHPE)  [RVA 0x326E2E4]
// BCHJPNNAHLJ$$LJGIFDBOCNN @ RVA 0x326E2E4

void BCHJPNNAHLJ__LJGIFDBOCNN(BCHJPNNAHLJ_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BFEKLJGLHEH_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public NILLKLHKLHG IFNMPMKJADC()  [RVA 0x326E2EC]
// BCHJPNNAHLJ$$IFNMPMKJADC @ RVA 0x326E2EC

NILLKLHKLHG_o * BCHJPNNAHLJ__IFNMPMKJADC(BCHJPNNAHLJ_o *__this,MethodInfo *method)

{
  return (__this->fields)._OICGFKLBNPE_k__BackingField;
}


// ===== protected void BLMNJJEMFPM(NILLKLHKLHG CJNHFNHJHPE)  [RVA 0x326E2F4]
// BCHJPNNAHLJ$$BLMNJJEMFPM @ RVA 0x326E2F4

void BCHJPNNAHLJ__BLMNJJEMFPM(BCHJPNNAHLJ_o *__this,NILLKLHKLHG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._OICGFKLBNPE_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string CDMLGALAMJO()  [RVA 0x326E2FC]
// BCHJPNNAHLJ$$CDMLGALAMJO @ RVA 0x326E2FC

System_String_o * BCHJPNNAHLJ__CDMLGALAMJO(BCHJPNNAHLJ_o *__this,MethodInfo *method)

{
  return (__this->fields)._DJGKODFAHGB_k__BackingField;
}


// ===== public void .ctor()  [RVA 0x326E304]
// BCHJPNNAHLJ$$.ctor @ RVA 0x326E304

void BCHJPNNAHLJ___ctor(BCHJPNNAHLJ_o *__this,MethodInfo *method)

{
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string GLIBGECPOPG()  [RVA 0x326E30C]
// BCHJPNNAHLJ$$GLIBGECPOPG @ RVA 0x326E30C

System_String_o * BCHJPNNAHLJ__GLIBGECPOPG(BCHJPNNAHLJ_o *__this,MethodInfo *method)

{
  return (__this->fields)._BFEKLJGLHEH_k__BackingField;
}

