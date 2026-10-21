// Nekki.SF2.GUI.Common.Hints.HintList$$LMKOIEJBCLO @ RVA 0x3515C04

void Nekki_SF2_GUI_Common_Hints_HintList__LMKOIEJBCLO
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  System_Collections_Generic_List_HintGroup__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 03615c10 to 03715c1b has its CatchHandler @ 03615c60 */
                    /* try { // try from 03615c1c to 03715c57 has its CatchHandler @ 03615b64 */
  if ((DAT_04568926 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
                    /* try { // try from 03615c58 to 03715c5b has its CatchHandler @ 03615c64 */
    DAT_04568926 = 1;
  }
                    /* try { // try from 03615c5c to 03715c7f has its CatchHandler @ 03615b64 */
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03615c10 with catch @ 03615c60
                        */
  local_38.fields._current = (Il2CppObject *)0x0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03615c58 with catch @ 03615c64
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03615bf8 with catch @ 03615c68
                        */
  if (((__this->fields).AKOLAICNIJF != CJNHFNHJHPE) &&
     ((__this->fields).AKOLAICNIJF = CJNHFNHJHPE, CJNHFNHJHPE != 0x67)) {
    __this_00 = (__this->fields).DEDJHBCOMCJ;
                    /* try { // try from 03615c80 to 03715c83 has its CatchHandler @ 03615cac */
    if (__this_00 == (System_Collections_Generic_List_HintGroup__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03615c84 to 03715cb3 has its CatchHandler @ 03615b64 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
                    /* catch() { ... } // from try @ 03615c80 with catch @ 03615cac */
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__
                             ), bVar1) {
                    /* try { // try from 03615cb4 to 03715cbb has its CatchHandler @ 03615cd0 */
      if ((Nekki_SF2_GUI_Common_Hints_HintGroup_o *)local_38.fields._current ==
          (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03615cbc to 03715cc7 has its CatchHandler @ 03615b64 */
      Nekki_SF2_GUI_Common_Hints_HintGroup__set_HintScheme
                ((Nekki_SF2_GUI_Common_Hints_HintGroup_o *)local_38.fields._current,
                 (__this->fields).AKOLAICNIJF,(MethodInfo *)0x0);
    }
                    /* try { // try from 03615cc8 to 03715ccf has its CatchHandler @ 03615cd0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03615cb4 with catch @ 03615cd0
                       catch(type#2 @ 00000000) { ... } // from try @ 03615cc8 with catch @ 03615cd0
                        */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
  }
  return;
}

