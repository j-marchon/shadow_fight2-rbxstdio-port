// Nekki.SF2.GUI.Dialogs.EventDialog$$EEHJPNCNNGP @ RVA 0x3580B8C

int32_t Nekki_SF2_GUI_Dialogs_EventDialog__EEHJPNCNNGP
                  (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,
                  System_Collections_Generic_List_MapButton__o *EDEHNHIHDDH,float *KNBLBCAPOCH,
                  MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  float fVar4;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04568cce & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
    __this = (Nekki_SF2_GUI_Dialogs_EventDialog_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_get_Count__);
    DAT_04568cce = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if (EDEHNHIHDDH != (System_Collections_Generic_List_MapButton__o *)0x0) {
    iVar1 = (EDEHNHIHDDH->fields)._size;
    if (iVar1 < 7) {
      iVar3 = 3;
    }
    else {
                    /* try { // try from 03680c24 to 03780c2b has its CatchHandler @ 03680cd4 */
      if (DAT_0456033d == '\0') {
                    /* try { // try from 03680c2c to 03780cb3 has its CatchHandler @ 03680b64 */
        FUN_01bab630(&System_Math_TypeInfo);
        DAT_0456033d = '\x01';
      }
      fVar4 = (float)iVar1 * 0.5;
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar3 = -0x80000000;
      if ((float)(int)fVar4 != INFINITY) {
        iVar3 = (int)fVar4;
      }
    }
    *KNBLBCAPOCH = 0.0;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)EDEHNHIHDDH,
               Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__);
      if (!bVar2) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03680cb4 with catch @ 03680cd8
                        */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__)
        ;
                    /* try { // try from 03680cf0 to 03780cf3 has its CatchHandler @ 03680d14 */
                    /* try { // try from 03680cf4 to 03780d1b has its CatchHandler @ 03680b64 */
        return iVar3;
      }
                    /* try { // try from 03680cb4 to 03780cb7 has its CatchHandler @ 03680cd8 */
                    /* try { // try from 03680cb8 to 03780cbb has its CatchHandler @ 03680cd0 */
      if ((Nekki_SF2_GUI_Map_MapButton_o *)local_58.fields._current ==
          (Nekki_SF2_GUI_Map_MapButton_o *)0x0) break;
                    /* try { // try from 03680cbc to 03780cbf has its CatchHandler @ 03680ccc */
                    /* try { // try from 03680cc0 to 03780cc3 has its CatchHandler @ 03680cc8 */
      fVar4 = Nekki_SF2_GUI_Map_MapButton__get_RealWidth
                        ((Nekki_SF2_GUI_Map_MapButton_o *)local_58.fields._current,(MethodInfo *)0x0
                        );
                    /* try { // try from 03680cc4 to 03780cef has its CatchHandler @ 03680b64 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03680cc0 with catch @ 03680cc8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03680cbc with catch @ 03680ccc
                        */
      if (fVar4 <= *KNBLBCAPOCH) {
        fVar4 = *KNBLBCAPOCH;
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03680cb8 with catch @ 03680cd0
                        */
      *KNBLBCAPOCH = fVar4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03680c24 with catch @ 03680cd4
                        */
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

