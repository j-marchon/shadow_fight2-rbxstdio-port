// BPDOKJBGHAG$$AADEKPLBEEO @ RVA 0x3155B48

void BPDOKJBGHAG__AADEKPLBEEO(BPDOKJBGHAG_o *__this,int32_t GMALOFEKAHI,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_00;
  int64_t iVar2;
  Il2CppClass *pIVar3;
  undefined1 local_c0 [32];
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  undefined1 local_80 [32];
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
                    /* try { // try from 03255b54 to 03355b5b has its CatchHandler @ 03256158 */
                    /* try { // try from 03255b64 to 03355b6b has its CatchHandler @ 03256160 */
                    /* try { // try from 03255b6c to 03355b77 has its CatchHandler @ 0325615c */
  if ((DAT_0456683c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__);
                    /* try { // try from 03255b88 to 03355b8f has its CatchHandler @ 03256170 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_get_Current__);
                    /* try { // try from 03255b98 to 03355b9f has its CatchHandler @ 03256154 */
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
                    /* try { // try from 03255ba0 to 03355bab has its CatchHandler @ 03256168 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456683c = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 03255bbc to 03355bc3 has its CatchHandler @ 0325616c */
  __this_00 = (__this->fields).NBDCLLADIFL;
  if (__this_00 != (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) {
                    /* try { // try from 03255bcc to 03355bd3 has its CatchHandler @ 03256164 */
                    /* try { // try from 03255bd4 to 03355bf7 has its CatchHandler @ 0325622c */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a0,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
    local_60.fields._index = local_a0.fields._index;
    local_60.fields._version = local_a0.fields._version;
    local_60.fields._list = local_a0.fields._list;
    local_60.fields._current = local_a0.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
        return;
      }
                    /* try { // try from 03255c10 to 03355c87 has its CatchHandler @ 03256714 */
      if (local_60.fields._current == (Il2CppObject *)0x0) break;
      pIVar3 = local_60.fields._current[1].klass;
      if (pIVar3 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      local_80._24_8_ = (pIVar3->_1).interopData;
      local_80._16_8_ = (pIVar3->_1).typeMetadataHandle;
      local_80._8_8_ = (pIVar3->_1).generic_class;
      local_80._0_8_ = (pIVar3->_1).parent;
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)local_80,
                         (MethodInfo *)0x0);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = MGNPHCAAEIO__ADEEECDDBPN(iVar2,GMALOFEKAHI,(MethodInfo *)0x0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)local_c0,iVar2,
                 (MethodInfo *)0x0);
      (pIVar3->_1).generic_class = (void *)local_c0._8_8_;
      (pIVar3->_1).parent = (Il2CppClass *)local_c0._0_8_;
      (pIVar3->_1).interopData = (void *)local_c0._24_8_;
      (pIVar3->_1).typeMetadataHandle = (void *)local_c0._16_8_;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03255ca0 to 03355ca7 has its CatchHandler @ 03256688 */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

