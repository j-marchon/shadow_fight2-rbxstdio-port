// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$HMECCPGJAHJ @ RVA 0x34564A4

float Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__HMECCPGJAHJ
                (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
                System_Collections_Generic_List_DDMHMABAHHD__o *GHAAKPDHIJJ,float MCFPOCKJGBM,
                MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 035564b0 to 036564b7 has its CatchHandler @ 03557f28 */
                    /* try { // try from 035564b8 to 036564c7 has its CatchHandler @ 03557f24 */
  if ((DAT_045682d4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
                    /* try { // try from 035564d4 to 036564f7 has its CatchHandler @ 03558190 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_get_Current__);
    __this = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
    DAT_045682d4 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (GHAAKPDHIJJ != (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) {
                    /* try { // try from 03556510 to 0365651b has its CatchHandler @ 03557f20 */
                    /* try { // try from 03556520 to 03656527 has its CatchHandler @ 03557f1c */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
               Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
    fVar2 = 0.0;
    while( true ) {
                    /* try { // try from 03556538 to 0365653f has its CatchHandler @ 03557f18 */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__);
                    /* try { // try from 03556544 to 0365654b has its CatchHandler @ 03557f14 */
      if (!bVar1) {
                    /* try { // try from 0355655c to 03656563 has its CatchHandler @ 03557f10 */
                    /* try { // try from 03556564 to 03656573 has its CatchHandler @ 03557f0c */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
                    /* try { // try from 03556578 to 0365657f has its CatchHandler @ 03557f08 */
        return MCFPOCKJGBM / fVar2;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      fVar2 = fVar2 + *(float *)((long)&local_48.fields._current[1].monitor + 4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

