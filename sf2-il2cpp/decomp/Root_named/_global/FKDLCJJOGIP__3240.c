// TypeDefIndex 3240
// Namespace: 
// public class FKDLCJJOGIP
// Fields:
//   private Action JFCAFEOAKBH; // 0x10
//   private Action NLKPBBPPKCJ; // 0x18
//   private static FKDLCJJOGIP CBDMFFMCJBK; // 0x0
//   private GGDMJFCJJFH KOMAKPPBFEM; // 0x20
//   private bool <MEAPCEHFFHD>k__BackingField; // 0x24
//   private bool <OHFODMIBJME>k__BackingField; // 0x25
//   private bool <NFAAGONINOL>k__BackingField; // 0x26

// ===== private void LEILCBKICDA(bool CJNHFNHJHPE)  [RVA 0x35088EC]
// FKDLCJJOGIP$$LEILCBKICDA @ RVA 0x35088EC

void FKDLCJJOGIP__LEILCBKICDA(FKDLCJJOGIP_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._OHFODMIBJME_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void EHCGDODIIGF()  [RVA 0x35088F8]
// FKDLCJJOGIP$$EHCGDODIIGF @ RVA 0x35088F8

void FKDLCJJOGIP__EHCGDODIIGF(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *DIHAKADKIKM;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  NDPMLPGANCI_o *__this_00;
  FKDLCJJOGIP_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_o *pSVar1;
  
  if ((DAT_045688b6 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3987);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3988);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    DAT_045688b6 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3987,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3988,(MethodInfo *)0x0);
  DIHAKADKIKM = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    method_01 = (MethodInfo *)0x0;
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Error(DIHAKADKIKM,BBBLOLJAMJP,(MethodInfo *)0x0);
    FKDLCJJOGIP__JJAAFACCDCP(__this,false,method_01);
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__PHFCKPKDMBK(__this_00,false,true,(MethodInfo *)0x0);
      (__this->fields)._MEAPCEHFFHD_k__BackingField = false;
      (__this->fields)._OHFODMIBJME_k__BackingField = false;
      FKDLCJJOGIP__OPFEMEHHPDI(__this_01,method_00);
      pSVar1 = (__this->fields).JFCAFEOAKBH;
      if (pSVar1 != (System_Action_o *)0x0) {
                    /* try { // try from 03608a40 to 03708a47 has its CatchHandler @ 03608b74 */
                    /* WARNING: Could not recover jumptable at 0x03608a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar1->fields).super.super.invoke_impl)
                  ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KBODALOCELJ()  [RVA 0x3508C10]
// FKDLCJJOGIP$$KBODALOCELJ @ RVA 0x3508C10

void FKDLCJJOGIP__KBODALOCELJ(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *DIHAKADKIKM;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  NDPMLPGANCI_o *pNVar3;
  Fight_o *__this_00;
  CFMDGLMCNIL_o *pCVar4;
  OHPOFOPJIMB_o *KCPFFLHCCIN;
  NLPJLHOEAOE_o *__this_01;
  RaidManager_o *__this_02;
  PlayerData_o *__this_03;
  int64_t ONDIKKMLEDD;
  long lVar5;
  undefined8 *puVar6;
  MethodInfo *method_00;
  GLINEGMOOBM_o *pGVar7;
  System_Action_o *pSVar8;
  ulong uVar9;
  int *piVar10;
  UnityEngine_Object_o *x;
  long *plVar11;
  
  if ((DAT_045688b7 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3989);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3990);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&EBPOGHJNIEK_TypeInfo);
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
                    /* try { // try from 03608ca0 to 03708daf has its CatchHandler @ 03608ca0
                       catch() { ... } // from try @ 03608ca0 with catch @ 03608ca0
                       catch() { ... } // from try @ 03608dd8 with catch @ 03608ca0
                       catch() { ... } // from try @ 03608e50 with catch @ 03608ca0
                       catch() { ... } // from try @ 03608ea4 with catch @ 03608ca0
                       catch() { ... } // from try @ 03608ee0 with catch @ 03608ca0
                       catch() { ... } // from try @ 03608efc with catch @ 03608ca0
                       catch() { ... } // from try @ 03608f2c with catch @ 03608ca0 */
    FUN_01bab630(&Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_045688b7 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3989,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3990,(MethodInfo *)0x0);
  DIHAKADKIKM = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) goto LAB_0360910c;
  if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  BBBLOLJAMJP->m_Items[0] = 6;
  Nekki_Utils_DetailedLog__LogDebug(DIHAKADKIKM,BBBLOLJAMJP,(MethodInfo *)0x0);
  (__this->fields)._MEAPCEHFFHD_k__BackingField = true;
  (__this->fields)._OHFODMIBJME_k__BackingField = false;
  pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((pNVar3 == (NDPMLPGANCI_o *)0x0) ||
     (pGVar7 = (pNVar3->fields).KLPOKEJLDHG, pGVar7 == (GLINEGMOOBM_o *)0x0)) goto LAB_0360910c;
  if ((pGVar7->fields).DBMPKPJGIPI == 6) {
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03608db0 to 03708db7 has its CatchHandler @ 03608e84 */
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&Fight_TypeInfo);
                    /* try { // try from 03608dcc to 03708dd7 has its CatchHandler @ 03608ee0 */
      DAT_04565b7f = '\x01';
    }
                    /* try { // try from 03608dd8 to 03708e27 has its CatchHandler @ 03608ca0 */
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (Fight_TypeInfo->static_fields->IGABFCCGLCO != (Fight_o *)0x0) {
      if ((Fight_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&Fight_TypeInfo);
        DAT_04565b7f = '\x01';
      }
      if ((Fight_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03608e28 to 03708e2f has its CatchHandler @ 03608e80 */
        thunk_FUN_01ba7564();
      }
      __this_00 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
      if (__this_00 == (Fight_o *)0x0) goto LAB_0360910c;
      iVar2 = Fight__IHMLDBDLJON(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03608e44 to 03708e4f has its CatchHandler @ 03608e88 */
      if (iVar2 == 0) goto LAB_03608ec8;
    }
                    /* try { // try from 03608e50 to 03708e9f has its CatchHandler @ 03608ca0 */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar4 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
    if (pCVar4 == (CFMDGLMCNIL_o *)0x0) goto LAB_0360910c;
    bVar1 = CFMDGLMCNIL__JGKFPAAOBOO(pCVar4,1,(MethodInfo *)0x0);
    if (!bVar1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03608e28 with catch @ 03608e80
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03608db0 with catch @ 03608e84
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03608e44 with catch @ 03608e88
                        */
      KCPFFLHCCIN = (OHPOFOPJIMB_o *)thunk_FUN_01bda818(EBPOGHJNIEK_TypeInfo);
      EBPOGHJNIEK___ctor((EBPOGHJNIEK_o *)KCPFFLHCCIN,(MethodInfo *)0x0);
                    /* try { // try from 03608ea0 to 03708ea3 has its CatchHandler @ 03608ec4 */
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03608ea4 to 03708ecb has its CatchHandler @ 03608ca0 */
        thunk_FUN_01ba7564();
      }
      pCVar4 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
      if (pCVar4 == (CFMDGLMCNIL_o *)0x0) goto LAB_0360910c;
      CFMDGLMCNIL__MPFFOIIBAKO(pCVar4,KCPFFLHCCIN,true,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03608ea0 with catch @ 03608ec4 */
    }
  }
  else {
LAB_03608ec8:
                    /* try { // try from 03608ecc to 03708edf has its CatchHandler @ 03608f40 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03608dcc with catch @ 03608ee0
                       try { // try from 03608ee0 to 03708ef7 has its CatchHandler @ 03608ca0 */
    __this_01 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 == (NLPJLHOEAOE_o *)0x0) goto LAB_0360910c;
                    /* try { // try from 03608ef8 to 03708efb has its CatchHandler @ 03608f1c */
                    /* try { // try from 03608efc to 03708f23 has its CatchHandler @ 03608ca0 */
    NLPJLHOEAOE__FPKLNCHIKFN(__this_01,true,true,(MethodInfo *)0x0);
    lVar5 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
                    /* catch() { ... } // from try @ 03608ef8 with catch @ 03608f1c */
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
                    /* try { // try from 03608f24 to 03708f2b has its CatchHandler @ 03608f40 */
                    /* try { // try from 03608f2c to 03708f37 has its CatchHandler @ 03608ca0 */
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
                    /* try { // try from 03608f38 to 03708f3f has its CatchHandler @ 03608f40 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03608ecc with catch @ 03608f40
                       catch(type#2 @ 00000000) { ... } // from try @ 03608f24 with catch @ 03608f40
                       catch(type#2 @ 00000000) { ... } // from try @ 03608f38 with catch @ 03608f40
                        */
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar5 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_Object_o *)0x0) goto LAB_0360910c;
      if ((int)x[10].fields.m_CachedPtr == 1) {
        FKDLCJJOGIP__LGBOGFICFPF(__this,method_00);
        goto LAB_03608fcc;
      }
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    __this_03 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if ((__this_03 == (PlayerData_o *)0x0) ||
       (ONDIKKMLEDD = PlayerData__DHLIBNAGDAD(__this_03,(MethodInfo *)0x0),
       __this_02 == (RaidManager_o *)0x0)) goto LAB_0360910c;
    RaidManager__BNMEADIMLGA(__this_02,ONDIKKMLEDD,(MethodInfo *)0x0);
  }
LAB_03608fcc:
  pNVar3 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar3 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__PHFCKPKDMBK(pNVar3,false,true,(MethodInfo *)0x0);
    lVar5 = *(long *)(Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__ + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    plVar11 = (long *)**(undefined8 **)(lVar5 + 0xb8);
    if (plVar11 != (long *)0x0) {
      lVar5 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(ODEIOKOJGDM_c **)(piVar10 + -2) == ODEIOKOJGDM_TypeInfo) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03609078;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar11,ODEIOKOJGDM_TypeInfo,0);
LAB_03609078:
      (*(code *)*puVar6)(plVar11,0,puVar6[1]);
      pSVar8 = (__this->fields).NLKPBBPPKCJ;
      if (pSVar8 != (System_Action_o *)0x0) {
        (*(code *)(pSVar8->fields).super.super.invoke_impl)
                  ((pSVar8->fields).super.super.method_code,(pSVar8->fields).super.super.method);
        if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04567f87 == '\0') {
          FUN_01bab630(&GameUtils_TypeInfo);
          DAT_04567f87 = '\x01';
        }
        if ((GameUtils_TypeInfo->_2).cctor_finished != 0) {
          return;
        }
        thunk_FUN_01ba7564();
        return;
      }
    }
  }
LAB_0360910c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JDLNMHBDBJK()  [RVA 0x3509174]
// FKDLCJJOGIP$$JDLNMHBDBJK @ RVA 0x3509174

void FKDLCJJOGIP__JDLNMHBDBJK(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  FKDLCJJOGIP_o *__this_00;
  System_String_o *EHNFGMGKCHO;
  System_String_o *KCFLBKINDFM;
  NDPMLPGANCI_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_o *pSVar5;
  
  if ((DAT_045688b8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3991);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3992);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3993);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3994);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3995);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3996);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3997);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3998);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045688b8 = 1;
  }
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3991,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3992,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  bVar1 = false;
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Error(pSVar4,BBBLOLJAMJP,(MethodInfo *)0x0);
    (__this->fields)._NFAAGONINOL_k__BackingField = false;
    (__this->fields)._MEAPCEHFFHD_k__BackingField = false;
    (__this->fields)._OHFODMIBJME_k__BackingField = false;
    FKDLCJJOGIP__OPFEMEHHPDI(__this_00,method_00);
    NFNBHPOJFNJ__KCBJCLNBGAO(7,(MethodInfo *)0x0);
    if ((__this->fields).KOMAKPPBFEM != 1) {
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3993,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3994,
                 (MethodInfo *)0x0);
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03609368 to 0370977f has its CatchHandler @ 03609368
                       catch() { ... } // from try @ 03609368 with catch @ 03609368
                       catch() { ... } // from try @ 03609870 with catch @ 03609368
                       catch() { ... } // from try @ 036098a8 with catch @ 03609368
                       catch() { ... } // from try @ 03609ce4 with catch @ 03609368
                       catch() { ... } // from try @ 03609d8c with catch @ 03609368
                       catch() { ... } // from try @ 0360a4dc with catch @ 03609368
                       catch() { ... } // from try @ 0360a578 with catch @ 03609368
                       catch() { ... } // from try @ 0360a5e0 with catch @ 03609368
                       catch() { ... } // from try @ 0360a774 with catch @ 03609368
                       catch() { ... } // from try @ 0360a7bc with catch @ 03609368
                       catch() { ... } // from try @ 0360a7f4 with catch @ 03609368
                       catch() { ... } // from try @ 0360a82c with catch @ 03609368
                       catch() { ... } // from try @ 0360a848 with catch @ 03609368
                       catch() { ... } // from try @ 0360a888 with catch @ 03609368 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3995,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3996,
                 (MethodInfo *)0x0);
      EHNFGMGKCHO = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3997,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3998,
                 (MethodInfo *)0x0);
      KCFLBKINDFM = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
      DialogsOpener__JNDPLPKDPCP
                (pSVar4,EHNFGMGKCHO,KCFLBKINDFM,StringLiteral_1/*""*/,(System_Action_object__o *)0x0,1,0,
                 false,false,StringLiteral_1/*""*/,true,true,true,true,(MethodInfo *)0x0);
    }
    __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    bVar1 = false;
    if (__this_01 != (NDPMLPGANCI_o *)0x0) {
      method_01 = (MethodInfo *)0x1;
      NDPMLPGANCI__PHFCKPKDMBK(__this_01,false,true,(MethodInfo *)0x0);
      bVar1 = FKDLCJJOGIP__JJAAFACCDCP(__this,false,method_01);
      pSVar5 = (__this->fields).JFCAFEOAKBH;
      if (pSVar5 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0360949c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar5->fields).super.super.invoke_impl)
                  ((pSVar5->fields).super.super.method_code,(pSVar5->fields).super.super.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(bVar1);
}


// ===== private void OPFEMEHHPDI()  [RVA 0x3508B7C]
// FKDLCJJOGIP$$OPFEMEHHPDI @ RVA 0x3508B7C

void FKDLCJJOGIP__OPFEMEHHPDI(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  Item_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
                    /* try { // try from 03608b8c to 03708b8f has its CatchHandler @ 03608bb0 */
                    /* try { // try from 03608b90 to 03708bb7 has its CatchHandler @ 03608620 */
  if ((DAT_045688b9 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688b9 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 03608b8c with catch @ 03608bb0 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03608bb8 to 03708bbf has its CatchHandler @ 03608bd4 */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
                    /* try { // try from 03608bc0 to 03708bcb has its CatchHandler @ 03608620 */
  if (DAT_04563eaa == '\0') {
                    /* try { // try from 03608bcc to 03708bd3 has its CatchHandler @ 03608bd4 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 03608bb8 with catch @ 03608bd4
                       catch() { ... } // from try @ 03608bcc with catch @ 03608bd4 */
    DAT_04563eaa = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (__this_00 != (Item_o *)0x0) {
    Item__MLENOBKGHHF(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HJCDCLJFPMJ()  [RVA 0x35094B8]
// FKDLCJJOGIP$$HJCDCLJFPMJ @ RVA 0x35094B8

void FKDLCJJOGIP__HJCDCLJFPMJ(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *DIHAKADKIKM;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  SFRequestSender_o *__this_00;
  EGMONPGHHDP_o *__this_01;
  
  if ((DAT_045688ba & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3999);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4000);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_045688ba = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3999,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4000,(MethodInfo *)0x0);
  DIHAKADKIKM = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__LogDebug(DIHAKADKIKM,BBBLOLJAMJP,(MethodInfo *)0x0);
    (__this->fields)._NFAAGONINOL_k__BackingField = true;
    __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_00 != (SFRequestSender_o *)0x0) {
      SFRequestSender__GIENGNEGHPJ(__this_00,(MethodInfo *)0x0);
      FIKENOMMMBH__BFDIPEEOJMA((MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
      if (__this_01 != (EGMONPGHHDP_o *)0x0) {
        EGMONPGHHDP__GIENGNEGHPJ(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NOCLKDCGGIF(object HBHPFKJMGCK)  [RVA 0x3509624]
// FKDLCJJOGIP$$NOCLKDCGGIF @ RVA 0x3509624

void FKDLCJJOGIP__NOCLKDCGGIF(FKDLCJJOGIP_o *__this,Il2CppObject *HBHPFKJMGCK,MethodInfo *method)

{
  int *piVar1;
  NLPJLHOEAOE_o *pNVar2;
  System_Action_bool__o *KMGFEDFECGO;
  GGAFBEMCEIN_o *__this_00;
  
  if ((DAT_045688bb & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_FKDLCJJOGIP_PKHALHOIGAB__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688bb = 1;
  }
  if (HBHPFKJMGCK != (Il2CppObject *)0x0) {
    if ((HBHPFKJMGCK->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(HBHPFKJMGCK);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
    if (*piVar1 != 1) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar2 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar2 != (NLPJLHOEAOE_o *)0x0) {
      __this_00 = (pNVar2->fields)._JCLECLGGBBB_k__BackingField;
      KMGFEDFECGO = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
      System_Action<bool>___ctor();
      if (__this_00 != (GGAFBEMCEIN_o *)0x0) {
        GGAFBEMCEIN__LDMPHMGMJAK(__this_00,KMGFEDFECGO,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DDGNIFIEDOE(bool CJNHFNHJHPE)  [RVA 0x3509734]
// FKDLCJJOGIP$$DDGNIFIEDOE @ RVA 0x3509734

void FKDLCJJOGIP__DDGNIFIEDOE(FKDLCJJOGIP_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._NFAAGONINOL_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public bool GLICONIIINB()  [RVA 0x3509740]
// FKDLCJJOGIP$$GLICONIIINB @ RVA 0x3509740

bool FKDLCJJOGIP__GLICONIIINB(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  return (__this->fields)._MEAPCEHFFHD_k__BackingField;
}


// ===== public void LLBIEPFEJPG()  [RVA 0x3509748]
// FKDLCJJOGIP$$LLBIEPFEJPG @ RVA 0x3509748

void FKDLCJJOGIP__LLBIEPFEJPG(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  FKDLCJJOGIP__JJAAFACCDCP(__this,false,in_x2);
  return;
}


// ===== public void DAGFKDGOBBF(Action CJNHFNHJHPE)  [RVA 0x3509750]
// FKDLCJJOGIP$$DAGFKDGOBBF @ RVA 0x3509750

void FKDLCJJOGIP__DAGFKDGOBBF(FKDLCJJOGIP_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_045688bc & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 03609780 to 03709787 has its CatchHandler @ 0360a7d4 */
    DAT_045688bc = 1;
  }
  ppSVar4 = &(__this->fields).NLKPBBPPKCJ;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
                    /* try { // try from 036097dc to 037097df has its CatchHandler @ 0360a5f8 */
                    /* try { // try from 036097e0 to 037097e7 has its CatchHandler @ 0360a624 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void FHJKIMLIDMP(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x35097EC]
// FKDLCJJOGIP$$FHJKIMLIDMP @ RVA 0x35097EC

void FKDLCJJOGIP__FHJKIMLIDMP(FKDLCJJOGIP_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this_00;
  Il2CppObject *pIVar2;
  NODLJPNGNBG_o *pNVar3;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *message;
  RaidManager_o *__this_01;
  
                    /* try { // try from 036097f4 to 037097fb has its CatchHandler @ 0360a628 */
  if ((DAT_045688bd & 1) == 0) {
                    /* try { // try from 0360980c to 03709813 has its CatchHandler @ 0360a608 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4001);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4002);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 03609828 to 0370982f has its CatchHandler @ 03609884 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJHLANCHFPC>__);
                    /* try { // try from 0360984c to 03709857 has its CatchHandler @ 03609888 */
    DAT_045688bd = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 03609868 to 0370986f has its CatchHandler @ 0360a60c */
                    /* try { // try from 03609870 to 037098a3 has its CatchHandler @ 03609368 */
  if ((__this_00 != (NDPMLPGANCI_o *)0x0) &&
     (NDPMLPGANCI__PHFCKPKDMBK(__this_00,false,true,(MethodInfo *)0x0),
     IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0)) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (!bVar1) {
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4001,
                 (MethodInfo *)0x0);
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4002,
                 (MethodInfo *)0x0);
      message = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
      return;
    }
                    /* catch() { ... } // from try @ 03609828 with catch @ 03609884 */
                    /* catch() { ... } // from try @ 0360984c with catch @ 03609888 */
    pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<OJHLANCHFPC>__);
                    /* try { // try from 036098a4 to 037098a7 has its CatchHandler @ 0360a5e0 */
                    /* try { // try from 036098a8 to 0370996b has its CatchHandler @ 03609368 */
    if (((pIVar2 != (Il2CppObject *)0x0) && (pIVar2[1].monitor != (void *)0x0)) &&
       (pNVar3 = RaidManager__AFHLHFMLNEO
                           (*(System_Collections_Generic_IList_NODLJPNGNBG__o **)
                             ((long)pIVar2[1].monitor + 0x40),(MethodInfo *)0x0),
       pNVar3 != (NODLJPNGNBG_o *)0x0)) {
      if ((pNVar3->fields).PFJPLCAIGJH == 3) {
        return;
      }
                    /* try { // try from 0360996c to 03709973 has its CatchHandler @ 0360a754 */
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (__this_01 != (RaidManager_o *)0x0) {
        RaidManager__BNPLDAHKIED
                  (__this_01,pIVar2[1].monitor,(PGICCMFLDPI_o *)pIVar2[2].klass,(MethodInfo *)0x0);
                    /* try { // try from 03609994 to 0370999b has its CatchHandler @ 0360a750 */
        DialogsOpener__OCJEIOMBDKP((MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GDKDINOCDGF()  [RVA 0x35099A8]
// FKDLCJJOGIP$$GDKDINOCDGF @ RVA 0x35099A8

void FKDLCJJOGIP__GDKDINOCDGF(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  SFRequestSender_o *__this_00;
  
                    /* try { // try from 036099b0 to 037099b7 has its CatchHandler @ 03609d68 */
  if ((__this->fields)._MEAPCEHFFHD_k__BackingField == false) {
                    /* try { // try from 036099cc to 037099cf has its CatchHandler @ 03609d34 */
                    /* try { // try from 036099d0 to 037099d7 has its CatchHandler @ 03609d58 */
    return;
  }
  __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 != (SFRequestSender_o *)0x0) {
    SFRequestSender__GJHLAGIIMKK(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool PMINMFLPJCB()  [RVA 0x35099D8]
// FKDLCJJOGIP$$PMINMFLPJCB @ RVA 0x35099D8

/* WARNING: Type propagation algorithm not settling */

bool FKDLCJJOGIP__PMINMFLPJCB(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  SFRequestSender_o *pKVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  DialogsManager_o *pGVar7;
  System_Action_object__o **ppSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  System_Action_object__o *pSVar12;
  MethodInfo *extraout_x1;
  System_RuntimeFieldHandle_Fields *pSVar13;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar14;
  
                    /* try { // try from 036099e4 to 037099eb has its CatchHandler @ 03609d64 */
  if ((DAT_045688be & 1) == 0) {
                    /* try { // try from 03609a08 to 03709a37 has its CatchHandler @ 03609d50 */
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_34);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_35);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_36);
                    /* try { // try from 03609a3c to 03709a43 has its CatchHandler @ 03609d48 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_37);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4003);
                    /* try { // try from 03609a54 to 03709a57 has its CatchHandler @ 03609d08 */
                    /* try { // try from 03609a58 to 03709a5f has its CatchHandler @ 03609d24 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4004);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4005);
                    /* try { // try from 03609a68 to 03709a6f has its CatchHandler @ 03609d28 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4006);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4007);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4008);
                    /* try { // try from 03609a8c to 03709abb has its CatchHandler @ 03609d1c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4009);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4010);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4011);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4012);
                    /* try { // try from 03609ac4 to 03709acb has its CatchHandler @ 03609d44 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4013);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4014);
                    /* try { // try from 03609adc to 03709ae3 has its CatchHandler @ 03609d2c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4015);
                    /* try { // try from 03609ae8 to 03709aef has its CatchHandler @ 03609d40 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4016);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4017);
                    /* try { // try from 03609af8 to 03709aff has its CatchHandler @ 03609d3c */
                    /* try { // try from 03609b00 to 03709b0f has its CatchHandler @ 03609d30 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4018);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4019);
                    /* try { // try from 03609b18 to 03709b1f has its CatchHandler @ 03609d38 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4020);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4021);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4022);
                    /* try { // try from 03609b38 to 03709b7b has its CatchHandler @ 03609d6c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4023);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4024);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4025);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4026);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4027);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4028);
                    /* try { // try from 03609b84 to 03709b8b has its CatchHandler @ 03609ce8 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4029);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4030);
                    /* try { // try from 03609b9c to 03709ba3 has its CatchHandler @ 03609d10 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4031);
                    /* try { // try from 03609ba8 to 03709baf has its CatchHandler @ 03609cec */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4032);
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 03609bc0 to 03709bc7 has its CatchHandler @ 03609cf4 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03609bc8 to 03709bd7 has its CatchHandler @ 03609cfc */
    FUN_01bab630(&Method_FKDLCJJOGIP_NOCLKDCGGIF__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03609be4 to 03709beb has its CatchHandler @ 03609d00 */
    FUN_01bab630(&OGHIOMKFPLH_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 03609bfc to 03709c03 has its CatchHandler @ 03609d0c */
    FUN_01bab630(&Method_FKDLCJJOGIP_<>c_FFJOPAAENNM__);
                    /* try { // try from 03609c08 to 03709c0f has its CatchHandler @ 03609cf0 */
    FUN_01bab630(&FKDLCJJOGIP_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045688be = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03609c20 to 03709c27 has its CatchHandler @ 03609cf8 */
                    /* try { // try from 03609c28 to 03709c37 has its CatchHandler @ 03609d04 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  bVar2 = HJPEKDOPBHN__OOCIJPLODLJ((MethodInfo *)0x0);
  if (!bVar2) {
                    /* catch() { ... } // from try @ 03609ca0 with catch @ 03609d60 */
    iVar1 = (__this->fields).KOMAKPPBFEM;
                    /* catch() { ... } // from try @ 036099e4 with catch @ 03609d64 */
                    /* catch() { ... } // from try @ 036099b0 with catch @ 03609d68 */
    pGVar7 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03609b38 with catch @ 03609d6c */
    if (pGVar7 == (DialogsManager_o *)0x0) goto LAB_0360a63c;
    pNVar14 = (pGVar7->fields)._AOOFDKJAALA_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03609d88 to 03709d8b has its CatchHandler @ 0360a5ec */
                    /* try { // try from 03609d8c to 03709eb3 has its CatchHandler @ 03609368 */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (bVar2) {
      bVar2 = true;
    }
    else {
      pGVar7 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
      if ((pGVar7 == (DialogsManager_o *)0x0) ||
         (pNVar14 = (pGVar7->fields)._AOOFDKJAALA_k__BackingField,
         pNVar14 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0)) goto LAB_0360a63c;
      bVar2 = (pNVar14->fields).DialogIdentifier != 1;
    }
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    if ((bool)(bVar2 & iVar1 != 1)) {
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4003,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4004,
                 (MethodInfo *)0x0);
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4005,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4006,
                 (MethodInfo *)0x0);
      pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03609eb4 to 03709ebb has its CatchHandler @ 0360a7d0 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4007,
                 (MethodInfo *)0x0);
                    /* try { // try from 03609ed0 to 03709ed3 has its CatchHandler @ 0360a734 */
                    /* try { // try from 03609ed4 to 03709edb has its CatchHandler @ 0360a7c4 */
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03609ee0 to 03709eef has its CatchHandler @ 0360a7c8 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4008,
                 (MethodInfo *)0x0);
      pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 03609f00 to 03709f03 has its CatchHandler @ 0360a7bc */
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03609f18 to 03709f1b has its CatchHandler @ 0360a6ec */
                    /* try { // try from 03609f24 to 03709f2b has its CatchHandler @ 0360a718 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4009,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4010,
                 (MethodInfo *)0x0);
                    /* try { // try from 03609f58 to 03709f5b has its CatchHandler @ 0360a62c */
                    /* try { // try from 03609f5c to 03709f8b has its CatchHandler @ 0360a738 */
      pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      if ((FKDLCJJOGIP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(FKDLCJJOGIP_<>c_TypeInfo);
      }
      pSVar12 = FKDLCJJOGIP_<>c_TypeInfo->static_fields->__9__38_0;
                    /* try { // try from 03609f8c to 03709f9b has its CatchHandler @ 0360a724 */
      if (pSVar12 == (System_Action_object__o *)0x0) {
        if ((FKDLCJJOGIP_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(FKDLCJJOGIP_<>c_TypeInfo);
        }
        pSVar12 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                    /* try { // try from 03609fc0 to 03709fc3 has its CatchHandler @ 0360a5fc */
                    /* try { // try from 03609fc4 to 03709fcf has its CatchHandler @ 0360a680 */
        System_Action<object>___ctor();
                    /* try { // try from 03609fe0 to 03709fe7 has its CatchHandler @ 0360a6c4 */
        ppSVar8 = &FKDLCJJOGIP_<>c_TypeInfo->static_fields->__9__38_0;
        *ppSVar8 = pSVar12;
        thunk_FUN_01c20e04(ppSVar8,pSVar12);
      }
                    /* try { // try from 03609ff0 to 03709ff7 has its CatchHandler @ 0360a65c */
                    /* try { // try from 0360a008 to 0370a00f has its CatchHandler @ 0360a63c */
                    /* try { // try from 0360a014 to 0370a01b has its CatchHandler @ 0360a6d8 */
                    /* try { // try from 0360a02c to 0370a033 has its CatchHandler @ 0360a674 */
                    /* try { // try from 0360a034 to 0370a05f has its CatchHandler @ 0360a70c */
      pNVar14 = DialogsOpener__JNDPLPKDPCP
                          (pSVar6,pSVar9,pSVar10,pSVar11,pSVar12,5,0,false,false,StringLiteral_1/*""*/,
                           true,true,true,true,(MethodInfo *)0x0);
      if (pNVar14 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_0360a63c;
      (pNVar14->fields).DialogIdentifier = 1;
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4011,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
                    /* try { // try from 0360a074 to 0370a07b has its CatchHandler @ 0360a640 */
      pSVar13 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_34;
    }
    else {
                    /* try { // try from 0360a098 to 0370a09f has its CatchHandler @ 0360a638 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4012,
                 (MethodInfo *)0x0);
                    /* try { // try from 0360a0a4 to 0370a0ab has its CatchHandler @ 0360a688 */
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
      pSVar13 = (System_RuntimeFieldHandle_Fields *)
                &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_35;
    }
    goto LAB_0360a5d0;
  }
                    /* try { // try from 03609c3c to 03709c6b has its CatchHandler @ 03609d18 */
  pKVar3 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  if (pKVar3 == (SFRequestSender_o *)0x0) goto LAB_0360a63c;
  if (((pKVar3->fields).super._MGGBEPKMPCF_k__BackingField != false) ||
     (bVar2 = IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0), bVar2)) {
    if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = OGHIOMKFPLH__DGCEOJNFICD((MethodInfo *)0x0);
    if (!bVar2) {
      return true;
    }
                    /* try { // try from 03609c84 to 03709c8b has its CatchHandler @ 0360a740 */
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03609ca0 to 03709ca3 has its CatchHandler @ 03609d60 */
                    /* try { // try from 03609ca8 to 03709cab has its CatchHandler @ 03609d5c */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4025,(MethodInfo *)0x0)
    ;
                    /* try { // try from 03609cb0 to 03709cb3 has its CatchHandler @ 03609d4c */
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03609cb8 to 03709cc3 has its CatchHandler @ 03609d54 */
                    /* try { // try from 03609cc8 to 03709ccb has its CatchHandler @ 03609d20 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4026,(MethodInfo *)0x0)
    ;
                    /* try { // try from 03609cd0 to 03709cdb has its CatchHandler @ 03609d54 */
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 03609ce0 to 03709ce3 has its CatchHandler @ 03609d14 */
                    /* try { // try from 03609ce4 to 03709d87 has its CatchHandler @ 03609368 */
                    /* catch() { ... } // from try @ 03609b84 with catch @ 03609ce8 */
                    /* catch() { ... } // from try @ 03609ba8 with catch @ 03609cec */
                    /* catch() { ... } // from try @ 03609c08 with catch @ 03609cf0 */
                    /* catch() { ... } // from try @ 03609bc0 with catch @ 03609cf4 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03609c20 with catch @ 03609cf8 */
                    /* catch() { ... } // from try @ 03609bc8 with catch @ 03609cfc */
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
                    /* catch() { ... } // from try @ 03609be4 with catch @ 03609d00 */
                    /* catch() { ... } // from try @ 03609c28 with catch @ 03609d04 */
                    /* catch() { ... } // from try @ 03609a54 with catch @ 03609d08 */
    UnityEngine_Debug__Log((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03609bfc with catch @ 03609d0c */
    iVar1 = (__this->fields).KOMAKPPBFEM;
                    /* catch() { ... } // from try @ 03609b9c with catch @ 03609d10 */
                    /* catch() { ... } // from try @ 03609ce0 with catch @ 03609d14 */
    pGVar7 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03609c3c with catch @ 03609d18 */
    if (pGVar7 != (DialogsManager_o *)0x0) {
                    /* catch() { ... } // from try @ 03609a8c with catch @ 03609d1c */
                    /* catch() { ... } // from try @ 03609cc8 with catch @ 03609d20 */
                    /* catch() { ... } // from try @ 03609a58 with catch @ 03609d24 */
      pNVar14 = (pGVar7->fields)._AOOFDKJAALA_k__BackingField;
                    /* catch() { ... } // from try @ 03609a68 with catch @ 03609d28 */
                    /* catch() { ... } // from try @ 03609adc with catch @ 03609d2c */
                    /* catch() { ... } // from try @ 03609b00 with catch @ 03609d30 */
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 036099cc with catch @ 03609d34 */
                    /* catch() { ... } // from try @ 03609b18 with catch @ 03609d38 */
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
                    /* catch() { ... } // from try @ 03609af8 with catch @ 03609d3c */
                    /* catch() { ... } // from try @ 03609ae8 with catch @ 03609d40 */
                    /* catch() { ... } // from try @ 03609ac4 with catch @ 03609d44 */
                    /* catch() { ... } // from try @ 03609a3c with catch @ 03609d48 */
                    /* catch() { ... } // from try @ 03609cb0 with catch @ 03609d4c */
                    /* catch() { ... } // from try @ 03609a08 with catch @ 03609d50 */
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pNVar14,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03609cb8 with catch @ 03609d54
                       catch() { ... } // from try @ 03609cd0 with catch @ 03609d54 */
      if (bVar2) {
                    /* catch() { ... } // from try @ 036099d0 with catch @ 03609d58 */
        bVar2 = true;
                    /* catch() { ... } // from try @ 03609ca8 with catch @ 03609d5c */
      }
      else {
                    /* try { // try from 0360a0bc to 0370a0c3 has its CatchHandler @ 0360a668 */
        pGVar7 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 0360a0c4 to 0370a0ef has its CatchHandler @ 0360a71c */
        if ((pGVar7 == (DialogsManager_o *)0x0) ||
           (pNVar14 = (pGVar7->fields)._AOOFDKJAALA_k__BackingField,
           pNVar14 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0)) goto LAB_0360a63c;
        bVar2 = (pNVar14->fields).DialogIdentifier != 1;
      }
      if (!(bool)(bVar2 & iVar1 != 1)) {
        return false;
      }
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4027,
                 (MethodInfo *)0x0);
                    /* try { // try from 0360a108 to 0370a10b has its CatchHandler @ 0360a634 */
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0360a110 to 0370a117 has its CatchHandler @ 0360a6d4 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4028,
                 (MethodInfo *)0x0);
                    /* try { // try from 0360a128 to 0370a12f has its CatchHandler @ 0360a67c */
                    /* try { // try from 0360a134 to 0370a13b has its CatchHandler @ 0360a644 */
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0360a14c to 0370a153 has its CatchHandler @ 0360a6cc */
                    /* try { // try from 0360a154 to 0370a17f has its CatchHandler @ 0360a730 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4029,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0360a180 to 0370a19b has its CatchHandler @ 0360a700 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4030,
                 (MethodInfo *)0x0);
      pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 0360a1a0 to 0370a1ab has its CatchHandler @ 0360a7c0 */
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0360a1b4 to 0370a1bb has its CatchHandler @ 0360a728 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4031,
                 (MethodInfo *)0x0);
                    /* try { // try from 0360a1cc to 0370a1d3 has its CatchHandler @ 0360a6f0 */
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0360a1d8 to 0370a1df has its CatchHandler @ 0360a704 */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4032,
                 (MethodInfo *)0x0);
                    /* try { // try from 0360a1f0 to 0370a1f7 has its CatchHandler @ 0360a72c */
      pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 0360a1f8 to 0370a20b has its CatchHandler @ 0360a6f4 */
                    /* try { // try from 0360a210 to 0370a21b has its CatchHandler @ 0360a6fc */
                    /* try { // try from 0360a234 to 0370a237 has its CatchHandler @ 0360a604 */
                    /* try { // try from 0360a238 to 0370a23f has its CatchHandler @ 0360a6c8 */
                    /* try { // try from 0360a240 to 0370a24b has its CatchHandler @ 0360a6a4 */
      pNVar14 = DialogsOpener__JNDPLPKDPCP
                          (pSVar6,pSVar9,pSVar10,StringLiteral_1/*""*/,(System_Action_object__o *)0x0,1,0,
                           false,false,StringLiteral_1/*""*/,true,true,true,true,(MethodInfo *)0x0);
      if (pNVar14 != (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
        (pNVar14->fields).DialogIdentifier = 1;
        return false;
      }
    }
    goto LAB_0360a63c;
  }
  if ((__this->fields).KOMAKPPBFEM == 1) {
LAB_0360a264:
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0360a278 to 0370a27b has its CatchHandler @ 0360a630 */
                    /* try { // try from 0360a27c to 0370a2ab has its CatchHandler @ 0360a73c */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4024,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
    pSVar13 = (System_RuntimeFieldHandle_Fields *)
              &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_37;
  }
  else {
                    /* try { // try from 0360a2ac to 0370a2bb has its CatchHandler @ 0360a720 */
    pGVar7 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pGVar7 == (DialogsManager_o *)0x0) goto LAB_0360a63c;
    pNVar14 = (pGVar7->fields)._AOOFDKJAALA_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 0360a2e0 to 0370a2e3 has its CatchHandler @ 0360a600 */
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
                    /* try { // try from 0360a2e4 to 0370a2ef has its CatchHandler @ 0360a694 */
    if (!bVar2) {
      pGVar7 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
      if ((pGVar7 == (DialogsManager_o *)0x0) ||
         (pNVar14 = (pGVar7->fields)._AOOFDKJAALA_k__BackingField,
         pNVar14 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0)) goto LAB_0360a63c;
                    /* try { // try from 0360a300 to 0370a307 has its CatchHandler @ 0360a6c0 */
      if ((pNVar14->fields).DialogIdentifier == 2) goto LAB_0360a264;
    }
                    /* try { // try from 0360a310 to 0370a317 has its CatchHandler @ 0360a690 */
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0360a328 to 0370a32f has its CatchHandler @ 0360a6b0 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4013,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0360a334 to 0370a33b has its CatchHandler @ 0360a6b8 */
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0360a34c to 0370a353 has its CatchHandler @ 0360a648 */
                    /* try { // try from 0360a354 to 0370a37f has its CatchHandler @ 0360a6f8 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4014,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4015,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0360a394 to 0370a39b has its CatchHandler @ 0360a6bc */
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0360a3a0 to 0370a3a7 has its CatchHandler @ 0360a6b4 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4016,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0360a3b8 to 0370a3bf has its CatchHandler @ 0360a69c */
                    /* try { // try from 0360a3c4 to 0370a3cb has its CatchHandler @ 0360a64c */
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    pSVar10 = IMAPABEJECG__KCHJCGEMCGE((MethodInfo *)0x0);
                    /* try { // try from 0360a3dc to 0370a3e3 has its CatchHandler @ 0360a678 */
                    /* try { // try from 0360a3e4 to 0370a40f has its CatchHandler @ 0360a710 */
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4017,(MethodInfo *)0x0)
    ;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4018,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0360a428 to 0370a42b has its CatchHandler @ 0360a68c */
                    /* try { // try from 0360a430 to 0370a437 has its CatchHandler @ 0360a6a8 */
    pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat(pSVar9,pSVar10,pSVar11,(MethodInfo *)0x0);
                    /* try { // try from 0360a448 to 0370a44f has its CatchHandler @ 0360a664 */
                    /* try { // try from 0360a454 to 0370a45b has its CatchHandler @ 0360a684 */
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0360a46c to 0370a473 has its CatchHandler @ 0360a660 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4019,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0360a474 to 0370a49f has its CatchHandler @ 0360a6e0 */
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4020,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0360a4a0 to 0370a4bb has its CatchHandler @ 0360a6dc */
    pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0360a4d0 to 0370a4db has its CatchHandler @ 0360a82c */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4021,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0360a4dc to 0370a547 has its CatchHandler @ 03609368 */
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4022,(MethodInfo *)0x0)
    ;
    pSVar11 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
    pSVar12 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
                    /* try { // try from 0360a548 to 0370a55b has its CatchHandler @ 0360a89c */
                    /* try { // try from 0360a55c to 0370a55f has its CatchHandler @ 0360a7cc */
                    /* try { // try from 0360a560 to 0370a563 has its CatchHandler @ 0360a74c */
                    /* try { // try from 0360a564 to 0370a567 has its CatchHandler @ 0360a748 */
                    /* try { // try from 0360a568 to 0370a56f has its CatchHandler @ 0360a744 */
                    /* try { // try from 0360a570 to 0370a573 has its CatchHandler @ 0360a714 */
                    /* try { // try from 0360a574 to 0370a577 has its CatchHandler @ 0360a6e8 */
                    /* try { // try from 0360a578 to 0370a583 has its CatchHandler @ 03609368 */
                    /* try { // try from 0360a584 to 0370a597 has its CatchHandler @ 0360a89c */
    pNVar14 = DialogsOpener__JNDPLPKDPCP
                        (pSVar6,pSVar9,pSVar10,pSVar11,pSVar12,2,0,false,false,StringLiteral_1/*""*/,true,
                         true,true,true,(MethodInfo *)0x0);
    if (pNVar14 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
LAB_0360a63c:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0360a008 with catch @ 0360a63c */
      FUN_01bab8c8();
    }
    (pNVar14->fields).DialogIdentifier = 2;
                    /* try { // try from 0360a598 to 0370a59b has its CatchHandler @ 0360a6d0 */
                    /* try { // try from 0360a59c to 0370a59f has its CatchHandler @ 0360a6ac */
                    /* try { // try from 0360a5a0 to 0370a5a3 has its CatchHandler @ 0360a6a0 */
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0360a5a4 to 0370a5a7 has its CatchHandler @ 0360a698 */
                    /* try { // try from 0360a5a8 to 0370a5ab has its CatchHandler @ 0360a708 */
                    /* try { // try from 0360a5ac to 0370a5af has its CatchHandler @ 0360a6e4 */
                    /* try { // try from 0360a5b0 to 0370a5b3 has its CatchHandler @ 0360a708 */
                    /* try { // try from 0360a5b4 to 0370a5b7 has its CatchHandler @ 0360a66c */
                    /* try { // try from 0360a5b8 to 0370a5bb has its CatchHandler @ 0360a658 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4023,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0360a5bc to 0370a5bf has its CatchHandler @ 0360a654 */
                    /* try { // try from 0360a5c0 to 0370a5c3 has its CatchHandler @ 0360a650 */
                    /* try { // try from 0360a5c4 to 0370a5c7 has its CatchHandler @ 0360a6e4 */
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
                    /* try { // try from 0360a5c8 to 0370a5cf has its CatchHandler @ 0360a620 */
    pSVar13 = (System_RuntimeFieldHandle_Fields *)
              &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_36;
  }
LAB_0360a5d0:
                    /* try { // try from 0360a5d0 to 0370a5d3 has its CatchHandler @ 0360a61c */
                    /* try { // try from 0360a5d4 to 0370a5d7 has its CatchHandler @ 0360a618 */
                    /* try { // try from 0360a5d8 to 0370a5db has its CatchHandler @ 0360a614 */
                    /* try { // try from 0360a5dc to 0370a5df has its CatchHandler @ 0360a610 */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,(System_RuntimeFieldHandle_o)pSVar13->value,(MethodInfo *)0x0)
  ;
                    /* catch() { ... } // from try @ 036098a4 with catch @ 0360a5e0
                       try { // try from 0360a5e0 to 0370a76f has its CatchHandler @ 03609368 */
                    /* catch() { ... } // from try @ 03609d88 with catch @ 0360a5ec */
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036097dc with catch @ 0360a5f8 */
                    /* catch() { ... } // from try @ 03609fc0 with catch @ 0360a5fc */
                    /* catch() { ... } // from try @ 0360a2e0 with catch @ 0360a600 */
                    /* catch() { ... } // from try @ 0360a234 with catch @ 0360a604 */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0360980c with catch @ 0360a608 */
                    /* catch() { ... } // from try @ 03609868 with catch @ 0360a60c */
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* catch() { ... } // from try @ 0360a5dc with catch @ 0360a610 */
                    /* catch() { ... } // from try @ 0360a5d8 with catch @ 0360a614 */
                    /* catch() { ... } // from try @ 0360a5d4 with catch @ 0360a618 */
  UnityEngine_Debug__Log((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0360a5d0 with catch @ 0360a61c */
                    /* catch() { ... } // from try @ 0360a5c8 with catch @ 0360a620 */
                    /* catch() { ... } // from try @ 036097e0 with catch @ 0360a624 */
                    /* catch() { ... } // from try @ 036097f4 with catch @ 0360a628 */
                    /* catch() { ... } // from try @ 03609f58 with catch @ 0360a62c */
                    /* catch() { ... } // from try @ 0360a278 with catch @ 0360a630 */
                    /* catch() { ... } // from try @ 0360a108 with catch @ 0360a634 */
                    /* catch() { ... } // from try @ 0360a098 with catch @ 0360a638 */
  return false;
}


// ===== public void ALADOEDCONI(Action CJNHFNHJHPE)  [RVA 0x350A640]
// FKDLCJJOGIP$$ALADOEDCONI @ RVA 0x350A640

void FKDLCJJOGIP__ALADOEDCONI(FKDLCJJOGIP_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *a;
  
                    /* catch() { ... } // from try @ 0360a074 with catch @ 0360a640 */
                    /* catch() { ... } // from try @ 0360a134 with catch @ 0360a644 */
                    /* catch() { ... } // from try @ 0360a34c with catch @ 0360a648 */
                    /* catch() { ... } // from try @ 0360a3c4 with catch @ 0360a64c */
                    /* catch() { ... } // from try @ 0360a5c0 with catch @ 0360a650 */
                    /* catch() { ... } // from try @ 0360a5bc with catch @ 0360a654 */
                    /* catch() { ... } // from try @ 0360a5b8 with catch @ 0360a658 */
                    /* catch() { ... } // from try @ 03609ff0 with catch @ 0360a65c */
  if ((DAT_045688bf & 1) == 0) {
                    /* catch() { ... } // from try @ 0360a46c with catch @ 0360a660 */
                    /* catch() { ... } // from try @ 0360a448 with catch @ 0360a664 */
                    /* catch() { ... } // from try @ 0360a0bc with catch @ 0360a668 */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 0360a5b4 with catch @ 0360a66c */
                    /* catch() { ... } // from try @ 0360a080 with catch @ 0360a670 */
    DAT_045688bf = 1;
  }
                    /* catch() { ... } // from try @ 0360a02c with catch @ 0360a674 */
                    /* catch() { ... } // from try @ 0360a3dc with catch @ 0360a678 */
                    /* catch() { ... } // from try @ 0360a128 with catch @ 0360a67c */
  a = (__this->fields).JFCAFEOAKBH;
                    /* catch() { ... } // from try @ 03609fc4 with catch @ 0360a680 */
                    /* catch() { ... } // from try @ 0360a454 with catch @ 0360a684 */
                    /* catch() { ... } // from try @ 0360a0a4 with catch @ 0360a688 */
                    /* catch() { ... } // from try @ 0360a428 with catch @ 0360a68c */
                    /* catch() { ... } // from try @ 0360a310 with catch @ 0360a690 */
                    /* catch() { ... } // from try @ 0360a2e4 with catch @ 0360a694 */
                    /* catch() { ... } // from try @ 0360a5a4 with catch @ 0360a698 */
                    /* catch() { ... } // from try @ 0360a3b8 with catch @ 0360a69c */
                    /* catch() { ... } // from try @ 0360a5a0 with catch @ 0360a6a0 */
                    /* catch() { ... } // from try @ 0360a240 with catch @ 0360a6a4 */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* catch() { ... } // from try @ 0360a430 with catch @ 0360a6a8 */
                    /* catch() { ... } // from try @ 0360a59c with catch @ 0360a6ac */
                    /* catch() { ... } // from try @ 0360a328 with catch @ 0360a6b0 */
                    /* catch() { ... } // from try @ 0360a3a0 with catch @ 0360a6b4 */
    pSVar3 = (System_Action_o *)FUN_01c07368(&__this->fields,pSVar2,a);
                    /* catch() { ... } // from try @ 0360a334 with catch @ 0360a6b8 */
    bVar1 = a == pSVar3;
    a = pSVar3;
                    /* catch() { ... } // from try @ 0360a394 with catch @ 0360a6bc */
                    /* catch() { ... } // from try @ 0360a300 with catch @ 0360a6c0 */
    if (bVar1) {
                    /* catch() { ... } // from try @ 03609fe0 with catch @ 0360a6c4 */
                    /* catch() { ... } // from try @ 0360a238 with catch @ 0360a6c8 */
                    /* catch() { ... } // from try @ 0360a14c with catch @ 0360a6cc */
                    /* catch() { ... } // from try @ 0360a598 with catch @ 0360a6d0 */
      return;
    }
  }
                    /* catch() { ... } // from try @ 0360a110 with catch @ 0360a6d4 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0360a014 with catch @ 0360a6d8 */
  FUN_01babc64(pSVar2);
}


// ===== private void NCFCMNMPJGF()  [RVA 0x350A6DC]
// FKDLCJJOGIP$$NCFCMNMPJGF @ RVA 0x350A6DC

void FKDLCJJOGIP__NCFCMNMPJGF(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  RaidManager_o *pCVar2;
  NODLJPNGNBG_o *pNVar3;
  NDPMLPGANCI_o *pNVar4;
  PlayerData_o *__this_00;
  int64_t iVar5;
  SFRequestSender_o *__this_01;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *CELOLGNMKCG;
  NGOFOPOGBMJ_o *__this_02;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  AADKBCFCLKK_o *pAVar6;
  
                    /* catch() { ... } // from try @ 0360a4a0 with catch @ 0360a6dc */
                    /* catch() { ... } // from try @ 0360a474 with catch @ 0360a6e0 */
                    /* catch() { ... } // from try @ 0360a5ac with catch @ 0360a6e4
                       catch() { ... } // from try @ 0360a5c4 with catch @ 0360a6e4 */
                    /* catch() { ... } // from try @ 0360a574 with catch @ 0360a6e8 */
                    /* catch() { ... } // from try @ 03609f18 with catch @ 0360a6ec */
                    /* catch() { ... } // from try @ 0360a1cc with catch @ 0360a6f0 */
                    /* catch() { ... } // from try @ 0360a1f8 with catch @ 0360a6f4 */
                    /* catch() { ... } // from try @ 0360a354 with catch @ 0360a6f8 */
                    /* catch() { ... } // from try @ 0360a210 with catch @ 0360a6fc */
                    /* catch() { ... } // from try @ 0360a180 with catch @ 0360a700 */
  if ((DAT_045688c0 & 1) == 0) {
                    /* catch() { ... } // from try @ 0360a1d8 with catch @ 0360a704 */
                    /* catch() { ... } // from try @ 0360a5a8 with catch @ 0360a708
                       catch() { ... } // from try @ 0360a5b0 with catch @ 0360a708 */
                    /* catch() { ... } // from try @ 0360a034 with catch @ 0360a70c */
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
                    /* catch() { ... } // from try @ 0360a3e4 with catch @ 0360a710 */
                    /* catch() { ... } // from try @ 0360a570 with catch @ 0360a714 */
                    /* catch() { ... } // from try @ 03609f24 with catch @ 0360a718 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4033);
                    /* catch() { ... } // from try @ 0360a0c4 with catch @ 0360a71c */
                    /* catch() { ... } // from try @ 0360a2ac with catch @ 0360a720 */
                    /* catch() { ... } // from try @ 03609f8c with catch @ 0360a724 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4034);
                    /* catch() { ... } // from try @ 0360a1b4 with catch @ 0360a728 */
                    /* catch() { ... } // from try @ 0360a1f0 with catch @ 0360a72c */
                    /* catch() { ... } // from try @ 0360a154 with catch @ 0360a730 */
    FUN_01bab630(&byte___TypeInfo);
                    /* catch() { ... } // from try @ 03609ed0 with catch @ 0360a734 */
                    /* catch() { ... } // from try @ 03609f5c with catch @ 0360a738 */
                    /* catch() { ... } // from try @ 0360a27c with catch @ 0360a73c */
    FUN_01bab630(&Method_FKDLCJJOGIP_FHJKIMLIDMP__);
                    /* catch() { ... } // from try @ 03609c84 with catch @ 0360a740 */
                    /* catch() { ... } // from try @ 0360a568 with catch @ 0360a744 */
                    /* catch() { ... } // from try @ 0360a564 with catch @ 0360a748 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* catch() { ... } // from try @ 0360a560 with catch @ 0360a74c */
                    /* catch() { ... } // from try @ 03609994 with catch @ 0360a750 */
                    /* catch() { ... } // from try @ 0360996c with catch @ 0360a754 */
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
    DAT_045688c0 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
                    /* try { // try from 0360a770 to 0370a773 has its CatchHandler @ 0360a798 */
                    /* try { // try from 0360a774 to 0370a7a7 has its CatchHandler @ 03609368 */
  pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar2 != (RaidManager_o *)0x0) {
    pAVar6 = (pCVar2->fields).AABMLCNHHPN;
    if (pAVar6 != (AADKBCFCLKK_o *)0x0) {
      pNVar3 = RaidManager__AFHLHFMLNEO
                         ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                          (pAVar6->fields).MPAIPMANDEO,(MethodInfo *)0x0);
      if (pNVar3 == (NODLJPNGNBG_o *)0x0) goto LAB_0360a948;
                    /* catch() { ... } // from try @ 0360a770 with catch @ 0360a798 */
      if ((pNVar3->fields).PFJPLCAIGJH != 3) {
        pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 0360a7a8 to 0370a7bb has its CatchHandler @ 0360a89c */
        if (pNVar4 == (NDPMLPGANCI_o *)0x0) goto LAB_0360a948;
        iVar1 = NDPMLPGANCI__FFIOCEOHPEM(pNVar4,(MethodInfo *)0x0);
        if (iVar1 == 2) {
                    /* catch() { ... } // from try @ 03609f00 with catch @ 0360a7bc
                       try { // try from 0360a7bc to 0370a7ef has its CatchHandler @ 03609368 */
                    /* catch() { ... } // from try @ 0360a1a0 with catch @ 0360a7c0 */
                    /* catch() { ... } // from try @ 03609ed4 with catch @ 0360a7c4 */
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03609ee0 with catch @ 0360a7c8 */
            thunk_FUN_01ba7564();
          }
                    /* catch() { ... } // from try @ 0360a55c with catch @ 0360a7cc */
                    /* catch() { ... } // from try @ 03609eb4 with catch @ 0360a7d0 */
          pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03609780 with catch @ 0360a7d4 */
          if (pCVar2 == (RaidManager_o *)0x0) goto LAB_0360a948;
          (pCVar2->fields).GBGHPLFONHD = true;
        }
        else {
          DialogsOpener__OCJEIOMBDKP((MethodInfo *)0x0);
        }
      }
    }
                    /* try { // try from 0360a7f0 to 0370a7f3 has its CatchHandler @ 0360a810 */
                    /* try { // try from 0360a7f4 to 0370a817 has its CatchHandler @ 03609368 */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (PlayerData_o *)0x0) {
      iVar5 = PlayerData__DHLIBNAGDAD(__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0360a7f0 with catch @ 0360a810 */
      if (iVar5 == 0) {
        return;
      }
                    /* try { // try from 0360a818 to 0370a82b has its CatchHandler @ 0360a89c */
      if (pAVar6 == (AADKBCFCLKK_o *)0x0) {
        pNVar4 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pNVar4 == (NDPMLPGANCI_o *)0x0) goto LAB_0360a948;
                    /* catch() { ... } // from try @ 0360a4d0 with catch @ 0360a82c
                       try { // try from 0360a82c to 0370a843 has its CatchHandler @ 03609368 */
        NDPMLPGANCI__PHFCKPKDMBK(pNVar4,true,true,(MethodInfo *)0x0);
      }
                    /* try { // try from 0360a844 to 0370a847 has its CatchHandler @ 0360a870 */
                    /* try { // try from 0360a848 to 0370a87f has its CatchHandler @ 03609368 */
      __this_01 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0360a844 with catch @ 0360a870 */
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0360a880 to 0370a887 has its CatchHandler @ 0360a89c */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4033,
                 (MethodInfo *)0x0);
                    /* try { // try from 0360a888 to 0370a893 has its CatchHandler @ 03609368 */
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0360a894 to 0370a89b has its CatchHandler @ 0360a89c */
                    /* catch() { ... } // from try @ 0360a548 with catch @ 0360a89c
                       catch() { ... } // from try @ 0360a584 with catch @ 0360a89c
                       catch() { ... } // from try @ 0360a7a8 with catch @ 0360a89c
                       catch() { ... } // from try @ 0360a818 with catch @ 0360a89c
                       catch() { ... } // from try @ 0360a880 with catch @ 0360a89c
                       catch() { ... } // from try @ 0360a894 with catch @ 0360a89c */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4034,
                 (MethodInfo *)0x0);
      CELOLGNMKCG = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      __this_02 = (NGOFOPOGBMJ_o *)thunk_FUN_01bda818(NGOFOPOGBMJ_TypeInfo);
      NGOFOPOGBMJ___ctor(__this_02,(MethodInfo *)0x0);
      if (__this_02 != (NGOFOPOGBMJ_o *)0x0) {
        (__this_02->fields).GDKPGIBMFPA = iVar5;
        BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (SFRequestSender_o *)0x0) {
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)__this_01,CELOLGNMKCG,(Google_Protobuf_IMessage_o *)__this_02,
                     BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0360a948:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void .ctor()  [RVA 0x350A94C]
// FKDLCJJOGIP$$.ctor @ RVA 0x350A94C

void FKDLCJJOGIP___ctor(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  RaidConfig_o *pJVar2;
  SFRequestSender_o *pKVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Action_o *pSVar4;
  
  if ((DAT_045688c1 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_FKDLCJJOGIP_BADKKABIPKK__);
    FUN_01bab630(&Method_FKDLCJJOGIP_EHCGDODIIGF__);
    FUN_01bab630(&Method_FKDLCJJOGIP_HJCDCLJFPMJ__);
    FUN_01bab630(&Method_FKDLCJJOGIP_JDLNMHBDBJK__);
    FUN_01bab630(&Method_FKDLCJJOGIP_KBODALOCELJ__);
    FUN_01bab630(&Method_FKDLCJJOGIP_PFHELBLKCDK__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_FKDLCJJOGIP_<>c_CNMLPFGBFED__);
    FUN_01bab630(&Method_FKDLCJJOGIP_<>c_EAHKMGLBGHL__);
    FUN_01bab630(&FKDLCJJOGIP_<>c_TypeInfo);
    DAT_045688c1 = 1;
    method = extraout_x1;
  }
  if ((FKDLCJJOGIP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FKDLCJJOGIP_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar4 = FKDLCJJOGIP_<>c_TypeInfo->static_fields->__9__24_0;
  if (pSVar4 == (System_Action_o *)0x0) {
    if ((FKDLCJJOGIP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FKDLCJJOGIP_<>c_TypeInfo,method);
    }
    pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    ppSVar1 = &FKDLCJJOGIP_<>c_TypeInfo->static_fields->__9__24_0;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
  }
  if (__this != (FKDLCJJOGIP_o *)0x0) {
    (__this->fields).JFCAFEOAKBH = pSVar4;
    thunk_FUN_01c20e04(&__this->fields,pSVar4);
    if ((FKDLCJJOGIP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = FKDLCJJOGIP_<>c_TypeInfo->static_fields->__9__24_1;
    if (pSVar4 == (System_Action_o *)0x0) {
      if ((FKDLCJJOGIP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar1 = &FKDLCJJOGIP_<>c_TypeInfo->static_fields->__9__24_1;
      *ppSVar1 = pSVar4;
      thunk_FUN_01c20e04(ppSVar1,pSVar4);
    }
    ppSVar1 = &(__this->fields).NLKPBBPPKCJ;
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pJVar2 != (RaidConfig_o *)0x0) {
      RaidConfig__HFGKCGLMKNG(pJVar2,pSVar4,(MethodInfo *)0x0);
      pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pJVar2 != (RaidConfig_o *)0x0) {
        RaidConfig__DACLMDDNEBN(pJVar2,pSVar4,(MethodInfo *)0x0);
        pKVar3 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
        pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pKVar3 != (SFRequestSender_o *)0x0) {
          SFRequestSender__KGJHOLAEPAI(pKVar3,pSVar4,(MethodInfo *)0x0);
          pKVar3 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
          pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0360ac34 to 0370ae17 has its CatchHandler @ 0360ac34
                       catch() { ... } // from try @ 0360ac34 with catch @ 0360ac34
                       catch() { ... } // from try @ 0360aea0 with catch @ 0360ac34
                       catch() { ... } // from try @ 0360af68 with catch @ 0360ac34
                       catch() { ... } // from try @ 0360af90 with catch @ 0360ac34
                       catch() { ... } // from try @ 0360afc4 with catch @ 0360ac34 */
          System_Action___ctor();
          if (pKVar3 != (SFRequestSender_o *)0x0) {
            SFRequestSender__PJOBAFCNJAM(pKVar3,pSVar4,(MethodInfo *)0x0);
            pKVar3 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
            pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pKVar3 != (SFRequestSender_o *)0x0) {
              SFRequestSender__HKAALOKPBPG(pKVar3,pSVar4,(MethodInfo *)0x0);
              pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
              method_00 = Method_FKDLCJJOGIP_BADKKABIPKK__;
              System_Action___ctor();
              FKDLCJJOGIP__ALADOEDCONI(__this,pSVar4,method_00);
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


// ===== public void LGBOGFICFPF()  [RVA 0x3509114]
// FKDLCJJOGIP$$LGBOGFICFPF @ RVA 0x3509114

void FKDLCJJOGIP__LGBOGFICFPF(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  
  if ((__this->fields)._MEAPCEHFFHD_k__BackingField == false) {
    FKDLCJJOGIP__GIENGNEGHPJ(__this,0,in_x2);
    return;
  }
  bVar1 = FKDLCJJOGIP__JJAAFACCDCP(__this,true,in_x2);
  if (bVar1) {
    FKDLCJJOGIP__NCFCMNMPJGF(__this,method_00);
    return;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__PHFCKPKDMBK(__this_00,false,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BADKKABIPKK()  [RVA 0x350AFE4]
// FKDLCJJOGIP$$BADKKABIPKK @ RVA 0x350AFE4

void FKDLCJJOGIP__BADKKABIPKK(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *exists;
  undefined1 auVar3 [16];
  
  if ((DAT_045688c2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_045688c2 = 1;
    method = extraout_x1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  auVar3._8_8_ = method;
  auVar3._0_8_ = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    auVar3 = FUN_01b81620(lVar2,method);
  }
  lVar2 = *(long *)(*(long *)(auVar3._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620(lVar2,auVar3._8_8_);
  }
  exists = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if (bVar1) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
        (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
      Nekki_SF2_GUI_Map_MapScene__CloseRaids
                ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8),(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void GIENGNEGHPJ(GGDMJFCJJFH KEMDLBKINAD)  [RVA 0x350ACDC]
// FKDLCJJOGIP$$GIENGNEGHPJ @ RVA 0x350ACDC

void FKDLCJJOGIP__GIENGNEGHPJ(FKDLCJJOGIP_o *__this,int32_t KEMDLBKINAD,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str1;
  NDPMLPGANCI_o *pNVar5;
  RaidConfig_o *__this_00;
  SFRequestSender_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Enum_o local_68;
  int32_t local_58;
  
  if ((DAT_045688c3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_38);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4035);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4036);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4037);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GGDMJFCJJFH_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_045688c3 = 1;
  }
  (__this->fields).KOMAKPPBFEM = KEMDLBKINAD;
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4035,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4036,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  local_68.klass = (System_Enum_c *)GGDMJFCJJFH_TypeInfo;
  local_68.monitor = (void *)0xffffffffffffffff;
  local_58 = KEMDLBKINAD;
  str1 = System_Enum__ToString(&local_68,(MethodInfo *)0x0);
                    /* try { // try from 0360ae18 to 0370ae1f has its CatchHandler @ 0360af7c */
  pSVar4 = System_String__Concat(pSVar4,str1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0360ae34 to 0370ae3b has its CatchHandler @ 0360af78 */
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  bVar1 = FKDLCJJOGIP__PMINMFLPJCB(__this,method_00);
  if (bVar1) {
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = GameUtils__PKNDHONBNIF((MethodInfo *)0x0);
    if (bVar1) {
      if ((__this->fields)._OHFODMIBJME_k__BackingField == false) {
                    /* try { // try from 0360ae7c to 0370ae9f has its CatchHandler @ 0360af6c */
        pNVar5 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pNVar5 != (NDPMLPGANCI_o *)0x0) {
                    /* try { // try from 0360aea0 to 0370af5b has its CatchHandler @ 0360ac34 */
          NDPMLPGANCI__PHFCKPKDMBK(pNVar5,(__this->fields).KOMAKPPBFEM != 1,true,(MethodInfo *)0x0);
          (__this->fields)._OHFODMIBJME_k__BackingField = true;
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          if (__this_00 != (RaidConfig_o *)0x0) {
            RaidConfig__GIENGNEGHPJ(__this_00,(MethodInfo *)0x0);
            return;
          }
        }
LAB_0360afe0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    else {
                    /* try { // try from 0360af8c to 0370af8f has its CatchHandler @ 0360afb4 */
                    /* try { // try from 0360af90 to 0370afbb has its CatchHandler @ 0360ac34 */
      if ((__this->fields).KOMAKPPBFEM != 1) {
        if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        GameUtils__OIPLCHEIFNJ((MethodInfo *)0x0);
      }
                    /* catch() { ... } // from try @ 0360af8c with catch @ 0360afb4 */
      __this_01 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
      if (__this_01 == (SFRequestSender_o *)0x0) goto LAB_0360afe0;
                    /* try { // try from 0360afbc to 0370afc3 has its CatchHandler @ 0360afd8 */
      SFRequestSender__FHIODBIPGBG(__this_01,(MethodInfo *)0x0);
    }
  }
  else {
    pNVar5 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar5 == (NDPMLPGANCI_o *)0x0) goto LAB_0360afe0;
    NDPMLPGANCI__PHFCKPKDMBK(pNVar5,false,true,(MethodInfo *)0x0);
    if ((__this->fields)._OHFODMIBJME_k__BackingField != false) {
      FKDLCJJOGIP__JDLNMHBDBJK(__this,method_01);
      FKDLCJJOGIP__EHCGDODIIGF(__this,method_02);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4037,
                 (MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_38,(MethodInfo *)0x0
                );
                    /* try { // try from 0360af5c to 0370af5f has its CatchHandler @ 0360af70 */
                    /* try { // try from 0360af60 to 0370af67 has its CatchHandler @ 0360af74 */
      pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0360af68 to 0370af8b has its CatchHandler @ 0360ac34 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360ae7c with catch @ 0360af6c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360af5c with catch @ 0360af70
                        */
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360af60 with catch @ 0360af74
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360ae34 with catch @ 0360af78
                        */
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0360ae18 with catch @ 0360af7c
                        */
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
    }
  }
                    /* try { // try from 0360afc4 to 0370afcf has its CatchHandler @ 0360ac34 */
                    /* try { // try from 0360afd0 to 0370afd7 has its CatchHandler @ 0360afd8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0360afbc with catch @ 0360afd8
                       catch(type#2 @ 00000000) { ... } // from try @ 0360afd0 with catch @ 0360afd8
                        */
  return;
}


// ===== public void AJLLLOFFOHF(Action CJNHFNHJHPE)  [RVA 0x350B0D0]
// FKDLCJJOGIP$$AJLLLOFFOHF @ RVA 0x350B0D0

void FKDLCJJOGIP__AJLLLOFFOHF(FKDLCJJOGIP_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_045688c4 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045688c4 = 1;
  }
  ppSVar4 = &(__this->fields).NLKPBBPPKCJ;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public static FKDLCJJOGIP AIHNLLGNBLC()  [RVA 0x350B16C]
// FKDLCJJOGIP$$AIHNLLGNBLC @ RVA 0x350B16C

FKDLCJJOGIP_o * FKDLCJJOGIP__AIHNLLGNBLC(MethodInfo *method)

{
  FKDLCJJOGIP_o *__this;
  undefined1 auVar1 [16];
  
  if ((DAT_045688c5 & 1) == 0) {
    FUN_01bab630(&FKDLCJJOGIP_TypeInfo);
    DAT_045688c5 = 1;
  }
  __this = FKDLCJJOGIP_TypeInfo->static_fields->CBDMFFMCJBK;
  if (__this == (FKDLCJJOGIP_o *)0x0) {
    auVar1 = thunk_FUN_01bda818();
    __this = auVar1._0_8_;
    FKDLCJJOGIP___ctor(__this,auVar1._8_8_);
    FKDLCJJOGIP_TypeInfo->static_fields->CBDMFFMCJBK = __this;
    thunk_FUN_01c20e04(FKDLCJJOGIP_TypeInfo->static_fields,__this);
  }
  return __this;
}


// ===== public void BBDBCNEEGFB()  [RVA 0x350B1E4]
// FKDLCJJOGIP$$BBDBCNEEGFB @ RVA 0x350B1E4

void FKDLCJJOGIP__BBDBCNEEGFB(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  AAPGCAPGBLG_o *pAVar4;
  PlayerData_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  Roster_o *pAVar5;
  LPAPAMPGDFN_o *pLVar6;
  
  if ((DAT_045688c6 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8738/*"MODELS"*/);
    FUN_01bab630(&StringLiteral_15259/*"ZONE_RAID"*/);
    FUN_01bab630(&StringLiteral_3674/*"CLANS"*/);
    DAT_045688c6 = 1;
    method = extraout_x1;
  }
  if ((__this->fields)._MEAPCEHFFHD_k__BackingField != false) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (Roster_o *)0x0) {
    bVar1 = false;
  }
  else {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar5 == (Roster_o *)0x0) ||
       (pLVar6 = (pAVar5->fields).LMCDOMHENMC, pLVar6 == (LPAPAMPGDFN_o *)0x0)) goto LAB_0360b3f4;
    bVar1 = (pLVar6->fields).AMIMEMOELHE == 0x32;
  }
  pAVar4 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pAVar4 != (AAPGCAPGBLG_o *)0x0) {
    bVar2 = AAPGCAPGBLG__LAAKLBPOMGP(pAVar4,StringLiteral_15259/*"ZONE_RAID"*/,(MethodInfo *)0x0);
    if (!bVar2) {
LAB_0360b3e4:
      IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0);
      return;
    }
    pAVar4 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pAVar4 != (AAPGCAPGBLG_o *)0x0) {
      bVar2 = AAPGCAPGBLG__LAAKLBPOMGP(pAVar4,StringLiteral_3674/*"CLANS"*/,(MethodInfo *)0x0);
      if (!bVar2) goto LAB_0360b3e4;
      pAVar4 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pAVar4 != (AAPGCAPGBLG_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        bVar3 = AAPGCAPGBLG__LAAKLBPOMGP(pAVar4,StringLiteral_8738/*"MODELS"*/,(MethodInfo *)0x0);
        bVar2 = IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0);
        if (!bVar1 && ((bVar3 ^ 0xffU) & 1) == 0) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (__this_00 == (PlayerData_o *)0x0) goto LAB_0360b3f4;
          bVar3 = PlayerData__NMFKMEFIIMP(__this_00,(MethodInfo *)0x0);
        }
        if ((bVar2 & bVar3) == 0) {
          return;
        }
        (__this->fields).KOMAKPPBFEM = 1;
        FKDLCJJOGIP__GIENGNEGHPJ(__this,1,method_00);
        return;
      }
    }
  }
LAB_0360b3f4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PFHELBLKCDK()  [RVA 0x350B3F8]
// FKDLCJJOGIP$$PFHELBLKCDK @ RVA 0x350B3F8

void FKDLCJJOGIP__PFHELBLKCDK(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  NDPMLPGANCI_o *pNVar6;
  CPNHNIKFGFB_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_o *pSVar7;
  
  if ((DAT_045688c7 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_39);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4038);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4039);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4040);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    DAT_045688c7 = 1;
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4038,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4039,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    method_01 = (MethodInfo *)0x0;
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Error(pSVar5,BBBLOLJAMJP,(MethodInfo *)0x0);
    if ((__this->fields).KOMAKPPBFEM != 1) {
      pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar6 == (NDPMLPGANCI_o *)0x0) goto LAB_0360b630;
      iVar2 = NDPMLPGANCI__FFIOCEOHPEM(pNVar6,(MethodInfo *)0x0);
      if (iVar2 != 6) {
        __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 == (CPNHNIKFGFB_o *)0x0) goto LAB_0360b630;
        method_01 = (MethodInfo *)0x0;
        CPNHNIKFGFB__DIGPCFKCCBK(__this_00,0x29c9,(MethodInfo *)0x0);
      }
    }
    bVar1 = FKDLCJJOGIP__JJAAFACCDCP(__this,false,method_01);
    (__this->fields)._MEAPCEHFFHD_k__BackingField = false;
    (__this->fields)._OHFODMIBJME_k__BackingField = false;
    FKDLCJJOGIP__OPFEMEHHPDI((FKDLCJJOGIP_o *)(ulong)bVar1,method_00);
    pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar6 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__PHFCKPKDMBK(pNVar6,false,true,(MethodInfo *)0x0);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4040,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_39,(MethodInfo *)0x0
                );
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      pSVar7 = (__this->fields).JFCAFEOAKBH;
      if (pSVar7 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0360b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar7->fields).super.super.invoke_impl)
                  ((pSVar7->fields).super.super.method_code,(pSVar7->fields).super.super.method);
        return;
      }
    }
  }
LAB_0360b630:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LJAKDBDIGDG(Action CJNHFNHJHPE)  [RVA 0x350B638]
// FKDLCJJOGIP$$LJAKDBDIGDG @ RVA 0x350B638

void FKDLCJJOGIP__LJAKDBDIGDG(FKDLCJJOGIP_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o *source;
  
  if ((DAT_045688c8 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_045688c8 = 1;
  }
  source = (__this->fields).JFCAFEOAKBH;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(&__this->fields,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void PKHALHOIGAB(bool GAIBPMHHPFO)  [RVA 0x350B6D4]
// FKDLCJJOGIP$$PKHALHOIGAB @ RVA 0x350B6D4

void FKDLCJJOGIP__PKHALHOIGAB(FKDLCJJOGIP_o *__this,bool GAIBPMHHPFO,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  
  if ((DAT_045688c9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_045688c9 = 1;
  }
  if (!GAIBPMHHPFO) {
    return;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
        (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
      Nekki_SF2_GUI_Map_MapScene__GoToRaidClick
                ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8),(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  FKDLCJJOGIP__LGBOGFICFPF(__this,method_00);
  return;
}


// ===== public bool JJAAFACCDCP(bool BLOGOHKEPHI)  [RVA 0x3508A50]
// FKDLCJJOGIP$$JJAAFACCDCP @ RVA 0x3508A50

bool FKDLCJJOGIP__JJAAFACCDCP(FKDLCJJOGIP_o *__this,bool BLOGOHKEPHI,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  RaidManager_o *__this_00;
  long lVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Map_MapScene_o *__this_01;
  
  method_00 = (MethodInfo *)(ulong)BLOGOHKEPHI;
                    /* try { // try from 03608a54 to 03708a5f has its CatchHandler @ 03608b68 */
  if ((DAT_045688ca & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_045688ca = 1;
    method_00 = extraout_x1;
  }
                    /* try { // try from 03608aa8 to 03708aab has its CatchHandler @ 03608b60 */
  bVar1 = FKDLCJJOGIP__PMINMFLPJCB(__this,method_00);
                    /* try { // try from 03608ab0 to 03708abb has its CatchHandler @ 03608b5c */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this_00 != (RaidManager_o *)0x0) {
    RaidManager__GJPOEDJOAAM(__this_00,bVar1 && BLOGOHKEPHI,(MethodInfo *)0x0);
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
                    /* try { // try from 03608b04 to 03708b07 has its CatchHandler @ 03608b50 */
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
                    /* try { // try from 03608b08 to 03708b2f has its CatchHandler @ 03608620 */
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    __this_01 = (Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar3 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03608b30 to 03708b33 has its CatchHandler @ 03608b70 */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 03608b34 to 03708b3b has its CatchHandler @ 03608b6c */
                    /* try { // try from 03608b3c to 03708b3f has its CatchHandler @ 03608b64 */
                    /* try { // try from 03608b40 to 03708b47 has its CatchHandler @ 03608b58 */
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar2) {
                    /* try { // try from 03608b48 to 03708b4b has its CatchHandler @ 03608b54 */
      if (__this_01 == (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_03608b78;
                    /* try { // try from 03608b4c to 03708b8b has its CatchHandler @ 03608620 */
                    /* catch() { ... } // from try @ 03608b04 with catch @ 03608b50 */
                    /* catch() { ... } // from try @ 03608b48 with catch @ 03608b54 */
      if (bVar1 && BLOGOHKEPHI) {
                    /* catch() { ... } // from try @ 03608b40 with catch @ 03608b58 */
        Nekki_SF2_GUI_Map_MapScene__OpenRaids(__this_01,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03608ab0 with catch @ 03608b5c */
      }
      else {
                    /* catch() { ... } // from try @ 03608aa8 with catch @ 03608b60 */
        Nekki_SF2_GUI_Map_MapScene__CloseRaids(__this_01,(MethodInfo *)0x0);
      }
    }
                    /* catch() { ... } // from try @ 03608b3c with catch @ 03608b64 */
                    /* catch() { ... } // from try @ 03608a54 with catch @ 03608b68 */
                    /* catch() { ... } // from try @ 03608b34 with catch @ 03608b6c */
                    /* catch() { ... } // from try @ 03608b30 with catch @ 03608b70 */
                    /* catch() { ... } // from try @ 03608a40 with catch @ 03608b74 */
    return bVar1 && BLOGOHKEPHI;
  }
LAB_03608b78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool JIHDIJJPABP()  [RVA 0x35094A8]
// FKDLCJJOGIP$$JIHDIJJPABP @ RVA 0x35094A8

bool FKDLCJJOGIP__JIHDIJJPABP(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  return (__this->fields).KOMAKPPBFEM == 1;
}


// ===== public bool EKGDCLHOBGK()  [RVA 0x350B7E0]
// FKDLCJJOGIP$$EKGDCLHOBGK @ RVA 0x350B7E0

bool FKDLCJJOGIP__EKGDCLHOBGK(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  return (__this->fields)._NFAAGONINOL_k__BackingField;
}


// ===== public bool LDFLMJFGEHF()  [RVA 0x350B7E8]
// FKDLCJJOGIP$$LDFLMJFGEHF @ RVA 0x350B7E8

bool FKDLCJJOGIP__LDFLMJFGEHF(FKDLCJJOGIP_o *__this,MethodInfo *method)

{
  return (__this->fields)._OHFODMIBJME_k__BackingField;
}


// ===== private void PINPGPLNBNJ(bool CJNHFNHJHPE)  [RVA 0x350B7F0]
// FKDLCJJOGIP$$PINPGPLNBNJ @ RVA 0x350B7F0

void FKDLCJJOGIP__PINPGPLNBNJ(FKDLCJJOGIP_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MEAPCEHFFHD_k__BackingField = CJNHFNHJHPE;
  return;
}

