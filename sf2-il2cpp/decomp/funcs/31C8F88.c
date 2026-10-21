// DBNIPENAEKO$$MergeFrom @ RVA 0x31C8F88

void DBNIPENAEKO__MergeFrom
               (DBNIPENAEKO_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  uint32_t uVar1;
  
  if ((DAT_04566c4b & 1) == 0) {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    FUN_01bab630(&DBNIPENAEKO_TypeInfo);
    __this = (DBNIPENAEKO_o *)
             FUN_01bab630(&
                          Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_AddEntriesFrom__
                         );
    DAT_04566c4b = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    uVar1 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar1 != 0) {
      FUN_03f939f8();
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

