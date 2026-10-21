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
  CHDGOFBHAFI_o *__this_01;
  
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
       (pNVar3 = CHDGOFBHAFI__AFHLHFMLNEO
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
      if (__this_01 != (CHDGOFBHAFI_o *)0x0) {
        CHDGOFBHAFI__BNPLDAHKIED
                  (__this_01,pIVar2[1].monitor,(PGICCMFLDPI_o *)pIVar2[2].klass,(MethodInfo *)0x0);
                    /* try { // try from 03609994 to 0370999b has its CatchHandler @ 0360a750 */
        JJPNLEPEAFM__OCJEIOMBDKP((MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

