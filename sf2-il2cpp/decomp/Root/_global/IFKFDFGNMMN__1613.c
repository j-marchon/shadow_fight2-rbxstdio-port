// TypeDefIndex 1613
// Namespace: 
// public class IFKFDFGNMMN
// Fields:
//   private XmlNode <OLIGHNIEIGK>k__BackingField; // 0x10
//   private BNAIBAODKAK[] OFNAAFHJIOB; // 0x18
//   private JFMLOEMEKLI[] DFIBPGKOKEG; // 0x20
//   private HOOAAGABMBL[] HJCHDJBLAAG; // 0x28
//   private int CNOHPGNAOFH; // 0x30
//   private int AONFFEBFEPK; // 0x34
//   private int KMJLJGCBLHI; // 0x38
//   private int EPAKCIKBOCC; // 0x3C
//   private int EDGHFNKLFPJ; // 0x40
//   private int HGCDOLJKPKL; // 0x44

// ===== public void LKFDFJLMBHN(ref int JLPMKKKMANE, ref int MMOKLAAAIPP, ref int LFINFBNOLFG)  [RVA 0x31B8E04]
// IFKFDFGNMMN$$LKFDFJLMBHN @ RVA 0x31B8E04

void IFKFDFGNMMN__LKFDFJLMBHN
               (IFKFDFGNMMN_o *__this,int32_t *JLPMKKKMANE,int32_t *MMOKLAAAIPP,int32_t *LFINFBNOLFG
               ,MethodInfo *method)

{
  *JLPMKKKMANE = (__this->fields).CNOHPGNAOFH;
  *MMOKLAAAIPP = (__this->fields).AONFFEBFEPK;
  *LFINFBNOLFG = (__this->fields).KMJLJGCBLHI;
  return;
}


// ===== private void EBHKHMHKPEP(XmlNode CJNHFNHJHPE)  [RVA 0x31B8E20]
// IFKFDFGNMMN$$EBHKHMHKPEP @ RVA 0x31B8E20

void IFKFDFGNMMN__EBHKHMHKPEP
               (IFKFDFGNMMN_o *__this,System_Xml_XmlNode_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._OLIGHNIEIGK_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void JPNNAPGPLDH()  [RVA 0x31B8E28]
// IFKFDFGNMMN$$JPNNAPGPLDH @ RVA 0x31B8E28

void IFKFDFGNMMN__JPNNAPGPLDH(IFKFDFGNMMN_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  BNAIBAODKAK_o *__this_00;
  BNAIBAODKAK_array *pBVar3;
  uint uVar4;
  
  pBVar3 = (__this->fields).OFNAAFHJIOB;
  if (pBVar3 != (BNAIBAODKAK_array *)0x0) {
                    /* try { // try from 032b8e3c to 033b8e43 has its CatchHandler @ 032b8ea8 */
    uVar1 = (uint)pBVar3->max_length;
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032b8e98 to 033b8ebf has its CatchHandler @ 032b8d48 */
          FUN_01bab8d0();
        }
                    /* try { // try from 032b8e58 to 033b8e63 has its CatchHandler @ 032b8ea4 */
        __this_00 = pBVar3->m_Items[(int)uVar4];
        if (__this_00 == (BNAIBAODKAK_o *)0x0) goto LAB_032b8e9c;
                    /* try { // try from 032b8e64 to 033b8e8f has its CatchHandler @ 032b8d48 */
        bVar2 = BNAIBAODKAK__AAAMBLLDPHJ(__this_00,(MethodInfo *)0x0);
        if (!bVar2) {
          (__this_00->fields).JFAEKJELFFN = true;
        }
        uVar1 = (uint)pBVar3->max_length;
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)uVar1);
    }
                    /* try { // try from 032b8e90 to 033b8e93 has its CatchHandler @ 032b8ea0 */
                    /* try { // try from 032b8e94 to 033b8e97 has its CatchHandler @ 032b8e9c */
    return;
  }
LAB_032b8e9c:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b8e94 with catch @ 032b8e9c
                        */
  FUN_01bab8c8();
}


// ===== private void NNOFKDAPECF(XmlNode CJPHHMIHOGD)  [RVA 0x31B8EA0]
// IFKFDFGNMMN$$NNOFKDAPECF @ RVA 0x31B8EA0

/* WARNING: Removing unreachable block (ram,0x032b9320) */

void IFKFDFGNMMN__NNOFKDAPECF
               (IFKFDFGNMMN_o *__this,System_Xml_XmlNode_o *CJPHHMIHOGD,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  long *plVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  BNAIBAODKAK_array *pBVar6;
  undefined8 *puVar7;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  BNAIBAODKAK_o *__this_00;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  BNAIBAODKAK_array **ppBVar12;
  uint uVar13;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b8e90 with catch @ 032b8ea0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b8e58 with catch @ 032b8ea4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b8e3c with catch @ 032b8ea8
                        */
                    /* try { // try from 032b8ec0 to 033b8ec3 has its CatchHandler @ 032b8eec */
                    /* try { // try from 032b8ec4 to 033b8efb has its CatchHandler @ 032b8d48 */
  if ((DAT_04566bd0 & 1) == 0) {
    FUN_01bab630(&BNAIBAODKAK___TypeInfo);
    FUN_01bab630(&BNAIBAODKAK_TypeInfo);
                    /* catch() { ... } // from try @ 032b8ec0 with catch @ 032b8eec */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 032b8efc to 033b8f03 has its CatchHandler @ 032b8f18 */
                    /* try { // try from 032b8f04 to 033b8f0f has its CatchHandler @ 032b8d48 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 032b8f10 to 033b8f17 has its CatchHandler @ 032b8f18 */
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032b8efc with catch @ 032b8f18
                       catch(type#2 @ 00000000) { ... } // from try @ 032b8f10 with catch @ 032b8f18
                        */
    FUN_01bab630(&StringLiteral_7135/*"HorizontalCount"*/);
    FUN_01bab630(&StringLiteral_4279/*"Characters"*/);
    FUN_01bab630(&StringLiteral_6666/*"GUI"*/);
    FUN_01bab630(&StringLiteral_5588/*"ERROR: loadCharacterList"*/);
    FUN_01bab630(&StringLiteral_14777/*"VerticalCount"*/);
    FUN_01bab630(&StringLiteral_5256/*"DefaultPosition"*/);
    DAT_04566bd0 = 1;
  }
  if (((CJPHHMIHOGD != (System_Xml_XmlNode_o *)0x0) &&
      (plVar3 = (long *)(*(CJPHHMIHOGD->klass->vtable)._51_get_Item.methodPtr)
                                  (CJPHHMIHOGD,StringLiteral_6666/*"GUI"*/,
                                   (CJPHHMIHOGD->klass->vtable)._51_get_Item.method),
      plVar3 != (long *)0x0)) &&
     (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240)),
     pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar4,StringLiteral_7135/*"HorizontalCount"*/,(MethodInfo *)0x0);
                    /* try { // try from 032b8fb8 to 033b90f7 has its CatchHandler @ 032b8fb8
                       catch() { ... } // from try @ 032b8fb8 with catch @ 032b8fb8
                       catch() { ... } // from try @ 032b91f0 with catch @ 032b8fb8
                       catch() { ... } // from try @ 032b922c with catch @ 032b8fb8
                       catch() { ... } // from try @ 032b9268 with catch @ 032b8fb8
                       catch() { ... } // from try @ 032b9298 with catch @ 032b8fb8 */
    iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0xb,(MethodInfo *)0x0);
    (__this->fields).CNOHPGNAOFH = iVar2;
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_14777/*"VerticalCount"*/,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,3,(MethodInfo *)0x0);
      (__this->fields).AONFFEBFEPK = iVar2;
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_5256/*"DefaultPosition"*/,(MethodInfo *)0x0);
        iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
        (__this->fields).KMJLJGCBLHI = iVar2;
        pBVar6 = (BNAIBAODKAK_array *)
                 FUN_01bab718(BNAIBAODKAK___TypeInfo,
                              (__this->fields).AONFFEBFEPK * (__this->fields).CNOHPGNAOFH);
        ppBVar12 = &(__this->fields).OFNAAFHJIOB;
        *ppBVar12 = pBVar6;
        thunk_FUN_01c20e04(ppBVar12,pBVar6);
        plVar3 = (long *)(*(CJPHHMIHOGD->klass->vtable)._51_get_Item.methodPtr)
                                   (CJPHHMIHOGD,StringLiteral_4279/*"Characters"*/,
                                    (CJPHHMIHOGD->klass->vtable)._51_get_Item.method);
        if (plVar3 == (long *)0x0) {
                    /* try { // try from 032b92a4 to 033b92ab has its CatchHandler @ 032b92ac */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032b9290 with catch @ 032b92ac
                       catch(type#2 @ 00000000) { ... } // from try @ 032b92a4 with catch @ 032b92ac
                        */
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__Log(StringLiteral_5588/*"ERROR: loadCharacterList"*/,(MethodInfo *)0x0);
          return;
        }
        plVar3 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
        if (plVar3 != (long *)0x0) {
          plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar13 = 0;
          do {
            lVar9 = *plVar3;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                    /* try { // try from 032b90f8 to 033b90ff has its CatchHandler @ 032b924c */
                if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_032b9124;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_032b9124:
            uVar10 = (*(code *)*puVar7)(plVar3,puVar7[1]);
            if ((uVar10 & 1) == 0) {
                    /* try { // try from 032b9220 to 033b9223 has its CatchHandler @ 032b923c */
                    /* try { // try from 032b9224 to 033b922b has its CatchHandler @ 032b9240 */
                    /* try { // try from 032b922c to 033b9263 has its CatchHandler @ 032b8fb8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b9178 with catch @ 032b9230
                        */
              plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b91d4 with catch @ 032b9234
                        */
              if (plVar3 == (long *)0x0) {
                return;
              }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b914c with catch @ 032b9238
                        */
              lVar9 = *plVar3;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b9220 with catch @ 032b923c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b9224 with catch @ 032b9240
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b917c with catch @ 032b9244
                        */
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b9150 with catch @ 032b9248
                        */
              if (uVar10 == 0) goto LAB_032b926c;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b90f8 with catch @ 032b924c
                        */
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_032b9254;
            }
            lVar9 = *plVar3;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                    /* try { // try from 032b914c to 033b914f has its CatchHandler @ 032b9238 */
                    /* try { // try from 032b9150 to 033b915f has its CatchHandler @ 032b9248 */
                if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 032b9178 to 033b917b has its CatchHandler @ 032b9230 */
                    /* try { // try from 032b917c to 033b918b has its CatchHandler @ 032b9244 */
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_032b9184;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_032b9184:
            AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar3,puVar7[1]);
            if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
                 ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(AHDGNOJPPIB);
              }
            }
            pBVar6 = *ppBVar12;
            __this_00 = (BNAIBAODKAK_o *)thunk_FUN_01bda818(BNAIBAODKAK_TypeInfo);
                    /* try { // try from 032b91d4 to 033b91ef has its CatchHandler @ 032b9234 */
            BNAIBAODKAK___ctor(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
            if (pBVar6 == (BNAIBAODKAK_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* try { // try from 032b91f0 to 033b921f has its CatchHandler @ 032b8fb8 */
            if ((__this_00 != (BNAIBAODKAK_o *)0x0) &&
               (lVar9 = thunk_FUN_01bda71c(__this_00,(((pBVar6->obj).klass)->_1).element_class),
               lVar9 == 0)) {
              uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar8,0);
            }
            if ((uint)pBVar6->max_length <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pBVar6->m_Items[(int)uVar13] = __this_00;
            thunk_FUN_01c20e04(pBVar6->m_Items + (int)uVar13,__this_00);
            uVar13 = uVar13 + 1;
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
                    /* try { // try from 032b9264 to 033b9267 has its CatchHandler @ 032b9288 */
    piVar11 = piVar11 + 4;
                    /* try { // try from 032b9268 to 033b928f has its CatchHandler @ 032b8fb8 */
    if (uVar10 == 0) break;
LAB_032b9254:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_032b9288;
    }
  }
LAB_032b926c:
  puVar7 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_032b9288:
                    /* catch() { ... } // from try @ 032b9264 with catch @ 032b9288 */
                    /* try { // try from 032b9290 to 033b9297 has its CatchHandler @ 032b92ac */
  (*(code *)*puVar7)(plVar3,puVar7[1]);
  return;
                    /* try { // try from 032b9298 to 033b92a3 has its CatchHandler @ 032b8fb8 */
}


// ===== public JFMLOEMEKLI[] DPOEFEMDMJI()  [RVA 0x31B93EC]
// IFKFDFGNMMN$$DPOEFEMDMJI @ RVA 0x31B93EC

JFMLOEMEKLI_array * IFKFDFGNMMN__DPOEFEMDMJI(IFKFDFGNMMN_o *__this,MethodInfo *method)

{
  return (__this->fields).DFIBPGKOKEG;
}


// ===== public BNAIBAODKAK APFHFNJDAJG(string JAKHFEHMBIC)  [RVA 0x31B93F4]
// IFKFDFGNMMN$$APFHFNJDAJG @ RVA 0x31B93F4

BNAIBAODKAK_o *
IFKFDFGNMMN__APFHFNJDAJG(IFKFDFGNMMN_o *__this,System_String_o *JAKHFEHMBIC,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  BNAIBAODKAK_o *pBVar3;
  BNAIBAODKAK_array *pBVar4;
  uint uVar5;
  
  pBVar4 = (__this->fields).OFNAAFHJIOB;
  if (pBVar4 == (BNAIBAODKAK_array *)0x0) {
LAB_032b9470:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (uint)pBVar4->max_length;
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pBVar3 = pBVar4->m_Items[(int)uVar5];
      if (pBVar3 == (BNAIBAODKAK_o *)0x0) goto LAB_032b9470;
      bVar2 = System_String__op_Equality((pBVar3->fields).NLAHDEDCAEI,JAKHFEHMBIC,(MethodInfo *)0x0)
      ;
      if (bVar2) {
        return pBVar3;
      }
      uVar1 = (uint)pBVar4->max_length;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar1);
  }
  return (BNAIBAODKAK_o *)0x0;
}


// ===== public void HIBPHKLFJML(ref int JLPMKKKMANE, ref int MMOKLAAAIPP, ref int LFINFBNOLFG)  [RVA 0x31B9474]
// IFKFDFGNMMN$$HIBPHKLFJML @ RVA 0x31B9474

void IFKFDFGNMMN__HIBPHKLFJML
               (IFKFDFGNMMN_o *__this,int32_t *JLPMKKKMANE,int32_t *MMOKLAAAIPP,int32_t *LFINFBNOLFG
               ,MethodInfo *method)

{
  *JLPMKKKMANE = (__this->fields).EPAKCIKBOCC;
  *MMOKLAAAIPP = (__this->fields).EDGHFNKLFPJ;
  *LFINFBNOLFG = (__this->fields).HGCDOLJKPKL;
  return;
}


// ===== public HOOAAGABMBL[] AIKLJCJJHGJ()  [RVA 0x31B9490]
// IFKFDFGNMMN$$AIKLJCJJHGJ @ RVA 0x31B9490

HOOAAGABMBL_array * IFKFDFGNMMN__AIKLJCJJHGJ(IFKFDFGNMMN_o *__this,MethodInfo *method)

{
  return (__this->fields).HJCHDJBLAAG;
}


// ===== private void BIDIELKCDJD(XmlNode CJPHHMIHOGD)  [RVA 0x31B9498]
// IFKFDFGNMMN$$BIDIELKCDJD @ RVA 0x31B9498

/* WARNING: Removing unreachable block (ram,0x032b9918) */

void IFKFDFGNMMN__BIDIELKCDJD
               (IFKFDFGNMMN_o *__this,System_Xml_XmlNode_o *CJPHHMIHOGD,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  long *plVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  JFMLOEMEKLI_array *pJVar6;
  undefined8 *puVar7;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  JFMLOEMEKLI_o *__this_00;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  JFMLOEMEKLI_array **ppJVar12;
  uint uVar13;
  
  if ((DAT_04566bd1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&JFMLOEMEKLI___TypeInfo);
    FUN_01bab630(&JFMLOEMEKLI_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_7135/*"HorizontalCount"*/);
    FUN_01bab630(&StringLiteral_6666/*"GUI"*/);
    FUN_01bab630(&StringLiteral_8596/*"Locations"*/);
    FUN_01bab630(&StringLiteral_14777/*"VerticalCount"*/);
    FUN_01bab630(&StringLiteral_5592/*"ERROR: loadLocationList"*/);
    FUN_01bab630(&StringLiteral_5256/*"DefaultPosition"*/);
    DAT_04566bd1 = 1;
  }
  if (((CJPHHMIHOGD != (System_Xml_XmlNode_o *)0x0) &&
      (plVar3 = (long *)(*(CJPHHMIHOGD->klass->vtable)._51_get_Item.methodPtr)
                                  (CJPHHMIHOGD,StringLiteral_6666/*"GUI"*/,
                                   (CJPHHMIHOGD->klass->vtable)._51_get_Item.method),
      plVar3 != (long *)0x0)) &&
     (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240)),
     pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar4,StringLiteral_7135/*"HorizontalCount"*/,(MethodInfo *)0x0);
    iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0xb,(MethodInfo *)0x0);
    (__this->fields).EPAKCIKBOCC = iVar2;
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_14777/*"VerticalCount"*/,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,3,(MethodInfo *)0x0);
      (__this->fields).EDGHFNKLFPJ = iVar2;
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_5256/*"DefaultPosition"*/,(MethodInfo *)0x0);
        iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
        (__this->fields).HGCDOLJKPKL = iVar2;
        pJVar6 = (JFMLOEMEKLI_array *)
                 FUN_01bab718(JFMLOEMEKLI___TypeInfo,
                              (__this->fields).EDGHFNKLFPJ * (__this->fields).EPAKCIKBOCC);
        ppJVar12 = &(__this->fields).DFIBPGKOKEG;
        *ppJVar12 = pJVar6;
        thunk_FUN_01c20e04(ppJVar12,pJVar6);
        plVar3 = (long *)(*(CJPHHMIHOGD->klass->vtable)._51_get_Item.methodPtr)
                                   (CJPHHMIHOGD,StringLiteral_8596/*"Locations"*/,
                                    (CJPHHMIHOGD->klass->vtable)._51_get_Item.method);
        if (plVar3 == (long *)0x0) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__Log(StringLiteral_5592/*"ERROR: loadLocationList"*/,(MethodInfo *)0x0);
          return;
        }
        plVar3 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
        if (plVar3 != (long *)0x0) {
          plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar13 = 0;
          do {
            lVar9 = *plVar3;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_032b971c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_032b971c:
            uVar10 = (*(code *)*puVar7)(plVar3,puVar7[1]);
            if ((uVar10 & 1) == 0) {
              plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
              if (plVar3 == (long *)0x0) {
                return;
              }
              lVar9 = *plVar3;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 == 0) goto LAB_032b9864;
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_032b984c;
            }
            lVar9 = *plVar3;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_032b977c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_032b977c:
            AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar3,puVar7[1]);
            if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
                 ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(AHDGNOJPPIB);
              }
            }
            pJVar6 = *ppJVar12;
            __this_00 = (JFMLOEMEKLI_o *)thunk_FUN_01bda818(JFMLOEMEKLI_TypeInfo);
            JFMLOEMEKLI___ctor(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
            if (pJVar6 == (JFMLOEMEKLI_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if ((__this_00 != (JFMLOEMEKLI_o *)0x0) &&
               (lVar9 = thunk_FUN_01bda71c(__this_00,(((pJVar6->obj).klass)->_1).element_class),
               lVar9 == 0)) {
              uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar8,0);
            }
            if ((uint)pJVar6->max_length <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pJVar6->m_Items[(int)uVar13] = __this_00;
            thunk_FUN_01c20e04(pJVar6->m_Items + (int)uVar13,__this_00);
            uVar13 = uVar13 + 1;
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_032b984c:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_032b9880;
    }
  }
LAB_032b9864:
  puVar7 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_032b9880:
  (*(code *)*puVar7)(plVar3,puVar7[1]);
  return;
}


// ===== public XmlNode NBLFIEEHECP()  [RVA 0x31B99E4]
// IFKFDFGNMMN$$NBLFIEEHECP @ RVA 0x31B99E4

System_Xml_XmlNode_o * IFKFDFGNMMN__NBLFIEEHECP(IFKFDFGNMMN_o *__this,MethodInfo *method)

{
  return (__this->fields)._OLIGHNIEIGK_k__BackingField;
}


// ===== public BNAIBAODKAK[] PPLFNEHDHCM()  [RVA 0x31B99EC]
// IFKFDFGNMMN$$PPLFNEHDHCM @ RVA 0x31B99EC

BNAIBAODKAK_array * IFKFDFGNMMN__PPLFNEHDHCM(IFKFDFGNMMN_o *__this,MethodInfo *method)

{
  IFKFDFGNMMN__JPNNAPGPLDH(__this,method);
  return (__this->fields).OFNAAFHJIOB;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x31B9A04]
// IFKFDFGNMMN$$.ctor @ RVA 0x31B9A04

void IFKFDFGNMMN___ctor(IFKFDFGNMMN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  MethodInfo *pMVar2;
  IFKFDFGNMMN_Fields *pIVar3;
  
  if ((DAT_04566bd2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4277/*"CharacterArea"*/);
    FUN_01bab630(&StringLiteral_14877/*"Weapons"*/);
    FUN_01bab630(&StringLiteral_10601/*"PvpSettings"*/);
    FUN_01bab630(&StringLiteral_8593/*"LocationArea"*/);
    DAT_04566bd2 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_10601/*"PvpSettings"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    pIVar3 = &__this->fields;
    pIVar3->_OLIGHNIEIGK_k__BackingField = pSVar1;
    thunk_FUN_01c20e04(pIVar3,pSVar1);
    pSVar1 = pIVar3->_OLIGHNIEIGK_k__BackingField;
    if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
      pMVar2 = (pSVar1->klass->vtable)._51_get_Item.method;
      pSVar1 = (System_Xml_XmlNode_o *)
               (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)(pSVar1,StringLiteral_4277/*"CharacterArea"*/);
      IFKFDFGNMMN__NNOFKDAPECF(__this,pSVar1,pMVar2);
      pSVar1 = (__this->fields)._OLIGHNIEIGK_k__BackingField;
      if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
        pMVar2 = (pSVar1->klass->vtable)._51_get_Item.method;
        pSVar1 = (System_Xml_XmlNode_o *)
                 (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)(pSVar1,StringLiteral_8593/*"LocationArea"*/);
        IFKFDFGNMMN__BIDIELKCDJD(__this,pSVar1,pMVar2);
        pSVar1 = (__this->fields)._OLIGHNIEIGK_k__BackingField;
        if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
          pMVar2 = (pSVar1->klass->vtable)._51_get_Item.method;
          pSVar1 = (System_Xml_XmlNode_o *)
                   (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)(pSVar1,StringLiteral_14877/*"Weapons"*/);
          IFKFDFGNMMN__CDEIIJGKFBB(__this,pSVar1,pMVar2);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CDEIIJGKFBB(XmlNode EDEHNHIHDDH)  [RVA 0x31B9B38]
// IFKFDFGNMMN$$CDEIIJGKFBB @ RVA 0x31B9B38

/* WARNING: Removing unreachable block (ram,0x032ba084) */
/* WARNING: Removing unreachable block (ram,0x032b9ff8) */
/* WARNING: Removing unreachable block (ram,0x032ba00c) */
/* WARNING: Removing unreachable block (ram,0x032ba010) */

void IFKFDFGNMMN__CDEIIJGKFBB
               (IFKFDFGNMMN_o *__this,System_Xml_XmlNode_o *EDEHNHIHDDH,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  HOOAAGABMBL_array *pHVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *pSVar8;
  System_Xml_XmlAttribute_o *pSVar9;
  System_String_o *pSVar10;
  HOOAAGABMBL_o *pHVar11;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  undefined8 uVar12;
  long lVar13;
  System_Collections_Generic_List_PKKLIJLIKGF__o *pSVar14;
  ulong uVar15;
  int *piVar16;
  HOOAAGABMBL_array **ppHVar17;
  DOPEEDABNEK_o *__this_00;
  long lVar18;
  uint local_64;
  
  if ((DAT_04566bd3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HOOAAGABMBL___TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_Clear__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_5594/*"ERROR: loadWeaponList"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_10602/*"PvpSettings.ParseWeapons: Wrong name at "*/);
    FUN_01bab630(&StringLiteral_464/*" item!"*/);
    FUN_01bab630(&StringLiteral_5703/*"Enchantments"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566bd3 = 1;
  }
  if ((EDEHNHIHDDH != (System_Xml_XmlNode_o *)0x0) &&
     (plVar4 = (long *)(*(EDEHNHIHDDH->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (EDEHNHIHDDH,(EDEHNHIHDDH->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar4 != (long *)0x0)) {
    uVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    pHVar5 = (HOOAAGABMBL_array *)FUN_01bab718(HOOAAGABMBL___TypeInfo,uVar3);
    ppHVar17 = &(__this->fields).HJCHDJBLAAG;
    *ppHVar17 = pHVar5;
    thunk_FUN_01c20e04(ppHVar17,pHVar5);
    local_64 = 0;
    plVar4 = (long *)(*(EDEHNHIHDDH->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (EDEHNHIHDDH,(EDEHNHIHDDH->klass->vtable)._13_get_ChildNodes.method);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar13 = *plVar4;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_032b9d04;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_032b9d04:
        uVar15 = (*(code *)*puVar6)(plVar4,puVar6[1]);
        if ((uVar15 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar13 = *plVar4;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar15 == 0) goto LAB_032b9fc8;
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_032b9fb0;
        }
        lVar13 = *plVar4;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_032b9d64;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_032b9d64:
        plVar7 = (long *)(*(code *)*puVar6)(plVar4,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar7);
        }
        pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
        if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar8,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        if (pSVar9 == (System_Xml_XmlAttribute_o *)0x0) {
          pSVar10 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
          pSVar10 = System_String__Concat
                              (StringLiteral_10602/*"PvpSettings.ParseWeapons: Wrong name at "*/,pSVar10,StringLiteral_464/*" item!"*/,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
        }
        else {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04563eaa == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04563eaa = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
          pSVar8 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
          if (pSVar8 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar9 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar8,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
          pSVar10 = EIABCPKDEBD__JPKEHIBGOEM(pSVar9,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          if (__this_00 == (DOPEEDABNEK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pHVar11 = DOPEEDABNEK__CKKIPBAIEMN(__this_00,pSVar10,(MethodInfo *)0x0);
          if (pHVar11 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pHVar11 = (HOOAAGABMBL_o *)
                    (*(pHVar11->klass->vtable)._7_FAOBHLCDKJI.methodPtr)
                              (pHVar11,(pHVar11->klass->vtable)._7_FAOBHLCDKJI.method);
          AHDGNOJPPIB = (System_Xml_XmlNode_o *)
                        (**(code **)(*plVar7 + 0x468))
                                  (plVar7,StringLiteral_5703/*"Enchantments"*/,*(undefined8 *)(*plVar7 + 0x470));
          if (pHVar11 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar14 = (pHVar11->fields)._LCJBEIKDDNA_k__BackingField;
          if (pSVar14 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          length = (pSVar14->fields)._size;
          (pSVar14->fields)._size = 0;
          (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(pSVar14->fields)._items,0,length,
                                (MethodInfo *)0x0);
          }
          HOOAAGABMBL__FLDHLLKFPLJ(pHVar11,AHDGNOJPPIB,(MethodInfo *)0x0);
          uVar2 = local_64;
          pHVar5 = *ppHVar17;
          if (pHVar5 == (HOOAAGABMBL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          lVar18 = (long)(int)local_64;
          lVar13 = thunk_FUN_01bda71c(pHVar11,(((pHVar5->obj).klass)->_1).element_class);
          if (lVar13 == 0) {
            uVar12 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar12,0);
          }
          if ((uint)pHVar5->max_length <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          pHVar5->m_Items[lVar18] = pHVar11;
          thunk_FUN_01c20e04(pHVar5->m_Items + lVar18,pHVar11);
        }
        local_64 = local_64 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_032b9fb0:
    if (*(System_IDisposable_c **)(piVar16 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_032b9fe4;
    }
  }
LAB_032b9fc8:
  puVar6 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_032b9fe4:
  (*(code *)*puVar6)(plVar4,puVar6[1]);
  return;
}

