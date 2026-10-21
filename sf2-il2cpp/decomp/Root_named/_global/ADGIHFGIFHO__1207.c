// TypeDefIndex 1207
// Namespace: 
// public class ADGIHFGIFHO : ModelParameters
// Fields:
//   public HOOAAGABMBL GFNKONPLPEB; // 0x260
//   public HOOAAGABMBL NOKHEGPHOHK; // 0x268

// ===== public override List<HOOAAGABMBL> ACBMLHJIFMD()  [RVA 0x312BD50]
// ADGIHFGIFHO$$ACBMLHJIFMD @ RVA 0x312BD50

System_Collections_Generic_List_HOOAAGABMBL__o *
ADGIHFGIFHO__ACBMLHJIFMD(ADGIHFGIFHO_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  HOOAAGABMBL_o *pHVar3;
  HOOAAGABMBL_array *pHVar4;
  
  if ((DAT_04566698 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    DAT_04566698 = 1;
  }
  __this_00 = ModelParameters__ACBMLHJIFMD((ModelParameters_o *)__this,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  pHVar3 = (__this->fields).GFNKONPLPEB;
  if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0322be64;
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 == (HOOAAGABMBL_array *)0x0) goto LAB_0322be64;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pHVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pHVar4->m_Items[(int)uVar1] = pHVar3;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  pHVar3 = (__this->fields).NOKHEGPHOHK;
  if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
    return __this_00;
  }
  if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 != (HOOAAGABMBL_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pHVar4->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pHVar4->m_Items[(int)uVar1] = pHVar3;
        thunk_FUN_01c20e04();
        return __this_00;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return __this_00;
    }
  }
LAB_0322be64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void KMKKECDCBEF(KKEKJDLEJIL GHAAKPDHIJJ)  [RVA 0x312BE68]
// ADGIHFGIFHO$$KMKKECDCBEF @ RVA 0x312BE68

void ADGIHFGIFHO__KMKKECDCBEF(ADGIHFGIFHO_o *__this,KKEKJDLEJIL_o *GHAAKPDHIJJ,MethodInfo *method)

{
  HOOAAGABMBL_o **ppHVar1;
  
                    /* try { // try from 0322be70 to 0332bf07 has its CatchHandler @ 0322be70
                       catch() { ... } // from try @ 0322be70 with catch @ 0322be70
                       catch() { ... } // from try @ 0322bf20 with catch @ 0322be70
                       catch() { ... } // from try @ 0322bf98 with catch @ 0322be70
                       catch() { ... } // from try @ 0322bfd8 with catch @ 0322be70 */
  ModelParameters__KMKKECDCBEF((ModelParameters_o *)__this,GHAAKPDHIJJ,(MethodInfo *)0x0);
  if (GHAAKPDHIJJ != (KKEKJDLEJIL_o *)0x0) {
    (GHAAKPDHIJJ->fields).GFNKONPLPEB = (__this->fields).GFNKONPLPEB;
    thunk_FUN_01c20e04();
    ppHVar1 = &(GHAAKPDHIJJ->fields).NOKHEGPHOHK;
    *ppHVar1 = (__this->fields).NOKHEGPHOHK;
    thunk_FUN_01c20e04(ppHVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x312BEB0]
// ADGIHFGIFHO$$.ctor @ RVA 0x312BEB0

void ADGIHFGIFHO___ctor(ADGIHFGIFHO_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04566699 & 1) == 0) {
    FUN_01bab630(&ModelParameters_TypeInfo);
    DAT_04566699 = 1;
    method = extraout_x1;
  }
  if ((ModelParameters_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ModelParameters_TypeInfo,method);
  }
  ModelParameters___ctor((ModelParameters_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 0322bf08 to 0332bf0f has its CatchHandler @ 0322bf7c */
  ADGIHFGIFHO__OBMMBLLHNDF(__this,method_00);
  return;
}


// ===== private void OBMMBLLHNDF()  [RVA 0x312BF10]
// ADGIHFGIFHO$$OBMMBLLHNDF @ RVA 0x312BF10

void ADGIHFGIFHO__OBMMBLLHNDF(ADGIHFGIFHO_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  PlayerData_o *pEVar3;
  Item_o *pDVar4;
  HOOAAGABMBL_o *pHVar5;
  RaidConfig_o *pJVar6;
  RaidConfig_HJLEKMDIDPO_o *pJVar7;
  FPLCEOJCPOD_o *pFVar8;
  System_Xml_XmlNode_o *pSVar9;
  System_String_o *pSVar10;
  float fVar11;
  
                    /* try { // try from 0322bf18 to 0332bf1f has its CatchHandler @ 0322bf78 */
                    /* try { // try from 0322bf20 to 0332bf93 has its CatchHandler @ 0322be70 */
  if ((DAT_0456669a & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10808/*"RaidChargeDamage"*/);
    DAT_0456669a = 1;
  }
  bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (__this->fields).super.HJPOJOPKEKI.fields,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322bf18 with catch @ 0322bf78
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322bf08 with catch @ 0322bf7c
                        */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                    /* try { // try from 0322bf94 to 0332bf97 has its CatchHandler @ 0322bfc0 */
  if (pEVar3 != (PlayerData_o *)0x0) {
                    /* try { // try from 0322bf98 to 0332bfcf has its CatchHandler @ 0322be70 */
    pSVar10 = (pEVar3->fields).JHMMCCKCFFH;
    bVar1 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0322bf94 with catch @ 0322bfc0 */
        thunk_FUN_01ba7564();
      }
      if (DAT_04563eaa == '\0') {
                    /* try { // try from 0322bfd0 to 0332bfd7 has its CatchHandler @ 0322bfec */
                    /* try { // try from 0322bfd8 to 0332bfe3 has its CatchHandler @ 0322be70 */
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04563eaa = '\x01';
      }
                    /* try { // try from 0322bfe4 to 0332bfeb has its CatchHandler @ 0322bfec */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0322bfd0 with catch @ 0322bfec
                       catch(type#2 @ 00000000) { ... } // from try @ 0322bfe4 with catch @ 0322bfec
                        */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if (pDVar4 == (Item_o *)0x0) goto LAB_0322c2f8;
      pHVar5 = Item__CKKIPBAIEMN(pDVar4,pSVar10,(MethodInfo *)0x0);
      if (pHVar5 != (HOOAAGABMBL_o *)0x0) {
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
        pDVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        if ((pDVar4 == (Item_o *)0x0) ||
           (pHVar5 = Item__CKKIPBAIEMN(pDVar4,pSVar10,(MethodInfo *)0x0),
           pHVar5 == (HOOAAGABMBL_o *)0x0)) goto LAB_0322c2f8;
        pHVar5 = (HOOAAGABMBL_o *)
                 (*(pHVar5->klass->vtable)._7_FAOBHLCDKJI.methodPtr)
                           (pHVar5,(pHVar5->klass->vtable)._7_FAOBHLCDKJI.method);
        (__this->fields).GFNKONPLPEB = pHVar5;
        thunk_FUN_01c20e04(&(__this->fields).GFNKONPLPEB);
      }
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (pJVar6 != (RaidConfig_o *)0x0) {
      fVar11 = RaidConfig__LGJNPFBALBD(pJVar6,pSVar10,(MethodInfo *)0x0);
      pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (pJVar6 != (RaidConfig_o *)0x0) {
        pJVar7 = RaidConfig__FPPDGOEOJCH(pJVar6,pSVar10,(MethodInfo *)0x0);
        pHVar5 = (__this->fields).GFNKONPLPEB;
        if (pHVar5 != (HOOAAGABMBL_o *)0x0) {
          pFVar8 = (pHVar5->fields)._EBHBCMICHKA_k__BackingField;
          if (pFVar8 == (FPLCEOJCPOD_o *)0x0) goto LAB_0322c2f8;
          iVar2 = -0x80000000;
          if (fVar11 != INFINITY) {
            iVar2 = (int)fVar11;
          }
          FPLCEOJCPOD__FOOHBJNHOKK(pFVar8,StringLiteral_10808/*"RaidChargeDamage"*/,iVar2,false,(MethodInfo *)0x0);
          pFVar8 = (__this->fields).super.ACHJNNOKEDK;
          if (pFVar8 == (FPLCEOJCPOD_o *)0x0) goto LAB_0322c2f8;
          FPLCEOJCPOD__FOOHBJNHOKK(pFVar8,StringLiteral_10808/*"RaidChargeDamage"*/,iVar2,false,(MethodInfo *)0x0);
          if ((pJVar7 != (RaidConfig_HJLEKMDIDPO_o *)0x0) &&
             (pSVar9 = (pJVar7->fields).JJFNABIIBBA, pSVar9 != (System_Xml_XmlNode_o *)0x0)) {
            pHVar5 = (__this->fields).GFNKONPLPEB;
            if (pHVar5 == (HOOAAGABMBL_o *)0x0) goto LAB_0322c2f8;
            HOOAAGABMBL__IPDAGFJFLGA(pHVar5,pSVar9,(MethodInfo *)0x0);
          }
        }
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar3 != (PlayerData_o *)0x0) {
          pSVar10 = (pEVar3->fields).PDHCLFKCAAE;
          pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (pEVar3 != (PlayerData_o *)0x0) {
            iVar2 = PlayerData__OHCGFHJNEGO(pEVar3,pSVar10,(MethodInfo *)0x0);
            bVar1 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
            if (!bVar1) {
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
              pDVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
              if (pDVar4 == (Item_o *)0x0) goto LAB_0322c2f8;
              pHVar5 = Item__CKKIPBAIEMN(pDVar4,pSVar10,(MethodInfo *)0x0);
              if ((0 < iVar2) && (pHVar5 != (HOOAAGABMBL_o *)0x0)) {
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                if (DAT_04563eaa == '\0') {
                  FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                  DAT_04563eaa = '\x01';
                }
                    /* try { // try from 0322c23c to 0332c353 has its CatchHandler @ 0322c23c
                       catch() { ... } // from try @ 0322c23c with catch @ 0322c23c
                       catch() { ... } // from try @ 0322c3e8 with catch @ 0322c23c
                       catch() { ... } // from try @ 0322c46c with catch @ 0322c23c
                       catch() { ... } // from try @ 0322c508 with catch @ 0322c23c */
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pDVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                if ((pDVar4 == (Item_o *)0x0) ||
                   (pHVar5 = Item__CKKIPBAIEMN(pDVar4,pSVar10,(MethodInfo *)0x0),
                   pHVar5 == (HOOAAGABMBL_o *)0x0)) goto LAB_0322c2f8;
                pHVar5 = (HOOAAGABMBL_o *)
                         (*(pHVar5->klass->vtable)._7_FAOBHLCDKJI.methodPtr)
                                   (pHVar5,(pHVar5->klass->vtable)._7_FAOBHLCDKJI.method);
                (__this->fields).NOKHEGPHOHK = pHVar5;
                thunk_FUN_01c20e04(&(__this->fields).NOKHEGPHOHK);
              }
            }
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
            if (pJVar6 != (RaidConfig_o *)0x0) {
              pJVar7 = RaidConfig__FPPDGOEOJCH(pJVar6,pSVar10,(MethodInfo *)0x0);
              if (pJVar7 == (RaidConfig_HJLEKMDIDPO_o *)0x0) {
                return;
              }
              pHVar5 = (__this->fields).NOKHEGPHOHK;
              if (pHVar5 == (HOOAAGABMBL_o *)0x0) {
                return;
              }
              pSVar9 = (pJVar7->fields).JJFNABIIBBA;
              if (pSVar9 == (System_Xml_XmlNode_o *)0x0) {
                return;
              }
              HOOAAGABMBL__IPDAGFJFLGA(pHVar5,pSVar9,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0322c2f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int FLMPLCENDLB()  [RVA 0x312C2FC]
// ADGIHFGIFHO$$FLMPLCENDLB @ RVA 0x312C2FC

int32_t ADGIHFGIFHO__FLMPLCENDLB(ADGIHFGIFHO_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  PlayerData_o *pEVar3;
  System_String_o *GJFGFNAGPEO;
  
  if ((DAT_0456669b & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    DAT_0456669b = 1;
  }
  bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (__this->fields).super.HJPOJOPKEKI.fields,(MethodInfo *)0x0);
  if (!bVar1) {
    return 0;
  }
                    /* try { // try from 0322c354 to 0332c37b has its CatchHandler @ 0322c480 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar3 != (PlayerData_o *)0x0) {
    GJFGFNAGPEO = (pEVar3->fields).JHMMCCKCFFH;
    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LPGPNBGHDBD_TypeInfo);
    }
    iVar2 = LPGPNBGHDBD__IILILGFMCPJ(GJFGFNAGPEO,(MethodInfo *)0x0);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0322c3b0 to 0332c3db has its CatchHandler @ 0322c47c */
  FUN_01bab8c8();
}


// ===== public override HOOAAGABMBL CJPIJKJDHGI(string EBOHIPKPFDJ, string HJBFKFHHAEO)  [RVA 0x312C3B4]
// ADGIHFGIFHO$$CJPIJKJDHGI @ RVA 0x312C3B4

HOOAAGABMBL_o *
ADGIHFGIFHO__CJPIJKJDHGI
          (ADGIHFGIFHO_o *__this,System_String_o *EBOHIPKPFDJ,System_String_o *HJBFKFHHAEO,
          MethodInfo *method)

{
  bool bVar1;
  HOOAAGABMBL_o *pHVar2;
  
                    /* try { // try from 0322c3dc to 0332c3e7 has its CatchHandler @ 0322c478 */
  if ((DAT_0456669c & 1) == 0) {
                    /* try { // try from 0322c3e8 to 0332c467 has its CatchHandler @ 0322c23c */
    FUN_01bab630(&StringLiteral_10806/*"RaidCharge"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    FUN_01bab630(&StringLiteral_10951/*"RaidPotion"*/);
    DAT_0456669c = 1;
  }
  bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_10823/*"RaidConsumable"*/,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = System_String__op_Equality(HJBFKFHHAEO,StringLiteral_10806/*"RaidCharge"*/,(MethodInfo *)0x0);
    if (bVar1) {
      pHVar2 = (__this->fields).GFNKONPLPEB;
    }
    else {
      bVar1 = System_String__op_Equality(HJBFKFHHAEO,StringLiteral_10951/*"RaidPotion"*/,(MethodInfo *)0x0);
      if (!bVar1) goto LAB_0322c474;
      pHVar2 = (__this->fields).NOKHEGPHOHK;
    }
                    /* try { // try from 0322c468 to 0332c46b has its CatchHandler @ 0322c474 */
                    /* try { // try from 0322c46c to 0332c497 has its CatchHandler @ 0322c23c */
    return pHVar2;
  }
LAB_0322c474:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322c468 with catch @ 0322c474
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322c3dc with catch @ 0322c478
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322c3b0 with catch @ 0322c47c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322c354 with catch @ 0322c480
                        */
  pHVar2 = ModelParameters__CJPIJKJDHGI
                     ((ModelParameters_o *)__this,EBOHIPKPFDJ,HJBFKFHHAEO,(MethodInfo *)0x0);
  return pHVar2;
}


// ===== public override void LBNKPLKIIOP()  [RVA 0x312C494]
// ADGIHFGIFHO$$LBNKPLKIIOP @ RVA 0x312C494

void ADGIHFGIFHO__LBNKPLKIIOP(ADGIHFGIFHO_o *__this,MethodInfo *method)

{
  return;
}


// ===== public bool DBLMHBMKCFJ()  [RVA 0x312C498]
// ADGIHFGIFHO$$DBLMHBMKCFJ @ RVA 0x312C498

bool ADGIHFGIFHO__DBLMHBMKCFJ(ADGIHFGIFHO_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  MethodInfo *extraout_x1;
  HOOAAGABMBL_o *pHVar2;
  System_String_o *a;
  
                    /* try { // try from 0322c498 to 0332c49b has its CatchHandler @ 0322c4a8 */
                    /* catch() { ... } // from try @ 0322c498 with catch @ 0322c4a8 */
  if ((DAT_0456669d & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&StringLiteral_10806/*"RaidCharge"*/);
    DAT_0456669d = 1;
    method = extraout_x1;
  }
  pHVar2 = (__this->fields).GFNKONPLPEB;
  if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 0322c4e0 to 0332c507 has its CatchHandler @ 0322c51c */
    a = (pHVar2->fields)._COIPKAKHDFP_k__BackingField;
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(GameUtils_TypeInfo,method);
    }
    b = GameUtils__OKOJOGAHMFP(StringLiteral_10806/*"RaidCharge"*/,(MethodInfo *)0x0);
                    /* try { // try from 0322c508 to 0332c513 has its CatchHandler @ 0322c23c */
                    /* try { // try from 0322c514 to 0332c51b has its CatchHandler @ 0322c51c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0322c4e0 with catch @ 0322c51c
                       catch(type#2 @ 00000000) { ... } // from try @ 0322c514 with catch @ 0322c51c
                        */
    bVar1 = System_String__op_Inequality(a,b,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== public override void BCEGONIKBAK(KKEKJDLEJIL GHAAKPDHIJJ)  [RVA 0x312C530]
// ADGIHFGIFHO$$BCEGONIKBAK @ RVA 0x312C530

void ADGIHFGIFHO__BCEGONIKBAK(ADGIHFGIFHO_o *__this,KKEKJDLEJIL_o *GHAAKPDHIJJ,MethodInfo *method)

{
  ModelParameters__BCEGONIKBAK((ModelParameters_o *)__this,GHAAKPDHIJJ,(MethodInfo *)0x0);
  if (GHAAKPDHIJJ != (KKEKJDLEJIL_o *)0x0) {
    (__this->fields).GFNKONPLPEB = (GHAAKPDHIJJ->fields).GFNKONPLPEB;
    thunk_FUN_01c20e04(&(__this->fields).GFNKONPLPEB);
    (__this->fields).NOKHEGPHOHK = (GHAAKPDHIJJ->fields).NOKHEGPHOHK;
    thunk_FUN_01c20e04(&(__this->fields).NOKHEGPHOHK);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void CGNPHPDFKJG(string EBOHIPKPFDJ, HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x312C578]
// ADGIHFGIFHO$$CGNPHPDFKJG @ RVA 0x312C578

void ADGIHFGIFHO__CGNPHPDFKJG
               (ADGIHFGIFHO_o *__this,System_String_o *EBOHIPKPFDJ,HOOAAGABMBL_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  bool bVar1;
  HOOAAGABMBL_o **ppHVar2;
  
  if ((DAT_0456669e & 1) == 0) {
    FUN_01bab630(&StringLiteral_10806/*"RaidCharge"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    FUN_01bab630(&StringLiteral_10951/*"RaidPotion"*/);
    DAT_0456669e = 1;
  }
  bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_10823/*"RaidConsumable"*/,(MethodInfo *)0x0);
  if (bVar1) {
    if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      ((IKKAMAMLIKA->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_10806/*"RaidCharge"*/,
                       (MethodInfo *)0x0);
    if (bVar1) {
      ppHVar2 = &(__this->fields).GFNKONPLPEB;
      (__this->fields).GFNKONPLPEB = IKKAMAMLIKA;
    }
    else {
      bVar1 = System_String__op_Equality
                        ((IKKAMAMLIKA->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_10951/*"RaidPotion"*/,
                         (MethodInfo *)0x0);
      if (!bVar1) goto LAB_0322c63c;
      ppHVar2 = &(__this->fields).NOKHEGPHOHK;
      (__this->fields).NOKHEGPHOHK = IKKAMAMLIKA;
    }
    thunk_FUN_01c20e04(ppHVar2,IKKAMAMLIKA);
  }
LAB_0322c63c:
  ModelParameters__CGNPHPDFKJG((ModelParameters_o *)__this,EBOHIPKPFDJ,IKKAMAMLIKA,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor(ModelParameters JOHFLOEABJL)  [RVA 0x312C660]
// ADGIHFGIFHO$$.ctor @ RVA 0x312C660

void ADGIHFGIFHO___ctor(ADGIHFGIFHO_o *__this,ModelParameters_o *JOHFLOEABJL,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((DAT_0456669f & 1) == 0) {
    FUN_01bab630(&ModelParameters_TypeInfo);
    DAT_0456669f = 1;
  }
  if ((ModelParameters_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ModelParameters___ctor((ModelParameters_o *)__this,JOHFLOEABJL,(MethodInfo *)0x0);
  ADGIHFGIFHO__OBMMBLLHNDF(__this,method_00);
  return;
}

