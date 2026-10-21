// ABNLGBHKOCE$$PCPBHJGAOOH @ RVA 0x3193AF0

bool ABNLGBHKOCE__PCPBHJGAOOH
               (ABNLGBHKOCE_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_IENLNOEDCFF__o *PBCGCHIKCOE,
               KJFPGDFNFCL_o *FKDOMEBPFPF,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  byte bVar3;
  int32_t iVar4;
  long lVar5;
  KJFPGDFNFCL_o **ppKVar6;
  ABNLGBHKOCE_JBMHDDKONHC_o *pAVar7;
  int iVar8;
  NJPBHDMCLIN_o *pNVar9;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 03293af0 to 03393af7 has its CatchHandler @ 03293b28 */
                    /* try { // try from 03293af8 to 03393afb has its CatchHandler @ 03293b24 */
                    /* try { // try from 03293afc to 03393aff has its CatchHandler @ 03293828 */
                    /* try { // try from 03293b00 to 03393b03 has its CatchHandler @ 03293b14 */
                    /* try { // try from 03293b04 to 03393b3f has its CatchHandler @ 03293828 */
                    /* catch() { ... } // from try @ 03293a44 with catch @ 03293b0c */
                    /* catch() { ... } // from try @ 03293a38 with catch @ 03293b10 */
                    /* catch() { ... } // from try @ 03293b00 with catch @ 03293b14 */
                    /* catch() { ... } // from try @ 03293a00 with catch @ 03293b18 */
                    /* catch() { ... } // from try @ 03293a0c with catch @ 03293b1c */
                    /* catch() { ... } // from try @ 03293a1c with catch @ 03293b20 */
                    /* catch() { ... } // from try @ 03293af8 with catch @ 03293b24 */
  if ((DAT_04566a50 & 1) == 0) {
                    /* catch() { ... } // from try @ 03293af0 with catch @ 03293b28 */
                    /* catch() { ... } // from try @ 0329399c with catch @ 03293b2c */
                    /* catch() { ... } // from try @ 03293940 with catch @ 03293b30 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
                    /* try { // try from 03293b40 to 03393b43 has its CatchHandler @ 03293b54 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
                    /* catch() { ... } // from try @ 03293b40 with catch @ 03293b54 */
    FUN_01bab630(&KAFMFFDFDBL_TypeInfo);
                    /* try { // try from 03293b5c to 03393bc3 has its CatchHandler @ 03293bd8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    DAT_04566a50 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if ((PBCGCHIKCOE == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) &&
     ((pAVar7 = (__this->fields).CKNFEFFGHLC, pAVar7 == (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0 ||
      (PBCGCHIKCOE = (pAVar7->fields).KPFGHBEKJIM,
      PBCGCHIKCOE == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)PBCGCHIKCOE,
             Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
                    /* try { // try from 03293bc4 to 03393bcf has its CatchHandler @ 03293828 */
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  do {
                    /* try { // try from 03293bd0 to 03393bd7 has its CatchHandler @ 03293bd8 */
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    __this_00 = local_80.fields._current;
                    /* catch() { ... } // from try @ 03293b5c with catch @ 03293bd8
                       catch() { ... } // from try @ 03293bd0 with catch @ 03293bd8 */
    if (!bVar2) {
      iVar8 = 0xc;
LAB_03293cd8:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__)
      ;
      return iVar8 != 7;
    }
    if ((KAFMFFDFDBL_o *)local_80.fields._current == (KAFMFFDFDBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (((KAFMFFDFDBL_Fields *)((long)local_80.fields._current + 0x10))->super).LOAFPIOGJAF;
    lVar5 = (*(((KAFMFFDFDBL_c *)(local_80.fields._current)->klass)->vtable)._6_BMADCIAHJFL.
              methodPtr)(local_80.fields._current,BCKBBGCOMJD,(ulong)uVar1,
                         (((KAFMFFDFDBL_c *)(local_80.fields._current)->klass)->vtable).
                         _6_BMADCIAHJFL.method);
    if (lVar5 == 0) {
LAB_03293ccc:
      iVar8 = 7;
      goto LAB_03293cd8;
    }
    if (FKDOMEBPFPF != (KJFPGDFNFCL_o *)0x0) {
      pNVar9 = *(NJPBHDMCLIN_o **)(lVar5 + 0x248);
      if (pNVar9 == (NJPBHDMCLIN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ppKVar6 = &(pNVar9->fields).FKBLDBLGMIH;
      *ppKVar6 = FKDOMEBPFPF;
      thunk_FUN_01c20e04(ppKVar6,FKDOMEBPFPF);
      (FKDOMEBPFPF->fields).KPFGHBEKJIM = pNVar9;
      thunk_FUN_01c20e04(&FKDOMEBPFPF->fields,pNVar9);
    }
    (*(((KAFMFFDFDBL_c *)__this_00->klass)->vtable)._5_ENEJIHFIBFM.methodPtr)
              (__this_00,1,(((KAFMFFDFDBL_c *)__this_00->klass)->vtable)._5_ENEJIHFIBFM.method);
    iVar4 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this_00,(MethodInfo *)0x0);
    if (iVar4 == 8) {
      bVar3 = (KAFMFFDFDBL_TypeInfo->_2).naturalAligment;
      if ((bVar3 <= (((KAFMFFDFDBL_c *)__this_00->klass)->_2).naturalAligment) &&
         ((((KAFMFFDFDBL_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] ==
          (Il2CppClass *)KAFMFFDFDBL_TypeInfo)) {
        if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = KAFMFFDFDBL__CFANNGPGDPJ
                          ((KAFMFFDFDBL_o *)__this_00,(BCKBBGCOMJD->fields).FNEAAHOOHAA,BCKBBGCOMJD,
                           FKDOMEBPFPF,(MethodInfo *)0x0);
        goto LAB_03293cbc;
      }
LAB_03293cc8:
      (((KAFMFFDFDBL_Fields *)((long)__this_00 + 0x10))->super).LOAFPIOGJAF = uVar1;
      goto LAB_03293ccc;
    }
    bVar3 = (*(((KAFMFFDFDBL_c *)__this_00->klass)->vtable)._4_EPBENPDCBFE.methodPtr)
                      (__this_00,*(undefined8 *)(lVar5 + 0x248),
                       (((KAFMFFDFDBL_c *)__this_00->klass)->vtable)._4_EPBENPDCBFE.method);
LAB_03293cbc:
    if ((bVar3 & 1) == 0) goto LAB_03293cc8;
    (((KAFMFFDFDBL_Fields *)((long)__this_00 + 0x10))->super).LOAFPIOGJAF = uVar1;
  } while( true );
}

