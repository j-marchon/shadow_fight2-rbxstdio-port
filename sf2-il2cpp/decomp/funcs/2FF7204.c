// JMDPBFOCHHP$$JNOBNELLFNE @ RVA 0x2FF7204

/* WARNING: Removing unreachable block (ram,0x030f75cc) */

void JMDPBFOCHHP__JNOBNELLFNE(JMDPBFOCHHP_o *__this,EDLFPEGBIFO_o *HPACPFLKHPK,MethodInfo *method)

{
  bool bVar1;
  System_String_o *AAIHDEKMIJG;
  System_IO_MemoryStream_o *__this_00;
  Ionic_Zip_ZipFile_o *__this_01;
  System_IO_MemoryStream_o *__this_02;
  System_IO_MemoryStream_o *__this_03;
  System_Collections_Generic_ICollection_ZipEntry__o *pSVar2;
  System_Func_ZipEntry__bool__o **ppSVar3;
  Ionic_Zip_ZipEntry_o *__this_04;
  Ionic_Zip_ZipEntry_o *__this_05;
  System_Byte_array *GAODLOAEKJN;
  MethodInfo *pMVar4;
  System_Byte_array *pSVar5;
  System_Func_ZipEntry__bool__o *pSVar6;
  
                    /* try { // try from 030f7228 to 031f722b has its CatchHandler @ 030f7230 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f71ec with catch @ 030f722c
                       try { // try from 030f722c to 031f724b has its CatchHandler @ 030f7188 */
  if ((DAT_04565aaa & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f7228 with catch @ 030f7230
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f71c8 with catch @ 030f7234
                        */
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<ZipEntry>__);
    FUN_01bab630(&System_Func<ZipEntry,_bool>_TypeInfo);
                    /* try { // try from 030f724c to 031f724f has its CatchHandler @ 030f725c */
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
                    /* catch() { ... } // from try @ 030f724c with catch @ 030f725c */
    FUN_01bab630(&Method_JMDPBFOCHHP_<>c_BJDFMJMEIGJ__);
                    /* try { // try from 030f7268 to 031f7273 has its CatchHandler @ 030f7288 */
    FUN_01bab630(&Method_JMDPBFOCHHP_<>c_DGLOHKJKCOA__);
                    /* try { // try from 030f7274 to 031f727f has its CatchHandler @ 030f7188 */
    FUN_01bab630(&JMDPBFOCHHP_<>c_TypeInfo);
                    /* try { // try from 030f7280 to 031f7287 has its CatchHandler @ 030f7288 */
    FUN_01bab630(&Ionic_Zip_ZipFile_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f7268 with catch @ 030f7288
                       catch(type#2 @ 00000000) { ... } // from try @ 030f7280 with catch @ 030f7288
                        */
    FUN_01bab630(&StringLiteral_10820);
    DAT_04565aaa = 1;
  }
  if (HPACPFLKHPK == (EDLFPEGBIFO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = EDLFPEGBIFO__BOJJBGPIKDP(HPACPFLKHPK,(MethodInfo *)0x0);
  if (!bVar1) {
    JMDPBFOCHHP__HKKGCOJHKGP(__this,(System_String_o *)0x0,method);
    return;
  }
  AAIHDEKMIJG = JMDPBFOCHHP__EMHGIBKDBOG((MethodInfo *)(ulong)bVar1);
  NEHNBJKKABI__HEPJLJJMBML
            (AAIHDEKMIJG,(HPACPFLKHPK->fields)._GOFDPKCMIJO_k__BackingField,(MethodInfo *)0x0);
  pSVar5 = (HPACPFLKHPK->fields)._GOFDPKCMIJO_k__BackingField;
  __this_00 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(__this_00,pSVar5,(MethodInfo *)0x0);
  if ((Ionic_Zip_ZipFile_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = Ionic_Zip_ZipFile__Read((System_IO_Stream_o *)__this_00,(MethodInfo *)0x0);
  __this_02 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(__this_02,(MethodInfo *)0x0);
  __this_03 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(__this_03,(MethodInfo *)0x0);
  if (__this_01 == (Ionic_Zip_ZipFile_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar2 = Ionic_Zip_ZipFile__get_Entries(__this_01,(MethodInfo *)0x0);
  if ((JMDPBFOCHHP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(JMDPBFOCHHP_<>c_TypeInfo);
  }
  pSVar6 = JMDPBFOCHHP_<>c_TypeInfo->static_fields->__9__113_0;
  if (pSVar6 == (System_Func_ZipEntry__bool__o *)0x0) {
    if ((JMDPBFOCHHP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(JMDPBFOCHHP_<>c_TypeInfo);
    }
    pSVar6 = (System_Func_ZipEntry__bool__o *)
             thunk_FUN_01bda818(System_Func<ZipEntry,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar3 = &JMDPBFOCHHP_<>c_TypeInfo->static_fields->__9__113_0;
    *ppSVar3 = pSVar6;
    thunk_FUN_01c20e04(ppSVar3,pSVar6);
  }
  __this_04 = (Ionic_Zip_ZipEntry_o *)
              System_Linq_Enumerable__FirstOrDefault<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                         (System_Func_TSource__bool__o *)pSVar6,
                         (MethodInfo_1EA1A5C *)
                         Method_System_Linq_Enumerable_FirstOrDefault<ZipEntry>__);
  pSVar2 = Ionic_Zip_ZipFile__get_Entries(__this_01,(MethodInfo *)0x0);
  if ((JMDPBFOCHHP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(JMDPBFOCHHP_<>c_TypeInfo);
  }
  pSVar6 = JMDPBFOCHHP_<>c_TypeInfo->static_fields->__9__113_1;
  if (pSVar6 == (System_Func_ZipEntry__bool__o *)0x0) {
    if ((JMDPBFOCHHP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(JMDPBFOCHHP_<>c_TypeInfo);
    }
    pSVar6 = (System_Func_ZipEntry__bool__o *)
             thunk_FUN_01bda818(System_Func<ZipEntry,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar3 = &JMDPBFOCHHP_<>c_TypeInfo->static_fields->__9__113_1;
    *ppSVar3 = pSVar6;
    thunk_FUN_01c20e04(ppSVar3,pSVar6);
  }
  pMVar4 = Method_System_Linq_Enumerable_FirstOrDefault<ZipEntry>__;
  __this_05 = (Ionic_Zip_ZipEntry_o *)
              System_Linq_Enumerable__FirstOrDefault<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                         (System_Func_TSource__bool__o *)pSVar6,
                         (MethodInfo_1EA1A5C *)
                         Method_System_Linq_Enumerable_FirstOrDefault<ZipEntry>__);
  if ((__this_04 == (Ionic_Zip_ZipEntry_o *)0x0) || (__this_05 == (Ionic_Zip_ZipEntry_o *)0x0)) {
    JMDPBFOCHHP__HKKGCOJHKGP(__this,StringLiteral_10820,pMVar4);
    if (__this_02 == (System_IO_MemoryStream_o *)0x0) goto joined_r0x030f7554;
  }
  else {
    Ionic_Zip_ZipEntry__Extract(__this_04,(System_IO_Stream_o *)__this_02,(MethodInfo *)0x0);
    Ionic_Zip_ZipEntry__Extract(__this_05,(System_IO_Stream_o *)__this_03,(MethodInfo *)0x0);
    if (__this_02 == (System_IO_MemoryStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar5 = (System_Byte_array *)
             (*(__this_02->klass->vtable)._42_ToArray.methodPtr)
                       (__this_02,(__this_02->klass->vtable)._42_ToArray.method);
    pSVar5 = EJDKNOPLIBB__IKCICIMJLJJ(pSVar5,(MethodInfo *)0x0);
    if (__this_03 == (System_IO_MemoryStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    GAODLOAEKJN = (System_Byte_array *)
                  (*(__this_03->klass->vtable)._42_ToArray.methodPtr)
                            (__this_03,(__this_03->klass->vtable)._42_ToArray.method);
    pMVar4 = (MethodInfo *)0x0;
    bVar1 = EJDKNOPLIBB__INOIIEOAMKP(pSVar5,GAODLOAEKJN,(MethodInfo *)0x0);
    if (bVar1) {
      JMDPBFOCHHP__KJJAGIJIFOL(__this,pSVar5,pMVar4);
    }
    else {
      JMDPBFOCHHP__HKKGCOJHKGP(__this,(System_String_o *)0x0,pMVar4);
    }
  }
  System_IO_Stream__Dispose((System_IO_Stream_o *)__this_02,(MethodInfo *)0x0);
joined_r0x030f7554:
  if (__this_03 != (System_IO_MemoryStream_o *)0x0) {
    System_IO_Stream__Dispose((System_IO_Stream_o *)__this_03,(MethodInfo *)0x0);
  }
  if (__this_01 != (Ionic_Zip_ZipFile_o *)0x0) {
    Ionic_Zip_ZipFile__Dispose(__this_01,(MethodInfo *)0x0);
  }
  if (__this_00 != (System_IO_MemoryStream_o *)0x0) {
    System_IO_Stream__Dispose((System_IO_Stream_o *)__this_00,(MethodInfo *)0x0);
  }
                    /* try { // try from 030f7598 to 031f7693 has its CatchHandler @ 030f7598
                       catch() { ... } // from try @ 030f7598 with catch @ 030f7598
                       catch() { ... } // from try @ 030f7da4 with catch @ 030f7598
                       catch() { ... } // from try @ 030f7e40 with catch @ 030f7598
                       catch() { ... } // from try @ 030f7e80 with catch @ 030f7598
                       catch() { ... } // from try @ 030f7f08 with catch @ 030f7598
                       catch() { ... } // from try @ 030f7f44 with catch @ 030f7598 */
  return;
}

