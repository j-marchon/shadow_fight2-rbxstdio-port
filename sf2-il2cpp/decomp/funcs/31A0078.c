// LDHBHPILNMA$$HEIKABHBFDI @ RVA 0x31A0078

void LDHBHPILNMA__HEIKABHBFDI
               (System_Collections_Generic_List_IIMNGGHGKOD__o *DLOFGOGAGAA,MethodInfo *method)

{
  bool bVar1;
  undefined1 auVar2 [16];
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = DLOFGOGAGAA;
                    /* try { // try from 032a0078 to 033a007b has its CatchHandler @ 032a00b4 */
                    /* try { // try from 032a007c to 033a007f has its CatchHandler @ 032a009c */
                    /* try { // try from 032a0080 to 033a0083 has its CatchHandler @ 032a00b4 */
                    /* try { // try from 032a0084 to 033a0087 has its CatchHandler @ 0329fd50 */
                    /* try { // try from 032a0088 to 033a008b has its CatchHandler @ 032a0094 */
                    /* try { // try from 032a008c to 033a00c7 has its CatchHandler @ 0329fd50 */
  if ((DAT_04566ad9 & 1) == 0) {
                    /* catch() { ... } // from try @ 032a0088 with catch @ 032a0094 */
                    /* catch() { ... } // from try @ 0329ff54 with catch @ 032a0098 */
                    /* catch() { ... } // from try @ 032a007c with catch @ 032a009c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__);
                    /* catch() { ... } // from try @ 0329ffb8 with catch @ 032a00a0 */
                    /* catch() { ... } // from try @ 0329ff64 with catch @ 032a00a4 */
                    /* catch() { ... } // from try @ 032a0070 with catch @ 032a00a8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__);
                    /* catch() { ... } // from try @ 0329fedc with catch @ 032a00ac */
                    /* catch() { ... } // from try @ 0329fe80 with catch @ 032a00b0 */
                    /* catch() { ... } // from try @ 032a0078 with catch @ 032a00b4
                       catch() { ... } // from try @ 032a0080 with catch @ 032a00b4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_get_Current__);
                    /* catch() { ... } // from try @ 0329ff40 with catch @ 032a00b8 */
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
                    /* try { // try from 032a00c8 to 033a00cb has its CatchHandler @ 032a00dc */
    DAT_04566ad9 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if (DLOFGOGAGAA != (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0) {
                    /* catch() { ... } // from try @ 032a00c8 with catch @ 032a00dc */
                    /* try { // try from 032a00e4 to 033a014b has its CatchHandler @ 032a0160 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)DLOFGOGAGAA,
               Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      (*(local_38.fields._current)->klass->vtable[4].methodPtr)
                (local_38.fields._current,(local_38.fields._current)->klass->vtable[4].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

