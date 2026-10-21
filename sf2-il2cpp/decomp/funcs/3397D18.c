// AKADDLNNLKH$$PKFOJKHFKKL @ RVA 0x3397D18

HOGPIBHKJDL_o *
AKADDLNNLKH__PKFOJKHFKKL(AKADDLNNLKH_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HOGPIBHKJDL__o *__this_00;
  HGLELMDNMMA_o *pHVar2;
  HOGPIBHKJDL_o *pHVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567c61 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOGPIBHKJDL>_Dispose__);
                    /* try { // try from 03497d4c to 03597d53 has its CatchHandler @ 03497db4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOGPIBHKJDL>_MoveNext__);
                    /* try { // try from 03497d5c to 03597d67 has its CatchHandler @ 03497db0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOGPIBHKJDL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOGPIBHKJDL>_GetEnumerator__);
    DAT_04567c61 = 1;
  }
                    /* try { // try from 03497d74 to 03597d7b has its CatchHandler @ 03497dac */
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 03497d7c to 03597d9f has its CatchHandler @ 03497c14 */
  __this_00 = (__this->fields).INIAKIIBBHK;
  if (__this_00 == (System_Collections_Generic_List_HOGPIBHKJDL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03497da0 to 03597da3 has its CatchHandler @ 03497da8 */
                    /* try { // try from 03497da4 to 03597dcb has its CatchHandler @ 03497c14 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOGPIBHKJDL>_GetEnumerator__);
  do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03497da0 with catch @ 03497da8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03497d74 with catch @ 03497dac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03497d5c with catch @ 03497db0
                        */
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<HOGPIBHKJDL>_MoveNext__);
    pHVar3 = (HOGPIBHKJDL_o *)local_48.fields._current;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03497d4c with catch @ 03497db4
                        */
    if (!bVar1) {
      pHVar3 = (HOGPIBHKJDL_o *)0x0;
      break;
    }
    if ((HOGPIBHKJDL_o *)local_48.fields._current == (HOGPIBHKJDL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pHVar2 = ((HOGPIBHKJDL_Fields *)((long)local_48.fields._current + 0x10))->
             _IHKLCENNHPI_k__BackingField;
    if (pHVar2 == (HGLELMDNMMA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03497e0c to 03597e13 has its CatchHandler @ 03497e14 */
      FUN_01bab8c8();
    }
                    /* try { // try from 03497dcc to 03597dcf has its CatchHandler @ 03497df0 */
                    /* try { // try from 03497dd0 to 03597df7 has its CatchHandler @ 03497c14 */
    bVar1 = System_String__op_Equality
                      ((pHVar2->fields)._COIPKAKHDFP_k__BackingField,KGLJICLJHEL,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<HOGPIBHKJDL>_Dispose__);
                    /* catch() { ... } // from try @ 03497dcc with catch @ 03497df0 */
                    /* try { // try from 03497df8 to 03597dff has its CatchHandler @ 03497e14 */
                    /* try { // try from 03497e00 to 03597e0b has its CatchHandler @ 03497c14 */
  return pHVar3;
}

