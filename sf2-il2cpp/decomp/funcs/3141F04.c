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

