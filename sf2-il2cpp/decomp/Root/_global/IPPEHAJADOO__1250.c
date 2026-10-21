// TypeDefIndex 1250
// Namespace: 
// public class IPPEHAJADOO
// Fields:
//   private int LKLGFEIFBIC; // 0x10
//   private List<OLKKAIFGGAK> MBPELMMKGMB; // 0x18
//   private List<OLKKAIFGGAK> DNCDKLGJGBN; // 0x20
//   private List<NJPBHDMCLIN> OGINLMAKLNF; // 0x28
//   private List<ECAIEGNAOAL> KBOMJBFAKKA; // 0x30
//   private List<ECAIEGNAOAL> FNMHCOJPGMJ; // 0x38
//   private List<List<IPPEHAJADOO.JEOCIECEGHH>> EOAFFOBIBGO; // 0x40
//   private List<List<IPPEHAJADOO.JEOCIECEGHH>> AMCAKDINLFL; // 0x48
//   private List<IPPEHAJADOO.GHFEMFCMBEJ> DPHKLKNAOAB; // 0x50

// ===== public void KPIGLNLIOOP(OLKKAIFGGAK.EAOIGPODIAI BCHKAEBGKGG)  [RVA 0x313F4BC]
// IPPEHAJADOO$$KPIGLNLIOOP @ RVA 0x313F4BC

void IPPEHAJADOO__KPIGLNLIOOP
               (IPPEHAJADOO_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *BCHKAEBGKGG,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  MethodInfo *in_x4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456674e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    DAT_0456674e = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  IPPEHAJADOO__BKBHKFCCKDO(__this,2,BCHKAEBGKGG,true,in_x4);
  __this_00 = (__this->fields).MBPELMMKGMB;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
      pIVar1 = local_48.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
        return;
      }
      CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((__this->fields).LKLGFEIFBIC,(MethodInfo *)0x0);
      if (pIVar1 == (Il2CppObject *)0x0) break;
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)((long)&pIVar1[0x1a].klass + 4) =
           CVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BDHAMOEKNNK()  [RVA 0x313F7B8]
// IPPEHAJADOO$$BDHAMOEKNNK @ RVA 0x313F7B8

void IPPEHAJADOO__BDHAMOEKNNK(IPPEHAJADOO_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  IPPEHAJADOO__CEACPADMPKJ(__this,method);
  IPPEHAJADOO__CLADJKBJHCD(__this,method_00);
  return;
}


// ===== public void LKGKDIMGDHL(OLKKAIFGGAK.EAOIGPODIAI INNMCFJNEAE)  [RVA 0x313FDC0]
// IPPEHAJADOO$$LKGKDIMGDHL @ RVA 0x313FDC0

void IPPEHAJADOO__LKGKDIMGDHL
               (IPPEHAJADOO_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *INNMCFJNEAE,MethodInfo *method)

{
  MethodInfo *in_x4;
  
  IPPEHAJADOO__BKBHKFCCKDO(__this,10,INNMCFJNEAE,false,in_x4);
  return;
}


// ===== public void DKKDJFFKDHJ()  [RVA 0x313FDD0]
// IPPEHAJADOO$$DKKDJFFKDHJ @ RVA 0x313FDD0

void IPPEHAJADOO__DKKDJFFKDHJ(IPPEHAJADOO_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar2;
  System_Collections_Generic_List_ECAIEGNAOAL__o *pSVar3;
  
  if ((DAT_0456674f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Clear__);
    DAT_0456674f = 1;
  }
  pSVar2 = (__this->fields).MBPELMMKGMB;
  if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields).KBOMJBFAKKA;
    if (pSVar3 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
      iVar1 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pSVar3 = (__this->fields).FNMHCOJPGMJ;
      if (pSVar3 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
        iVar1 = (pSVar3->fields)._size;
        (pSVar3->fields)._size = 0;
        (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
        if (0 < iVar1) {
          System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ECOGDHGPHND(OLKKAIFGGAK.EAOIGPODIAI INNMCFJNEAE)  [RVA 0x313FEA4]
// IPPEHAJADOO$$ECOGDHGPHND @ RVA 0x313FEA4

void IPPEHAJADOO__ECOGDHGPHND
               (IPPEHAJADOO_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *INNMCFJNEAE,MethodInfo *method)

{
  MethodInfo *in_x4;
  
  IPPEHAJADOO__BKBHKFCCKDO(__this,2,INNMCFJNEAE,false,in_x4);
  return;
}


// ===== public void DBGHGKLANPG(List<OLKKAIFGGAK> CJNHFNHJHPE)  [RVA 0x313FEB4]
// IPPEHAJADOO$$DBGHGKLANPG @ RVA 0x313FEB4

void IPPEHAJADOO__DBGHGKLANPG
               (IPPEHAJADOO_o *__this,System_Collections_Generic_List_OLKKAIFGGAK__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  
  if ((DAT_04566750 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Clear__);
    DAT_04566750 = 1;
  }
  __this_00 = (__this->fields).MBPELMMKGMB;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    length = (__this_00->fields)._size;
    (__this_00->fields)._size = 0;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,(MethodInfo *)0x0);
      __this_00 = (__this->fields).MBPELMMKGMB;
      if (__this_00 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) goto LAB_0323ff40;
    }
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)CJNHFNHJHPE,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_AddRange__);
    return;
  }
LAB_0323ff40:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NDEHJGJGLJD(OLKKAIFGGAK BCKBBGCOMJD, List<IPPEHAJADOO.JEOCIECEGHH> EGLKJOJMDJN)  [RVA 0x313FF44]
// IPPEHAJADOO$$NDEHJGJGLJD @ RVA 0x313FF44

void IPPEHAJADOO__NDEHJGJGLJD
               (IPPEHAJADOO_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *EGLKJOJMDJN,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  IPPEHAJADOO_o *__this_00;
  Il2CppObject *pIVar5;
  IPPEHAJADOO_o *extraout_x0;
  IPPEHAJADOO_o *extraout_x0_00;
  IPPEHAJADOO_o *extraout_x0_01;
  NJPBHDMCLIN_o *pNVar6;
  IPPEHAJADOO_o *extraout_x0_02;
  IPPEHAJADOO_o *extraout_x0_03;
  IPPEHAJADOO_JEOCIECEGHH_o *pIVar7;
  System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *ELAGKBMJCOD;
  ECENNHNBAME_o *pEVar8;
  GBKCLIFGIFN_o *pGVar9;
  GBKCLIFGIFN_o *__this_01;
  MethodInfo *in_x4;
  int iVar10;
  Il2CppClass *pIVar11;
  OPNFCOGALLI_o *pOVar12;
  IPPEHAJADOO_JEOCIECEGHH_array *pIVar13;
  Il2CppClass *pIVar14;
  void *pvVar15;
  Il2CppClass *pIVar16;
  int iVar17;
  int iVar18;
  MethodInfo *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  __this_00 = __this;
  if ((DAT_04566751 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_LJCDLMMMOGD<IPPEHAJADOO_JEOCIECEGHH>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_set_Item__);
    __this_00 = (IPPEHAJADOO_o *)
                FUN_01bab630(&System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_TypeInfo);
    DAT_04566751 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (EGLKJOJMDJN == (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0) {
LAB_0324047c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar10 = (EGLKJOJMDJN->fields)._size;
  if (0 < iVar10) {
    iVar17 = 0;
    iVar18 = 0;
    do {
      pIVar5 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)EGLKJOJMDJN,iVar18,
                          Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__
                         );
      if ((pIVar5 == (Il2CppObject *)0x0) || (pIVar5[1].klass == (Il2CppClass *)0x0))
      goto LAB_0324047c;
      __this_02 = (pIVar5[1].klass)->vtable[2].method;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)EGLKJOJMDJN,
                 Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      do {
                    /* try { // try from 0324009c to 0334013f has its CatchHandler @ 0324009c
                       catch() { ... } // from try @ 0324009c with catch @ 0324009c
                       catch() { ... } // from try @ 03240164 with catch @ 0324009c
                       catch() { ... } // from try @ 032401a8 with catch @ 0324009c
                       catch() { ... } // from try @ 032401e0 with catch @ 0324009c
                       catch() { ... } // from try @ 03240210 with catch @ 0324009c */
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_MoveNext__
                          );
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_Dispose__
                    );
          method = Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_set_Item__;
          System_Collections_Generic_List<object>__set_Item
                    ((System_Collections_Generic_List_object__o *)EGLKJOJMDJN,iVar17,pIVar5,
                     (MethodInfo_26E4B30 *)
                     Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_set_Item__);
          iVar17 = iVar17 + 1;
          __this_00 = extraout_x0_00;
          goto LAB_03240108;
        }
        if ((IPPEHAJADOO_JEOCIECEGHH_o *)local_80.fields._current ==
            (IPPEHAJADOO_JEOCIECEGHH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (__this_02 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = ECENNHNBAME_DNGAEDAAIJE__HELJFLMEKII
                          ((ECENNHNBAME_DNGAEDAAIJE_o *)__this_02,
                           ((IPPEHAJADOO_JEOCIECEGHH_Fields *)
                           ((long)local_80.fields._current + 0x10))->BNGDONJEHMH,(MethodInfo *)0x0);
      } while (bVar3);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,
                 Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_Dispose__
                );
      __this_00 = extraout_x0;
LAB_03240108:
      iVar18 = iVar18 + 1;
    } while (iVar18 != iVar10);
    iVar10 = (EGLKJOJMDJN->fields)._size;
    if (iVar17 < iVar10) {
      DJNBJHPDKDP__LJCDLMMMOGD<object>
                ((System_Collections_Generic_List_T__o *)EGLKJOJMDJN,iVar17,
                 Method_DJNBJHPDKDP_LJCDLMMMOGD<IPPEHAJADOO_JEOCIECEGHH>__);
      __this_00 = extraout_x0_01;
      iVar10 = iVar17;
    }
    if (0 < iVar10) {
      iVar10 = (EGLKJOJMDJN->fields)._size;
                    /* try { // try from 032401a0 to 033401a3 has its CatchHandler @ 032401bc */
      if (iVar10 < 1) {
        iVar17 = 0;
      }
      else {
                    /* try { // try from 032401a4 to 033401a7 has its CatchHandler @ 032401ac */
        iVar17 = 0;
                    /* try { // try from 032401a8 to 033401db has its CatchHandler @ 0324009c */
        iVar18 = 0;
        do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032401a4 with catch @ 032401ac
                        */
          pIVar5 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)EGLKJOJMDJN,iVar18,
                              Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__
                             );
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032401a0 with catch @ 032401bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0324015c with catch @ 032401c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03240140 with catch @ 032401c4
                        */
          if ((((pIVar5 == (Il2CppObject *)0x0) ||
               (pIVar11 = pIVar5[1].klass, pIVar11 == (Il2CppClass *)0x0)) ||
              (pIVar14 = (pIVar11->_1).klass, pIVar14 == (Il2CppClass *)0x0)) ||
             (pvVar15 = (pIVar14->_1).byval_arg.data, pvVar15 == (void *)0x0)) goto LAB_0324047c;
                    /* try { // try from 032401dc to 033401df has its CatchHandler @ 03240200 */
                    /* try { // try from 032401e0 to 03340207 has its CatchHandler @ 0324009c */
          if (*(int *)((long)pvVar15 + 0x18) == 0) {
LAB_03240264:
            method = Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_set_Item__;
            System_Collections_Generic_List<object>__set_Item
                      ((System_Collections_Generic_List_object__o *)EGLKJOJMDJN,iVar17,pIVar5,
                       (MethodInfo_26E4B30 *)
                       Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_set_Item__);
            iVar17 = iVar17 + 1;
            __this_00 = extraout_x0_02;
          }
          else {
            if ((BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) ||
               (pNVar6 = (BCKBBGCOMJD->fields).FNEAAHOOHAA, pNVar6 == (NJPBHDMCLIN_o *)0x0))
            goto LAB_0324047c;
            (pNVar6->fields).MPGOHFNJBLA =
                 (System_Collections_Generic_List_string__o *)pIVar11->vtable[3].methodPtr;
            thunk_FUN_01c20e04();
            pOVar12 = (BCKBBGCOMJD->fields).OAKOFJJIOFF;
                    /* catch() { ... } // from try @ 032401dc with catch @ 03240200 */
                    /* try { // try from 03240208 to 0334020f has its CatchHandler @ 03240224 */
            if ((pOVar12 == (OPNFCOGALLI_o *)0x0) || (pIVar5[1].klass == (Il2CppClass *)0x0))
            goto LAB_0324047c;
            pNVar6 = (BCKBBGCOMJD->fields).FNEAAHOOHAA;
                    /* try { // try from 03240210 to 0334021b has its CatchHandler @ 0324009c */
                    /* try { // try from 0324021c to 03340223 has its CatchHandler @ 03240224 */
            iVar4 = ECENNHNBAME__BAHFNIPBBHD
                              ((ECENNHNBAME_o *)pIVar5[1].klass,pNVar6,(pOVar12->fields).DMJAJGGGHPF
                               ,(MethodInfo *)0x0);
            if (pNVar6 == (NJPBHDMCLIN_o *)0x0) goto LAB_0324047c;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03240208 with catch @ 03240224
                       catch(type#2 @ 00000000) { ... } // from try @ 0324021c with catch @ 03240224
                        */
            (pNVar6->fields).FOJEHKCDKFH = iVar4;
            pIVar11 = pIVar5[1].klass;
            if (((pIVar11 == (Il2CppClass *)0x0) ||
                (pIVar14 = (pIVar11->_1).klass, pIVar14 == (Il2CppClass *)0x0)) ||
               ((pIVar16 = (pIVar14->_1).declaringType, pIVar16 == (Il2CppClass *)0x0 ||
                (pNVar6 = (BCKBBGCOMJD->fields).FNEAAHOOHAA, pNVar6 == (NJPBHDMCLIN_o *)0x0))))
            goto LAB_0324047c;
            in_x4 = (MethodInfo *)0x0;
            (pNVar6->fields).JDNEMNOMLIC = (pIVar16->_1).byval_arg.bits;
            method = pIVar5[2].monitor;
            bVar3 = ECENNHNBAME__PCPBHJGAOOH
                              ((ECENNHNBAME_o *)pIVar11,pNVar6,(pIVar14->_1).byval_arg.data,
                               (KJFPGDFNFCL_o *)method,(MethodInfo *)0x0);
            __this_00 = (IPPEHAJADOO_o *)(ulong)bVar3;
            if (bVar3) goto LAB_03240264;
          }
          iVar10 = (EGLKJOJMDJN->fields)._size;
          iVar18 = iVar18 + 1;
        } while (iVar18 < iVar10);
      }
      if (iVar17 < iVar10) {
        DJNBJHPDKDP__LJCDLMMMOGD<object>
                  ((System_Collections_Generic_List_T__o *)EGLKJOJMDJN,iVar17,
                   Method_DJNBJHPDKDP_LJCDLMMMOGD<IPPEHAJADOO_JEOCIECEGHH>__);
        __this_00 = extraout_x0_03;
      }
    }
  }
  pIVar7 = IPPEHAJADOO__BKAIGLDAJPC(__this_00,BCKBBGCOMJD,EGLKJOJMDJN,method);
  if (pIVar7 != (IPPEHAJADOO_JEOCIECEGHH_o *)0x0) {
    ELAGKBMJCOD = (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)
                  thunk_FUN_01bda818(
                                    System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_TypeInfo
                                    );
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,
               Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>__ctor__);
    pEVar8 = (pIVar7->fields).BNGDONJEHMH;
    if (pEVar8 == (ECENNHNBAME_o *)0x0) goto LAB_0324047c;
    pGVar9 = ECENNHNBAME__OCLGKBPDEBI(pEVar8,(MethodInfo *)0x0);
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)EGLKJOJMDJN,
               Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_MoveNext__
                             ), pIVar5 = local_80.fields._current, bVar3) {
      if ((IPPEHAJADOO_JEOCIECEGHH_o *)local_80.fields._current == (IPPEHAJADOO_JEOCIECEGHH_o *)0x0)
      {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pEVar8 = ((IPPEHAJADOO_JEOCIECEGHH_Fields *)((long)local_80.fields._current + 0x10))->
               BNGDONJEHMH;
      if (pEVar8 == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = ECENNHNBAME__OCLGKBPDEBI(pEVar8,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_Add__;
      if ((pGVar9 == (GBKCLIFGIFN_o *)0x0) || (__this_01 == (GBKCLIFGIFN_o *)0x0)) {
        if (ELAGKBMJCOD == (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar13 = (ELAGKBMJCOD->fields)._items;
        (ELAGKBMJCOD->fields)._version = (ELAGKBMJCOD->fields)._version + 1;
        if (pIVar13 == (IPPEHAJADOO_JEOCIECEGHH_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (ELAGKBMJCOD->fields)._size;
        if (uVar1 < (uint)pIVar13->max_length) {
          (ELAGKBMJCOD->fields)._size = uVar1 + 1;
          pIVar13->m_Items[(int)uVar1] = (IPPEHAJADOO_JEOCIECEGHH_o *)pIVar5;
          thunk_FUN_01c20e04(pIVar13->m_Items + (int)uVar1,pIVar5);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,pIVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        bVar3 = GBKCLIFGIFN__EPBENPDCBFE
                          (__this_01,(pGVar9->fields).LCDJLCMFMEO,true,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_Add__;
        if (bVar3) {
          if (ELAGKBMJCOD == (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar13 = (ELAGKBMJCOD->fields)._items;
          (ELAGKBMJCOD->fields)._version = (ELAGKBMJCOD->fields)._version + 1;
          if (pIVar13 == (IPPEHAJADOO_JEOCIECEGHH_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (ELAGKBMJCOD->fields)._size;
          if (uVar1 < (uint)pIVar13->max_length) {
            (ELAGKBMJCOD->fields)._size = uVar1 + 1;
            pIVar13->m_Items[(int)uVar1] = (IPPEHAJADOO_JEOCIECEGHH_o *)pIVar5;
            thunk_FUN_01c20e04(pIVar13->m_Items + (int)uVar1,pIVar5);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,pIVar5,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,
               Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_Dispose__)
    ;
    IPPEHAJADOO__CBGCMJCJJKP(__this,BCKBBGCOMJD,ELAGKBMJCOD,true,in_x4);
  }
  return;
}


// ===== public void ABHHEJBJLPC(OLKKAIFGGAK.EAOIGPODIAI INNMCFJNEAE)  [RVA 0x3140B54]
// IPPEHAJADOO$$ABHHEJBJLPC @ RVA 0x3140B54

void IPPEHAJADOO__ABHHEJBJLPC
               (IPPEHAJADOO_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *INNMCFJNEAE,MethodInfo *method)

{
  MethodInfo *in_x4;
  
  IPPEHAJADOO__BKBHKFCCKDO(__this,3,INNMCFJNEAE,false,in_x4);
  return;
}


// ===== private void CLADJKBJHCD()  [RVA 0x313F990]
// IPPEHAJADOO$$CLADJKBJHCD @ RVA 0x313F990

void IPPEHAJADOO__CLADJKBJHCD(IPPEHAJADOO_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Collections_Generic_List_ECAIEGNAOAL__o *pSVar3;
  OPNFCOGALLI_o *__this_00;
  System_Predicate_IPPEHAJADOO_GHFEMFCMBEJ__o **ppSVar4;
  System_Collections_Generic_List_ECAIEGNAOAL__o *__this_01;
  MethodInfo *in_x3;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar5;
  System_Collections_Generic_List_IPPEHAJADOO_GHFEMFCMBEJ__o *__this_02;
  System_Predicate_IPPEHAJADOO_GHFEMFCMBEJ__o *match;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566752 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECAIEGNAOAL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECAIEGNAOAL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECAIEGNAOAL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_GHFEMFCMBEJ>_RemoveAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    FUN_01bab630(&System_Predicate<IPPEHAJADOO_GHFEMFCMBEJ>_TypeInfo);
    FUN_01bab630(&Method_IPPEHAJADOO_<>c_BGPBDFCDLIF__);
    FUN_01bab630(&IPPEHAJADOO_<>c_TypeInfo);
    DAT_04566752 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pSVar5 = (__this->fields).DNCDKLGJGBN;
  if (pSVar5 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    iVar1 = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < iVar1) {
      in_x3 = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    IPPEHAJADOO__LBBNPGLGKNO(__this,(__this->fields).MBPELMMKGMB,(__this->fields).EOAFFOBIBGO,in_x3)
    ;
    pSVar3 = (__this->fields).KBOMJBFAKKA;
    if (pSVar3 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)pSVar3,
                 Method_System_Collections_Generic_List<ECAIEGNAOAL>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_70,
                                Method_System_Collections_Generic_List_Enumerator<ECAIEGNAOAL>_MoveNext__
                               ), bVar2) {
        if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (local_70.fields._current[1].klass != (Il2CppClass *)0x0) {
          __this_00 = (OPNFCOGALLI_o *)(local_70.fields._current[1].klass)->vtable[0x15].method;
          if (__this_00 == (OPNFCOGALLI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          OPNFCOGALLI__JEBLJHPJMBA
                    (__this_00,*(int32_t *)((long)&local_70.fields._current[2].monitor + 4),
                     (MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<ECAIEGNAOAL>_Dispose__)
      ;
      pSVar3 = (__this->fields).KBOMJBFAKKA;
      if (pSVar3 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_88,(System_Collections_Generic_List_object__o *)pSVar3,
                   Method_System_Collections_Generic_List<ECAIEGNAOAL>_GetEnumerator__);
        local_70.fields._index = local_88.fields._index;
        local_70.fields._version = local_88.fields._version;
        local_70.fields._list = local_88.fields._list;
        local_70.fields._current = local_88.fields._current;
        do {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_70,
                             Method_System_Collections_Generic_List_Enumerator<ECAIEGNAOAL>_MoveNext__
                            );
        } while (bVar2);
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<ECAIEGNAOAL>_Dispose__);
        pSVar3 = (__this->fields).KBOMJBFAKKA;
        if (pSVar3 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
          iVar1 = (pSVar3->fields)._size;
          (pSVar3->fields)._size = 0;
          (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
          if (0 < iVar1) {
            in_x3 = (MethodInfo *)0x0;
            System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0)
            ;
          }
          __this_02 = (__this->fields).DPHKLKNAOAB;
          if ((IPPEHAJADOO_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          match = IPPEHAJADOO_<>c_TypeInfo->static_fields->__9__31_0;
          if (match == (System_Predicate_IPPEHAJADOO_GHFEMFCMBEJ__o *)0x0) {
            if ((IPPEHAJADOO_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            match = (System_Predicate_IPPEHAJADOO_GHFEMFCMBEJ__o *)
                    thunk_FUN_01bda818(System_Predicate<IPPEHAJADOO_GHFEMFCMBEJ>_TypeInfo);
            in_x3 = (MethodInfo *)0x0;
            System_Predicate<object>___ctor();
            ppSVar4 = &IPPEHAJADOO_<>c_TypeInfo->static_fields->__9__31_0;
            *ppSVar4 = match;
            thunk_FUN_01c20e04(ppSVar4,match);
          }
          if (__this_02 != (System_Collections_Generic_List_IPPEHAJADOO_GHFEMFCMBEJ__o *)0x0) {
            System_Collections_Generic_List<object>__RemoveAll
                      ((System_Collections_Generic_List_object__o *)__this_02,
                       (System_Predicate_T__o *)match,
                       Method_System_Collections_Generic_List<IPPEHAJADOO_GHFEMFCMBEJ>_RemoveAll__);
            pSVar5 = (__this->fields).DNCDKLGJGBN;
            if (pSVar5 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
              if (0 < (pSVar5->fields)._size) {
                IPPEHAJADOO__LBBNPGLGKNO(__this,pSVar5,(__this->fields).AMCAKDINLFL,in_x3);
              }
              IPPEHAJADOO__OAKJPPFCMAD
                        (__this,(__this->fields).MBPELMMKGMB,(__this->fields).EOAFFOBIBGO,in_x3);
              pSVar5 = (__this->fields).DNCDKLGJGBN;
              if (pSVar5 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                if (0 < (pSVar5->fields)._size) {
                  IPPEHAJADOO__OAKJPPFCMAD(__this,pSVar5,(__this->fields).AMCAKDINLFL,in_x3);
                }
                pSVar3 = (__this->fields).FNMHCOJPGMJ;
                if (pSVar3 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
                  if ((pSVar3->fields)._size < 1) {
                    return;
                  }
                  __this_01 = (__this->fields).KBOMJBFAKKA;
                  if (__this_01 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
                    System_Collections_Generic_List<object>__AddRange
                              ((System_Collections_Generic_List_object__o *)__this_01,
                               (System_Collections_Generic_IEnumerable_T__o *)pSVar3,
                               Method_System_Collections_Generic_List<ECAIEGNAOAL>_AddRange__);
                    pSVar3 = (__this->fields).FNMHCOJPGMJ;
                    if (pSVar3 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
                      iVar1 = (pSVar3->fields)._size;
                      (pSVar3->fields)._size = 0;
                      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
                      if (iVar1 < 1) {
                        return;
                      }
                      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,
                                          (MethodInfo *)0x0);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IODIJIPDIPI(OLKKAIFGGAK INNMCFJNEAE)  [RVA 0x3140F20]
// IPPEHAJADOO$$IODIJIPDIPI @ RVA 0x3140F20

void IPPEHAJADOO__IODIJIPDIPI(IPPEHAJADOO_o *__this,OLKKAIFGGAK_o *INNMCFJNEAE,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  MethodInfo *in_x4;
  OLKKAIFGGAK_array *pOVar3;
  
  if ((DAT_04566753 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Add__);
    DAT_04566753 = 1;
  }
  IPPEHAJADOO__OCJCMHLABBF(__this,INNMCFJNEAE,method);
  lVar2 = Method_System_Collections_Generic_List<OLKKAIFGGAK>_Add__;
  __this_00 = (__this->fields).DNCDKLGJGBN;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    pOVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pOVar3 != (OLKKAIFGGAK_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pOVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pOVar3->m_Items[(int)uVar1] = INNMCFJNEAE;
        thunk_FUN_01c20e04(pOVar3->m_Items + (int)uVar1,INNMCFJNEAE);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)INNMCFJNEAE,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      if (INNMCFJNEAE != (OLKKAIFGGAK_o *)0x0) {
        IPPEHAJADOO__BKBHKFCCKDO(__this,0xf,(INNMCFJNEAE->fields).PDCHNCOIHHA,false,in_x4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private IPPEHAJADOO.JEOCIECEGHH BKAIGLDAJPC(OLKKAIFGGAK BCKBBGCOMJD, List<IPPEHAJADOO.JEOCIECEGHH> BHNKDGKFDIL)  [RVA 0x3140558]
// IPPEHAJADOO$$BKAIGLDAJPC @ RVA 0x3140558

IPPEHAJADOO_JEOCIECEGHH_o *
IPPEHAJADOO__BKAIGLDAJPC
          (IPPEHAJADOO_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
          System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *BHNKDGKFDIL,MethodInfo *method
          )

{
  int iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int32_t index;
  System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD;
  NGKBNOEJLPH_o *__this_00;
  IPPEHAJADOO_JEOCIECEGHH_o *pIVar5;
  Il2CppClass *item;
  ECENNHNBAME_array *pEVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566754 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    DAT_04566754 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (BHNKDGKFDIL != (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0) {
    iVar1 = (BHNKDGKFDIL->fields)._size;
    if (iVar1 < 1) {
      pIVar5 = (IPPEHAJADOO_JEOCIECEGHH_o *)0x0;
    }
    else {
      ELAGKBMJCOD = (System_Collections_Generic_List_ECENNHNBAME__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,
                 Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)BHNKDGKFDIL,
                 Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_MoveNext__
                          );
        lVar3 = Method_System_Collections_Generic_List<ECENNHNBAME>_Add__;
        if (!bVar4) break;
        if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (ELAGKBMJCOD == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item = local_70.fields._current[1].klass;
        pEVar6 = (ELAGKBMJCOD->fields)._items;
        (ELAGKBMJCOD->fields)._version = (ELAGKBMJCOD->fields)._version + 1;
        if (pEVar6 == (ECENNHNBAME_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (ELAGKBMJCOD->fields)._size;
        if (uVar2 < (uint)pEVar6->max_length) {
          (ELAGKBMJCOD->fields)._size = uVar2 + 1;
          pEVar6->m_Items[(int)uVar2] = (ECENNHNBAME_o *)item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,
                 Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_Dispose__
                );
      if ((BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) ||
         (__this_00 = (BCKBBGCOMJD->fields).ADGFKAPOIFN, __this_00 == (NGKBNOEJLPH_o *)0x0))
      goto LAB_03240774;
      index = NGKBNOEJLPH__BKAIGLDAJPC(__this_00,ELAGKBMJCOD,(MethodInfo *)0x0);
      pIVar5 = (IPPEHAJADOO_JEOCIECEGHH_o *)0x0;
      if ((-1 < index) && (index < iVar1)) {
        pIVar5 = (IPPEHAJADOO_JEOCIECEGHH_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)BHNKDGKFDIL,index,
                            Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__
                           );
      }
    }
    return pIVar5;
  }
LAB_03240774:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DGLJCGNHLIG()  [RVA 0x31412F0]
// IPPEHAJADOO$$DGLJCGNHLIG @ RVA 0x31412F0

void IPPEHAJADOO__DGLJCGNHLIG(IPPEHAJADOO_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_ECAIEGNAOAL__o *pSVar2;
  
  if ((DAT_04566755 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_Clear__);
    DAT_04566755 = 1;
  }
  pSVar2 = (__this->fields).FNMHCOJPGMJ;
  if (pSVar2 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields).KBOMJBFAKKA;
    if (pSVar2 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BBCAMJDDOII(OLKKAIFGGAK.EAOIGPODIAI INNMCFJNEAE)  [RVA 0x314138C]
// IPPEHAJADOO$$BBCAMJDDOII @ RVA 0x314138C

void IPPEHAJADOO__BBCAMJDDOII
               (IPPEHAJADOO_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *INNMCFJNEAE,MethodInfo *method)

{
  MethodInfo *in_x4;
  
  IPPEHAJADOO__BKBHKFCCKDO(__this,9,INNMCFJNEAE,false,in_x4);
  return;
}


// ===== private void IHCJOCNLHCB(IPPEHAJADOO.JEOCIECEGHH DKMMBMBMJBO, List<IPPEHAJADOO.JEOCIECEGHH> PDFFKDLECND)  [RVA 0x314139C]
// IPPEHAJADOO$$IHCJOCNLHCB @ RVA 0x314139C

void IPPEHAJADOO__IHCJOCNLHCB
               (IPPEHAJADOO_o *__this,IPPEHAJADOO_JEOCIECEGHH_o *DKMMBMBMJBO,
               System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *PDFFKDLECND,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  int iVar4;
  Il2CppObject *pIVar5;
  ECENNHNBAME_o *pEVar6;
  IPPEHAJADOO_JEOCIECEGHH_array *pIVar7;
  
  if ((DAT_04566756 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__);
    DAT_04566756 = 1;
  }
  if (((DKMMBMBMJBO != (IPPEHAJADOO_JEOCIECEGHH_o *)0x0) &&
      (pEVar6 = (DKMMBMBMJBO->fields).BNGDONJEHMH, pEVar6 != (ECENNHNBAME_o *)0x0)) &&
     (iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pEVar6->fields).EAFPDFHFBOM.fields,(MethodInfo *)0x0),
     PDFFKDLECND != (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0)) {
    if ((PDFFKDLECND->fields)._size < 1) {
      iVar4 = 0;
    }
    else {
      pIVar5 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)PDFFKDLECND,0,
                          Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__
                         );
                    /* try { // try from 03241440 to 03341447 has its CatchHandler @ 032415f0 */
      if ((pIVar5 == (Il2CppObject *)0x0) || (pIVar5[1].klass == (Il2CppClass *)0x0))
      goto LAB_03241508;
      iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                          ((long)&((pIVar5[1].klass)->_1).this_arg.data + 4),(MethodInfo *)0x0);
    }
    if (iVar3 < iVar4) {
      return;
    }
    if (iVar4 < iVar3) {
      iVar3 = (PDFFKDLECND->fields)._size;
      (PDFFKDLECND->fields)._size = 0;
      (PDFFKDLECND->fields)._version = (PDFFKDLECND->fields)._version + 1;
      if (0 < iVar3) {
        System_Array__Clear((System_Array_o *)(PDFFKDLECND->fields)._items,0,iVar3,(MethodInfo *)0x0
                           );
      }
    }
    lVar2 = Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_Add__;
                    /* try { // try from 0324149c to 033414a7 has its CatchHandler @ 032415e8 */
    pIVar7 = (PDFFKDLECND->fields)._items;
    (PDFFKDLECND->fields)._version = (PDFFKDLECND->fields)._version + 1;
                    /* try { // try from 032414b4 to 033414bb has its CatchHandler @ 032415e4 */
    if (pIVar7 != (IPPEHAJADOO_JEOCIECEGHH_array *)0x0) {
      uVar1 = (PDFFKDLECND->fields)._size;
      if (uVar1 < (uint)pIVar7->max_length) {
                    /* try { // try from 032414cc to 033414cf has its CatchHandler @ 032415d0 */
                    /* try { // try from 032414d0 to 033414db has its CatchHandler @ 032415e0 */
        (PDFFKDLECND->fields)._size = uVar1 + 1;
        pIVar7->m_Items[(int)uVar1] = DKMMBMBMJBO;
                    /* try { // try from 032414e0 to 033414eb has its CatchHandler @ 032415d8 */
        thunk_FUN_01c20e04(pIVar7->m_Items + (int)uVar1,DKMMBMBMJBO);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)PDFFKDLECND,
                 (Il2CppObject *)DKMMBMBMJBO,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
LAB_03241508:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool ECFJIHEHELO(ECENNHNBAME NLEBDPHNIDI, List<IPPEHAJADOO.JEOCIECEGHH> ELAGKBMJCOD)  [RVA 0x314150C]
// IPPEHAJADOO$$ECFJIHEHELO @ RVA 0x314150C

bool IPPEHAJADOO__ECFJIHEHELO
               (ECENNHNBAME_o *NLEBDPHNIDI,
               System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *ELAGKBMJCOD,
               MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566757 & 1) == 0) {
                    /* try { // try from 03241534 to 0334153f has its CatchHandler @ 032415d4 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_MoveNext__
                );
                    /* try { // try from 03241550 to 03341557 has its CatchHandler @ 032415e8 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_GetEnumerator__);
    DAT_04566757 = 1;
  }
                    /* try { // try from 03241568 to 0334156f has its CatchHandler @ 032415d4 */
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 03241570 to 033415b7 has its CatchHandler @ 03241244 */
  if (ELAGKBMJCOD == (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)ELAGKBMJCOD,
             Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_MoveNext__
                      );
    if (!bVar1) {
      iVar2 = 5;
      goto LAB_032415d0;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 032415b8 to 033415bb has its CatchHandler @ 032415ec */
                    /* try { // try from 032415bc to 033415c3 has its CatchHandler @ 032415f4 */
  } while ((Il2CppClass *)NLEBDPHNIDI != local_48.fields._current[1].klass);
                    /* try { // try from 032415c4 to 033415c7 has its CatchHandler @ 03241244 */
  iVar2 = 4;
                    /* try { // try from 032415c8 to 033415cf has its CatchHandler @ 032415dc */
LAB_032415d0:
                    /* catch() { ... } // from try @ 032414cc with catch @ 032415d0
                       try { // try from 032415d0 to 0334160b has its CatchHandler @ 03241244 */
                    /* catch() { ... } // from try @ 03241534 with catch @ 032415d4
                       catch() { ... } // from try @ 03241568 with catch @ 032415d4 */
                    /* catch() { ... } // from try @ 032414e0 with catch @ 032415d8 */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,
             Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_Dispose__);
                    /* catch() { ... } // from try @ 032415c8 with catch @ 032415dc */
                    /* catch() { ... } // from try @ 032414d0 with catch @ 032415e0 */
                    /* catch() { ... } // from try @ 032414b4 with catch @ 032415e4 */
                    /* catch() { ... } // from try @ 0324149c with catch @ 032415e8
                       catch() { ... } // from try @ 03241550 with catch @ 032415e8 */
                    /* catch() { ... } // from try @ 032415b8 with catch @ 032415ec */
                    /* catch() { ... } // from try @ 03241440 with catch @ 032415f0 */
                    /* catch() { ... } // from try @ 032415bc with catch @ 032415f4 */
  return bVar1 && iVar2 == 4;
}


// ===== private static void MBOEJOGCFHG(OLKKAIFGGAK BCKBBGCOMJD, NJPBHDMCLIN AHEFOIOKDOK, ECENNHNBAME NLEBDPHNIDI, int OAFGMHOFEKM)  [RVA 0x3141674]
// IPPEHAJADOO$$MBOEJOGCFHG @ RVA 0x3141674

void IPPEHAJADOO__MBOEJOGCFHG
               (OLKKAIFGGAK_o *BCKBBGCOMJD,NJPBHDMCLIN_o *AHEFOIOKDOK,ECENNHNBAME_o *NLEBDPHNIDI,
               int32_t OAFGMHOFEKM,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t KGJLIPJNNKB;
  System_Collections_Generic_List_KAFCPHCBLPL__o *__this;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar3;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04566758 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KAFCPHCBLPL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KAFCPHCBLPL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KAFCPHCBLPL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAFCPHCBLPL>_GetEnumerator__);
    DAT_04566758 = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if (((NLEBDPHNIDI != (ECENNHNBAME_o *)0x0) &&
      (pEVar3 = (NLEBDPHNIDI->fields).DMGLMCBIAGL, pEVar3 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0)) &&
     (__this = (pEVar3->fields).NLPMEFHNMOI,
     __this != (System_Collections_Generic_List_KAFCPHCBLPL__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<KAFCPHCBLPL>_GetEnumerator__);
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<KAFCPHCBLPL>_MoveNext__);
      pIVar1 = local_58.fields._current;
      if (!bVar2) {
        bVar2 = false;
        KGJLIPJNNKB = -1;
        goto LAB_03241774;
      }
      if ((KAFCPHCBLPL_o *)local_58.fields._current == (KAFCPHCBLPL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = KAFCPHCBLPL__PCPBHJGAOOH
                        ((KAFCPHCBLPL_o *)local_58.fields._current,AHEFOIOKDOK,(MethodInfo *)0x0);
    } while (!bVar2);
    bVar2 = ((KAFCPHCBLPL_Fields *)((long)pIVar1 + 0x10))->FMGLHJDODPA != false;
    KGJLIPJNNKB = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (((KAFCPHCBLPL_Fields *)((long)pIVar1 + 0x10))->JAHFGPMFLGN).fields,
                             (MethodInfo *)0x0);
LAB_03241774:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_58,Method_System_Collections_Generic_List_Enumerator<KAFCPHCBLPL>_Dispose__);
    if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
      OLKKAIFGGAK__NFJPOGJJEAK
                (BCKBBGCOMJD,NLEBDPHNIDI,OAFGMHOFEKM,bVar2,KGJLIPJNNKB,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void CEACPADMPKJ(NJPBHDMCLIN AHEFOIOKDOK, OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x3141850]
// IPPEHAJADOO$$CEACPADMPKJ @ RVA 0x3141850

void IPPEHAJADOO__CEACPADMPKJ
               (NJPBHDMCLIN_o *AHEFOIOKDOK,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  byte bVar3;
  int32_t iVar4;
  OLKKAIFGGAK_o *__this;
  OLKKAIFGGAK_o *__this_00;
  OLKKAIFGGAK_o *BCKBBGCOMJD_00;
  MMDDDDFHOLG_o *pMVar5;
  PJKHAJKEHEL_o *pPVar6;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar7;
  NKOIBKNPICN_o *pNVar8;
  System_Collections_Generic_List_JADGCGOJLJB__o *pSVar9;
  OPNFCOGALLI_o *pOVar10;
  IEFEBEDLHNN_o *pIVar11;
  MethodInfo *in_x3;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *pSVar12;
  MMDPNDAECII_o *pMVar13;
  OLKKAIFGGAK_OGCKCABMHLC_o *pOVar14;
  CNDPAJOLKFN_o *pCVar15;
  bool_conflict bVar16;
  MMDPNDAECII_o *pMVar17;
  IEFEBEDLHNN_o **ppIVar18;
  OLKKAIFGGAK_o *BCKBBGCOMJD_01;
  OLKKAIFGGAK_OGCKCABMHLC_o **ppOVar19;
  System_Collections_Generic_List_JADGCGOJLJB__o **ppSVar20;
  FCJBEKHDLAF_o *__this_01;
  float fVar21;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  
  if ((DAT_04566759 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_Clear__);
    DAT_04566759 = 1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) goto LAB_03241e20;
  BCKBBGCOMJD_01 = (BCKBBGCOMJD->fields).BPJMMBGIMNC;
  __this_01 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  __this = OLKKAIFGGAK__GMBBOANEBJJ(BCKBBGCOMJD,3,(MethodInfo *)0x0);
  __this_00 = OLKKAIFGGAK__GMBBOANEBJJ(BCKBBGCOMJD,4,(MethodInfo *)0x0);
  BCKBBGCOMJD_00 = OLKKAIFGGAK__GMBBOANEBJJ(BCKBBGCOMJD,6,(MethodInfo *)0x0);
  if (__this_01 == (FCJBEKHDLAF_o *)0x0) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_03241e20;
    iVar4 = 0;
  }
  else {
    iVar4 = FCJBEKHDLAF__IHMLDBDLJON(__this_01,(MethodInfo *)0x0);
    if ((AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) ||
       (pMVar5 = (__this_01->fields).POEGCOJFMDB, pMVar5 == (MMDDDDFHOLG_o *)0x0))
    goto LAB_03241e20;
    MMDDDDFHOLG__BGNPKMBPKDK(pMVar5,BCKBBGCOMJD,(AHEFOIOKDOK->fields).FHPCCICONDB,(MethodInfo *)0x0)
    ;
    pMVar5 = (__this_01->fields).POEGCOJFMDB;
    if (pMVar5 == (MMDDDDFHOLG_o *)0x0) goto LAB_03241e20;
    in_x3 = (MethodInfo *)0x0;
    MMDDDDFHOLG__OECDKCNPMPP(pMVar5,BCKBBGCOMJD,(AHEFOIOKDOK->fields).ONDAMLIEBAM,(MethodInfo *)0x0)
    ;
    if (BCKBBGCOMJD_01 == (OLKKAIFGGAK_o *)0x0) {
      pSVar12 = (AHEFOIOKDOK->fields).BGCEGKIDDAP;
      if (pSVar12 == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0)
      goto LAB_03241e20;
      iVar1 = (pSVar12->fields)._size;
      (pSVar12->fields)._size = 0;
      (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
      if (0 < iVar1) {
        in_x3 = (MethodInfo *)0x0;
        System_Array__Clear((System_Array_o *)(pSVar12->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pSVar12 = (AHEFOIOKDOK->fields).PEBHEJFMAHA;
      if (pSVar12 == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0)
      goto LAB_03241e20;
      iVar1 = (pSVar12->fields)._size;
      (pSVar12->fields)._size = 0;
      (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
      if (0 < iVar1) {
        in_x3 = (MethodInfo *)0x0;
        System_Array__Clear((System_Array_o *)(pSVar12->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
    }
    else {
      pMVar5 = (__this_01->fields).POEGCOJFMDB;
      if (pMVar5 == (MMDDDDFHOLG_o *)0x0) goto LAB_03241e20;
      MMDDDDFHOLG__BGNPKMBPKDK
                (pMVar5,BCKBBGCOMJD_01,(AHEFOIOKDOK->fields).BGCEGKIDDAP,(MethodInfo *)0x0);
      pMVar5 = (__this_01->fields).POEGCOJFMDB;
      if (pMVar5 == (MMDDDDFHOLG_o *)0x0) goto LAB_03241e20;
      in_x3 = (MethodInfo *)0x0;
      MMDDDDFHOLG__BGNPKMBPKDK
                (pMVar5,BCKBBGCOMJD_01,(AHEFOIOKDOK->fields).PEBHEJFMAHA,(MethodInfo *)0x0);
    }
  }
  (AHEFOIOKDOK->fields).GGIGKNJPODI = BCKBBGCOMJD;
  thunk_FUN_01c20e04(&AHEFOIOKDOK->fields,BCKBBGCOMJD);
  pPVar6 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
  if (pPVar6 != (PJKHAJKEHEL_o *)0x0) {
    pSVar7 = PJKHAJKEHEL__BMDDFABHHCA(pPVar6,(MethodInfo *)0x0);
    (AHEFOIOKDOK->fields).OOFILGKHDDI = pSVar7;
    thunk_FUN_01c20e04();
    if (BCKBBGCOMJD_01 == (OLKKAIFGGAK_o *)0x0) {
      pSVar7 = (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0;
    }
    else {
      pPVar6 = (BCKBBGCOMJD_01->fields).FAPMJJBOFEF;
      if (pPVar6 == (PJKHAJKEHEL_o *)0x0) goto LAB_03241e20;
      pSVar7 = PJKHAJKEHEL__BMDDFABHHCA(pPVar6,(MethodInfo *)0x0);
    }
    (AHEFOIOKDOK->fields).GIIIBDMEPDK = pSVar7;
    thunk_FUN_01c20e04(&(AHEFOIOKDOK->fields).GIIIBDMEPDK);
    (AHEFOIOKDOK->fields).COALAGILPBO = iVar4;
    ppOVar19 = &(AHEFOIOKDOK->fields).LHAJAKGFFBI;
    *ppOVar19 = (BCKBBGCOMJD->fields).MMIDFMEOACB;
    thunk_FUN_01c20e04(ppOVar19);
    (AHEFOIOKDOK->fields).PNLLLBCNLAG = BCKBBGCOMJD_01 != (OLKKAIFGGAK_o *)0x0;
    iVar4 = OLKKAIFGGAK__MALPGCALHNK(BCKBBGCOMJD,(MethodInfo *)0x0);
    (AHEFOIOKDOK->fields).HIHFJJOMDBF = iVar4;
    if (BCKBBGCOMJD_01 == (OLKKAIFGGAK_o *)0x0) {
      iVar4 = 1;
    }
    else {
      iVar4 = OLKKAIFGGAK__MALPGCALHNK(BCKBBGCOMJD_01,(MethodInfo *)0x0);
    }
    (AHEFOIOKDOK->fields).HIHFGHGCMKH = iVar4;
    if (__this == (OLKKAIFGGAK_o *)0x0) {
      iVar4 = 1;
    }
    else {
      iVar4 = OLKKAIFGGAK__MALPGCALHNK(__this,(MethodInfo *)0x0);
    }
    (AHEFOIOKDOK->fields).KBBLBDCCAGA = iVar4;
    if (__this_00 == (OLKKAIFGGAK_o *)0x0) {
      iVar4 = 1;
    }
    else {
      iVar4 = OLKKAIFGGAK__MALPGCALHNK(__this_00,(MethodInfo *)0x0);
    }
    (AHEFOIOKDOK->fields).DAMHCMOKBND = iVar4;
    pNVar8 = OLKKAIFGGAK__PHGCNONBLCE
                       (BCKBBGCOMJD,(AHEFOIOKDOK->fields).HIHFJJOMDBF,(MethodInfo *)0x0);
    (AHEFOIOKDOK->fields).FKGFFHPFKHH = pNVar8;
    thunk_FUN_01c20e04();
    pSVar9 = OLKKAIFGGAK__LKACBDNEJON(BCKBBGCOMJD,(MethodInfo *)0x0);
    (AHEFOIOKDOK->fields).GLFJDDHEMNO = pSVar9;
    thunk_FUN_01c20e04();
    if (BCKBBGCOMJD_01 == (OLKKAIFGGAK_o *)0x0) {
      pSVar9 = (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0;
    }
    else {
      pSVar9 = OLKKAIFGGAK__LKACBDNEJON(BCKBBGCOMJD_01,(MethodInfo *)0x0);
    }
    (AHEFOIOKDOK->fields).ILBBBFHKKHG = pSVar9;
    thunk_FUN_01c20e04();
    if (__this == (OLKKAIFGGAK_o *)0x0) {
      pSVar9 = (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0;
    }
    else {
      pSVar9 = OLKKAIFGGAK__LKACBDNEJON(__this,(MethodInfo *)0x0);
    }
    ppSVar20 = &(AHEFOIOKDOK->fields).FMCHOKFMHKC;
    *ppSVar20 = pSVar9;
    thunk_FUN_01c20e04(ppSVar20);
    bVar2 = OLKKAIFGGAK__HODPOCMNNIN(BCKBBGCOMJD,(MethodInfo *)0x0);
    (AHEFOIOKDOK->fields).HJPOJOPKEKI = bVar2;
    bVar3 = (*(BCKBBGCOMJD->klass->vtable)._9_EEMIOBINNJG.methodPtr)
                      (BCKBBGCOMJD,(BCKBBGCOMJD->klass->vtable)._9_EEMIOBINNJG.method);
    (AHEFOIOKDOK->fields).ANOKHPAKKON = (bool_conflict)(bVar3 & 1);
    iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (BCKBBGCOMJD->fields).LGKFKNGIPDM.fields,(MethodInfo *)0x0);
    (AHEFOIOKDOK->fields).LGKFKNGIPDM = iVar4;
    pMVar13 = (BCKBBGCOMJD->fields).GJLEPEPAOKD;
    if (pMVar13 != (MMDPNDAECII_o *)0x0) {
      (AHEFOIOKDOK->fields).MKGLNHHGPGL = (pMVar13->fields).BNHJIKJAHHF;
      if (BCKBBGCOMJD_01 == (OLKKAIFGGAK_o *)0x0) {
        bVar16 = false;
      }
      else {
        pMVar17 = (BCKBBGCOMJD_01->fields).GJLEPEPAOKD;
        bVar16 = false;
        if (pMVar17 != (MMDPNDAECII_o *)0x0) {
          bVar16 = (pMVar17->fields).BNHJIKJAHHF;
        }
      }
      (AHEFOIOKDOK->fields).AKMEMGPGKNH = bVar16;
      if (__this == (OLKKAIFGGAK_o *)0x0) {
        bVar2 = false;
      }
      else {
        pMVar17 = (__this->fields).GJLEPEPAOKD;
        bVar2 = false;
        if (pMVar17 != (MMDPNDAECII_o *)0x0) {
          bVar2 = (pMVar17->fields).BNHJIKJAHHF != false;
        }
      }
      (AHEFOIOKDOK->fields).JEFJKAKPOEP = bVar2;
      (AHEFOIOKDOK->fields).AFMOEMAGCBO = (pMVar13->fields).AGHCNFGKHCH;
      pPVar6 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
      if (pPVar6 != (PJKHAJKEHEL_o *)0x0) {
        (AHEFOIOKDOK->fields).LMKHOJFOPEB = (pPVar6->fields).LMKHOJFOPEB;
        (AHEFOIOKDOK->fields).DONKDCJLBPN = (pPVar6->fields).DONKDCJLBPN;
        (AHEFOIOKDOK->fields).KNDEADMMCPO = (pPVar6->fields).KNDEADMMCPO;
        bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                           (BCKBBGCOMJD->fields).BPEIPGJNCLC.fields,(MethodInfo *)0x0);
        (AHEFOIOKDOK->fields).BPEIPGJNCLC = bVar2;
        pOVar14 = (BCKBBGCOMJD->fields).MMIDFMEOACB;
        if ((pOVar14 != (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) &&
           (pCVar15 = (pOVar14->fields).GDPIIGNJCLE, pCVar15 != (CNDPAJOLKFN_o *)0x0)) {
          fVar21 = (pCVar15->fields).super.OHHDBINAJCB;
          iVar4 = -0x80000000;
          if (fVar21 != INFINITY) {
            iVar4 = (int)fVar21;
          }
          (AHEFOIOKDOK->fields).OODLJOMIOIB = iVar4;
          pPVar6 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
          if (pPVar6 != (PJKHAJKEHEL_o *)0x0) {
            local_70.fakeValueActive = (pPVar6->fields).JNFNFEJAGGN.fields.fakeValueActive;
            local_70.inited = (pPVar6->fields).JNFNFEJAGGN.fields.inited;
            local_70._18_2_ = *(undefined2 *)&(pPVar6->fields).JNFNFEJAGGN.fields.field_0x12;
            local_70.hiddenValueOldByte4.fields =
                 (pPVar6->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
            local_70.fakeValue = (pPVar6->fields).JNFNFEJAGGN.fields.fakeValue;
            local_70.currentCryptoKey = (pPVar6->fields).JNFNFEJAGGN.fields.currentCryptoKey;
            local_70.hiddenValue = (pPVar6->fields).JNFNFEJAGGN.fields.hiddenValue;
            fVar21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                               ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_70,
                                (MethodInfo *)0x0);
            (AHEFOIOKDOK->fields).MHICEIKDEEN = fVar21;
            pPVar6 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
            if (pPVar6 != (PJKHAJKEHEL_o *)0x0) {
              local_90.fakeValueActive = (pPVar6->fields).MGLLAKLAAOO.fields.fakeValueActive;
              local_90.inited = (pPVar6->fields).MGLLAKLAAOO.fields.inited;
              local_90._18_2_ = *(undefined2 *)&(pPVar6->fields).MGLLAKLAAOO.fields.field_0x12;
              local_90.hiddenValueOldByte4.fields =
                   (pPVar6->fields).MGLLAKLAAOO.fields.hiddenValueOldByte4.fields;
              local_90.fakeValue = (pPVar6->fields).MGLLAKLAAOO.fields.fakeValue;
              local_90.currentCryptoKey = (pPVar6->fields).MGLLAKLAAOO.fields.currentCryptoKey;
              local_90.hiddenValue = (pPVar6->fields).MGLLAKLAAOO.fields.hiddenValue;
                    /* try { // try from 03241cd4 to 03341f63 has its CatchHandler @ 03241cd4
                       catch() { ... } // from try @ 03241cd4 with catch @ 03241cd4
                       catch() { ... } // from try @ 03242388 with catch @ 03241cd4
                       catch() { ... } // from try @ 0324267c with catch @ 03241cd4
                       catch() { ... } // from try @ 032427b0 with catch @ 03241cd4
                       catch() { ... } // from try @ 03242814 with catch @ 03241cd4
                       catch() { ... } // from try @ 032429e4 with catch @ 03241cd4
                       catch() { ... } // from try @ 03242a80 with catch @ 03241cd4
                       catch() { ... } // from try @ 03242af0 with catch @ 03241cd4
                       catch() { ... } // from try @ 03242b34 with catch @ 03241cd4
                       catch() { ... } // from try @ 03242bc8 with catch @ 03241cd4
                       catch() { ... } // from try @ 03242c08 with catch @ 03241cd4 */
              fVar21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                 ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_90,
                                  (MethodInfo *)0x0);
              (AHEFOIOKDOK->fields).GOOIGGNHMJM = fVar21;
              iVar4 = OLKKAIFGGAK__HNBKNGICJJG(BCKBBGCOMJD,(MethodInfo *)0x0);
              (AHEFOIOKDOK->fields).CKOLCJBGDEH = iVar4;
              iVar4 = OLKKAIFGGAK__BAJGPELJMFG(BCKBBGCOMJD,(MethodInfo *)0x0);
              (AHEFOIOKDOK->fields).EOAEIECDCLC = iVar4;
              iVar4 = OLKKAIFGGAK__POIDJCKLINH(BCKBBGCOMJD,(MethodInfo *)0x0);
              (AHEFOIOKDOK->fields).DJCGMAELDCG = iVar4;
              pOVar10 = (BCKBBGCOMJD->fields).OAKOFJJIOFF;
              if (pOVar10 != (OPNFCOGALLI_o *)0x0) {
                pIVar11 = OPNFCOGALLI__ILECMJOENMK(pOVar10,(MethodInfo *)0x0);
                (AHEFOIOKDOK->fields).BGAPCCDBNIC = pIVar11;
                thunk_FUN_01c20e04();
                if (BCKBBGCOMJD_01 == (OLKKAIFGGAK_o *)0x0) {
                  pIVar11 = (IEFEBEDLHNN_o *)0x0;
                }
                else {
                  pOVar10 = (BCKBBGCOMJD_01->fields).OAKOFJJIOFF;
                  if (pOVar10 == (OPNFCOGALLI_o *)0x0) goto LAB_03241e20;
                  pIVar11 = OPNFCOGALLI__ILECMJOENMK(pOVar10,(MethodInfo *)0x0);
                }
                (AHEFOIOKDOK->fields).GFMPIKGOBNK = pIVar11;
                thunk_FUN_01c20e04();
                if ((__this == (OLKKAIFGGAK_o *)0x0) ||
                   (pOVar10 = (__this->fields).OAKOFJJIOFF, pOVar10 == (OPNFCOGALLI_o *)0x0)) {
                  pIVar11 = (IEFEBEDLHNN_o *)0x0;
                }
                else {
                  pIVar11 = OPNFCOGALLI__ILECMJOENMK(pOVar10,(MethodInfo *)0x0);
                }
                (AHEFOIOKDOK->fields).BBMAEBKPDKD = pIVar11;
                thunk_FUN_01c20e04();
                if (__this_00 == (OLKKAIFGGAK_o *)0x0) {
                  pIVar11 = (IEFEBEDLHNN_o *)0x0;
                }
                else {
                  pOVar10 = (__this_00->fields).OAKOFJJIOFF;
                  if (pOVar10 == (OPNFCOGALLI_o *)0x0) goto LAB_03241e20;
                  pIVar11 = OPNFCOGALLI__ILECMJOENMK(pOVar10,(MethodInfo *)0x0);
                }
                ppIVar18 = &(AHEFOIOKDOK->fields).MEOELMCKHEO;
                *ppIVar18 = pIVar11;
                thunk_FUN_01c20e04(ppIVar18);
                IPPEHAJADOO__ACFACKMJMIN
                          (&(AHEFOIOKDOK->fields).FAPKAFBALDE,(AHEFOIOKDOK->fields).BEMCNJHEADJ,
                           BCKBBGCOMJD,in_x3);
                IPPEHAJADOO__ACFACKMJMIN
                          (&(AHEFOIOKDOK->fields).AKMMPGCDEGB,(AHEFOIOKDOK->fields).PFDEJKDOAGL,
                           __this,in_x3);
                IPPEHAJADOO__ACFACKMJMIN
                          (&(AHEFOIOKDOK->fields).FEONJHEFIIC,(AHEFOIOKDOK->fields).PFFLOCBGFCH,
                           BCKBBGCOMJD_01,in_x3);
                IPPEHAJADOO__ACFACKMJMIN
                          (&(AHEFOIOKDOK->fields).OFNOOFAEIPH,(AHEFOIOKDOK->fields).GCKCPJILFGB,
                           __this_00,in_x3);
                IPPEHAJADOO__ACFACKMJMIN
                          (&(AHEFOIOKDOK->fields).EBDPNMBDCII,(AHEFOIOKDOK->fields).EBLHLNKKBEO,
                           BCKBBGCOMJD_00,in_x3);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03241e20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OKKJKBEMJFN(ECAIEGNAOAL KDFMDHADHMD, OLKKAIFGGAK BCKBBGCOMJD, List<ABNLGBHKOCE> AIEIIIHLDPO, int DPJIDNBJIBG)  [RVA 0x3141F04]
// IPPEHAJADOO$$OKKJKBEMJFN @ RVA 0x3141F04

void IPPEHAJADOO__OKKJKBEMJFN
               (IPPEHAJADOO_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_ABNLGBHKOCE__o *AIEIIIHLDPO,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  MethodInfo *method_00;
  System_Collections_Generic_List_NJPBHDMCLIN__o *pSVar6;
  NJPBHDMCLIN_o *OPJDGKIEJGC;
  Il2CppObject *pIVar7;
  ulong uVar8;
  IPPEHAJADOO_GHFEMFCMBEJ_o *__this_00;
  int index;
  MethodInfo *method_01;
  Il2CppClass *pIVar9;
  IPPEHAJADOO_GHFEMFCMBEJ_array *pIVar10;
  int index_00;
  System_Collections_Generic_List_IPPEHAJADOO_GHFEMFCMBEJ__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  method_01 = (MethodInfo *)AIEIIIHLDPO;
  if ((DAT_0456675a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_get_Current__);
                    /* try { // try from 03241f64 to 03341f6b has its CatchHandler @ 03242ba8 */
    FUN_01bab630(&IPPEHAJADOO_GHFEMFCMBEJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_GHFEMFCMBEJ>_Add__);
                    /* try { // try from 03241f80 to 03341f87 has its CatchHandler @ 03242ba4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
                    /* try { // try from 03241f90 to 03341f97 has its CatchHandler @ 03242b9c */
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__);
                    /* try { // try from 03241fc8 to 03341fd7 has its CatchHandler @ 03242b6c */
    DAT_0456675a = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (AIEIIIHLDPO == (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
LAB_032422b8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03241fdc to 03341fe3 has its CatchHandler @ 03242b84 */
  if (0 < (AIEIIIHLDPO->fields)._size) {
                    /* try { // try from 03241fe4 to 03341fef has its CatchHandler @ 03242b80 */
                    /* try { // try from 03241ff4 to 03342003 has its CatchHandler @ 03242b7c */
    index = 0;
    do {
                    /* try { // try from 03242014 to 0334201f has its CatchHandler @ 03242b78 */
      pIVar4 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)AIEIIIHLDPO,index,
                          Method_System_Collections_Generic_List<ABNLGBHKOCE>_get_Item__);
      if ((pIVar4 == (Il2CppObject *)0x0) ||
         (pIVar9 = pIVar4[1].klass, pIVar9 == (Il2CppClass *)0x0)) goto LAB_032422b8;
      index_00 = 0;
      while( true ) {
        pSVar5 = (System_Collections_Generic_List_object__o *)(pIVar9->_1).name;
                    /* try { // try from 03242038 to 0334203f has its CatchHandler @ 03242a60 */
        if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_032422b8;
        if ((pSVar5->fields)._size <= index_00) break;
        method_00 = (MethodInfo *)
                    System_Collections_Generic_List<object>__get_Item
                              (pSVar5,index_00,
                               Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Item__);
        if ((KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0) || (method_00 == (MethodInfo *)0x0))
        goto LAB_032422b8;
                    /* try { // try from 03242074 to 0334208b has its CatchHandler @ 03242a50 */
        bVar3 = IPPEHAJADOO__NACPECDBOFC
                          ((KDFMDHADHMD->fields).HEMGHNOOJPI,BCKBBGCOMJD,
                           *(int32_t *)((long)&method_00->field8_0x40 + 4),method_01);
        if (bVar3) {
          pSVar6 = (__this->fields).OGINLMAKLNF;
          if (pSVar6 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0) goto LAB_032422b8;
                    /* try { // try from 03242090 to 03342097 has its CatchHandler @ 03242a5c */
          OPJDGKIEJGC = (NJPBHDMCLIN_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar6,DPJIDNBJIBG,
                                   Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__);
          bVar3 = IPPEHAJADOO__FJCFCBPHJIJ
                            ((KJFPGDFNFCL_o *)method_00,OPJDGKIEJGC,KDFMDHADHMD,method_01);
          if (bVar3) {
                    /* try { // try from 032420b0 to 033420bb has its CatchHandler @ 03242a48 */
            if (((KDFMDHADHMD->fields).BGHFADDGPAD == 2) &&
               ((KDFMDHADHMD->fields).KHKEGAKGNCN != false)) {
              pSVar6 = (__this->fields).OGINLMAKLNF;
                    /* try { // try from 032420d4 to 033420db has its CatchHandler @ 03242a4c */
              if ((pSVar6 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0) ||
                 (pIVar7 = System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar6,
                                      DPJIDNBJIBG,
                                      Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__
                                     ), pIVar7 == (Il2CppObject *)0x0)) goto LAB_032422b8;
              *(undefined1 *)&pIVar7[0xd].monitor = 0;
            }
                    /* try { // try from 032420f8 to 033420ff has its CatchHandler @ 03242a00 */
            uVar8 = (*pIVar4->klass->vtable[8].methodPtr)
                              (pIVar4,BCKBBGCOMJD,0,method_00,pIVar4->klass->vtable[8].method);
                    /* try { // try from 03242100 to 03342117 has its CatchHandler @ 03242a28 */
            if ((uVar8 & 1) != 0) {
              if ((pIVar4[1].klass == (Il2CppClass *)0x0) ||
                 (pSVar5 = *(System_Collections_Generic_List_object__o **)
                            &((pIVar4[1].klass)->_1).byval_arg.bits,
                 pSVar5 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_032422b8;
                    /* try { // try from 0324211c to 03342123 has its CatchHandler @ 03242a30 */
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_98,pSVar5,
                         Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
              local_80.fields._index = local_98.fields._index;
              local_80.fields._version = local_98.fields._version;
              local_80.fields._list = local_98.fields._list;
              local_80.fields._current = local_98.fields._current;
                    /* try { // try from 03242138 to 0334213f has its CatchHandler @ 03242a38 */
              while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                       (&local_80,
                                        Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__
                                       ), pIVar7 = local_80.fields._current, bVar3) {
                __this_01 = (__this->fields).DPHKLKNAOAB;
                __this_00 = (IPPEHAJADOO_GHFEMFCMBEJ_o *)
                            thunk_FUN_01bda818(IPPEHAJADOO_GHFEMFCMBEJ_TypeInfo);
                    /* try { // try from 03242164 to 0334216b has its CatchHandler @ 0324281c */
                IPPEHAJADOO_GHFEMFCMBEJ___ctor
                          (__this_00,(IIMNGGHGKOD_o *)pIVar7,BCKBBGCOMJD,method_00);
                lVar2 = Method_System_Collections_Generic_List<IPPEHAJADOO_GHFEMFCMBEJ>_Add__;
                if (__this_01 == (System_Collections_Generic_List_IPPEHAJADOO_GHFEMFCMBEJ__o *)0x0)
                {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pIVar10 = (__this_01->fields)._items;
                (__this_01->fields)._version = (__this_01->fields)._version + 1;
                if (pIVar10 == (IPPEHAJADOO_GHFEMFCMBEJ_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar1 = (__this_01->fields)._size;
                if (uVar1 < (uint)pIVar10->max_length) {
                    /* try { // try from 03242194 to 0334219f has its CatchHandler @ 032427dc */
                  (__this_01->fields)._size = uVar1 + 1;
                  pIVar10->m_Items[(int)uVar1] = __this_00;
                  thunk_FUN_01c20e04(pIVar10->m_Items + (int)uVar1,__this_00);
                }
                else {
                    /* try { // try from 032421b8 to 033421bf has its CatchHandler @ 032423d8 */
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_01,
                             (Il2CppObject *)__this_00,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
              }
                    /* try { // try from 032421dc to 033421e3 has its CatchHandler @ 032423d4 */
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__);
            }
            method_01 = method_00;
                    /* try { // try from 032421ec to 033421f3 has its CatchHandler @ 032423cc */
            if (((KDFMDHADHMD->fields).BGHFADDGPAD == 2) &&
               ((KDFMDHADHMD->fields).KHKEGAKGNCN != false)) {
              pSVar6 = (__this->fields).OGINLMAKLNF;
                    /* try { // try from 03242200 to 03342207 has its CatchHandler @ 032423c0 */
                    /* try { // try from 03242210 to 03342217 has its CatchHandler @ 032423c8 */
              if ((pSVar6 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0) ||
                 (pIVar7 = System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar6,
                                      DPJIDNBJIBG,
                                      Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__
                                     ), pIVar7 == (Il2CppObject *)0x0)) goto LAB_032422b8;
              *(undefined1 *)&pIVar7[0xd].monitor = 1;
              method_01 = method_00;
            }
          }
        }
        pIVar9 = pIVar4[1].klass;
                    /* try { // try from 03242224 to 0334222b has its CatchHandler @ 032423c4 */
        index_00 = index_00 + 1;
        if (pIVar9 == (Il2CppClass *)0x0) goto LAB_032422b8;
      }
                    /* try { // try from 03242280 to 03342283 has its CatchHandler @ 03242390 */
      index = index + 1;
    } while (index < (AIEIIIHLDPO->fields)._size);
  }
                    /* try { // try from 03242298 to 033422a7 has its CatchHandler @ 0324239c */
  return;
}


// ===== internal static bool ICOOHCONHBC(OLKKAIFGGAK BCKBBGCOMJD, ABNLGBHKOCE AEDJMMHJIEH, List<IENLNOEDCFF> PBCGCHIKCOE, KJFPGDFNFCL FKDOMEBPFPF)  [RVA 0x314243C]
// IPPEHAJADOO$$ICOOHCONHBC @ RVA 0x314243C

/* WARNING: Removing unreachable block (ram,0x03242800) */
/* WARNING: Removing unreachable block (ram,0x03242a10) */

bool IPPEHAJADOO__ICOOHCONHBC
               (OLKKAIFGGAK_o *BCKBBGCOMJD,ABNLGBHKOCE_o *AEDJMMHJIEH,
               System_Collections_Generic_List_IENLNOEDCFF__o *PBCGCHIKCOE,
               KJFPGDFNFCL_o *FKDOMEBPFPF,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  Il2CppObject *__this;
  KAFMFFDFDBL_o *__this_00;
  bool bVar3;
  int32_t iVar4;
  System_Text_StringBuilder_o *__this_01;
  long lVar5;
  KJFPGDFNFCL_o **ppKVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_List_IENLNOEDCFF__o *__this_02;
  ABNLGBHKOCE_JBMHDDKONHC_o *pAVar9;
  int iVar10;
  NJPBHDMCLIN_o *pNVar11;
  Nekki_SF2_GUI_DebugModules_ScreenDebug_o *__this_03;
  UnityEngine_Color_o EFJKPCADGJH;
  System_Collections_Generic_List_Enumerator_T__o local_d0;
  undefined1 local_b8 [8];
  void *pvStack_b0;
  int32_t local_a8;
  undefined4 uStack_a4;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  byte local_84 [4];
  undefined1 local_80 [8];
  undefined8 uStack_78;
  KAFMFFDFDBL_o *local_70;
  
                    /* try { // try from 03242440 to 03342443 has its CatchHandler @ 03242a20 */
                    /* try { // try from 03242454 to 0334245b has its CatchHandler @ 03242a24 */
                    /* try { // try from 03242470 to 03342477 has its CatchHandler @ 032427f4 */
  if ((DAT_0456675b & 1) == 0) {
    FUN_01bab630(&IENLNOEDCFF_ACAJADECPLB_TypeInfo);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
                    /* try { // try from 032424a0 to 033424ab has its CatchHandler @ 032427d0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
    FUN_01bab630(&KAFMFFDFDBL_TypeInfo);
                    /* try { // try from 032424c0 to 033424c7 has its CatchHandler @ 032426bc */
    FUN_01bab630(&KAFMFFDFDBL_LIHIFIABAJF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
                    /* try { // try from 032424e4 to 033424eb has its CatchHandler @ 032426b4 */
    FUN_01bab630(&StringLiteral_38/*"	"*/);
                    /* try { // try from 032424f4 to 033424fb has its CatchHandler @ 032426b0 */
    FUN_01bab630(&StringLiteral_520/*" result : "*/);
    DAT_0456675b = 1;
  }
  local_80 = (undefined1  [8])0x0;
  uStack_78._0_4_ = 0;
  uStack_78._4_4_ = 0;
  local_70 = (KAFMFFDFDBL_o *)0x0;
                    /* try { // try from 03242508 to 0334250f has its CatchHandler @ 032426a4 */
  local_84[0] = 0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if (PBCGCHIKCOE == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* try { // try from 03242518 to 0334251f has its CatchHandler @ 032426ac */
    if ((AEDJMMHJIEH == (ABNLGBHKOCE_o *)0x0) ||
       (pAVar9 = (AEDJMMHJIEH->fields).CKNFEFFGHLC, pAVar9 == (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0))
    goto LAB_03242a0c;
    PBCGCHIKCOE = (pAVar9->fields).KPFGHBEKJIM;
  }
                    /* try { // try from 0324252c to 03342533 has its CatchHandler @ 032426a8 */
  __this_01 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
  if (PBCGCHIKCOE != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* try { // try from 0324254c to 0334254f has its CatchHandler @ 0324268c */
                    /* try { // try from 03242564 to 0334256b has its CatchHandler @ 03242698 */
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_b8,
               (System_Collections_Generic_List_object__o *)PBCGCHIKCOE,
               Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    local_70 = (KAFMFFDFDBL_o *)CONCAT44(uStack_a4,local_a8);
    uStack_78 = pvStack_b0;
    local_80 = local_b8;
                    /* try { // try from 03242588 to 0334258b has its CatchHandler @ 03242684 */
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                         Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
      __this_00 = local_70;
      if (!bVar3) {
        iVar10 = 0xf;
        goto LAB_03242980;
      }
                    /* try { // try from 032425a0 to 033425af has its CatchHandler @ 03242690 */
      if (local_70 == (KAFMFFDFDBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (local_70->fields).super.LOAFPIOGJAF;
      lVar5 = (*(local_70->klass->vtable)._6_BMADCIAHJFL.methodPtr)
                        (local_70,BCKBBGCOMJD,(ulong)uVar1,
                         (local_70->klass->vtable)._6_BMADCIAHJFL.method);
      if (lVar5 == 0) break;
      if (FKDOMEBPFPF != (KJFPGDFNFCL_o *)0x0) {
                    /* try { // try from 032425cc to 033425cf has its CatchHandler @ 03242680 */
        pNVar11 = *(NJPBHDMCLIN_o **)(lVar5 + 0x248);
                    /* try { // try from 032425d0 to 033425db has its CatchHandler @ 03242688 */
        if (pNVar11 == (NJPBHDMCLIN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        ppKVar6 = &(pNVar11->fields).FKBLDBLGMIH;
        *ppKVar6 = FKDOMEBPFPF;
        thunk_FUN_01c20e04(ppKVar6,FKDOMEBPFPF);
        (FKDOMEBPFPF->fields).KPFGHBEKJIM = pNVar11;
                    /* try { // try from 032425f0 to 033425fb has its CatchHandler @ 03242694 */
        thunk_FUN_01c20e04(&FKDOMEBPFPF->fields,pNVar11);
      }
                    /* try { // try from 03242604 to 03342627 has its CatchHandler @ 032426a0 */
      (*(__this_00->klass->vtable)._5_ENEJIHFIBFM.methodPtr)
                (__this_00,1,(__this_00->klass->vtable)._5_ENEJIHFIBFM.method);
      local_84[0] = 0;
      iVar4 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this_00,(MethodInfo *)0x0);
      if (iVar4 == 8) {
                    /* try { // try from 0324262c to 03342633 has its CatchHandler @ 0324269c */
        bVar2 = (KAFMFFDFDBL_TypeInfo->_2).naturalAligment;
        if ((bVar2 <= (__this_00->klass->_2).naturalAligment) &&
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
            (Il2CppClass *)KAFMFFDFDBL_TypeInfo)) {
          if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032429cc with catch @ 03242a1c */
            FUN_01bab8c8();
          }
                    /* try { // try from 0324265c to 03342663 has its CatchHandler @ 032427d4 */
          local_84[0] = KAFMFFDFDBL__CFANNGPGDPJ
                                  (__this_00,(BCKBBGCOMJD->fields).FNEAAHOOHAA,BCKBBGCOMJD,
                                   FKDOMEBPFPF,(MethodInfo *)0x0);
                    /* try { // try from 03242678 to 0334267b has its CatchHandler @ 032426b8 */
                    /* try { // try from 0324267c to 033426d7 has its CatchHandler @ 03241cd4 */
                    /* catch() { ... } // from try @ 032425cc with catch @ 03242680 */
          local_a8 = (__this_00->fields).HHHHNPIKMMJ;
                    /* catch() { ... } // from try @ 03242588 with catch @ 03242684 */
          local_b8 = (undefined1  [8])KAFMFFDFDBL_LIHIFIABAJF_TypeInfo;
                    /* catch() { ... } // from try @ 032425d0 with catch @ 03242688 */
                    /* catch() { ... } // from try @ 0324254c with catch @ 0324268c */
          pvStack_b0 = (void *)0xffffffffffffffff;
                    /* catch() { ... } // from try @ 032425a0 with catch @ 03242690 */
                    /* catch() { ... } // from try @ 032425f0 with catch @ 03242694 */
                    /* catch() { ... } // from try @ 03242564 with catch @ 03242698 */
          pSVar7 = System_Enum__ToString((System_Enum_o *)local_b8,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0324262c with catch @ 0324269c */
                    /* catch() { ... } // from try @ 03242604 with catch @ 032426a0 */
                    /* catch() { ... } // from try @ 03242508 with catch @ 032426a4 */
                    /* catch() { ... } // from try @ 0324252c with catch @ 032426a8 */
                    /* catch() { ... } // from try @ 03242518 with catch @ 032426ac */
                    /* catch() { ... } // from try @ 032424f4 with catch @ 032426b0 */
          if ((bool_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 032424e4 with catch @ 032426b4 */
            thunk_FUN_01ba7564();
          }
                    /* catch() { ... } // from try @ 03242678 with catch @ 032426b8 */
                    /* catch() { ... } // from try @ 032424c0 with catch @ 032426bc */
          pSVar8 = System_Boolean__ToString(SUB81(local_84,0),(MethodInfo *)0x0);
          pSVar7 = System_String__Concat(pSVar7,StringLiteral_520/*" result : "*/,pSVar8,(MethodInfo *)0x0);
                    /* try { // try from 032426d8 to 033426db has its CatchHandler @ 032427b4 */
          if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Text_StringBuilder__AppendLine(__this_01,pSVar7,(MethodInfo *)0x0);
          __this_02 = (__this_00->fields).INAJMPIJJOG;
          if (__this_02 == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 03242700 to 03342707 has its CatchHandler @ 03242a04 */
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_d0,(System_Collections_Generic_List_object__o *)__this_02,
                     Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
          local_a0.fields._index = local_d0.fields._index;
          local_a0.fields._version = local_d0.fields._version;
          local_a0.fields._list = local_d0.fields._list;
          local_a0.fields._current = local_d0.fields._current;
          while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_a0,
                                    Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__
                                   ), __this = local_a0.fields._current, bVar3) {
            if ((IENLNOEDCFF_o *)local_a0.fields._current == (IENLNOEDCFF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* try { // try from 0324273c to 0334273f has its CatchHandler @ 032427f0 */
            local_84[0] = (*(((IENLNOEDCFF_c *)(local_a0.fields._current)->klass)->vtable).
                            _4_EPBENPDCBFE.methodPtr)
                                    (local_a0.fields._current,(BCKBBGCOMJD->fields).FNEAAHOOHAA,
                                     (((IENLNOEDCFF_c *)(local_a0.fields._current)->klass)->vtable).
                                     _4_EPBENPDCBFE.method);
                    /* try { // try from 03242744 to 03342747 has its CatchHandler @ 032427ec */
            local_84[0] = local_84[0] & 1;
                    /* try { // try from 0324274c to 0334274f has its CatchHandler @ 032427e8 */
                    /* try { // try from 03242754 to 03342757 has its CatchHandler @ 032427e4 */
            local_a8 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this,(MethodInfo *)0x0);
            local_b8 = (undefined1  [8])IENLNOEDCFF_ACAJADECPLB_TypeInfo;
            pvStack_b0 = (void *)0xffffffffffffffff;
                    /* try { // try from 0324276c to 03342793 has its CatchHandler @ 03242b44 */
            pSVar7 = System_Enum__ToString((System_Enum_o *)local_b8,(MethodInfo *)0x0);
            if ((bool_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 0324279c to 033427a3 has its CatchHandler @ 032427d8 */
            pSVar8 = System_Boolean__ToString(SUB81(local_84,0),(MethodInfo *)0x0);
                    /* try { // try from 032427a8 to 033427af has its CatchHandler @ 032427cc */
                    /* try { // try from 032427b0 to 0334280f has its CatchHandler @ 03241cd4 */
                    /* catch() { ... } // from try @ 032426d8 with catch @ 032427b4 */
            pSVar7 = System_String__Concat
                               (StringLiteral_38/*"	"*/,pSVar7,StringLiteral_520/*" result : "*/,pSVar8,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032423f4 with catch @ 032427c0 */
                    /* catch() { ... } // from try @ 032427a8 with catch @ 032427cc */
            System_Text_StringBuilder__AppendLine(__this_01,pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032424a0 with catch @ 032427d0 */
          }
                    /* catch() { ... } // from try @ 0324265c with catch @ 032427d4 */
                    /* catch() { ... } // from try @ 0324279c with catch @ 032427d8 */
                    /* catch() { ... } // from try @ 03242194 with catch @ 032427dc */
                    /* catch() { ... } // from try @ 03242360 with catch @ 032427e0 */
                    /* catch() { ... } // from try @ 03242754 with catch @ 032427e4 */
                    /* catch() { ... } // from try @ 0324274c with catch @ 032427e8 */
                    /* catch() { ... } // from try @ 03242744 with catch @ 032427ec */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_a0,
                     Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
                    /* catch() { ... } // from try @ 0324273c with catch @ 032427f0 */
                    /* catch() { ... } // from try @ 03242470 with catch @ 032427f4 */
        }
      }
      else {
                    /* try { // try from 03242810 to 03342813 has its CatchHandler @ 032429e8 */
                    /* try { // try from 03242814 to 0334283b has its CatchHandler @ 03241cd4 */
        local_84[0] = (*(__this_00->klass->vtable)._4_EPBENPDCBFE.methodPtr)
                                (__this_00,*(undefined8 *)(lVar5 + 0x248),
                                 (__this_00->klass->vtable)._4_EPBENPDCBFE.method);
        local_84[0] = local_84[0] & 1;
                    /* catch() { ... } // from try @ 03242164 with catch @ 0324281c */
        local_a8 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this_00,(MethodInfo *)0x0);
        local_b8 = (undefined1  [8])IENLNOEDCFF_ACAJADECPLB_TypeInfo;
                    /* try { // try from 0324283c to 0334283f has its CatchHandler @ 032429f4 */
        pvStack_b0 = (void *)0xffffffffffffffff;
        pSVar7 = System_Enum__ToString((System_Enum_o *)local_b8,(MethodInfo *)0x0);
                    /* try { // try from 0324285c to 0334286b has its CatchHandler @ 03242b74 */
        if ((bool_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar8 = System_Boolean__ToString(SUB81(local_84,0),(MethodInfo *)0x0);
        pSVar7 = System_String__Concat(pSVar7,StringLiteral_520/*" result : "*/,pSVar8,(MethodInfo *)0x0);
        if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032429dc with catch @ 03242a08 */
          FUN_01bab8c8();
        }
        System_Text_StringBuilder__AppendLine(__this_01,pSVar7,(MethodInfo *)0x0);
      }
                    /* try { // try from 0324289c to 0334289f has its CatchHandler @ 03242b48 */
      if (AEDJMMHJIEH == (ABNLGBHKOCE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032429c0 to 033429c7 has its CatchHandler @ 03242a34 */
        FUN_01bab8c8();
      }
      if ((AEDJMMHJIEH->fields).DMNOONNKPKP != false) {
        if (DAT_0456684a == '\0') {
                    /* try { // try from 032428b8 to 033428bf has its CatchHandler @ 03242b58 */
          FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo);
          DAT_0456684a = '\x01';
        }
        if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03242700 with catch @ 03242a04 */
          FUN_01bab8c8();
        }
                    /* try { // try from 032428dc to 033428e3 has its CatchHandler @ 03242b60 */
        pSVar8 = (AEDJMMHJIEH->fields).JIJLBFGKNJK;
        __this_03 = Nekki_SF2_GUI_DebugModules_ScreenDebug_TypeInfo->static_fields->FFOLFLCMFCH;
        pSVar7 = (System_String_o *)
                 (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                           (__this_01,(__this_01->klass->vtable)._3_ToString.method);
        if (__this_03 == (Nekki_SF2_GUI_DebugModules_ScreenDebug_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032420f8 with catch @ 03242a00 */
          FUN_01bab8c8();
        }
        EFJKPCADGJH.fields.b = 0.0;
        EFJKPCADGJH.fields.a = 1.0;
        EFJKPCADGJH.fields.r = 1.0;
        EFJKPCADGJH.fields.g = 0.0;
                    /* try { // try from 03242900 to 0334290b has its CatchHandler @ 03242b4c */
        Nekki_SF2_GUI_DebugModules_ScreenDebug__ShowDebugLine
                  (__this_03,pSVar8,pSVar7,EFJKPCADGJH,(MethodInfo *)0x0);
      }
      (__this_00->fields).super.LOAFPIOGJAF = uVar1;
                    /* try { // try from 03242928 to 03342933 has its CatchHandler @ 03242b5c */
    } while (local_84[0] != 0);
    iVar10 = 7;
                    /* try { // try from 03242978 to 0334299f has its CatchHandler @ 03242b40 */
LAB_03242980:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
               Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
                    /* try { // try from 032429a8 to 033429ab has its CatchHandler @ 03242a44 */
                    /* try { // try from 032429b0 to 033429b3 has its CatchHandler @ 03242a40 */
                    /* try { // try from 032429b8 to 033429bb has its CatchHandler @ 03242a3c */
    return iVar10 != 7;
  }
LAB_03242a0c:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032429d4 with catch @ 03242a0c */
  FUN_01bab8c8();
}


// ===== public void CEACPADMPKJ()  [RVA 0x313F7D0]
// IPPEHAJADOO$$CEACPADMPKJ @ RVA 0x313F7D0

void IPPEHAJADOO__CEACPADMPKJ(IPPEHAJADOO_o *__this,MethodInfo *method)

{
  int32_t length;
  int value;
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_NJPBHDMCLIN__o *pSVar3;
  Il2CppObject *pIVar4;
  OLKKAIFGGAK_o *BCKBBGCOMJD;
  NJPBHDMCLIN_o *pNVar5;
  MethodInfo *method_00;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar6;
  NJPBHDMCLIN_array *pNVar7;
  int index;
  
                    /* try { // try from 0323f7d8 to 0333f7db has its CatchHandler @ 0323f7ec */
                    /* try { // try from 0323f7dc to 0333f7df has its CatchHandler @ 0323f7e8 */
                    /* try { // try from 0323f7e0 to 0333f80b has its CatchHandler @ 0323f5e8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323f700 with catch @ 0323f7e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323f7dc with catch @ 0323f7e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323f7d8 with catch @ 0323f7ec
                        */
  if ((DAT_0456675c & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323f6e4 with catch @ 0323f7f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0323f720 with catch @ 0323f7f4
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBHDMCLIN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBHDMCLIN>_Clear__);
                    /* try { // try from 0323f80c to 0333f80f has its CatchHandler @ 0323f830 */
                    /* try { // try from 0323f810 to 0333f837 has its CatchHandler @ 0323f5e8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__);
                    /* catch() { ... } // from try @ 0323f80c with catch @ 0323f830 */
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBHDMCLIN>_set_Capacity__);
                    /* try { // try from 0323f838 to 0333f83f has its CatchHandler @ 0323f854 */
    DAT_0456675c = 1;
  }
                    /* try { // try from 0323f840 to 0333f84b has its CatchHandler @ 0323f5e8 */
  pSVar6 = (__this->fields).MBPELMMKGMB;
                    /* try { // try from 0323f84c to 0333f853 has its CatchHandler @ 0323f854 */
  if ((pSVar6 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) &&
     (pSVar3 = (__this->fields).OGINLMAKLNF,
     pSVar3 != (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0)) {
    length = (pSVar3->fields)._size;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0323f838 with catch @ 0323f854
                       catch(type#2 @ 00000000) { ... } // from try @ 0323f84c with catch @ 0323f854
                        */
    value = (pSVar6->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).OGINLMAKLNF;
      if (pSVar3 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0) goto LAB_0323f98c;
    }
    System_Collections_Generic_List<object>__set_Capacity
              ((System_Collections_Generic_List_object__o *)pSVar3,value,
               Method_System_Collections_Generic_List<NJPBHDMCLIN>_set_Capacity__);
    if (0 < value) {
      index = 0;
      do {
        pSVar6 = (__this->fields).MBPELMMKGMB;
        if (pSVar6 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) goto LAB_0323f98c;
        pSVar3 = (__this->fields).OGINLMAKLNF;
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar6,index,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
        lVar2 = Method_System_Collections_Generic_List<NJPBHDMCLIN>_Add__;
        if ((pIVar4 == (Il2CppObject *)0x0) ||
           (pSVar3 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0)) goto LAB_0323f98c;
        pNVar5 = pIVar4[0x24].monitor;
        pNVar7 = (pSVar3->fields)._items;
        (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
        if (pNVar7 == (NJPBHDMCLIN_array *)0x0) goto LAB_0323f98c;
        uVar1 = (pSVar3->fields)._size;
        if (uVar1 < (uint)pNVar7->max_length) {
          (pSVar3->fields)._size = uVar1 + 1;
          pNVar7->m_Items[(int)uVar1] = pNVar5;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pNVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pSVar3 = (__this->fields).OGINLMAKLNF;
        if (pSVar3 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0) goto LAB_0323f98c;
        pNVar5 = (NJPBHDMCLIN_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,index,
                            Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__);
        pSVar6 = (__this->fields).MBPELMMKGMB;
        if (pSVar6 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) goto LAB_0323f98c;
        method_00 = Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__;
        BCKBBGCOMJD = (OLKKAIFGGAK_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar6,index,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
        IPPEHAJADOO__CEACPADMPKJ(pNVar5,BCKBBGCOMJD,method_00);
        index = index + 1;
      } while (value != index);
    }
    return;
  }
LAB_0323f98c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CMHIICAGBMH(OLKKAIFGGAK.EAOIGPODIAI INNMCFJNEAE)  [RVA 0x3142B20]
// IPPEHAJADOO$$CMHIICAGBMH @ RVA 0x3142B20

void IPPEHAJADOO__CMHIICAGBMH
               (IPPEHAJADOO_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *INNMCFJNEAE,MethodInfo *method)

{
  MethodInfo *in_x4;
  
  IPPEHAJADOO__BKBHKFCCKDO(__this,0xd,INNMCFJNEAE,false,in_x4);
  return;
}


// ===== public void OCJCMHLABBF(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x3140FEC]
// IPPEHAJADOO$$OCJCMHLABBF @ RVA 0x3140FEC

void IPPEHAJADOO__OCJCMHLABBF(IPPEHAJADOO_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  System_Collections_Generic_List_OLKKAIFGGAK__o *DPMPNFJJENF;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *pSVar3;
  System_Action_OLKKAIFGGAK__o *CJNHFNHJHPE;
  
  if ((DAT_0456675d & 1) == 0) {
    FUN_01bab630(&System_Action<OLKKAIFGGAK>_TypeInfo);
    FUN_01bab630(&System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<OLKKAIFGGAK>__);
    FUN_01bab630(&Method_IPPEHAJADOO_ABHHEJBJLPC__);
    FUN_01bab630(&Method_IPPEHAJADOO_BBCAMJDDOII__);
    FUN_01bab630(&Method_IPPEHAJADOO_BDKJDKPLOIP__);
    FUN_01bab630(&Method_IPPEHAJADOO_CMHIICAGBMH__);
    FUN_01bab630(&Method_IPPEHAJADOO_DDJMPHAGJFJ__);
    FUN_01bab630(&Method_IPPEHAJADOO_ECOGDHGPHND__);
    FUN_01bab630(&Method_IPPEHAJADOO_IODIJIPDIPI__);
    FUN_01bab630(&Method_IPPEHAJADOO_LKGKDIMGDHL__);
    FUN_01bab630(&Method_IPPEHAJADOO_MAGLOOLDJHG__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    DAT_0456675d = 1;
  }
  DPMPNFJJENF = (__this->fields).MBPELMMKGMB;
  if (DPMPNFJJENF != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    iVar1 = (DPMPNFJJENF->fields)._size;
    iVar2 = DJNBJHPDKDP__OFNFOGHFDML<object>
                      ((System_Collections_Generic_List_T__o *)DPMPNFJJENF,
                       (Il2CppObject *)BCKBBGCOMJD,Method_DJNBJHPDKDP_OFNFOGHFDML<OLKKAIFGGAK>__);
    if (iVar2 != iVar1) {
      return;
    }
    pSVar3 = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
             thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
    System_Action<object>___ctor();
    if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
      OLKKAIFGGAK__LONDOHOBJIK(BCKBBGCOMJD,pSVar3,(MethodInfo *)0x0);
      pSVar3 = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
               thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
      System_Action<object>___ctor();
      OLKKAIFGGAK__NGAJMJGFOKC(BCKBBGCOMJD,pSVar3,(MethodInfo *)0x0);
      pSVar3 = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
               thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
      System_Action<object>___ctor();
      OLKKAIFGGAK__NODNEKBHENK(BCKBBGCOMJD,pSVar3,(MethodInfo *)0x0);
      pSVar3 = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
               thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
      System_Action<object>___ctor();
      OLKKAIFGGAK__OMFINPKNFAP(BCKBBGCOMJD,pSVar3,(MethodInfo *)0x0);
      pSVar3 = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
               thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
      System_Action<object>___ctor();
      OLKKAIFGGAK__PKHCMGKJHKI(BCKBBGCOMJD,pSVar3,(MethodInfo *)0x0);
      pSVar3 = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
               thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
      System_Action<object>___ctor();
      OLKKAIFGGAK__NMKMNPALKKC(BCKBBGCOMJD,pSVar3,(MethodInfo *)0x0);
      CJNHFNHJHPE = (System_Action_OLKKAIFGGAK__o *)
                    thunk_FUN_01bda818(System_Action<OLKKAIFGGAK>_TypeInfo);
                    /* try { // try from 03241244 to 0334143f has its CatchHandler @ 03241244
                       catch() { ... } // from try @ 03241244 with catch @ 03241244
                       catch() { ... } // from try @ 03241570 with catch @ 03241244
                       catch() { ... } // from try @ 032415c4 with catch @ 03241244
                       catch() { ... } // from try @ 032415d0 with catch @ 03241244
                       catch() { ... } // from try @ 03241610 with catch @ 03241244
                       catch() { ... } // from try @ 03241640 with catch @ 03241244 */
      System_Action<object>___ctor();
      OLKKAIFGGAK__PCOHFCHDCIO(BCKBBGCOMJD,CJNHFNHJHPE,(MethodInfo *)0x0);
      pSVar3 = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
               thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
      System_Action<object>___ctor();
      OLKKAIFGGAK__EHOBBHGJHNI(BCKBBGCOMJD,pSVar3,(MethodInfo *)0x0);
      pSVar3 = (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)
               thunk_FUN_01bda818(System_Action<OLKKAIFGGAK_EAOIGPODIAI>_TypeInfo);
      System_Action<object>___ctor();
      OLKKAIFGGAK__PLPHBHADDDD(BCKBBGCOMJD,pSVar3,(MethodInfo *)0x0);
      OLKKAIFGGAK__ECCABGPPFBD(BCKBBGCOMJD,(__this->fields).MBPELMMKGMB,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LBBNPGLGKNO(List<OLKKAIFGGAK> DDOAJGPFCNB, List<List<IPPEHAJADOO.JEOCIECEGHH>> BEBLJNABOEH)  [RVA 0x3140B64]
// IPPEHAJADOO$$LBBNPGLGKNO @ RVA 0x3140B64

void IPPEHAJADOO__LBBNPGLGKNO
               (IPPEHAJADOO_o *__this,System_Collections_Generic_List_OLKKAIFGGAK__o *DDOAJGPFCNB,
               System_Collections_Generic_List_List_IPPEHAJADOO_JEOCIECEGHH___o *BEBLJNABOEH,
               MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *__this_00;
  System_Collections_Generic_List_ECAIEGNAOAL__o *__this_01;
  ECAIEGNAOAL_o *KDFMDHADHMD;
  OLKKAIFGGAK_o *BCKBBGCOMJD;
  OLKKAIFGGAK_OJHIDJPICJN_o *__this_02;
  System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD;
  OLKKAIFGGAK_AHFAALBHPHJ_o *__this_03;
  System_Collections_Generic_List_ABNLGBHKOCE__o *AIEIIIHLDPO;
  MethodInfo *method_00;
  MethodInfo *in_x6;
  System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__array *pSVar3;
  int iVar4;
  int index;
  
  if ((DAT_0456675e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_get_Item__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_set_Capacity__
                );
    FUN_01bab630(&System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_TypeInfo);
    DAT_0456675e = 1;
  }
  if (BEBLJNABOEH != (System_Collections_Generic_List_List_IPPEHAJADOO_JEOCIECEGHH___o *)0x0) {
    length = (BEBLJNABOEH->fields)._size;
    (BEBLJNABOEH->fields)._size = 0;
    (BEBLJNABOEH->fields)._version = (BEBLJNABOEH->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(BEBLJNABOEH->fields)._items,0,length,(MethodInfo *)0x0)
      ;
    }
    if (DDOAJGPFCNB != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
      System_Collections_Generic_List<object>__set_Capacity
                ((System_Collections_Generic_List_object__o *)BEBLJNABOEH,
                 (DDOAJGPFCNB->fields)._size,
                 Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_set_Capacity__
                );
      if (0 < (DDOAJGPFCNB->fields)._size) {
        iVar4 = 0;
        do {
          __this_00 = (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)
                      thunk_FUN_01bda818(
                                        System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_TypeInfo
                                        );
          System_Collections_Generic_List<object>___ctor
                    ((System_Collections_Generic_List_object__o *)__this_00,
                     Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>__ctor__);
          lVar2 = Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_Add__;
          pSVar3 = (BEBLJNABOEH->fields)._items;
          (BEBLJNABOEH->fields)._version = (BEBLJNABOEH->fields)._version + 1;
          if (pSVar3 == (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__array *)0x0)
          goto LAB_03240dd8;
          uVar1 = (BEBLJNABOEH->fields)._size;
          if (uVar1 < (uint)pSVar3->max_length) {
            (BEBLJNABOEH->fields)._size = uVar1 + 1;
            pSVar3->m_Items[(int)uVar1] = __this_00;
            thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)BEBLJNABOEH,
                       (Il2CppObject *)__this_00,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (DDOAJGPFCNB->fields)._size);
      }
      __this_01 = (__this->fields).KBOMJBFAKKA;
      if (__this_01 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
        iVar4 = 0;
        do {
          if ((__this_01->fields)._size <= iVar4) {
            return;
          }
          KDFMDHADHMD = (ECAIEGNAOAL_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_01,iVar4,
                                   Method_System_Collections_Generic_List<ECAIEGNAOAL>_get_Item__);
          if (0 < (DDOAJGPFCNB->fields)._size) {
            index = 0;
            do {
              BCKBBGCOMJD = (OLKKAIFGGAK_o *)
                            System_Collections_Generic_List<object>__get_Item
                                      ((System_Collections_Generic_List_object__o *)DDOAJGPFCNB,
                                       index,
                                       Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__
                                      );
              if (((BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) ||
                  ((BCKBBGCOMJD->fields).EMGBDHOAIND = 0, (BCKBBGCOMJD->fields).LFCJAFPIKKC = 0,
                  KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0)) ||
                 (__this_02 = (BCKBBGCOMJD->fields).MPJKOPNODDM,
                 __this_02 == (OLKKAIFGGAK_OJHIDJPICJN_o *)0x0)) goto LAB_03240dd8;
              ELAGKBMJCOD = OLKKAIFGGAK_OJHIDJPICJN__CENMCPCOAGF
                                      (__this_02,(KDFMDHADHMD->fields).BGHFADDGPAD,(MethodInfo *)0x0
                                      );
              method_00 = (MethodInfo *)BEBLJNABOEH;
              IPPEHAJADOO__FHLCLICFGNA
                        (__this,KDFMDHADHMD,BCKBBGCOMJD,ELAGKBMJCOD,index,BEBLJNABOEH,in_x6);
              __this_03 = (BCKBBGCOMJD->fields).NOJKHMOEAEO;
              if (__this_03 == (OLKKAIFGGAK_AHFAALBHPHJ_o *)0x0) goto LAB_03240dd8;
              AIEIIIHLDPO = OLKKAIFGGAK_AHFAALBHPHJ__FNPJOAPMNKE
                                      (__this_03,(KDFMDHADHMD->fields).BGHFADDGPAD,(MethodInfo *)0x0
                                      );
              IPPEHAJADOO__OKKJKBEMJFN(__this,KDFMDHADHMD,BCKBBGCOMJD,AIEIIIHLDPO,index,method_00);
              index = index + 1;
            } while (index < (DDOAJGPFCNB->fields)._size);
          }
          __this_01 = (__this->fields).KBOMJBFAKKA;
          iVar4 = iVar4 + 1;
        } while (__this_01 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0);
      }
    }
  }
LAB_03240dd8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BDKJDKPLOIP(OLKKAIFGGAK.EAOIGPODIAI INNMCFJNEAE)  [RVA 0x314305C]
// IPPEHAJADOO$$BDKJDKPLOIP @ RVA 0x314305C

void IPPEHAJADOO__BDKJDKPLOIP
               (IPPEHAJADOO_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *INNMCFJNEAE,MethodInfo *method)

{
  MethodInfo *in_x4;
  
  IPPEHAJADOO__BKBHKFCCKDO(__this,0xe,INNMCFJNEAE,false,in_x4);
  return;
}


// ===== private void FHLCLICFGNA(ECAIEGNAOAL KDFMDHADHMD, OLKKAIFGGAK BCKBBGCOMJD, List<ECENNHNBAME> ELAGKBMJCOD, int DPJIDNBJIBG, List<List<IPPEHAJADOO.JEOCIECEGHH>> BEBLJNABOEH)  [RVA 0x3142B30]
// IPPEHAJADOO$$FHLCLICFGNA @ RVA 0x3142B30

void IPPEHAJADOO__FHLCLICFGNA
               (IPPEHAJADOO_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD,int32_t DPJIDNBJIBG,
               System_Collections_Generic_List_List_IPPEHAJADOO_JEOCIECEGHH___o *BEBLJNABOEH,
               MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int32_t iVar6;
  ECENNHNBAME_o *NLEBDPHNIDI;
  System_Collections_Generic_List_KJFPGDFNFCL__o *__this_00;
  MethodInfo *FKDOMEBPFPF;
  System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *ELAGKBMJCOD_00;
  System_Collections_Generic_List_NJPBHDMCLIN__o *pSVar7;
  NJPBHDMCLIN_o *pNVar8;
  Il2CppObject *pIVar9;
  IPPEHAJADOO_JEOCIECEGHH_o *__this_01;
  KJFPGDFNFCL_o **ppKVar10;
  System_Collections_Generic_List_object__o *__this_02;
  int index;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar11;
  OPNFCOGALLI_o *pOVar12;
  ECENNHNBAME_KFMLLPPCPHI_o *pEVar13;
  PJKHAJKEHEL_o *pPVar14;
  MMIIDELPHLP_o *pMVar15;
  System_Object_array *pSVar16;
  int index_00;
  OLKKAIFGGAK_o *pOVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_b0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_90;
  
                    /* catch() { ... } // from try @ 03242a7c with catch @ 03242b34
                       try { // try from 03242b34 to 03342bc3 has its CatchHandler @ 03241cd4 */
                    /* catch() { ... } // from try @ 03242978 with catch @ 03242b40 */
                    /* catch() { ... } // from try @ 0324276c with catch @ 03242b44 */
                    /* catch() { ... } // from try @ 0324289c with catch @ 03242b48 */
                    /* catch() { ... } // from try @ 03242900 with catch @ 03242b4c */
                    /* catch() { ... } // from try @ 03242b10 with catch @ 03242b50 */
                    /* catch() { ... } // from try @ 03242b0c with catch @ 03242b54 */
                    /* catch() { ... } // from try @ 032428b8 with catch @ 03242b58 */
                    /* catch() { ... } // from try @ 03242928 with catch @ 03242b5c */
                    /* catch() { ... } // from try @ 032428dc with catch @ 03242b60 */
                    /* catch() { ... } // from try @ 03242b08 with catch @ 03242b64 */
                    /* catch() { ... } // from try @ 03242b04 with catch @ 03242b68 */
                    /* catch() { ... } // from try @ 03241fc8 with catch @ 03242b6c */
                    /* catch() { ... } // from try @ 03242afc with catch @ 03242b70 */
  method_01 = (MethodInfo *)ELAGKBMJCOD;
  if ((DAT_0456675f & 1) == 0) {
                    /* catch() { ... } // from try @ 0324285c with catch @ 03242b74 */
                    /* catch() { ... } // from try @ 03242014 with catch @ 03242b78 */
                    /* catch() { ... } // from try @ 03241ff4 with catch @ 03242b7c */
    FUN_01bab630(&IPPEHAJADOO_JEOCIECEGHH_TypeInfo);
                    /* catch() { ... } // from try @ 03241fe4 with catch @ 03242b80 */
                    /* catch() { ... } // from try @ 03241fdc with catch @ 03242b84 */
                    /* catch() { ... } // from try @ 03242af8 with catch @ 03242b88 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_Add__);
                    /* catch() { ... } // from try @ 03242af4 with catch @ 03242b8c */
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Count__);
                    /* catch() { ... } // from try @ 03241f90 with catch @ 03242b9c */
                    /* catch() { ... } // from try @ 03242ac8 with catch @ 03242ba0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Count__);
                    /* catch() { ... } // from try @ 03241f80 with catch @ 03242ba4 */
                    /* catch() { ... } // from try @ 03241f64 with catch @ 03242ba8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_get_Item__);
                    /* try { // try from 03242bc4 to 03342bc7 has its CatchHandler @ 03242bf0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__);
                    /* try { // try from 03242bc8 to 03342bff has its CatchHandler @ 03241cd4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456675f = 1;
  }
  if (ELAGKBMJCOD != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* catch() { ... } // from try @ 03242bc4 with catch @ 03242bf0 */
    if (0 < (ELAGKBMJCOD->fields)._size) {
                    /* try { // try from 03242c00 to 03342c07 has its CatchHandler @ 03242c1c */
                    /* try { // try from 03242c08 to 03342c13 has its CatchHandler @ 03241cd4 */
      index = 0;
      do {
                    /* try { // try from 03242c14 to 03342c1b has its CatchHandler @ 03242c1c */
                    /* catch() { ... } // from try @ 03242adc with catch @ 03242c1c
                       catch() { ... } // from try @ 03242b14 with catch @ 03242c1c
                       catch() { ... } // from try @ 03242c00 with catch @ 03242c1c
                       catch() { ... } // from try @ 03242c14 with catch @ 03242c1c */
                    /* try { // try from 03242c20 to 03342cbf has its CatchHandler @ 03242c20
                       catch() { ... } // from try @ 03242c20 with catch @ 03242c20
                       catch() { ... } // from try @ 03242ce8 with catch @ 03242c20
                       catch() { ... } // from try @ 03242d28 with catch @ 03242c20
                       catch() { ... } // from try @ 03242d50 with catch @ 03242c20
                       catch() { ... } // from try @ 03242d88 with catch @ 03242c20 */
        NLEBDPHNIDI = (ECENNHNBAME_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,index,
                                 Method_System_Collections_Generic_List<ECENNHNBAME>_get_Item__);
        if ((NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) ||
           (pEVar11 = (NLEBDPHNIDI->fields).DMGLMCBIAGL, pEVar11 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0
           )) goto LAB_03243058;
        index_00 = 0;
        while( true ) {
          __this_00 = (pEVar11->fields).AFFIHBMACFF;
          if (__this_00 == (System_Collections_Generic_List_KJFPGDFNFCL__o *)0x0) goto LAB_03243058;
          if ((__this_00->fields)._size <= index_00) break;
          FKDOMEBPFPF = (MethodInfo *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_00,index_00,
                                   Method_System_Collections_Generic_List<KJFPGDFNFCL>_get_Item__);
          if (BEBLJNABOEH == (System_Collections_Generic_List_List_IPPEHAJADOO_JEOCIECEGHH___o *)0x0
             ) goto LAB_03243058;
          method_00 = 
          Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_get_Item__;
          ELAGKBMJCOD_00 =
               (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)BEBLJNABOEH,DPJIDNBJIBG,
                          (MethodInfo_26E4ADC *)
                          Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_get_Item__
                         );
          bVar5 = IPPEHAJADOO__ECFJIHEHELO(NLEBDPHNIDI,ELAGKBMJCOD_00,method_00);
          if (!bVar5) {
            if ((KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0) || (FKDOMEBPFPF == (MethodInfo *)0x0))
            goto LAB_03243058;
            bVar5 = IPPEHAJADOO__NACPECDBOFC
                              ((KDFMDHADHMD->fields).HEMGHNOOJPI,BCKBBGCOMJD,
                               *(int32_t *)((long)&FKDOMEBPFPF->field8_0x40 + 4),method_01);
            if (bVar5) {
              pSVar7 = (__this->fields).OGINLMAKLNF;
              if (pSVar7 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0)
              goto LAB_03243058;
              pNVar8 = (NJPBHDMCLIN_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar7,DPJIDNBJIBG,
                                  Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__);
                    /* try { // try from 03242cc0 to 03342cc7 has its CatchHandler @ 03242d34 */
              bVar5 = IPPEHAJADOO__FJCFCBPHJIJ
                                ((KJFPGDFNFCL_o *)FKDOMEBPFPF,pNVar8,KDFMDHADHMD,method_01);
              if (bVar5) {
                pSVar7 = (__this->fields).OGINLMAKLNF;
                    /* try { // try from 03242cdc to 03342ce7 has its CatchHandler @ 03242d2c */
                    /* try { // try from 03242ce8 to 03342d23 has its CatchHandler @ 03242c20 */
                if ((pSVar7 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0) ||
                   (pIVar9 = System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)pSVar7,
                                        DPJIDNBJIBG,
                                        Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__
                                       ), pIVar9 == (Il2CppObject *)0x0)) goto LAB_03243058;
                pIVar9[4].klass = (Il2CppClass *)(NLEBDPHNIDI->fields)._AHFPJJKEANI_k__BackingField;
                thunk_FUN_01c20e04();
                pSVar7 = (__this->fields).OGINLMAKLNF;
                if ((pSVar7 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0) ||
                   (pIVar9 = System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)pSVar7,
                                        DPJIDNBJIBG,
                                        Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__
                                       ), BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0)) goto LAB_03243058;
                    /* try { // try from 03242d24 to 03342d27 has its CatchHandler @ 03242d30 */
                if ((BCKBBGCOMJD->fields).BPJMMBGIMNC == (OLKKAIFGGAK_o *)0x0) {
                  iVar6 = 1;
                }
                else {
                    /* try { // try from 03242d28 to 03342d4b has its CatchHandler @ 03242c20 */
                  pSVar7 = (__this->fields).OGINLMAKLNF;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03242cdc with catch @ 03242d2c
                        */
                  if (pSVar7 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0)
                  goto LAB_03243058;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03242d24 with catch @ 03242d30
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03242cc0 with catch @ 03242d34
                        */
                  pNVar8 = (NJPBHDMCLIN_o *)
                           System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar7,
                                      DPJIDNBJIBG,
                                      Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__
                                     );
                  pOVar12 = (BCKBBGCOMJD->fields).OAKOFJJIOFF;
                  if (pOVar12 == (OPNFCOGALLI_o *)0x0) goto LAB_03243058;
                    /* try { // try from 03242d4c to 03342d4f has its CatchHandler @ 03242d78 */
                    /* try { // try from 03242d50 to 03342d7f has its CatchHandler @ 03242c20 */
                  iVar6 = ECENNHNBAME__BAHFNIPBBHD
                                    (NLEBDPHNIDI,pNVar8,(pOVar12->fields).DMJAJGGGHPF,
                                     (MethodInfo *)0x0);
                }
                if (pIVar9 == (Il2CppObject *)0x0) goto LAB_03243058;
                *(int32_t *)((long)&pIVar9[0xb].klass + 4) = iVar6;
                pSVar7 = (__this->fields).OGINLMAKLNF;
                    /* catch() { ... } // from try @ 03242d4c with catch @ 03242d78 */
                if (pSVar7 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0)
                goto LAB_03243058;
                    /* try { // try from 03242d80 to 03342d87 has its CatchHandler @ 03242d9c */
                    /* try { // try from 03242d88 to 03342d93 has its CatchHandler @ 03242c20 */
                pIVar9 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar7,DPJIDNBJIBG,
                                    Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__);
                pEVar11 = (NLEBDPHNIDI->fields).DMGLMCBIAGL;
                    /* try { // try from 03242d94 to 03342d9b has its CatchHandler @ 03242d9c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03242d80 with catch @ 03242d9c
                       catch(type#2 @ 00000000) { ... } // from try @ 03242d94 with catch @ 03242d9c
                        */
                    /* try { // try from 03242da0 to 03342eaf has its CatchHandler @ 03242da0
                       catch() { ... } // from try @ 03242da0 with catch @ 03242da0
                       catch() { ... } // from try @ 03242fc4 with catch @ 03242da0
                       catch() { ... } // from try @ 0324300c with catch @ 03242da0
                       catch() { ... } // from try @ 03243058 with catch @ 03242da0
                       catch() { ... } // from try @ 03243088 with catch @ 03242da0 */
                if (((pEVar11 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0) ||
                    (pEVar13 = (pEVar11->fields).EJNDOMGCGFL,
                    pEVar13 == (ECENNHNBAME_KFMLLPPCPHI_o *)0x0)) || (pIVar9 == (Il2CppObject *)0x0)
                   ) goto LAB_03243058;
                *(int32_t *)&pIVar9[0xb].monitor = (pEVar13->fields).ONFAKNEMEGC;
                if (((KDFMDHADHMD->fields).BGHFADDGPAD == 2) &&
                   ((KDFMDHADHMD->fields).KHKEGAKGNCN != false)) {
                  pSVar7 = (__this->fields).OGINLMAKLNF;
                  if ((pSVar7 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0) ||
                     (pIVar9 = System_Collections_Generic_List<object>__get_Item
                                         ((System_Collections_Generic_List_object__o *)pSVar7,
                                          DPJIDNBJIBG,
                                          Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__
                                         ), pIVar9 == (Il2CppObject *)0x0)) goto LAB_03243058;
                  *(undefined1 *)&pIVar9[0xd].monitor = 0;
                }
                method_01 = FKDOMEBPFPF;
                bVar5 = ECENNHNBAME__PCPBHJGAOOH
                                  (NLEBDPHNIDI,BCKBBGCOMJD,
                                   (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0,
                                   (KJFPGDFNFCL_o *)FKDOMEBPFPF,(MethodInfo *)0x0);
                if (bVar5) {
                  if (((KDFMDHADHMD->fields).KHKEGAKGNCN != false) &&
                     ((NLEBDPHNIDI->fields).BGHFADDGPAD == 2)) {
                    pOVar17 = (BCKBBGCOMJD->fields).BPJMMBGIMNC;
                    bVar5 = OLKKAIFGGAK__FNJNIJKLCIF(BCKBBGCOMJD,(MethodInfo *)0x0);
                    if (bVar5) {
                      pPVar14 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
                      if (pPVar14 == (PJKHAJKEHEL_o *)0x0) goto LAB_03243058;
                      if ((pOVar17 != (OLKKAIFGGAK_o *)0x0) &&
                         ((pPVar14->fields).LIOJAFKCJKB != false)) {
                        pPVar14 = (pOVar17->fields).FAPMJJBOFEF;
                        if (pPVar14 == (PJKHAJKEHEL_o *)0x0) goto LAB_03243058;
                        local_90.fakeValueActive =
                             (pPVar14->fields).JNFNFEJAGGN.fields.fakeValueActive;
                        local_90.inited = (pPVar14->fields).JNFNFEJAGGN.fields.inited;
                        local_90._18_2_ =
                             *(undefined2 *)&(pPVar14->fields).JNFNFEJAGGN.fields.field_0x12;
                        local_90.hiddenValueOldByte4.fields =
                             (pPVar14->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
                        local_90.fakeValue = (pPVar14->fields).JNFNFEJAGGN.fields.fakeValue;
                        local_90.currentCryptoKey =
                             (pPVar14->fields).JNFNFEJAGGN.fields.currentCryptoKey;
                        local_90.hiddenValue = (pPVar14->fields).JNFNFEJAGGN.fields.hiddenValue;
                        fVar18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                           ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)
                                            &local_90,(MethodInfo *)0x0);
                        pPVar14 = (pOVar17->fields).FAPMJJBOFEF;
                        if (pPVar14 == (PJKHAJKEHEL_o *)0x0) goto LAB_03243058;
                        local_b0.fakeValueActive =
                             (pPVar14->fields).MGLLAKLAAOO.fields.fakeValueActive;
                        local_b0.inited = (pPVar14->fields).MGLLAKLAAOO.fields.inited;
                        local_b0._18_2_ =
                             *(undefined2 *)&(pPVar14->fields).MGLLAKLAAOO.fields.field_0x12;
                        local_b0.hiddenValueOldByte4.fields =
                             (pPVar14->fields).MGLLAKLAAOO.fields.hiddenValueOldByte4.fields;
                        local_b0.fakeValue = (pPVar14->fields).MGLLAKLAAOO.fields.fakeValue;
                        local_b0.currentCryptoKey =
                             (pPVar14->fields).MGLLAKLAAOO.fields.currentCryptoKey;
                        local_b0.hiddenValue = (pPVar14->fields).MGLLAKLAAOO.fields.hiddenValue;
                        fVar19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                           ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)
                                            &local_b0,(MethodInfo *)0x0);
                        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                    /* try { // try from 03242eb0 to 03342eb7 has its CatchHandler @ 03243030 */
                        }
                        pMVar15 = MGNPHCAAEIO_TypeInfo->static_fields->KCEBJCOAHDA;
                        if (pMVar15 == (MMIIDELPHLP_o *)0x0) goto LAB_03243058;
                        if (fVar18 / fVar19 <= (pMVar15->fields).BCJHHLJGGKA) goto LAB_0324300c;
                      }
                    }
                  }
                  auVar20 = thunk_FUN_01bda818(IPPEHAJADOO_JEOCIECEGHH_TypeInfo);
                  __this_01 = auVar20._0_8_;
                    /* try { // try from 03242ee4 to 03342eef has its CatchHandler @ 03243038 */
                  IPPEHAJADOO_JEOCIECEGHH___ctor(__this_01,auVar20._8_8_);
                  if (__this_01 == (IPPEHAJADOO_JEOCIECEGHH_o *)0x0) goto LAB_03243058;
                  (__this_01->fields).BNGDONJEHMH = NLEBDPHNIDI;
                    /* try { // try from 03242ef8 to 03342f03 has its CatchHandler @ 0324303c */
                  thunk_FUN_01c20e04(&__this_01->fields,NLEBDPHNIDI);
                  pSVar7 = (__this->fields).OGINLMAKLNF;
                  if ((pSVar7 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0) ||
                     (pIVar9 = System_Collections_Generic_List<object>__get_Item
                                         ((System_Collections_Generic_List_object__o *)pSVar7,
                                          DPJIDNBJIBG,
                                          Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__
                                         ), pIVar9 == (Il2CppObject *)0x0)) goto LAB_03243058;
                    /* try { // try from 03242f20 to 03342f2b has its CatchHandler @ 0324301c */
                  (__this_01->fields).HIHFJJOMDBF = *(int32_t *)((long)&pIVar9[0xb].klass + 4);
                  iVar1 = (KDFMDHADHMD->fields).BGHFADDGPAD;
                    /* try { // try from 03242f38 to 03342f43 has its CatchHandler @ 0324300c */
                  (__this_01->fields).NAPEFFFIIFE = iVar1;
                  (__this_01->fields).CANHKPJGDFO = iVar1 == 6;
                  bVar2 = (KDFMDHADHMD->fields).KHKEGAKGNCN;
                  ppKVar10 = &(__this_01->fields).OMFKEBCFIIK;
                  *ppKVar10 = (KJFPGDFNFCL_o *)FKDOMEBPFPF;
                  (__this_01->fields).HLFBMBHOPMI = DPJIDNBJIBG;
                  (__this_01->fields).KHKEGAKGNCN = bVar2;
                  thunk_FUN_01c20e04(ppKVar10,FKDOMEBPFPF);
                    /* try { // try from 03242f58 to 03342f63 has its CatchHandler @ 03243018 */
                  __this_02 = (System_Collections_Generic_List_object__o *)
                              System_Collections_Generic_List<object>__get_Item
                                        ((System_Collections_Generic_List_object__o *)BEBLJNABOEH,
                                         DPJIDNBJIBG,
                                         (MethodInfo_26E4ADC *)
                                         Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_get_Item__
                                        );
                  lVar4 = Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_Add__;
                    /* try { // try from 03242f68 to 03342f73 has its CatchHandler @ 03243020 */
                  if (__this_02 == (System_Collections_Generic_List_object__o *)0x0)
                  goto LAB_03243058;
                  pSVar16 = (__this_02->fields)._items;
                  (__this_02->fields)._version = (__this_02->fields)._version + 1;
                    /* try { // try from 03242f88 to 03342fc3 has its CatchHandler @ 03243024 */
                  if (pSVar16 == (System_Object_array *)0x0) goto LAB_03243058;
                  uVar3 = (__this_02->fields)._size;
                  if (uVar3 < (uint)pSVar16->max_length) {
                    (__this_02->fields)._size = uVar3 + 1;
                    pSVar16->m_Items[(int)uVar3] = (Il2CppObject *)__this_01;
                    thunk_FUN_01c20e04(pSVar16->m_Items + (int)uVar3,__this_01);
                  }
                  else {
                    /* try { // try from 03242fc4 to 03342ff7 has its CatchHandler @ 03242da0 */
                    System_Collections_Generic_List<object>__AddWithResize
                              (__this_02,(Il2CppObject *)__this_01,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                  }
                }
                if (((KDFMDHADHMD->fields).BGHFADDGPAD == 2) &&
                   ((KDFMDHADHMD->fields).KHKEGAKGNCN != false)) {
                  pSVar7 = (__this->fields).OGINLMAKLNF;
                    /* try { // try from 03242ff8 to 03342ffb has its CatchHandler @ 03243034 */
                    /* try { // try from 03242ffc to 03342fff has its CatchHandler @ 0324302c */
                    /* try { // try from 03243000 to 03343003 has its CatchHandler @ 03243028 */
                  if ((pSVar7 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0) ||
                     (pIVar9 = System_Collections_Generic_List<object>__get_Item
                                         ((System_Collections_Generic_List_object__o *)pSVar7,
                                          DPJIDNBJIBG,
                                          Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__
                                         ), pIVar9 == (Il2CppObject *)0x0)) goto LAB_03243058;
                    /* try { // try from 03243004 to 03343007 has its CatchHandler @ 03243014 */
                    /* try { // try from 03243008 to 0334300b has its CatchHandler @ 03243010 */
                  *(undefined1 *)&pIVar9[0xd].monitor = 1;
                }
              }
            }
          }
LAB_0324300c:
                    /* catch() { ... } // from try @ 03242f38 with catch @ 0324300c
                       try { // try from 0324300c to 03343053 has its CatchHandler @ 03242da0 */
          pEVar11 = (NLEBDPHNIDI->fields).DMGLMCBIAGL;
                    /* catch() { ... } // from try @ 03243008 with catch @ 03243010 */
          index_00 = index_00 + 1;
                    /* catch() { ... } // from try @ 03243004 with catch @ 03243014 */
          if (pEVar11 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0) goto LAB_03243058;
        }
                    /* catch() { ... } // from try @ 03242f20 with catch @ 0324301c */
                    /* catch() { ... } // from try @ 03242f68 with catch @ 03243020 */
                    /* catch() { ... } // from try @ 03242f88 with catch @ 03243024 */
                    /* catch() { ... } // from try @ 03243000 with catch @ 03243028 */
        index = index + 1;
                    /* catch() { ... } // from try @ 03242ffc with catch @ 0324302c */
                    /* catch() { ... } // from try @ 03242eb0 with catch @ 03243030 */
      } while (index < (ELAGKBMJCOD->fields)._size);
    }
                    /* catch() { ... } // from try @ 03242ff8 with catch @ 03243034 */
                    /* catch() { ... } // from try @ 03242ee4 with catch @ 03243038 */
                    /* catch() { ... } // from try @ 03242ef8 with catch @ 0324303c */
                    /* try { // try from 03243054 to 03343057 has its CatchHandler @ 03243078 */
    return;
  }
LAB_03243058:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03243058 to 0334307f has its CatchHandler @ 03242da0 */
  FUN_01bab8c8();
}


// ===== private void NLKNPPBOFAI(OLKKAIFGGAK BCKBBGCOMJD, List<ECAIEGNAOAL> NOJIENFCGCK)  [RVA 0x31430B4]
// IPPEHAJADOO$$NLKNPPBOFAI @ RVA 0x31430B4

void IPPEHAJADOO__NLKNPPBOFAI
               (IPPEHAJADOO_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_ECAIEGNAOAL__o *NOJIENFCGCK,MethodInfo *method)

{
  int index;
  Il2CppObject *pIVar1;
  
  if ((DAT_04566760 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_get_Count__);
    __this = (IPPEHAJADOO_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_get_Item__);
    DAT_04566760 = 1;
  }
  if (NOJIENFCGCK != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
    index = (NOJIENFCGCK->fields)._size;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return;
      }
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)NOJIENFCGCK,index,
                          Method_System_Collections_Generic_List<ECAIEGNAOAL>_get_Item__);
      __this = (IPPEHAJADOO_o *)0x0;
      if (pIVar1 == (Il2CppObject *)0x0) break;
      if (pIVar1[1].klass == (Il2CppClass *)BCKBBGCOMJD) {
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)NOJIENFCGCK,index,
                   Method_System_Collections_Generic_List<ECAIEGNAOAL>_RemoveAt__);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public void .ctor()  [RVA 0x314316C]
// IPPEHAJADOO$$.ctor @ RVA 0x314316C

void IPPEHAJADOO___ctor(IPPEHAJADOO_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o **ppSVar2;
  System_Collections_Generic_List_NJPBHDMCLIN__o *__this_00;
  System_Collections_Generic_List_NJPBHDMCLIN__o **ppSVar3;
  System_Collections_Generic_List_ECAIEGNAOAL__o *pSVar4;
  System_Collections_Generic_List_ECAIEGNAOAL__o **ppSVar5;
  System_Collections_Generic_List_List_IPPEHAJADOO_JEOCIECEGHH___o *pSVar6;
  System_Collections_Generic_List_List_IPPEHAJADOO_JEOCIECEGHH___o **ppSVar7;
  System_Collections_Generic_List_IPPEHAJADOO_GHFEMFCMBEJ__o *__this_01;
  System_Collections_Generic_List_IPPEHAJADOO_GHFEMFCMBEJ__o **ppSVar8;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 032431c4 to 033431cb has its CatchHandler @ 032433e8 */
  if ((DAT_04566761 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>__ctor__);
                    /* try { // try from 032431f8 to 03343203 has its CatchHandler @ 032433f4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBHDMCLIN>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>__ctor__);
                    /* try { // try from 03243214 to 0334321b has its CatchHandler @ 032433fc */
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_GHFEMFCMBEJ>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<NJPBHDMCLIN>_TypeInfo);
                    /* try { // try from 03243230 to 03343237 has its CatchHandler @ 03243334 */
    FUN_01bab630(&System_Collections_Generic_List<ECAIEGNAOAL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<OLKKAIFGGAK>_TypeInfo);
                    /* try { // try from 03243248 to 03343253 has its CatchHandler @ 0324332c */
    FUN_01bab630(&System_Collections_Generic_List<IPPEHAJADOO_GHFEMFCMBEJ>_TypeInfo);
    DAT_04566761 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_OLKKAIFGGAK__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<OLKKAIFGGAK>_TypeInfo,method);
                    /* try { // try from 03243268 to 0334327f has its CatchHandler @ 03243318 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<OLKKAIFGGAK>__ctor__);
  ppSVar2 = &(__this->fields).MBPELMMKGMB;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_OLKKAIFGGAK__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<OLKKAIFGGAK>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<OLKKAIFGGAK>__ctor__);
  ppSVar2 = &(__this->fields).DNCDKLGJGBN;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
                    /* try { // try from 032432a4 to 033432b3 has its CatchHandler @ 0324331c */
  __this_00 = (System_Collections_Generic_List_NJPBHDMCLIN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<NJPBHDMCLIN>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<NJPBHDMCLIN>__ctor__);
  ppSVar3 = &(__this->fields).OGINLMAKLNF;
  *ppSVar3 = __this_00;
  thunk_FUN_01c20e04(ppSVar3,__this_00);
                    /* try { // try from 032432cc to 033432d3 has its CatchHandler @ 032433f8 */
  pSVar4 = (System_Collections_Generic_List_ECAIEGNAOAL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECAIEGNAOAL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<ECAIEGNAOAL>__ctor__);
  ppSVar5 = &(__this->fields).KBOMJBFAKKA;
  *ppSVar5 = pSVar4;
  thunk_FUN_01c20e04(ppSVar5,pSVar4);
  pSVar4 = (System_Collections_Generic_List_ECAIEGNAOAL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECAIEGNAOAL>_TypeInfo);
                    /* try { // try from 032432f8 to 033432fb has its CatchHandler @ 03243330 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<ECAIEGNAOAL>__ctor__);
  ppSVar5 = &(__this->fields).FNMHCOJPGMJ;
                    /* try { // try from 03243300 to 03343303 has its CatchHandler @ 03243328 */
  *ppSVar5 = pSVar4;
                    /* try { // try from 03243308 to 0334330b has its CatchHandler @ 03243324 */
  thunk_FUN_01c20e04(ppSVar5,pSVar4);
                    /* try { // try from 03243310 to 03343313 has its CatchHandler @ 03243320 */
                    /* try { // try from 03243314 to 0334334b has its CatchHandler @ 032430a0 */
  pSVar6 = (System_Collections_Generic_List_List_IPPEHAJADOO_JEOCIECEGHH___o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_TypeInfo
                             );
                    /* catch() { ... } // from try @ 03243268 with catch @ 03243318 */
                    /* catch() { ... } // from try @ 032432a4 with catch @ 0324331c */
                    /* catch() { ... } // from try @ 03243310 with catch @ 03243320 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar6,
             Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>__ctor__);
  ppSVar7 = &(__this->fields).EOAFFOBIBGO;
                    /* catch() { ... } // from try @ 03243308 with catch @ 03243324 */
                    /* catch() { ... } // from try @ 03243300 with catch @ 03243328 */
  *ppSVar7 = pSVar6;
                    /* catch() { ... } // from try @ 03243248 with catch @ 0324332c */
                    /* catch() { ... } // from try @ 032432f8 with catch @ 03243330 */
  thunk_FUN_01c20e04(ppSVar7,pSVar6);
                    /* catch() { ... } // from try @ 03243230 with catch @ 03243334 */
  pSVar6 = (System_Collections_Generic_List_List_IPPEHAJADOO_JEOCIECEGHH___o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_TypeInfo
                             );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar6,
             Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>__ctor__);
  ppSVar7 = &(__this->fields).AMCAKDINLFL;
                    /* try { // try from 0324334c to 0334334f has its CatchHandler @ 032433d4 */
  *ppSVar7 = pSVar6;
                    /* try { // try from 03243350 to 033433a3 has its CatchHandler @ 032430a0 */
  thunk_FUN_01c20e04(ppSVar7,pSVar6);
  __this_01 = (System_Collections_Generic_List_IPPEHAJADOO_GHFEMFCMBEJ__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IPPEHAJADOO_GHFEMFCMBEJ>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IPPEHAJADOO_GHFEMFCMBEJ>__ctor__);
  ppSVar8 = &(__this->fields).DPHKLKNAOAB;
  *ppSVar8 = __this_01;
  thunk_FUN_01c20e04(ppSVar8,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).LKLGFEIFBIC = 0;
                    /* try { // try from 032433a4 to 033433bb has its CatchHandler @ 03243470 */
  return;
}


// ===== private void CBGCMJCJJKP(OLKKAIFGGAK BCKBBGCOMJD, List<IPPEHAJADOO.JEOCIECEGHH> ELAGKBMJCOD, bool NJDMEGOFJFO = False)  [RVA 0x31407EC]
// IPPEHAJADOO$$CBGCMJCJJKP @ RVA 0x31407EC

/* WARNING: Type propagation algorithm not settling */

void IPPEHAJADOO__CBGCMJCJJKP
               (IPPEHAJADOO_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *ELAGKBMJCOD,
               bool NJDMEGOFJFO,MethodInfo *method)

{
  System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *PDFFKDLECND;
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *EGLKJOJMDJN;
  System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *__this_00;
  System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *__this_01;
  IPPEHAJADOO_o *DKMMBMBMJBO;
  IPPEHAJADOO_o *pIVar4;
  IPPEHAJADOO_o *extraout_x0;
  IPPEHAJADOO_JEOCIECEGHH_o *item;
  Il2CppObject *pIVar5;
  System_Collections_Generic_List_NJPBHDMCLIN__o *__this_02;
  NJPBHDMCLIN_o *AHEFOIOKDOK;
  ECENNHNBAME_o *pEVar6;
  MethodInfo *method_00;
  IPPEHAJADOO_JEOCIECEGHH_array *pIVar7;
  int index;
  
  method_00 = (MethodInfo *)(ulong)NJDMEGOFJFO;
  if ((DAT_04566762 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_TypeInfo);
    DAT_04566762 = 1;
  }
  EGLKJOJMDJN = (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_TypeInfo
                                  );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)EGLKJOJMDJN,
             Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>__ctor__);
  __this_00 = (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>__ctor__);
  __this_01 = (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>__ctor__);
  if (ELAGKBMJCOD != (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0) {
    if (0 < (ELAGKBMJCOD->fields)._size) {
      index = 0;
      do {
        DKMMBMBMJBO = (IPPEHAJADOO_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,index,
                                 Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__
                                );
        lVar2 = Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_Add__;
        pIVar4 = DKMMBMBMJBO;
        if (NJDMEGOFJFO) {
          if (DKMMBMBMJBO == (IPPEHAJADOO_o *)0x0) goto LAB_03240b50;
        }
        else {
          if (DKMMBMBMJBO == (IPPEHAJADOO_o *)0x0) goto LAB_03240b50;
          if (*(bool_conflict *)((long)&(DKMMBMBMJBO->fields).MBPELMMKGMB + 5) != false) {
            if (*(long *)&DKMMBMBMJBO->fields == 0) goto LAB_03240b50;
            if (*(char *)(*(long *)&DKMMBMBMJBO->fields + 0x9d) == '\0') {
              if (EGLKJOJMDJN == (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0)
              goto LAB_03240b50;
              pIVar7 = (EGLKJOJMDJN->fields)._items;
              (EGLKJOJMDJN->fields)._version = (EGLKJOJMDJN->fields)._version + 1;
              if (pIVar7 == (IPPEHAJADOO_JEOCIECEGHH_array *)0x0) goto LAB_03240b50;
              uVar1 = (EGLKJOJMDJN->fields)._size;
              if (uVar1 < (uint)pIVar7->max_length) {
                (EGLKJOJMDJN->fields)._size = uVar1 + 1;
                pIVar7->m_Items[(int)uVar1] = (IPPEHAJADOO_JEOCIECEGHH_o *)DKMMBMBMJBO;
                pIVar4 = (IPPEHAJADOO_o *)
                         thunk_FUN_01c20e04(pIVar7->m_Items + (int)uVar1,DKMMBMBMJBO);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)EGLKJOJMDJN,
                           (Il2CppObject *)DKMMBMBMJBO,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                pIVar4 = extraout_x0;
              }
            }
          }
        }
        if (*(long *)&DKMMBMBMJBO->fields == 0) goto LAB_03240b50;
        PDFFKDLECND = __this_00;
        if (*(char *)(*(long *)&DKMMBMBMJBO->fields + 0x9d) != '\0') {
          PDFFKDLECND = __this_01;
        }
        IPPEHAJADOO__IHCJOCNLHCB
                  (pIVar4,(IPPEHAJADOO_JEOCIECEGHH_o *)DKMMBMBMJBO,PDFFKDLECND,method_00);
        index = index + 1;
      } while (index < (ELAGKBMJCOD->fields)._size);
    }
    if (__this_00 != (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0) {
      iVar3 = (__this_00->fields)._size;
      if (iVar3 < 1) {
        item = (IPPEHAJADOO_JEOCIECEGHH_o *)0x0;
      }
      else {
        iVar3 = UnityEngine_Random__Range(0,iVar3,(MethodInfo *)0x0);
        item = (IPPEHAJADOO_JEOCIECEGHH_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,iVar3,
                          Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__
                         );
      }
      if (__this_01 != (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0) {
        iVar3 = (__this_01->fields)._size;
        if (0 < iVar3) {
          iVar3 = UnityEngine_Random__Range(0,iVar3,(MethodInfo *)0x0);
          pIVar5 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,iVar3,
                              Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__
                             );
          if ((pIVar5 == (Il2CppObject *)0x0) || (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0))
          goto LAB_03240b50;
          OLKKAIFGGAK__OPGMKLMCLNO(BCKBBGCOMJD,(ECENNHNBAME_o *)pIVar5[1].klass,(MethodInfo *)0x0);
        }
        lVar2 = Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_Add__;
        if (EGLKJOJMDJN != (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0) {
          uVar1 = (EGLKJOJMDJN->fields)._size;
          if (0 < (int)uVar1) {
            if (item != (IPPEHAJADOO_JEOCIECEGHH_o *)0x0) {
              pIVar7 = (EGLKJOJMDJN->fields)._items;
              (EGLKJOJMDJN->fields)._version = (EGLKJOJMDJN->fields)._version + 1;
              if (pIVar7 == (IPPEHAJADOO_JEOCIECEGHH_array *)0x0) goto LAB_03240b50;
              if (uVar1 < (uint)pIVar7->max_length) {
                (EGLKJOJMDJN->fields)._size = uVar1 + 1;
                pIVar7->m_Items[uVar1] = item;
                thunk_FUN_01c20e04(pIVar7->m_Items + uVar1,item);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)EGLKJOJMDJN,
                           (Il2CppObject *)item,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
            }
            IPPEHAJADOO__NDEHJGJGLJD(__this,BCKBBGCOMJD,EGLKJOJMDJN,method_00);
            return;
          }
          if (item == (IPPEHAJADOO_JEOCIECEGHH_o *)0x0) {
            return;
          }
          pEVar6 = (item->fields).BNGDONJEHMH;
          if (pEVar6 != (ECENNHNBAME_o *)0x0) {
            if ((pEVar6->fields).BFMPHOCJIHP == false) {
              __this_02 = (__this->fields).OGINLMAKLNF;
              if (__this_02 == (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0)
              goto LAB_03240b50;
              AHEFOIOKDOK = (NJPBHDMCLIN_o *)
                            System_Collections_Generic_List<object>__get_Item
                                      ((System_Collections_Generic_List_object__o *)__this_02,
                                       (item->fields).HLFBMBHOPMI,
                                       Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__
                                      );
              IPPEHAJADOO__MBOEJOGCFHG
                        (BCKBBGCOMJD,AHEFOIOKDOK,(item->fields).BNGDONJEHMH,
                         (item->fields).HIHFJJOMDBF,method);
            }
            else {
              if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) goto LAB_03240b50;
              OLKKAIFGGAK__EOPFMNAHLKM
                        (BCKBBGCOMJD,pEVar6,(item->fields).CANHKPJGDFO,(MethodInfo *)0x0);
            }
            pEVar6 = (item->fields).BNGDONJEHMH;
            if ((pEVar6 != (ECENNHNBAME_o *)0x0) && (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0)) {
              (BCKBBGCOMJD->fields).LFCJAFPIKKC = (pEVar6->fields).BGHFADDGPAD;
              (BCKBBGCOMJD->fields).EMGBDHOAIND = (item->fields).NAPEFFFIIFE;
              return;
            }
          }
        }
      }
    }
  }
LAB_03240b50:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool FJCFCBPHJIJ(KJFPGDFNFCL FKDOMEBPFPF, NJPBHDMCLIN OPJDGKIEJGC, ECAIEGNAOAL KDFMDHADHMD)  [RVA 0x31423A8]
// IPPEHAJADOO$$FJCFCBPHJIJ @ RVA 0x31423A8

bool IPPEHAJADOO__FJCFCBPHJIJ
               (KJFPGDFNFCL_o *FKDOMEBPFPF,NJPBHDMCLIN_o *OPJDGKIEJGC,ECAIEGNAOAL_o *KDFMDHADHMD,
               MethodInfo *method)

{
  undefined1 uVar1;
  
                    /* catch() { ... } // from try @ 03242384 with catch @ 032423a8 */
  if (KDFMDHADHMD != (ECAIEGNAOAL_o *)0x0) {
                    /* catch() { ... } // from try @ 0324225c with catch @ 032423b8 */
                    /* catch() { ... } // from try @ 03242304 with catch @ 032423bc */
    (KDFMDHADHMD->fields).KPFGHBEKJIM = OPJDGKIEJGC;
                    /* catch() { ... } // from try @ 03242200 with catch @ 032423c0 */
                    /* catch() { ... } // from try @ 03242224 with catch @ 032423c4 */
    thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 03242210 with catch @ 032423c8 */
    if (FKDOMEBPFPF != (KJFPGDFNFCL_o *)0x0) {
                    /* catch() { ... } // from try @ 032421ec with catch @ 032423cc */
                    /* catch() { ... } // from try @ 0324237c with catch @ 032423d0 */
                    /* catch() { ... } // from try @ 032421dc with catch @ 032423d4 */
                    /* catch() { ... } // from try @ 032421b8 with catch @ 032423d8 */
                    /* WARNING: Could not recover jumptable at 0x032423e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(FKDOMEBPFPF->klass->vtable)._5_DGCODECJJCC.methodPtr)
                        (FKDOMEBPFPF,KDFMDHADHMD,(FKDOMEBPFPF->klass->vtable)._5_DGCODECJJCC.method)
      ;
      return (bool)uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void ACFACKMJMIN(ref List<string> EOLHDEHOFHL, NJPBHDMCLIN.KLLGIFHMMIP HNHBCBPBBPK, OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x3141E24]
// IPPEHAJADOO$$ACFACKMJMIN @ RVA 0x3141E24

void IPPEHAJADOO__ACFACKMJMIN
               (System_Collections_Generic_List_string__o **EOLHDEHOFHL,
               NJPBHDMCLIN_KLLGIFHMMIP_o *HNHBCBPBBPK,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *pSVar2;
  ECENNHNBAME_o *pEVar3;
  GBJGJEGPHKD_o **ppGVar4;
  float fVar5;
  
  if ((DAT_04566763 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    DAT_04566763 = 1;
  }
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
    return;
  }
  if ((BCKBBGCOMJD->fields).GJLEPEPAOKD != (MMDPNDAECII_o *)0x0) {
    bVar1 = OLKKAIFGGAK__NDBKBPEHEON(BCKBBGCOMJD,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = OLKKAIFGGAK__OBKEHOHFBAA(BCKBBGCOMJD,(MethodInfo *)0x0);
      if (pSVar2 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03241f00;
      if (0 < (pSVar2->fields)._size) goto LAB_03241eb0;
    }
    else {
      pEVar3 = OLKKAIFGGAK__FMEOPPFIHCB(BCKBBGCOMJD,(MethodInfo *)0x0);
      if (pEVar3 != (ECENNHNBAME_o *)0x0) {
        pSVar2 = (pEVar3->fields)._AHFPJJKEANI_k__BackingField;
LAB_03241eb0:
        *EOLHDEHOFHL = pSVar2;
        thunk_FUN_01c20e04(EOLHDEHOFHL);
      }
    }
  }
  if (HNHBCBPBBPK != (NJPBHDMCLIN_KLLGIFHMMIP_o *)0x0) {
    ppGVar4 = &(HNHBCBPBBPK->fields).DBFCHBBKIHK;
    *ppGVar4 = (BCKBBGCOMJD->fields).HMIAFJALFCJ;
    thunk_FUN_01c20e04(ppGVar4);
    fVar5 = OLKKAIFGGAK__PDDIMGPPDJG(BCKBBGCOMJD,(MethodInfo *)0x0);
    (HNHBCBPBBPK->fields).LJIMIPADLFB.fields.x = fVar5;
    fVar5 = OLKKAIFGGAK__OANHDICAGKJ(BCKBBGCOMJD,(MethodInfo *)0x0);
    (HNHBCBPBBPK->fields).CKHIFBLLNED.fields.x = fVar5;
    return;
  }
LAB_03241f00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DDJMPHAGJFJ(OLKKAIFGGAK.EAOIGPODIAI INNMCFJNEAE)  [RVA 0x31433B0]
// IPPEHAJADOO$$DDJMPHAGJFJ @ RVA 0x31433B0

void IPPEHAJADOO__DDJMPHAGJFJ
               (IPPEHAJADOO_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *INNMCFJNEAE,MethodInfo *method)

{
  MethodInfo *in_x4;
  
                    /* try { // try from 032433bc to 033433c3 has its CatchHandler @ 03243400 */
  IPPEHAJADOO__BKBHKFCCKDO(__this,0xc,INNMCFJNEAE,false,in_x4);
  return;
}


// ===== private static bool NACPECDBOFC(OLKKAIFGGAK FKIKCJCJBFD, OLKKAIFGGAK BKPIEEMDOJO, LCAJGLLBBEC.ELJAALFNLIP ACCIHBHMFPN)  [RVA 0x31422FC]
// IPPEHAJADOO$$NACPECDBOFC @ RVA 0x31422FC

bool IPPEHAJADOO__NACPECDBOFC
               (OLKKAIFGGAK_o *FKIKCJCJBFD,OLKKAIFGGAK_o *BKPIEEMDOJO,int32_t ACCIHBHMFPN,
               MethodInfo *method)

{
  bool bVar1;
  OLKKAIFGGAK_o *pOVar2;
  
                    /* try { // try from 03242304 to 03342323 has its CatchHandler @ 032423bc */
                    /* try { // try from 03242328 to 0334232f has its CatchHandler @ 032423a0 */
  bVar1 = true;
  switch(ACCIHBHMFPN) {
  case 1:
    break;
  case 2:
    if (BKPIEEMDOJO == FKIKCJCJBFD) goto switchD_0324232c_default;
    goto LAB_03242348;
  case 3:
    if (BKPIEEMDOJO == (OLKKAIFGGAK_o *)0x0) {
LAB_032423a4:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032422e8 with catch @ 032423a4 */
      FUN_01bab8c8();
    }
    pOVar2 = (BKPIEEMDOJO->fields).NFMBPIPEKGF;
    goto LAB_03242398;
  case 4:
                    /* try { // try from 03242360 to 03342367 has its CatchHandler @ 032427e0 */
    if (BKPIEEMDOJO == (OLKKAIFGGAK_o *)0x0) goto LAB_032423a4;
    BKPIEEMDOJO = OLKKAIFGGAK__GMBBOANEBJJ(BKPIEEMDOJO,4,(MethodInfo *)0x0);
    break;
  case 5:
    goto switchD_0324232c_caseD_5;
  case 6:
    if (BKPIEEMDOJO == (OLKKAIFGGAK_o *)0x0) goto LAB_032423a4;
                    /* try { // try from 03242384 to 03342387 has its CatchHandler @ 032423a8 */
                    /* try { // try from 03242388 to 033423f3 has its CatchHandler @ 03241cd4 */
                    /* catch() { ... } // from try @ 032422c4 with catch @ 0324238c */
                    /* catch() { ... } // from try @ 03242280 with catch @ 03242390 */
    pOVar2 = OLKKAIFGGAK__GMBBOANEBJJ(BKPIEEMDOJO,6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032422c8 with catch @ 03242394 */
LAB_03242398:
                    /* catch() { ... } // from try @ 03242244 with catch @ 03242398 */
    bVar1 = pOVar2 == FKIKCJCJBFD;
    goto switchD_0324232c_caseD_5;
  default:
    goto switchD_0324232c_default;
  }
  if (BKPIEEMDOJO == FKIKCJCJBFD) {
LAB_03242348:
    bVar1 = true;
  }
  else {
switchD_0324232c_default:
    bVar1 = false;
  }
switchD_0324232c_caseD_5:
                    /* catch() { ... } // from try @ 03242298 with catch @ 0324239c */
                    /* catch() { ... } // from try @ 03242328 with catch @ 032423a0 */
  return bVar1;
}


// ===== public void HMDJFLDLPMN(OLKKAIFGGAK BCKBBGCOMJD)  [RVA 0x31433C0]
// IPPEHAJADOO$$HMDJFLDLPMN @ RVA 0x31433C0

void IPPEHAJADOO__HMDJFLDLPMN(IPPEHAJADOO_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar2;
  OLKKAIFGGAK_o *pOVar3;
  IPPEHAJADOO_o *__this_00;
  MethodInfo *in_x3;
  int index;
  
                    /* try { // try from 032433c4 to 033433c7 has its CatchHandler @ 032433f0 */
                    /* try { // try from 032433c8 to 033433cb has its CatchHandler @ 032433ec */
                    /* try { // try from 032433cc to 033433cf has its CatchHandler @ 032433e4 */
                    /* try { // try from 032433d0 to 033433d3 has its CatchHandler @ 032433e0 */
                    /* catch() { ... } // from try @ 0324334c with catch @ 032433d4
                       try { // try from 032433d4 to 03343417 has its CatchHandler @ 032430a0 */
  if ((DAT_04566764 & 1) == 0) {
                    /* catch() { ... } // from try @ 032433d0 with catch @ 032433e0 */
                    /* catch() { ... } // from try @ 032433cc with catch @ 032433e4 */
                    /* catch() { ... } // from try @ 032431c4 with catch @ 032433e8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Remove__);
                    /* catch() { ... } // from try @ 032433c8 with catch @ 032433ec */
                    /* catch() { ... } // from try @ 032433c4 with catch @ 032433f0 */
                    /* catch() { ... } // from try @ 032431f8 with catch @ 032433f4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
                    /* catch() { ... } // from try @ 032432cc with catch @ 032433f8 */
                    /* catch() { ... } // from try @ 03243214 with catch @ 032433fc */
                    /* catch() { ... } // from try @ 032433bc with catch @ 03243400 */
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    DAT_04566764 = 1;
  }
  pSVar2 = (__this->fields).MBPELMMKGMB;
  if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                    /* try { // try from 03243418 to 0334341b has its CatchHandler @ 03243444 */
    index = (pSVar2->fields)._size + -1;
                    /* try { // try from 0324341c to 03343453 has its CatchHandler @ 032430a0 */
    if (index < 0) {
      return;
    }
    do {
      pOVar3 = (OLKKAIFGGAK_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
      if (pOVar3 == BCKBBGCOMJD) {
                    /* catch() { ... } // from try @ 03243418 with catch @ 03243444 */
        pSVar2 = (__this->fields).MBPELMMKGMB;
        if (pSVar2 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) break;
                    /* try { // try from 03243454 to 0334345b has its CatchHandler @ 03243470 */
        bVar1 = System_Collections_Generic_List<object>__Remove
                          ((System_Collections_Generic_List_object__o *)pSVar2,
                           (Il2CppObject *)BCKBBGCOMJD,
                           Method_System_Collections_Generic_List<OLKKAIFGGAK>_Remove__);
                    /* try { // try from 0324345c to 03343467 has its CatchHandler @ 032430a0 */
        IPPEHAJADOO__NLKNPPBOFAI
                  ((IPPEHAJADOO_o *)(ulong)bVar1,BCKBBGCOMJD,(__this->fields).KBOMJBFAKKA,in_x3);
                    /* try { // try from 03243468 to 0334346f has its CatchHandler @ 03243470 */
        IPPEHAJADOO__NLKNPPBOFAI(__this_00,BCKBBGCOMJD,(__this->fields).FNMHCOJPGMJ,in_x3);
      }
                    /* catch() { ... } // from try @ 032433a4 with catch @ 03243470
                       catch() { ... } // from try @ 03243454 with catch @ 03243470
                       catch() { ... } // from try @ 03243468 with catch @ 03243470 */
      index = index + -1;
      if (index < 0) {
        return;
      }
      pSVar2 = (__this->fields).MBPELMMKGMB;
    } while (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FFJFELOKLDM()  [RVA 0x3143494]
// IPPEHAJADOO$$FFJFELOKLDM @ RVA 0x3143494

void IPPEHAJADOO__FFJFELOKLDM(IPPEHAJADOO_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_NJPBHDMCLIN__o *__this_00;
  Il2CppObject *pIVar1;
  
  if ((DAT_04566765 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__);
    DAT_04566765 = 1;
  }
  __this_00 = (__this->fields).OGINLMAKLNF;
  if (((__this_00 != (System_Collections_Generic_List_NJPBHDMCLIN__o *)0x0) &&
      (pIVar1 = System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,1,
                           Method_System_Collections_Generic_List<NJPBHDMCLIN>_get_Item__),
      pIVar1 != (Il2CppObject *)0x0)) && (pIVar1[1].monitor != (void *)0x0)) {
    *(undefined1 *)((long)pIVar1[1].monitor + 0x2c) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MAGLOOLDJHG(OLKKAIFGGAK.EAOIGPODIAI INNMCFJNEAE)  [RVA 0x31434FC]
// IPPEHAJADOO$$MAGLOOLDJHG @ RVA 0x31434FC

void IPPEHAJADOO__MAGLOOLDJHG
               (IPPEHAJADOO_o *__this,OLKKAIFGGAK_EAOIGPODIAI_o *INNMCFJNEAE,MethodInfo *method)

{
  MethodInfo *in_x4;
  
  IPPEHAJADOO__BKBHKFCCKDO(__this,0xb,INNMCFJNEAE,false,in_x4);
  return;
}


// ===== public void BKBHKFCCKDO(KJFPGDFNFCL.MIFHAKDMDJH ACCIHBHMFPN, OLKKAIFGGAK.EAOIGPODIAI BCHKAEBGKGG, bool NJDMEGOFJFO = False)  [RVA 0x313F634]
// IPPEHAJADOO$$BKBHKFCCKDO @ RVA 0x313F634

void IPPEHAJADOO__BKBHKFCCKDO
               (IPPEHAJADOO_o *__this,int32_t ACCIHBHMFPN,OLKKAIFGGAK_EAOIGPODIAI_o *BCHKAEBGKGG,
               bool NJDMEGOFJFO,MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  ECAIEGNAOAL_o *__this_00;
  System_Collections_Generic_List_ECAIEGNAOAL__o *__this_01;
  OLKKAIFGGAK_EAOIGPODIAI_o *pOVar3;
  ECAIEGNAOAL_array *pEVar4;
  OLKKAIFGGAK_o **ppOVar5;
  ECAIEGNAOAL_Fields *pEVar6;
  
  if ((DAT_04566766 & 1) == 0) {
    FUN_01bab630(&ECAIEGNAOAL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_Add__);
    DAT_04566766 = 1;
  }
  __this_00 = (ECAIEGNAOAL_o *)thunk_FUN_01bda818(ECAIEGNAOAL_TypeInfo);
  ECAIEGNAOAL___ctor(__this_00,(MethodInfo *)0x0);
  if ((__this_00 != (ECAIEGNAOAL_o *)0x0) &&
     ((__this_00->fields).BGHFADDGPAD = ACCIHBHMFPN, BCHKAEBGKGG != (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0
     )) {
    (__this_00->fields).LCIJCMJDKIH = (BCHKAEBGKGG->fields).LCIJCMJDKIH;
    thunk_FUN_01c20e04();
    (__this_00->fields).KOANCCDDBDA = (BCHKAEBGKGG->fields).KOANCCDDBDA;
    thunk_FUN_01c20e04();
    lVar1 = 0x18;
    if (ACCIHBHMFPN != 7) {
      lVar1 = 0x10;
    }
    pEVar6 = &__this_00->fields;
    pEVar6->HEMGHNOOJPI = *(OLKKAIFGGAK_o **)((long)&BCHKAEBGKGG->klass + lVar1);
                    /* try { // try from 0323f6e4 to 0333f6eb has its CatchHandler @ 0323f7f0 */
    thunk_FUN_01c20e04(pEVar6);
    if ((pEVar6->HEMGHNOOJPI != (OLKKAIFGGAK_o *)0x0) &&
       (pOVar3 = (pEVar6->HEMGHNOOJPI->fields).PDCHNCOIHHA,
       pOVar3 != (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0)) {
      ppOVar5 = &(__this_00->fields).PFFLOCBGFCH;
                    /* try { // try from 0323f700 to 0333f70b has its CatchHandler @ 0323f7e4 */
      *ppOVar5 = (pOVar3->fields).PFFLOCBGFCH;
      thunk_FUN_01c20e04(ppOVar5);
      (__this_00->fields).KHKEGAKGNCN = NJDMEGOFJFO;
      lVar1 = Method_System_Collections_Generic_List<ECAIEGNAOAL>_Add__;
      if (ACCIHBHMFPN == 0xd) {
                    /* try { // try from 0323f720 to 0333f7a3 has its CatchHandler @ 0323f7f4 */
        __this_01 = (__this->fields).FNMHCOJPGMJ;
      }
      else {
        __this_01 = (__this->fields).KBOMJBFAKKA;
      }
      if (__this_01 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
        pEVar4 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pEVar4 != (ECAIEGNAOAL_array *)0x0) {
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pEVar4->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pEVar4->m_Items[(int)uVar2] = __this_00;
            thunk_FUN_01c20e04(pEVar4->m_Items + (int)uVar2,__this_00);
            return;
          }
                    /* try { // try from 0323f7a4 to 0333f7d7 has its CatchHandler @ 0323f5e8 */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OAKJPPFCMAD(List<OLKKAIFGGAK> DDOAJGPFCNB, List<List<IPPEHAJADOO.JEOCIECEGHH>> BEBLJNABOEH)  [RVA 0x3140DF4]
// IPPEHAJADOO$$OAKJPPFCMAD @ RVA 0x3140DF4

void IPPEHAJADOO__OAKJPPFCMAD
               (IPPEHAJADOO_o *__this,System_Collections_Generic_List_OLKKAIFGGAK__o *DDOAJGPFCNB,
               System_Collections_Generic_List_List_IPPEHAJADOO_JEOCIECEGHH___o *BEBLJNABOEH,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_T__o *CJNHFNHJHPE;
  OLKKAIFGGAK_o *BCKBBGCOMJD;
  System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *ELAGKBMJCOD;
  MethodInfo *in_x4;
  int index;
  
  if ((DAT_04566767 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<IPPEHAJADOO_JEOCIECEGHH>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_get_Count__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    DAT_04566767 = 1;
  }
  if (DDOAJGPFCNB != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    if (0 < (DDOAJGPFCNB->fields)._size) {
      index = 0;
      do {
        if (BEBLJNABOEH == (System_Collections_Generic_List_List_IPPEHAJADOO_JEOCIECEGHH___o *)0x0)
        goto LAB_03240f1c;
        if (index < (BEBLJNABOEH->fields)._size) {
          CJNHFNHJHPE = (System_Collections_Generic_List_T__o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)BEBLJNABOEH,index,
                                   Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_get_Item__
                                  );
          bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                            (CJNHFNHJHPE,Method_DJNBJHPDKDP_OBECCOPBADO<IPPEHAJADOO_JEOCIECEGHH>__);
          if (!bVar1) {
            BCKBBGCOMJD = (OLKKAIFGGAK_o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)DDOAJGPFCNB,index,
                                     Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__)
            ;
            ELAGKBMJCOD = (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)
                          System_Collections_Generic_List<object>__get_Item
                                    ((System_Collections_Generic_List_object__o *)BEBLJNABOEH,index,
                                     Method_System_Collections_Generic_List<List<IPPEHAJADOO_JEOCIECEGHH>>_get_Item__
                                    );
            IPPEHAJADOO__CBGCMJCJJKP(__this,BCKBBGCOMJD,ELAGKBMJCOD,false,in_x4);
          }
        }
        index = index + 1;
      } while (index < (DDOAJGPFCNB->fields)._size);
    }
    return;
  }
LAB_03240f1c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

