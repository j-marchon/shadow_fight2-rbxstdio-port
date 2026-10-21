// PFECHOJADFA$$BNNIDPDMOIL @ RVA 0x34CD864

bool PFECHOJADFA__BNNIDPDMOIL
               (PFECHOJADFA_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OMNMIEMIMKC__o *__this_00;
  ulong uVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568692 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_Dispose__,
                 NKCMBEFHFII,(ulong)(uint)DPCEFBCDHPA);
                    /* try { // try from 035cd898 to 036cd89f has its CatchHandler @ 035cd8f0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_MoveNext__);
                    /* try { // try from 035cd8ac to 036cd8b7 has its CatchHandler @ 035cd8ec */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_get_Current__);
                    /* try { // try from 035cd8b8 to 036cd8df has its CatchHandler @ 035cd670 */
    FUN_01bab630(&Method_System_Collections_Generic_List<OMNMIEMIMKC>_GetEnumerator__);
    DAT_04568692 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).INAJMPIJJOG;
  if (__this_00 == (System_Collections_Generic_List_OMNMIEMIMKC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 035cd8e0 to 036cd8e3 has its CatchHandler @ 035cd8e8 */
                    /* try { // try from 035cd8e4 to 036cd907 has its CatchHandler @ 035cd670 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035cd8e0 with catch @ 035cd8e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035cd8ac with catch @ 035cd8ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035cd898 with catch @ 035cd8f0
                        */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OMNMIEMIMKC>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_035cd934;
    }
                    /* try { // try from 035cd908 to 036cd90b has its CatchHandler @ 035cd92c */
                    /* try { // try from 035cd90c to 036cd933 has its CatchHandler @ 035cd670 */
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (*(local_48.fields._current)->klass->vtable[4].methodPtr)
                      (local_48.fields._current,NKCMBEFHFII,(ulong)(uint)DPCEFBCDHPA,
                       (local_48.fields._current)->klass->vtable[4].method);
  } while ((uVar2 & 1) != 0);
  iVar3 = 4;
                    /* catch() { ... } // from try @ 035cd908 with catch @ 035cd92c */
LAB_035cd934:
                    /* try { // try from 035cd934 to 036cd93b has its CatchHandler @ 035cd950 */
                    /* try { // try from 035cd93c to 036cd947 has its CatchHandler @ 035cd670 */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_Dispose__);
                    /* try { // try from 035cd948 to 036cd94f has its CatchHandler @ 035cd950 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035cd934 with catch @ 035cd950
                       catch(type#2 @ 00000000) { ... } // from try @ 035cd948 with catch @ 035cd950
                        */
                    /* try { // try from 035cd954 to 036cdb0b has its CatchHandler @ 035cd954
                       catch() { ... } // from try @ 035cd954 with catch @ 035cd954
                       catch() { ... } // from try @ 035cdbfc with catch @ 035cd954
                       catch() { ... } // from try @ 035cdc9c with catch @ 035cd954
                       catch() { ... } // from try @ 035cdca4 with catch @ 035cd954
                       catch() { ... } // from try @ 035cdd58 with catch @ 035cd954 */
  return iVar3 != 4;
}

