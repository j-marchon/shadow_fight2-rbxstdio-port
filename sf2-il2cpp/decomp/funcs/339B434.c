// OCABNNJIENC$$JPONFNMFHGE @ RVA 0x339B434

float OCABNNJIENC__JPONFNMFHGE
                (OCABNNJIENC_o *__this,System_String_o *BJEEDJEKAMF,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  int32_t PIDMGHLCFAJ;
  System_Collections_Generic_List_OCABNNJIENC_KMODKLKCHNL__o *__this_01;
  ACHLOMELAJE_o *__this_02;
  MethodInfo *method_00;
  float fVar2;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567c7b & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<OCABNNJIENC_KMODKLKCHNL>_Dispose__
                );
                    /* try { // try from 0349b468 to 0359b46b has its CatchHandler @ 0349b470 */
                    /* try { // try from 0349b46c to 0359b48b has its CatchHandler @ 0349b368 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349b468 with catch @ 0349b470
                        */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<OCABNNJIENC_KMODKLKCHNL>_MoveNext__
                );
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349b414 with catch @ 0349b474
                        */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<OCABNNJIENC_KMODKLKCHNL>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<OCABNNJIENC_KMODKLKCHNL>_GetEnumerator__);
                    /* try { // try from 0349b48c to 0359b48f has its CatchHandler @ 0349b4b8 */
                    /* try { // try from 0349b490 to 0359b4c7 has its CatchHandler @ 0349b368 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567c7b = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).EMJCDJMBIGI;
  if (__this_01 == (System_Collections_Generic_List_OCABNNJIENC_KMODKLKCHNL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 0349b48c with catch @ 0349b4b8 */
                    /* try { // try from 0349b4c8 to 0359b4cf has its CatchHandler @ 0349b4e4 */
                    /* try { // try from 0349b4d0 to 0359b4db has its CatchHandler @ 0349b368 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<OCABNNJIENC_KMODKLKCHNL>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
                    /* try { // try from 0349b4dc to 0359b4e3 has its CatchHandler @ 0349b4e4 */
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0349b4c8 with catch @ 0349b4e4
                       catch(type#2 @ 00000000) { ... } // from try @ 0349b4dc with catch @ 0349b4e4
                        */
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<OCABNNJIENC_KMODKLKCHNL>_MoveNext__
                      );
    __this_00 = local_50.fields._current;
    if (!bVar1) {
      fVar2 = 0.0;
      goto LAB_0349b588;
    }
    if ((OCABNNJIENC_KMODKLKCHNL_o *)local_50.fields._current == (OCABNNJIENC_KMODKLKCHNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = System_String__op_Equality
                      (((OCABNNJIENC_KMODKLKCHNL_Fields *)((long)local_50.fields._current + 0x10))->
                       BJEEDJEKAMF,BJEEDJEKAMF,(MethodInfo *)0x0);
  } while (!bVar1);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_02 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  PIDMGHLCFAJ = ACHLOMELAJE__EOEAKGGDBFH(__this_02,(MethodInfo *)0x0);
  fVar2 = OCABNNJIENC_KMODKLKCHNL__JPONFNMFHGE
                    ((OCABNNJIENC_KMODKLKCHNL_o *)__this_00,PIDMGHLCFAJ,method_00);
LAB_0349b588:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_50,
             Method_System_Collections_Generic_List_Enumerator<OCABNNJIENC_KMODKLKCHNL>_Dispose__);
  return fVar2;
}

