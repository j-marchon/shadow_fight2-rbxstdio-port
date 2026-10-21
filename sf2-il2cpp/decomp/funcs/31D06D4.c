// AHMJMDBNMHO$$DILLKNLMCFO @ RVA 0x31D06D4

System_Collections_Generic_List_HJNEOLCKEMD__o *
AHMJMDBNMHO__DILLKNLMCFO(AHMJMDBNMHO_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_HJNEOLCKEMD__o **ppSVar2;
  System_Collections_Generic_List_HJNEOLCKEMD__o *local_28;
  
                    /* catch() { ... } // from try @ 032d06a0 with catch @ 032d06d4 */
                    /* catch() { ... } // from try @ 032d069c with catch @ 032d06d8 */
                    /* catch() { ... } // from try @ 032d052c with catch @ 032d06dc */
                    /* catch() { ... } // from try @ 032d0698 with catch @ 032d06e0 */
                    /* catch() { ... } // from try @ 032d0694 with catch @ 032d06e4 */
                    /* catch() { ... } // from try @ 032d053c with catch @ 032d06e8 */
                    /* catch() { ... } // from try @ 032d0690 with catch @ 032d06ec */
                    /* catch() { ... } // from try @ 032d05ec with catch @ 032d06f0
                       catch() { ... } // from try @ 032d05f8 with catch @ 032d06f0 */
  if ((DAT_04566c9e & 1) == 0) {
                    /* catch() { ... } // from try @ 032d04f0 with catch @ 032d06f4 */
                    /* catch() { ... } // from try @ 032d04dc with catch @ 032d06f8 */
                    /* catch() { ... } // from try @ 032d068c with catch @ 032d06fc */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>_TryGetValue__
                );
                    /* catch() { ... } // from try @ 032d0688 with catch @ 032d0700 */
                    /* catch() { ... } // from try @ 032d0684 with catch @ 032d0704 */
    DAT_04566c9e = 1;
  }
                    /* catch() { ... } // from try @ 032d0680 with catch @ 032d0708 */
  local_28 = (System_Collections_Generic_List_HJNEOLCKEMD__o *)0x0;
                    /* catch() { ... } // from try @ 032d067c with catch @ 032d070c */
  if (KGLJICLJHEL != (System_String_o *)0x0) {
                    /* catch() { ... } // from try @ 032d04bc with catch @ 032d0710 */
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).HENCEKHKNDD;
                    /* catch() { ... } // from try @ 032d0498 with catch @ 032d0714 */
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032d072c with catch @ 032d0750 */
      FUN_01bab8c8();
    }
    ppSVar2 = &local_28;
                    /* try { // try from 032d072c to 033d072f has its CatchHandler @ 032d0750 */
                    /* try { // try from 032d0730 to 033d0757 has its CatchHandler @ 032d0388 */
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)KGLJICLJHEL,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>_TryGetValue__
                      );
    if (bVar1) goto LAB_032d073c;
  }
  ppSVar2 = &(__this->fields).CMAFKNEPKDA;
LAB_032d073c:
  return *ppSVar2;
}

