// TypeDefIndex 1688
// Namespace: 
// public class AHMJMDBNMHO : HJNEOLCKEMD
// Fields:
//   private NILLKLHKLHG FKMMOOKKLBH; // 0x60
//   private Dictionary<string, List<HJNEOLCKEMD>> HENCEKHKNDD; // 0x68
//   private List<HJNEOLCKEMD> CMAFKNEPKDA; // 0x70

// ===== public void .ctor()  [RVA 0x31CFD18]
// AHMJMDBNMHO$$.ctor @ RVA 0x31CFD18

void AHMJMDBNMHO___ctor(AHMJMDBNMHO_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__List_HJNEOLCKEMD___o **ppSVar1;
  System_Collections_Generic_List_HJNEOLCKEMD__o *__this_01;
  System_Collections_Generic_List_HJNEOLCKEMD__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566c9b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HJNEOLCKEMD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HJNEOLCKEMD>_TypeInfo);
    DAT_04566c9b = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>__ctor__);
  ppSVar1 = &(__this->fields).HENCEKHKNDD;
  *ppSVar1 = (System_Collections_Generic_Dictionary_string__List_HJNEOLCKEMD___o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_HJNEOLCKEMD__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HJNEOLCKEMD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HJNEOLCKEMD>__ctor__);
  ppSVar2 = &(__this->fields).CMAFKNEPKDA;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x31CFDF4]
// AHMJMDBNMHO$$HNIHOIAMDPC @ RVA 0x31CFDF4

/* WARNING: Removing unreachable block (ram,0x032d0278) */

void AHMJMDBNMHO__HNIHOIAMDPC
               (AHMJMDBNMHO_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_HJNEOLCKEMD__o **ppSVar1;
  byte bVar2;
  bool bVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *JEIGFGPCGMM;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *FGLEGAOAEAO;
  NILLKLHKLHG_o *__this_00;
  NILLKLHKLHG_o **ppNVar7;
  long *plVar8;
  undefined8 *puVar9;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  System_Collections_Generic_List_HJNEOLCKEMD__o *pSVar10;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_04566c9c & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>_Add__);
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_5245/*"Default"*/);
    FUN_01bab630(&StringLiteral_4201/*"Case"*/);
    DAT_04566c9c = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0x1b,(MethodInfo *)0x0);
  (__this->fields).super._KPCCNJJEIAN_k__BackingField = false;
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar4,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
    pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
    bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar6,(MethodInfo *)0x0);
    if (!bVar3) {
      JEIGFGPCGMM = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                    thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
      System_Action<object>___ctor();
      FGLEGAOAEAO = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                    thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
      System_Action<object>___ctor();
      __this_00 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
      NILLKLHKLHG___ctor(__this_00,pSVar6,JEIGFGPCGMM,FGLEGAOAEAO,(Il2CppObject *)__this,
                         (MethodInfo *)0x0);
      ppNVar7 = &(__this->fields).FKMMOOKKLBH;
      *ppNVar7 = __this_00;
      thunk_FUN_01c20e04(ppNVar7,__this_00);
    }
    plVar8 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ppSVar1 = &(__this->fields).CMAFKNEPKDA;
      do {
        lVar11 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_032d0054;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_032d0054:
                    /* try { // try from 032d0054 to 033d027f has its CatchHandler @ 032d0054
                       catch() { ... } // from try @ 032d0054 with catch @ 032d0054
                       catch() { ... } // from try @ 032d02b8 with catch @ 032d0054
                       catch() { ... } // from try @ 032d0310 with catch @ 032d0054
                       catch() { ... } // from try @ 032d0338 with catch @ 032d0054
                       catch() { ... } // from try @ 032d036c with catch @ 032d0054 */
        uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar12 & 1) == 0) {
          plVar8 = (long *)thunk_FUN_01bda71c(plVar8,System_IDisposable_TypeInfo);
          if (plVar8 == (long *)0x0) {
            return;
          }
          lVar11 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_032d0214;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_032d01fc;
        }
        lVar11 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_032d00b4;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,1);
LAB_032d00b4:
        AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (AHDGNOJPPIB_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar2) ||
           ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB_00);
        }
        pSVar6 = (System_String_o *)
                 (*(AHDGNOJPPIB_00->klass->vtable)._8_unknown.methodPtr)
                           (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._8_unknown.method);
        bVar3 = System_String__op_Equality(pSVar6,StringLiteral_4201/*"Case"*/,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB_00,
                              (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
          pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
          if (pSVar6 == (System_String_o *)0x0) goto LAB_032d017c;
          pSVar10 = HJNEOLCKEMD__EOHMFJFFFIN
                              (AHDGNOJPPIB_00,
                               (__this->fields).super.super._MEFGNAIILBJ_k__BackingField,
                               (__this->fields).super._MLBBLNHFENE_k__BackingField,(MethodInfo *)0x0
                              );
          __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this->fields).HENCEKHKNDD;
          if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_Dictionary<object,_object>__Add
                    (__this_01,(Il2CppObject *)pSVar6,(Il2CppObject *)pSVar10,
                     Method_System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>_Add__);
        }
        else {
LAB_032d017c:
          pSVar6 = (System_String_o *)
                   (*(AHDGNOJPPIB_00->klass->vtable)._8_unknown.methodPtr)
                             (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._8_unknown.method);
          bVar3 = System_String__op_Equality(pSVar6,StringLiteral_5245/*"Default"*/,(MethodInfo *)0x0);
          if (bVar3) {
            pSVar10 = HJNEOLCKEMD__EOHMFJFFFIN
                                (AHDGNOJPPIB_00,
                                 (__this->fields).super.super._MEFGNAIILBJ_k__BackingField,
                                 (__this->fields).super._MLBBLNHFENE_k__BackingField,
                                 (MethodInfo *)0x0);
            *ppSVar1 = pSVar10;
            thunk_FUN_01c20e04(ppSVar1);
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_032d01fc:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_032d0230;
    }
  }
LAB_032d0214:
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_032d0230:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


// ===== public List<MovesInFightVariables.DOCBHLNBECF> MNMMJJICMGK(MovesInFightVariables.DOCBHLNBECF CPECAEHDDDB)  [RVA 0x31D0388]
// AHMJMDBNMHO$$MNMMJJICMGK @ RVA 0x31D0388

System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *
AHMJMDBNMHO__MNMMJJICMGK
          (AHMJMDBNMHO_o *__this,MovesInFightVariables_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this_00;
  bool bVar3;
  int32_t iVar4;
  NILLKLHKLHG_o *pNVar5;
  MMFIDKMDADC_o *pMVar6;
  System_Collections_Generic_List_HJNEOLCKEMD__o *__this_01;
  MovesInFightVariables_DOCBHLNBECF_o *__this_02;
  Model_o *pOVar7;
  HJNEOLCKEMD_o **ppHVar8;
  System_String_o *KGLJICLJHEL;
  MovesInFightVariables_DOCBHLNBECF_array *pMVar9;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *__this_03;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
                    /* try { // try from 032d0388 to 033d0497 has its CatchHandler @ 032d0388
                       catch() { ... } // from try @ 032d0388 with catch @ 032d0388
                       catch() { ... } // from try @ 032d0650 with catch @ 032d0388
                       catch() { ... } // from try @ 032d06a8 with catch @ 032d0388
                       catch() { ... } // from try @ 032d06b0 with catch @ 032d0388
                       catch() { ... } // from try @ 032d0730 with catch @ 032d0388
                       catch() { ... } // from try @ 032d0760 with catch @ 032d0388 */
  if ((DAT_04566c9d & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<HJNEOLCKEMD>__);
    FUN_01bab630(&MovesInFightVariables_DOCBHLNBECF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HJNEOLCKEMD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_TypeInfo);
    DAT_04566c9d = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pNVar5 = (__this->fields).FKMMOOKKLBH;
  if (pNVar5 == (NILLKLHKLHG_o *)0x0) {
    KGLJICLJHEL = (System_String_o *)0x0;
  }
  else {
    method = (MethodInfo *)0x0;
    pMVar6 = NILLKLHKLHG__CHKGAHCDFJF(pNVar5,false,(MethodInfo *)0x0);
    if (pMVar6 == (MMFIDKMDADC_o *)0x0) goto LAB_032d062c;
    KGLJICLJHEL = (pMVar6->fields).HPACPFLKHPK;
  }
  __this_01 = AHMJMDBNMHO__DILLKNLMCFO(__this,KGLJICLJHEL,method);
  bVar3 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)__this_01,
                     Method_DJNBJHPDKDP_OBECCOPBADO<HJNEOLCKEMD>__);
  if (bVar3) {
    __this_03 = (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0;
  }
  else {
    __this_03 = (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_TypeInfo
                                  );
                    /* try { // try from 032d0498 to 033d049f has its CatchHandler @ 032d0714 */
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_03,
               Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>__ctor__);
    if (__this_01 == (System_Collections_Generic_List_HJNEOLCKEMD__o *)0x0) {
LAB_032d062c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<HJNEOLCKEMD>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
                    /* try { // try from 032d04bc to 033d04bf has its CatchHandler @ 032d0710 */
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
                    /* try { // try from 032d04dc to 033d04df has its CatchHandler @ 032d06f8 */
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_MoveNext__
                             ), __this_00 = local_60.fields._current, bVar3) {
                    /* try { // try from 032d04f0 to 033d050f has its CatchHandler @ 032d06f4 */
      __this_02 = (MovesInFightVariables_DOCBHLNBECF_o *)thunk_FUN_01bda818(MovesInFightVariables_DOCBHLNBECF_TypeInfo);
      MovesInFightVariables_DOCBHLNBECF___ctor(__this_02,(MethodInfo *)0x0);
      if (CPECAEHDDDB == (MovesInFightVariables_DOCBHLNBECF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((HJNEOLCKEMD_o *)__this_00 == (HJNEOLCKEMD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 032d0510 to 033d0517 has its CatchHandler @ 032d06d0 */
      pOVar7 = HJNEOLCKEMD__PCBFLJOBLMI
                         ((HJNEOLCKEMD_o *)__this_00,(CPECAEHDDDB->fields).HEMGHNOOJPI,
                          (MethodInfo *)0x0);
      if (__this_02 == (MovesInFightVariables_DOCBHLNBECF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 032d052c to 033d052f has its CatchHandler @ 032d06dc */
      (__this_02->fields).HEMGHNOOJPI = pOVar7;
      thunk_FUN_01c20e04();
                    /* try { // try from 032d053c to 033d054b has its CatchHandler @ 032d06e8 */
      (__this_02->fields).EMCFCMFGPME = (CPECAEHDDDB->fields).EMCFCMFGPME;
      thunk_FUN_01c20e04();
      ppHVar8 = &(__this_02->fields).EDOEMIDBEGO;
      *ppHVar8 = (HJNEOLCKEMD_o *)__this_00;
      thunk_FUN_01c20e04(ppHVar8,__this_00);
      (__this_02->fields).KBODCOAHGFG = false;
      (__this_02->fields).AEPIFFHAKJG = 0;
      (__this_02->fields).CMPJANOIJAF = 0;
                    /* try { // try from 032d055c to 033d055f has its CatchHandler @ 032d06b8 */
      pNVar5 = ((HJNEOLCKEMD_Fields *)((long)__this_00 + 0x10))->_MIOHGLOGDHL_k__BackingField;
      if (pNVar5 != (NILLKLHKLHG_o *)0x0) {
                    /* try { // try from 032d0568 to 033d0583 has its CatchHandler @ 032d06c0 */
        pMVar6 = NILLKLHKLHG__CHKGAHCDFJF(pNVar5,false,(MethodInfo *)0x0);
        if (pMVar6 == (MMFIDKMDADC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar4 = MMFIDKMDADC__JBGCINPPLAC(pMVar6,(MethodInfo *)0x0);
        (__this_02->fields).CMPJANOIJAF = iVar4;
      }
      lVar2 = Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_Add__;
      if (__this_03 == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pMVar9 = (__this_03->fields)._items;
      (__this_03->fields)._version = (__this_03->fields)._version + 1;
      if (pMVar9 == (MovesInFightVariables_DOCBHLNBECF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 032d059c to 033d05a3 has its CatchHandler @ 032d06c8 */
      uVar1 = (__this_03->fields)._size;
      if (uVar1 < (uint)pMVar9->max_length) {
        (__this_03->fields)._size = uVar1 + 1;
        pMVar9->m_Items[(int)uVar1] = __this_02;
        thunk_FUN_01c20e04(pMVar9->m_Items + (int)uVar1,__this_02);
      }
      else {
                    /* try { // try from 032d05cc to 033d05db has its CatchHandler @ 032d06c4 */
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)__this_02,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* try { // try from 032d05ec to 033d05ef has its CatchHandler @ 032d06f0 */
                    /* try { // try from 032d05f0 to 033d05f7 has its CatchHandler @ 032d06bc */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_Dispose__);
  }
                    /* try { // try from 032d05f8 to 033d0603 has its CatchHandler @ 032d06f0 */
                    /* try { // try from 032d0610 to 033d0617 has its CatchHandler @ 032d06b0 */
  return __this_03;
}


// ===== private List<HJNEOLCKEMD> DILLKNLMCFO(string KGLJICLJHEL)  [RVA 0x31D06D4]
// AHMJMDBNMHO$$DILLKNLMCFO @ RVA 0x31D06D4

System_Collections_Generic_List_HJNEOLCKEMD__o *
AHMJMDBNMHO__DILLKNLMCFO(AHMJMDBNMHO_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_HJNEOLCKEMD__o **ppSVar2;
  System_Collections_Generic_List_HJNEOLCKEMD__o *local_28;
  
                    /* catch() { ... } // from try @ 032d06a0 with catch @ 032d06d4 */
                    /* catch() { ... } // from try @ 032d069c with catch @ 032d06d8 */
                    /* catch() { ... } // from try @ 032d052c with catch @ 032d06dc */
                    /* catch() { ... } // from try @ 032d0698 with catch @ 032d06e0 */
                    /* catch() { ... } // from try @ 032d0694 with catch @ 032d06e4 */
                    /* catch() { ... } // from try @ 032d053c with catch @ 032d06e8 */
                    /* catch() { ... } // from try @ 032d0690 with catch @ 032d06ec */
                    /* catch() { ... } // from try @ 032d05ec with catch @ 032d06f0
                       catch() { ... } // from try @ 032d05f8 with catch @ 032d06f0 */
  if ((DAT_04566c9e & 1) == 0) {
                    /* catch() { ... } // from try @ 032d04f0 with catch @ 032d06f4 */
                    /* catch() { ... } // from try @ 032d04dc with catch @ 032d06f8 */
                    /* catch() { ... } // from try @ 032d068c with catch @ 032d06fc */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>_TryGetValue__
                );
                    /* catch() { ... } // from try @ 032d0688 with catch @ 032d0700 */
                    /* catch() { ... } // from try @ 032d0684 with catch @ 032d0704 */
    DAT_04566c9e = 1;
  }
                    /* catch() { ... } // from try @ 032d0680 with catch @ 032d0708 */
  local_28 = (System_Collections_Generic_List_HJNEOLCKEMD__o *)0x0;
                    /* catch() { ... } // from try @ 032d067c with catch @ 032d070c */
  if (KGLJICLJHEL != (System_String_o *)0x0) {
                    /* catch() { ... } // from try @ 032d04bc with catch @ 032d0710 */
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).HENCEKHKNDD;
                    /* catch() { ... } // from try @ 032d0498 with catch @ 032d0714 */
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032d072c with catch @ 032d0750 */
      FUN_01bab8c8();
    }
    ppSVar2 = &local_28;
                    /* try { // try from 032d072c to 033d072f has its CatchHandler @ 032d0750 */
                    /* try { // try from 032d0730 to 033d0757 has its CatchHandler @ 032d0388 */
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)KGLJICLJHEL,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>_TryGetValue__
                      );
    if (bVar1) goto LAB_032d073c;
  }
  ppSVar2 = &(__this->fields).CMAFKNEPKDA;
LAB_032d073c:
  return *ppSVar2;
}


// ===== public void .ctor(AHMJMDBNMHO IBKIPBJJCPG)  [RVA 0x31D0754]
// AHMJMDBNMHO$$.ctor @ RVA 0x31D0754

void AHMJMDBNMHO___ctor(AHMJMDBNMHO_o *__this,AHMJMDBNMHO_o *IBKIPBJJCPG,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_HJNEOLCKEMD__o *__this_01;
  NILLKLHKLHG_o **ppNVar1;
  System_Collections_Generic_Dictionary_string__List_HJNEOLCKEMD___o **ppSVar2;
  System_Collections_Generic_List_HJNEOLCKEMD__o **ppSVar3;
  
                    /* try { // try from 032d0758 to 033d075f has its CatchHandler @ 032d0774 */
                    /* try { // try from 032d0760 to 033d076b has its CatchHandler @ 032d0388 */
                    /* try { // try from 032d076c to 033d0773 has its CatchHandler @ 032d0774 */
                    /* catch() { ... } // from try @ 032d0758 with catch @ 032d0774
                       catch() { ... } // from try @ 032d076c with catch @ 032d0774 */
  if ((DAT_04566c9f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HJNEOLCKEMD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HJNEOLCKEMD>_TypeInfo);
    DAT_04566c9f = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>__ctor__);
  ppSVar2 = &(__this->fields).HENCEKHKNDD;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__List_HJNEOLCKEMD___o *)__this_00;
  thunk_FUN_01c20e04(ppSVar2,__this_00);
  __this_01 = (System_Collections_Generic_List_HJNEOLCKEMD__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HJNEOLCKEMD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HJNEOLCKEMD>__ctor__);
  ppSVar3 = &(__this->fields).CMAFKNEPKDA;
  *ppSVar3 = __this_01;
  thunk_FUN_01c20e04(ppSVar3,__this_01);
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(HJNEOLCKEMD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (AHMJMDBNMHO_o *)0x0) {
    ppNVar1 = &(__this->fields).FKMMOOKKLBH;
    *ppNVar1 = (IBKIPBJJCPG->fields).FKMMOOKKLBH;
    thunk_FUN_01c20e04(ppNVar1);
    (__this->fields).HENCEKHKNDD = (IBKIPBJJCPG->fields).HENCEKHKNDD;
    thunk_FUN_01c20e04(ppSVar2);
    (__this->fields).CMAFKNEPKDA = (IBKIPBJJCPG->fields).CMAFKNEPKDA;
    thunk_FUN_01c20e04(ppSVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void RandomizeObscuredVars()  [RVA 0x31D0878]
// AHMJMDBNMHO$$RandomizeObscuredVars @ RVA 0x31D0878

/* WARNING: Removing unreachable block (ram,0x032d09fc) */

void AHMJMDBNMHO__RandomizeObscuredVars(AHMJMDBNMHO_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_HJNEOLCKEMD__o *__this_01;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_c8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_04566ca0 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<HJNEOLCKEMD>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<HJNEOLCKEMD>>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<HJNEOLCKEMD>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_List<HJNEOLCKEMD>>_get_Value__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<HJNEOLCKEMD>_GetEnumerator__);
    DAT_04566ca0 = 1;
  }
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  HJNEOLCKEMD__RandomizeObscuredVars((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).HENCEKHKNDD;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_c8,__this_00,
               Method_System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>_GetEnumerator__
              );
    local_80.fields._version = local_c8.fields._version;
    local_80.fields._index = local_c8.fields._index;
    local_80.fields._dictionary = local_c8.fields._dictionary;
    local_80.fields._current.fields.value = local_c8.fields._current.fields.value;
    local_80.fields._current.fields.key = local_c8.fields._current.fields.key;
    local_80.fields._getEnumeratorRetType = local_c8.fields._getEnumeratorRetType;
    local_80.fields._36_4_ = local_c8.fields._36_4_;
    while (bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<HJNEOLCKEMD>>_MoveNext__
                             ), bVar1) {
      if ((System_Collections_Generic_List_object__o *)local_80.fields._current.fields.value ==
          (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_c8,
                 (System_Collections_Generic_List_object__o *)local_80.fields._current.fields.value,
                 Method_System_Collections_Generic_List<HJNEOLCKEMD>_GetEnumerator__);
      local_a0.fields._index = local_c8.fields._version;
      local_a0.fields._version = local_c8.fields._index;
      local_a0.fields._list = (System_Collections_Generic_List_T__o *)local_c8.fields._dictionary;
      local_a0.fields._current = local_c8.fields._current.fields.key;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_a0,
                                Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_MoveNext__
                               ), bVar1) {
        if (local_a0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(local_a0.fields._current)->klass->vtable[7].methodPtr)
                  (local_a0.fields._current,(local_a0.fields._current)->klass->vtable[7].method);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_a0,Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_Dispose__)
      ;
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_80,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<HJNEOLCKEMD>>_Dispose__
              );
    __this_01 = (__this->fields).CMAFKNEPKDA;
    if (__this_01 != (System_Collections_Generic_List_HJNEOLCKEMD__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_c8,
                 (System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<HJNEOLCKEMD>_GetEnumerator__);
      local_a0.fields._index = local_c8.fields._version;
      local_a0.fields._version = local_c8.fields._index;
      local_a0.fields._list = (System_Collections_Generic_List_T__o *)local_c8.fields._dictionary;
      local_a0.fields._current = local_c8.fields._current.fields.key;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_a0,
                           Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_a0,
                     Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_Dispose__);
          return;
        }
        if (local_a0.fields._current == (Il2CppObject *)0x0) break;
        (*(local_a0.fields._current)->klass->vtable[7].methodPtr)
                  (local_a0.fields._current,(local_a0.fields._current)->klass->vtable[7].method);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

