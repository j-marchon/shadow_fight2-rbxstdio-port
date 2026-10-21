// TypeDefIndex 695
// Namespace: 
// public class JNECIKOCKJJ : GJFEBGNFFBA
// Fields:

// ===== public void .ctor()  [RVA 0x3033198]
// JNECIKOCKJJ$$.ctor @ RVA 0x3033198

void JNECIKOCKJJ___ctor(JNECIKOCKJJ_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d1b & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_04565d1b = 1;
    method = extraout_x1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
  GJFEBGNFFBA___ctor((GJFEBGNFFBA_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string FGBGAKLKONL()  [RVA 0x30331F0]
// JNECIKOCKJJ$$FGBGAKLKONL @ RVA 0x30331F0

System_String_o * JNECIKOCKJJ__FGBGAKLKONL(JNECIKOCKJJ_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  bool bVar4;
  int32_t iVar5;
  System_Text_StringBuilder_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Il2CppObject *pIVar6;
  NILLKLHKLHG_o *__this_02;
  MMFIDKMDADC_o *pMVar7;
  System_String_o *pSVar8;
  System_String_array *pSVar9;
  System_String_o *pSVar10;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar11;
  NILLKLHKLHG_GLEGDBCJEOA_o *pNVar12;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *pSVar13;
  Il2CppClass *pIVar14;
  System_String_o *a;
  double __this_03;
  double __this_04;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  undefined4 local_98;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  int32_t local_68;
  int local_64;
  
  if ((DAT_04565d1c & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JNECIKOCKJJ_FDAGHNMDLPF>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JNECIKOCKJJ_FDAGHNMDLPF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JNECIKOCKJJ_FDAGHNMDLPF>_get_Current__
                );
    FUN_01bab630(&JNECIKOCKJJ_FDAGHNMDLPF_TypeInfo);
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JNECIKOCKJJ_FDAGHNMDLPF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JNECIKOCKJJ_FDAGHNMDLPF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JNECIKOCKJJ_FDAGHNMDLPF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<JNECIKOCKJJ_FDAGHNMDLPF>_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1881/*"1/3*4/6"*/);
    FUN_01bab630(&StringLiteral_18191/*"failed "*/);
    FUN_01bab630(&StringLiteral_417/*" failed</color>"*/);
                    /* try { // try from 0313331c to 03233407 has its CatchHandler @ 0313331c
                       catch() { ... } // from try @ 0313331c with catch @ 0313331c
                       catch() { ... } // from try @ 03133424 with catch @ 0313331c
                       catch() { ... } // from try @ 03133480 with catch @ 0313331c
                       catch() { ... } // from try @ 031334bc with catch @ 0313331c
                       catch() { ... } // from try @ 031334f8 with catch @ 0313331c */
    FUN_01bab630(&StringLiteral_2049/*"476.452*4"*/);
    FUN_01bab630(&StringLiteral_261/*" <color=red>"*/);
    FUN_01bab630(&StringLiteral_1006/*"(1*3)+-2"*/);
    FUN_01bab630(&StringLiteral_989/*"((1*3)+2)*(3)+(1)"*/);
    FUN_01bab630(&StringLiteral_21054/*"sin (  37*4)"*/);
    FUN_01bab630(&StringLiteral_555/*" vs "*/);
    FUN_01bab630(&StringLiteral_6623/*"FunctionExtension tests"*/);
    FUN_01bab630(&StringLiteral_21053/*"sin (   57*4) +  5  %   3  "*/);
    FUN_01bab630(&StringLiteral_6625/*"FunctionExtensionTests "*/);
    FUN_01bab630(&StringLiteral_2285/*"<color=yellow>failed "*/);
    FUN_01bab630(&StringLiteral_420/*" formula splitting "*/);
    FUN_01bab630(&StringLiteral_1010/*"(10+10)more(11+10)"*/);
    FUN_01bab630(&StringLiteral_218/*" != "*/);
    FUN_01bab630(&StringLiteral_2179/*"</color>"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1396/*". infact =  "*/);
    DAT_04565d1c = 1;
    method = extraout_x1;
  }
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  local_68 = 0;
  local_98 = 0;
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  pSVar10 = StringLiteral_1/*""*/;
                    /* try { // try from 03133408 to 0323340b has its CatchHandler @ 0313348c */
                    /* try { // try from 03133410 to 03233423 has its CatchHandler @ 03133484 */
  local_64 = 0;
  __this_01 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JNECIKOCKJJ_FDAGHNMDLPF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_01,Method_System_Collections_Generic_List<JNECIKOCKJJ_FDAGHNMDLPF>__ctor__);
                    /* try { // try from 03133424 to 0323347b has its CatchHandler @ 0313331c */
  pIVar6 = (Il2CppObject *)thunk_FUN_01bda818(JNECIKOCKJJ_FDAGHNMDLPF_TypeInfo);
  pIVar14 = StringLiteral_1006/*"(1*3)+-2"*/;
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  pIVar6[1].klass = pIVar14;
  thunk_FUN_01c20e04(pIVar6 + 1,pIVar14);
  *(undefined4 *)&pIVar6[1].monitor = 7;
  pIVar6[2].klass = (Il2CppClass *)0x3ff0000000000000;
  lVar2 = Method_System_Collections_Generic_List<JNECIKOCKJJ_FDAGHNMDLPF>_Add__;
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar11 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
                    /* try { // try from 0313347c to 0323347f has its CatchHandler @ 03133488 */
    if (pSVar11 != (System_Object_array *)0x0) {
                    /* try { // try from 03133480 to 032334a3 has its CatchHandler @ 0313331c */
      uVar1 = (__this_01->fields)._size;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03133410 with catch @ 03133484
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0313347c with catch @ 03133488
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03133408 with catch @ 0313348c
                        */
      if (uVar1 < (uint)pSVar11->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
                    /* try { // try from 031334a4 to 032334bb has its CatchHandler @ 031334f0 */
        pSVar11->m_Items[(int)uVar1] = pIVar6;
        thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar1,pIVar6);
      }
      else {
                    /* try { // try from 031334bc to 032334df has its CatchHandler @ 0313331c */
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_01,pIVar6,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pIVar6 = (Il2CppObject *)thunk_FUN_01bda818(JNECIKOCKJJ_FDAGHNMDLPF_TypeInfo);
      pIVar14 = StringLiteral_989/*"((1*3)+2)*(3)+(1)"*/;
                    /* try { // try from 031334e0 to 032334ef has its CatchHandler @ 031334f0 */
      System_Object___ctor(pIVar6,(MethodInfo *)0x0);
      pIVar6[1].klass = pIVar14;
                    /* catch() { ... } // from try @ 031334a4 with catch @ 031334f0
                       catch() { ... } // from try @ 031334e0 with catch @ 031334f0 */
      thunk_FUN_01c20e04(pIVar6 + 1,pIVar14);
                    /* try { // try from 031334f4 to 032334f7 has its CatchHandler @ 03133500 */
                    /* try { // try from 031334f8 to 03233503 has its CatchHandler @ 0313331c */
      *(undefined4 *)&pIVar6[1].monitor = 0x11;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031334f4 with catch @ 03133500
                        */
      pIVar6[2].klass = (Il2CppClass *)0x4030000000000000;
      lVar2 = Method_System_Collections_Generic_List<JNECIKOCKJJ_FDAGHNMDLPF>_Add__;
                    /* try { // try from 03133504 to 0323356f has its CatchHandler @ 03133504
                       catch() { ... } // from try @ 03133504 with catch @ 03133504
                       catch() { ... } // from try @ 03133584 with catch @ 03133504
                       catch() { ... } // from try @ 031335cc with catch @ 03133504
                       catch() { ... } // from try @ 03133610 with catch @ 03133504 */
      pSVar11 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pSVar11 != (System_Object_array *)0x0) {
        uVar1 = (__this_01->fields)._size;
        if (uVar1 < (uint)pSVar11->max_length) {
          (__this_01->fields)._size = uVar1 + 1;
          pSVar11->m_Items[(int)uVar1] = pIVar6;
          thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar1,pIVar6);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_01,pIVar6,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pIVar6 = (Il2CppObject *)thunk_FUN_01bda818(JNECIKOCKJJ_FDAGHNMDLPF_TypeInfo);
        pIVar14 = StringLiteral_1881/*"1/3*4/6"*/;
                    /* try { // try from 03133570 to 03233583 has its CatchHandler @ 0313359c */
        System_Object___ctor(pIVar6,(MethodInfo *)0x0);
                    /* try { // try from 03133584 to 032335b3 has its CatchHandler @ 03133504 */
        pIVar6[1].klass = pIVar14;
        thunk_FUN_01c20e04(pIVar6 + 1,pIVar14);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03133570 with catch @ 0313359c
                        */
        *(undefined4 *)&pIVar6[1].monitor = 7;
        pIVar6[2].klass = (Il2CppClass *)0x3fcc71c71c71c71c;
        lVar2 = Method_System_Collections_Generic_List<JNECIKOCKJJ_FDAGHNMDLPF>_Add__;
        pSVar11 = (__this_01->fields)._items;
                    /* try { // try from 031335b4 to 032335cb has its CatchHandler @ 03133608 */
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pSVar11 != (System_Object_array *)0x0) {
          uVar1 = (__this_01->fields)._size;
                    /* try { // try from 031335cc to 032335f7 has its CatchHandler @ 03133504 */
          if (uVar1 < (uint)pSVar11->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pSVar11->m_Items[(int)uVar1] = pIVar6;
            thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar1,pIVar6);
          }
          else {
                    /* try { // try from 031335f8 to 03233607 has its CatchHandler @ 03133608 */
                    /* catch() { ... } // from try @ 031335b4 with catch @ 03133608
                       catch() { ... } // from try @ 031335f8 with catch @ 03133608 */
                    /* try { // try from 0313360c to 0323360f has its CatchHandler @ 03133618 */
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_01,pIVar6,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
                    /* try { // try from 03133610 to 0323361b has its CatchHandler @ 03133504 */
          pIVar6 = (Il2CppObject *)thunk_FUN_01bda818(JNECIKOCKJJ_FDAGHNMDLPF_TypeInfo);
          pIVar14 = StringLiteral_2049/*"476.452*4"*/;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0313360c with catch @ 03133618
                        */
          System_Object___ctor(pIVar6,(MethodInfo *)0x0);
          pIVar6[1].klass = pIVar14;
          thunk_FUN_01c20e04(pIVar6 + 1,pIVar14);
          *(undefined4 *)&pIVar6[1].monitor = 3;
          pIVar6[2].klass = (Il2CppClass *)0x409dc73b645a1cac;
          lVar2 = Method_System_Collections_Generic_List<JNECIKOCKJJ_FDAGHNMDLPF>_Add__;
          pSVar11 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pSVar11 != (System_Object_array *)0x0) {
            uVar1 = (__this_01->fields)._size;
            if (uVar1 < (uint)pSVar11->max_length) {
              (__this_01->fields)._size = uVar1 + 1;
              pSVar11->m_Items[(int)uVar1] = pIVar6;
              thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar1,pIVar6);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_01,pIVar6,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pIVar6 = (Il2CppObject *)thunk_FUN_01bda818(JNECIKOCKJJ_FDAGHNMDLPF_TypeInfo);
            pIVar14 = StringLiteral_21054/*"sin (  37*4)"*/;
            System_Object___ctor(pIVar6,(MethodInfo *)0x0);
            pIVar6[1].klass = pIVar14;
            thunk_FUN_01c20e04(pIVar6 + 1,pIVar14);
            *(undefined4 *)&pIVar6[1].monitor = 6;
            pIVar6[2].klass = (Il2CppClass *)0xbfd5a7411bf11dbb;
            lVar2 = Method_System_Collections_Generic_List<JNECIKOCKJJ_FDAGHNMDLPF>_Add__;
            pSVar11 = (__this_01->fields)._items;
            (__this_01->fields)._version = (__this_01->fields)._version + 1;
            if (pSVar11 != (System_Object_array *)0x0) {
              uVar1 = (__this_01->fields)._size;
              if (uVar1 < (uint)pSVar11->max_length) {
                (__this_01->fields)._size = uVar1 + 1;
                pSVar11->m_Items[(int)uVar1] = pIVar6;
                thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar1,pIVar6);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_01,pIVar6,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              pIVar6 = (Il2CppObject *)thunk_FUN_01bda818(JNECIKOCKJJ_FDAGHNMDLPF_TypeInfo);
              pIVar14 = StringLiteral_21053/*"sin (   57*4) +  5  %   3  "*/;
              System_Object___ctor(pIVar6,(MethodInfo *)0x0);
              pIVar6[1].klass = pIVar14;
              thunk_FUN_01c20e04(pIVar6 + 1,pIVar14);
              *(undefined4 *)&pIVar6[1].monitor = 10;
              pIVar6[2].klass = (Il2CppClass *)0x4007c7ee99a5b060;
              lVar2 = Method_System_Collections_Generic_List<JNECIKOCKJJ_FDAGHNMDLPF>_Add__;
              pSVar11 = (__this_01->fields)._items;
              (__this_01->fields)._version = (__this_01->fields)._version + 1;
              if (pSVar11 != (System_Object_array *)0x0) {
                uVar1 = (__this_01->fields)._size;
                if (uVar1 < (uint)pSVar11->max_length) {
                  (__this_01->fields)._size = uVar1 + 1;
                  pSVar11->m_Items[(int)uVar1] = pIVar6;
                  thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar1,pIVar6);
                }
                else {
                    /* try { // try from 03133814 to 0323391b has its CatchHandler @ 03133814
                       catch() { ... } // from try @ 03133814 with catch @ 03133814
                       catch() { ... } // from try @ 03133a40 with catch @ 03133814
                       catch() { ... } // from try @ 03133b10 with catch @ 03133814
                       catch() { ... } // from try @ 03133bc0 with catch @ 03133814
                       catch() { ... } // from try @ 03133c5c with catch @ 03133814
                       catch() { ... } // from try @ 03133cd8 with catch @ 03133814 */
                  System_Collections_Generic_List<object>__AddWithResize
                            (__this_01,pIVar6,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                iVar5 = GJFEBGNFFBA__MELICHAIADL(false,(MethodInfo *)0x0);
                pIVar6 = (Il2CppObject *)thunk_FUN_01bda818(JNECIKOCKJJ_FDAGHNMDLPF_TypeInfo);
                pIVar14 = StringLiteral_1010/*"(10+10)more(11+10)"*/;
                System_Object___ctor(pIVar6,(MethodInfo *)0x0);
                pIVar6[1].klass = pIVar14;
                thunk_FUN_01c20e04(pIVar6 + 1,pIVar14);
                *(undefined4 *)&pIVar6[1].monitor = 10;
                pIVar6[2].klass = (Il2CppClass *)(double)iVar5;
                lVar2 = Method_System_Collections_Generic_List<JNECIKOCKJJ_FDAGHNMDLPF>_Add__;
                pSVar11 = (__this_01->fields)._items;
                (__this_01->fields)._version = (__this_01->fields)._version + 1;
                if (pSVar11 != (System_Object_array *)0x0) {
                  uVar1 = (__this_01->fields)._size;
                  if (uVar1 < (uint)pSVar11->max_length) {
                    (__this_01->fields)._size = uVar1 + 1;
                    pSVar11->m_Items[(int)uVar1] = pIVar6;
                    thunk_FUN_01c20e04(pSVar11->m_Items + (int)uVar1,pIVar6);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              (__this_01,pIVar6,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  }
                    /* try { // try from 0313391c to 0323391f has its CatchHandler @ 03133c64 */
                  System_Collections_Generic_List<object>__GetEnumerator
                            (&local_b8,__this_01,
                             Method_System_Collections_Generic_List<JNECIKOCKJJ_FDAGHNMDLPF>_GetEnumerator__
                            );
                  uVar3 = local_98;
                    /* try { // try from 03133930 to 03233937 has its CatchHandler @ 03133c60 */
                  local_90.fields._current = local_b8.fields._current;
                  local_90.fields._index = local_b8.fields._index;
                  local_90.fields._version = local_b8.fields._version;
                  local_90.fields._list = local_b8.fields._list;
                  while( true ) {
                    do {
                    /* try { // try from 0313394c to 03233953 has its CatchHandler @ 03133c70 */
                      bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                        (&local_90,
                                         Method_System_Collections_Generic_List_Enumerator<JNECIKOCKJJ_FDAGHNMDLPF>_MoveNext__
                                        );
                      pIVar6 = local_90.fields._current;
                      if (!bVar4) {
                        local_98 = uVar3;
                        System_Collections_Generic_List_Enumerator<object>__Dispose
                                  (&local_90,
                                   Method_System_Collections_Generic_List_Enumerator<JNECIKOCKJJ_FDAGHNMDLPF>_Dispose__
                                  );
                        if (0 < local_64) {
                          GJFEBGNFFBA__ILHNDPBPGAN
                                    ((GJFEBGNFFBA_o *)__this,true,StringLiteral_6623/*"FunctionExtension tests"*/,__this_00,
                                     (MethodInfo *)0x0);
                          pSVar8 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                          pSVar10 = System_String__Concat
                                              (pSVar10,StringLiteral_261/*" <color=red>"*/,pSVar8,StringLiteral_417/*" failed</color>"*/,
                                               (MethodInfo *)0x0);
                        }
                        pSVar10 = System_String__Concat
                                            (StringLiteral_6625/*"FunctionExtensionTests "*/,pSVar10,(MethodInfo *)0x0);
                        return pSVar10;
                      }
                    /* try { // try from 03133960 to 03233983 has its CatchHandler @ 03133c7c */
                      if (local_90.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pIVar14 = local_90.fields._current[1].klass;
                      __this_02 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
                      NILLKLHKLHG___ctor(__this_02,(System_String_o *)pIVar14,(MethodInfo *)0x0);
                      if (__this_02 == (NILLKLHKLHG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03133c20 with catch @ 03133c30 */
                        FUN_01bab8c8();
                      }
                    /* try { // try from 03133988 to 0323398b has its CatchHandler @ 03133c78 */
                      pMVar7 = NILLKLHKLHG__CHKGAHCDFJF(__this_02,false,(MethodInfo *)0x0);
                    /* try { // try from 03133994 to 0323399f has its CatchHandler @ 03133c74 */
                      if (pMVar7 == (MMFIDKMDADC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03133aa4 with catch @ 03133c38 */
                        FUN_01bab8c8();
                      }
                      a = (pMVar7->fields).HPACPFLKHPK;
                    /* try { // try from 031339a8 to 032339ab has its CatchHandler @ 03133a54 */
                      pSVar8 = System_Double__ToString(__this_03,(MethodInfo *)(pIVar6 + 2));
                      bVar4 = System_String__op_Inequality(a,pSVar8,(MethodInfo *)0x0);
                      if (bVar4) {
                    /* try { // try from 031339c4 to 032339cb has its CatchHandler @ 03133a50 */
                        local_64 = local_64 + 1;
                    /* try { // try from 031339d8 to 032339eb has its CatchHandler @ 03133a48 */
                        pSVar9 = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
                        if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_01bab8c8();
                        }
                        if ((int)pSVar9->max_length == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03133a90 with catch @ 03133c48 */
                          FUN_01bab8d0();
                        }
                        pSVar9->m_Items[0] = StringLiteral_18191/*"failed "*/;
                    /* try { // try from 031339f8 to 03233a1b has its CatchHandler @ 03133a4c */
                        thunk_FUN_01c20e04();
                        if ((uint)pSVar9->max_length < 2) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03133a70 with catch @ 03133c50 */
                          FUN_01bab8d0();
                        }
                        pSVar9->m_Items[1] = (System_String_o *)pIVar6[1].klass;
                        thunk_FUN_01c20e04();
                    /* try { // try from 03133a1c to 03233a2b has its CatchHandler @ 03133a44 */
                        if ((uint)pSVar9->max_length < 3) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03133c58 to 03233c5b has its CatchHandler @ 03133cec */
                          FUN_01bab8d0();
                        }
                        pSVar9->m_Items[2] = StringLiteral_218/*" != "*/;
                        __this_04 = (double)thunk_FUN_01c20e04();
                    /* try { // try from 03133a3c to 03233a3f has its CatchHandler @ 03133a4c */
                    /* try { // try from 03133a40 to 03233a6f has its CatchHandler @ 03133814 */
                    /* catch() { ... } // from try @ 03133a1c with catch @ 03133a44 */
                        pSVar8 = System_Double__ToString(__this_04,(MethodInfo *)(pIVar6 + 2));
                    /* catch() { ... } // from try @ 031339d8 with catch @ 03133a48 */
                    /* catch() { ... } // from try @ 031339f8 with catch @ 03133a4c
                       catch() { ... } // from try @ 03133a3c with catch @ 03133a4c */
                    /* catch() { ... } // from try @ 031339c4 with catch @ 03133a50 */
                    /* catch() { ... } // from try @ 031339a8 with catch @ 03133a54 */
                        if ((uint)pSVar9->max_length < 4) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03133930 with catch @ 03133c60 */
                          FUN_01bab8d0();
                        }
                        pSVar9->m_Items[3] = pSVar8;
                        thunk_FUN_01c20e04();
                        if ((uint)pSVar9->max_length < 5) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03133bbc with catch @ 03133c68 */
                          FUN_01bab8d0();
                        }
                    /* try { // try from 03133a70 to 03233a87 has its CatchHandler @ 03133c50 */
                        pSVar9->m_Items[4] = StringLiteral_1396/*". infact =  "*/;
                        thunk_FUN_01c20e04();
                    /* try { // try from 03133a90 to 03233a93 has its CatchHandler @ 03133c48 */
                        if ((uint)pSVar9->max_length < 6) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0313394c with catch @ 03133c70 */
                          FUN_01bab8d0();
                        }
                        pSVar9->m_Items[5] = (pMVar7->fields).HPACPFLKHPK;
                        thunk_FUN_01c20e04();
                    /* try { // try from 03133aa4 to 03233acf has its CatchHandler @ 03133c38 */
                        pSVar8 = System_String__Concat(pSVar9,(MethodInfo *)0x0);
                        if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03133988 with catch @ 03133c78 */
                          FUN_01bab8c8();
                        }
                        System_Text_StringBuilder__AppendLine(__this_00,pSVar8,(MethodInfo *)0x0);
                      }
                      pNVar12 = (__this_02->fields).NHDLDCMGNGL;
                      if (pNVar12 == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
                        local_98 = uVar3;
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar13 = (pNVar12->fields).FJMCIIOMFPD;
                      if (pSVar13 ==
                          (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0) {
                        local_98 = uVar3;
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                    /* try { // try from 03133ad8 to 03233af3 has its CatchHandler @ 03133c34 */
                    } while ((pSVar13->fields)._size == *(int *)&pIVar6[1].monitor);
                    pSVar9 = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
                    if (pSVar9 == (System_String_array *)0x0) {
                      local_98 = uVar3;
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    if ((int)pSVar9->max_length == 0) {
                      local_98 = uVar3;
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8d0();
                    }
                    /* try { // try from 03133b04 to 03233b0f has its CatchHandler @ 03133c6c */
                    /* try { // try from 03133b10 to 03233bbb has its CatchHandler @ 03133814 */
                    pSVar9->m_Items[0] = StringLiteral_2285/*"<color=yellow>failed "*/;
                    thunk_FUN_01c20e04();
                    if ((uint)pSVar9->max_length < 2) {
                      local_98 = uVar3;
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8d0();
                    }
                    pSVar9->m_Items[1] = (System_String_o *)pIVar6[1].klass;
                    thunk_FUN_01c20e04();
                    if ((uint)pSVar9->max_length < 3) {
                      local_98 = uVar3;
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8d0();
                    }
                    pSVar9->m_Items[2] = StringLiteral_420/*" formula splitting "*/;
                    thunk_FUN_01c20e04();
                    pNVar12 = (__this_02->fields).NHDLDCMGNGL;
                    if (pNVar12 == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
                      local_98 = uVar3;
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar13 = (pNVar12->fields).FJMCIIOMFPD;
                    if (pSVar13 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0
                       ) {
                      local_98 = uVar3;
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    local_68 = (pSVar13->fields)._size;
                    pSVar8 = System_Int32__ToString((int32_t)&local_68,(MethodInfo *)0x0);
                    if ((uint)pSVar9->max_length < 4) {
                      local_98 = uVar3;
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8d0();
                    }
                    pSVar9->m_Items[3] = pSVar8;
                    thunk_FUN_01c20e04();
                    if ((uint)pSVar9->max_length < 5) break;
                    pSVar9->m_Items[4] = StringLiteral_555/*" vs "*/;
                    /* try { // try from 03133bbc to 03233bbf has its CatchHandler @ 03133c68 */
                    thunk_FUN_01c20e04();
                    /* try { // try from 03133bc0 to 03233c0f has its CatchHandler @ 03133814 */
                    pSVar8 = System_Int32__ToString((int32_t)&pIVar6[1].monitor,(MethodInfo *)0x0);
                    if ((uint)pSVar9->max_length < 6) {
                      local_98 = uVar3;
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8d0();
                    }
                    pSVar9->m_Items[5] = pSVar8;
                    thunk_FUN_01c20e04();
                    if ((uint)pSVar9->max_length < 7) {
                      local_98 = uVar3;
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8d0();
                    }
                    pSVar9->m_Items[6] = StringLiteral_2179/*"</color>"*/;
                    thunk_FUN_01c20e04();
                    pSVar8 = System_String__Concat(pSVar9,(MethodInfo *)0x0);
                    /* try { // try from 03133c10 to 03233c1f has its CatchHandler @ 03133c4c */
                    if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                      local_98 = uVar3;
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    /* try { // try from 03133c20 to 03233c23 has its CatchHandler @ 03133c30 */
                    System_Text_StringBuilder__AppendLine(__this_00,pSVar8,(MethodInfo *)0x0);
                    /* try { // try from 03133c24 to 03233c2b has its CatchHandler @ 03133c2c */
                  }
                  local_98 = uVar3;
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8d0();
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

