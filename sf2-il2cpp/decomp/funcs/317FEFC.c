// PNHGEFAOFFE$$IHKHIJONLCM @ RVA 0x317FEFC

void PNHGEFAOFFE__IHKHIJONLCM(PNHGEFAOFFE_o *__this,BKLDKOMCOPN_o *OPAEPDIIOEB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  
                    /* try { // try from 0327ff0c to 0337ff33 has its CatchHandler @ 03280424 */
  if ((DAT_045669b6 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3805);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3806);
                    /* try { // try from 0327ff34 to 0337ff3f has its CatchHandler @ 0328036c */
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 0327ff44 to 0337ff4f has its CatchHandler @ 03280368 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
                    /* try { // try from 0327ff50 to 033800ff has its CatchHandler @ 0327dc98 */
    __this = (PNHGEFAOFFE_o *)FUN_01bab630(&MDNLIFLBFNO_TypeInfo);
    DAT_045669b6 = 1;
  }
  if (OPAEPDIIOEB != (BKLDKOMCOPN_o *)0x0) {
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH((OPAEPDIIOEB->fields).IIHFLLPKBJI,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                thunk_FUN_01bda818(MDNLIFLBFNO_TypeInfo);
    MDNLIFLBFNO___ctor((MDNLIFLBFNO_o *)__this_00,(MethodInfo *)0x0);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3805,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3806,(MethodInfo *)0x0)
    ;
    __this = (PNHGEFAOFFE_o *)OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Add
                (__this_00,(Il2CppObject *)__this,(Il2CppObject *)(OPAEPDIIOEB->fields).IIHFLLPKBJI,
                 Method_System_Collections_Generic_Dictionary<string,_object>_Add__);
      NFNBHPOJFNJ__OKNENPNMIKP(0x16,(MDNLIFLBFNO_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

