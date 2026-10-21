// TypeDefIndex 1451
// Namespace: 
// public class MCCHIAKPFEL
// Fields:
//   private JHBHHHKEFOO LNONNMPONFN; // 0x10
//   private List<OIBMPFJDKGO> PADLGGFCCMI; // 0x18

// ===== public void .ctor(string KGLJICLJHEL, string JLAFGLDIFOC, ushort JDIHKNKFJMK = 0, ushort EHEFEIEKHJO = 0)  [RVA 0x318CC04]
// MCCHIAKPFEL$$.ctor @ RVA 0x318CC04

void MCCHIAKPFEL___ctor(MCCHIAKPFEL_o *__this,System_String_o *KGLJICLJHEL,
                       System_String_o *JLAFGLDIFOC,uint16_t JDIHKNKFJMK,uint16_t EHEFEIEKHJO,
                       MethodInfo *method)

{
  JHBHHHKEFOO_o *pJVar1;
  System_Collections_Generic_List_OIBMPFJDKGO__o *__this_00;
  System_Collections_Generic_List_OIBMPFJDKGO__o **ppSVar2;
  MCCHIAKPFEL_Fields *pMVar3;
  
                    /* try { // try from 0328cc14 to 0338cc1b has its CatchHandler @ 0328ccc0 */
                    /* try { // try from 0328cc28 to 0338cc37 has its CatchHandler @ 0328ccb8 */
                    /* try { // try from 0328cc38 to 0338ccaf has its CatchHandler @ 0328cb64 */
  if ((DAT_04566a16 & 1) == 0) {
    FUN_01bab630(&JHBHHHKEFOO_TypeInfo,KGLJICLJHEL,JLAFGLDIFOC,JDIHKNKFJMK,EHEFEIEKHJO);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIBMPFJDKGO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OIBMPFJDKGO>_TypeInfo);
    DAT_04566a16 = 1;
  }
  pJVar1 = (JHBHHHKEFOO_o *)thunk_FUN_01bda818(JHBHHHKEFOO_TypeInfo);
  JHBHHHKEFOO___ctor(pJVar1,(MethodInfo *)0x0);
  pMVar3 = &__this->fields;
  pMVar3->LNONNMPONFN = pJVar1;
  thunk_FUN_01c20e04(pMVar3,pJVar1);
  __this_00 = (System_Collections_Generic_List_OIBMPFJDKGO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<OIBMPFJDKGO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OIBMPFJDKGO>__ctor__);
  ppSVar2 = &(__this->fields).PADLGGFCCMI;
                    /* try { // try from 0328ccb0 to 0338ccb3 has its CatchHandler @ 0328ccbc */
                    /* try { // try from 0328ccb4 to 0338ccd7 has its CatchHandler @ 0328cb64 */
  *ppSVar2 = __this_00;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328cc28 with catch @ 0328ccb8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328ccb0 with catch @ 0328ccbc
                        */
  thunk_FUN_01c20e04(ppSVar2,__this_00);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328cc14 with catch @ 0328ccc0
                        */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pJVar1 = (JHBHHHKEFOO_o *)thunk_FUN_01bda818(JHBHHHKEFOO_TypeInfo);
                    /* try { // try from 0328ccd8 to 0338ccdb has its CatchHandler @ 0328ccfc */
                    /* try { // try from 0328ccdc to 0338cd03 has its CatchHandler @ 0328cb64 */
  JHBHHHKEFOO___ctor(pJVar1,KGLJICLJHEL,JLAFGLDIFOC,(MethodInfo *)0x0);
  pMVar3->LNONNMPONFN = pJVar1;
                    /* catch() { ... } // from try @ 0328ccd8 with catch @ 0328ccfc */
                    /* try { // try from 0328cd04 to 0338cd0b has its CatchHandler @ 0328cd20 */
  thunk_FUN_01c20e04(pMVar3,pJVar1);
  return;
}


// ===== public void IIBJJJKBNLM(int GMALOFEKAHI)  [RVA 0x318CD0C]
// MCCHIAKPFEL$$IIBJJJKBNLM @ RVA 0x318CD0C

void MCCHIAKPFEL__IIBJJJKBNLM(MCCHIAKPFEL_o *__this,int32_t GMALOFEKAHI,MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  System_Collections_Generic_List_OIBMPFJDKGO__o *__this_00;
  JHBHHHKEFOO_o *pJVar3;
  Il2CppClass *pIVar4;
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  System_Collections_Generic_List_T__o *local_a0;
  void *pvStack_98;
  Il2CppObject *pIStack_90;
  void *pvStack_88;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  Il2CppObject *local_50;
  
                    /* try { // try from 0328cd0c to 0338cd17 has its CatchHandler @ 0328cb64 */
                    /* try { // try from 0328cd18 to 0338cd1f has its CatchHandler @ 0328cd20 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0328cd04 with catch @ 0328cd20
                       catch(type#2 @ 00000000) { ... } // from try @ 0328cd18 with catch @ 0328cd20
                        */
  if ((DAT_04566a17 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIBMPFJDKGO>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04566a17 = 1;
  }
  local_60 = (undefined1  [8])0x0;
  uStack_58._0_4_ = 0;
  uStack_58._4_4_ = 0;
  local_50 = (Il2CppObject *)0x0;
  pJVar3 = (__this->fields).LNONNMPONFN;
  if (pJVar3 != (JHBHHHKEFOO_o *)0x0) {
    local_80.fields.fakeValueActive = (pJVar3->fields).DCDLMCEEOCC.fields.fakeValueActive;
    local_80.fields.inited = (pJVar3->fields).DCDLMCEEOCC.fields.inited;
    local_80.fields._26_6_ = *(undefined6 *)&(pJVar3->fields).DCDLMCEEOCC.fields.field_0x1a;
    local_80.fields.fakeValue = (pJVar3->fields).DCDLMCEEOCC.fields.fakeValue;
    local_80.fields.hiddenValue = (pJVar3->fields).DCDLMCEEOCC.fields.hiddenValue;
    local_80.fields.currentCryptoKey = (pJVar3->fields).DCDLMCEEOCC.fields.currentCryptoKey;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_80,(MethodInfo *)0x0)
    ;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
    iVar2 = MGNPHCAAEIO__ADEEECDDBPN(iVar2,GMALOFEKAHI,(MethodInfo *)0x0);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)local_c0,iVar2,(MethodInfo *)0x0)
    ;
    pvStack_98 = (void *)local_c0._8_8_;
    local_a0 = (System_Collections_Generic_List_T__o *)local_c0._0_8_;
    pvStack_88 = (void *)local_c0._24_8_;
    pIStack_90 = (Il2CppObject *)local_c0._16_8_;
    (pJVar3->fields).DCDLMCEEOCC.fields.hiddenValue = local_c0._8_8_;
    (pJVar3->fields).DCDLMCEEOCC.fields.currentCryptoKey = local_c0._0_8_;
    (pJVar3->fields).DCDLMCEEOCC.fields.fakeValueActive = (bool_conflict)local_c0[0x18];
    (pJVar3->fields).DCDLMCEEOCC.fields.inited = (bool_conflict)local_c0[0x19];
    *(undefined6 *)&(pJVar3->fields).DCDLMCEEOCC.fields.field_0x1a = local_c0._26_6_;
    (pJVar3->fields).DCDLMCEEOCC.fields.fakeValue = local_c0._16_8_;
    __this_00 = (__this->fields).PADLGGFCCMI;
    if (__this_00 != (System_Collections_Generic_List_OIBMPFJDKGO__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_c0,
                 (System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<OIBMPFJDKGO>_GetEnumerator__);
      uStack_58 = (void *)local_c0._8_8_;
      local_60 = (undefined1  [8])local_c0._0_8_;
      local_50 = (Il2CppObject *)local_c0._16_8_;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                           Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                     Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_Dispose__);
          return;
        }
        if (local_50 == (Il2CppObject *)0x0) break;
        pIVar4 = local_50[1].klass;
        if (pIVar4 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        local_e0._24_8_ = (pIVar4->_1).this_arg.data;
        local_e0._16_8_ = *(undefined8 *)&(pIVar4->_1).byval_arg.bits;
        local_e0._8_8_ = (pIVar4->_1).byval_arg.data;
        local_e0._0_8_ = (pIVar4->_1).namespaze;
        iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)local_e0,
                           (MethodInfo *)0x0);
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = MGNPHCAAEIO__ADEEECDDBPN(iVar2,GMALOFEKAHI,(MethodInfo *)0x0);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)local_c0,iVar2,
                   (MethodInfo *)0x0);
        pvStack_98 = (void *)local_c0._8_8_;
        local_a0 = (System_Collections_Generic_List_T__o *)local_c0._0_8_;
        pvStack_88 = (void *)local_c0._24_8_;
        pIStack_90 = (Il2CppObject *)local_c0._16_8_;
        (pIVar4->_1).byval_arg.data = (void *)local_c0._8_8_;
        (pIVar4->_1).namespaze = (char *)local_c0._0_8_;
        (pIVar4->_1).this_arg.data = (void *)local_c0._24_8_;
        *(undefined8 *)&(pIVar4->_1).byval_arg.bits = local_c0._16_8_;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB, ushort JDIHKNKFJMK = 0, ushort EHEFEIEKHJO = 0)  [RVA 0x318CF50]
// MCCHIAKPFEL$$.ctor @ RVA 0x318CF50

/* WARNING: Removing unreachable block (ram,0x0328d384) */

void MCCHIAKPFEL___ctor(MCCHIAKPFEL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,uint16_t JDIHKNKFJMK
                       ,uint16_t EHEFEIEKHJO,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t iVar3;
  JHBHHHKEFOO_o *pJVar4;
  System_Collections_Generic_List_OIBMPFJDKGO__o *pSVar5;
  System_Xml_XmlNodeList_o *pSVar6;
  long *plVar7;
  undefined8 *puVar8;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  OIBMPFJDKGO_o *__this_00;
  MGNDHCBAPEN_int__int__o *pMVar9;
  long lVar10;
  OIBMPFJDKGO_array *pOVar11;
  ulong uVar12;
  int *piVar13;
  System_Collections_Generic_List_OIBMPFJDKGO__o **ppSVar14;
  MCCHIAKPFEL_Fields *pMVar15;
  OIBMPFJDKGO_Fields *pOVar16;
  
  if ((DAT_04566a18 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&JHBHHHKEFOO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIBMPFJDKGO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIBMPFJDKGO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OIBMPFJDKGO>_TypeInfo);
    FUN_01bab630(&OIBMPFJDKGO_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    DAT_04566a18 = 1;
  }
  pJVar4 = (JHBHHHKEFOO_o *)thunk_FUN_01bda818(JHBHHHKEFOO_TypeInfo);
  JHBHHHKEFOO___ctor(pJVar4,(MethodInfo *)0x0);
  pMVar15 = &__this->fields;
  pMVar15->LNONNMPONFN = pJVar4;
  thunk_FUN_01c20e04(pMVar15,pJVar4);
  pSVar5 = (System_Collections_Generic_List_OIBMPFJDKGO__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<OIBMPFJDKGO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<OIBMPFJDKGO>__ctor__);
  ppSVar14 = &(__this->fields).PADLGGFCCMI;
  *ppSVar14 = pSVar5;
  thunk_FUN_01c20e04(ppSVar14,pSVar5);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (((pMVar15->LNONNMPONFN == (JHBHHHKEFOO_o *)0x0) ||
      (JHBHHHKEFOO__HNIHOIAMDPC
                 (pMVar15->LNONNMPONFN,AHDGNOJPPIB,JDIHKNKFJMK,EHEFEIEKHJO,(MethodInfo *)0x0),
      AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0)) ||
     (pSVar6 = System_Xml_XmlNode__SelectNodes(AHDGNOJPPIB,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0),
     pSVar6 == (System_Xml_XmlNodeList_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar7 = (long *)(*(pSVar6->klass->vtable)._8_GetEnumerator.methodPtr)
                             (pSVar6,(pSVar6->klass->vtable)._8_GetEnumerator.method);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0328d120;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_0328d120:
    uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar12 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 == 0) goto LAB_0328d314;
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_0328d180;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_0328d180:
    AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
         ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(AHDGNOJPPIB_00);
      }
    }
    __this_00 = (OIBMPFJDKGO_o *)thunk_FUN_01bda818(OIBMPFJDKGO_TypeInfo);
    OIBMPFJDKGO___ctor(__this_00,(MethodInfo *)0x0);
    pJVar4 = (JHBHHHKEFOO_o *)thunk_FUN_01bda818(JHBHHHKEFOO_TypeInfo);
    JHBHHHKEFOO___ctor(pJVar4,(MethodInfo *)0x0);
    if (__this_00 == (OIBMPFJDKGO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pOVar16 = &__this_00->fields;
    pOVar16->NNHNNAKKKPL = pJVar4;
    thunk_FUN_01c20e04(pOVar16,pJVar4);
    if (pOVar16->NNHNNAKKKPL == (JHBHHHKEFOO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    JHBHHHKEFOO__HNIHOIAMDPC
              (pOVar16->NNHNNAKKKPL,AHDGNOJPPIB_00,JDIHKNKFJMK,EHEFEIEKHJO,(MethodInfo *)0x0);
    pMVar9 = GIAMPEGMNHE__GGPIBJJKMPK(AHDGNOJPPIB_00,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    if (pMVar9 == (MGNDHCBAPEN_int__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = (pMVar9->fields).DOKHHBGJICA;
    pJVar4 = (__this_00->fields).NNHNNAKKKPL;
    (__this_00->fields).FDIGKDNAJJF = (pMVar9->fields).PHPELPFMOII;
    (__this_00->fields).FDGAGHPHOAF = iVar3;
    if (pJVar4 == (JHBHHHKEFOO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pJVar4->fields).GICDEKDNADC = true;
    lVar10 = Method_System_Collections_Generic_List<OIBMPFJDKGO>_Add__;
    pSVar5 = *ppSVar14;
    if (pSVar5 == (System_Collections_Generic_List_OIBMPFJDKGO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pOVar11 = (pSVar5->fields)._items;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (pOVar11 == (OIBMPFJDKGO_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (pSVar5->fields)._size;
    if (uVar2 < (uint)pOVar11->max_length) {
      (pSVar5->fields)._size = uVar2 + 1;
      pOVar11->m_Items[(int)uVar2] = __this_00;
      thunk_FUN_01c20e04(pOVar11->m_Items + (int)uVar2,__this_00);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0328d330;
    }
  }
LAB_0328d314:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_0328d330:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x318D488]
// MCCHIAKPFEL$$RandomizeObscuredVars @ RVA 0x318D488

void MCCHIAKPFEL__RandomizeObscuredVars(MCCHIAKPFEL_o *__this,MethodInfo *method)

{
  JHBHHHKEFOO_o *__this_00;
  System_Action_OIBMPFJDKGO__o **ppSVar1;
  System_Collections_Generic_List_OIBMPFJDKGO__o *__this_01;
  System_Action_OIBMPFJDKGO__o *action;
  
  if ((DAT_04566a19 & 1) == 0) {
    FUN_01bab630(&System_Action<OIBMPFJDKGO>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIBMPFJDKGO>_ForEach__);
    FUN_01bab630(&Method_MCCHIAKPFEL_<>c_NBNIOBMFCOB__);
    FUN_01bab630(&MCCHIAKPFEL_<>c_TypeInfo);
    DAT_04566a19 = 1;
  }
  __this_00 = (__this->fields).LNONNMPONFN;
  if (__this_00 != (JHBHHHKEFOO_o *)0x0) {
    JHBHHHKEFOO__RandomizeObscuredVars(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).PADLGGFCCMI;
    if ((MCCHIAKPFEL_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = MCCHIAKPFEL_<>c_TypeInfo->static_fields->__9__6_0;
    if (action == (System_Action_OIBMPFJDKGO__o *)0x0) {
      if ((MCCHIAKPFEL_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_OIBMPFJDKGO__o *)
               thunk_FUN_01bda818(System_Action<OIBMPFJDKGO>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &MCCHIAKPFEL_<>c_TypeInfo->static_fields->__9__6_0;
      *ppSVar1 = action;
      thunk_FUN_01c20e04(ppSVar1,action);
    }
    if (__this_01 != (System_Collections_Generic_List_OIBMPFJDKGO__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_01,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<OIBMPFJDKGO>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public JHBHHHKEFOO ALLFNDNBMCO(int JLAFGLDIFOC)  [RVA 0x318D59C]
// MCCHIAKPFEL$$ALLFNDNBMCO @ RVA 0x318D59C

JHBHHHKEFOO_o *
MCCHIAKPFEL__ALLFNDNBMCO(MCCHIAKPFEL_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  bool bVar1;
  JHBHHHKEFOO_o *__this_00;
  System_Collections_Generic_List_OIBMPFJDKGO__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566a1a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_get_Current__);
    FUN_01bab630(&JHBHHHKEFOO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIBMPFJDKGO>_GetEnumerator__);
    DAT_04566a1a = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (JHBHHHKEFOO_o *)thunk_FUN_01bda818(JHBHHHKEFOO_TypeInfo);
  JHBHHHKEFOO___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (JHBHHHKEFOO_o *)0x0) {
    (__this_00->fields).GICDEKDNADC = true;
    JHBHHHKEFOO__KAOJCFCELIB(__this_00,(__this->fields).LNONNMPONFN,(MethodInfo *)0x0);
    __this_01 = (__this->fields).PADLGGFCCMI;
    if (__this_01 != (System_Collections_Generic_List_OIBMPFJDKGO__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<OIBMPFJDKGO>_GetEnumerator__);
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<OIBMPFJDKGO>_Dispose__);
          return __this_00;
        }
        if (local_48.fields._current == (Il2CppObject *)0x0) break;
        if ((*(int *)&local_48.fields._current[1].monitor <= JLAFGLDIFOC) &&
           (JLAFGLDIFOC <= *(int *)((long)&local_48.fields._current[1].monitor + 4))) {
          JHBHHHKEFOO__KAOJCFCELIB
                    (__this_00,(JHBHHHKEFOO_o *)local_48.fields._current[1].klass,(MethodInfo *)0x0)
          ;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

