// Nekki.SF2.GUI.BaseScrollContent$$SetItems @ RVA 0x35CD878

void Nekki_SF2_GUI_BaseScrollContent__SetItems
               (Nekki_SF2_GUI_BaseScrollContent_o *__this,
               System_Collections_Generic_List_BaseScrollItem__o *GHAAKPDHIJJ,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  method_00 = (MethodInfo *)GHAAKPDHIJJ;
  if ((DAT_04568fb8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_3408);
    DAT_04568fb8 = 1;
    method_00 = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (GHAAKPDHIJJ == (System_Collections_Generic_List_BaseScrollItem__o *)0x0) {
                    /* try { // try from 036cd95c to 037cd95f has its CatchHandler @ 036cd968 */
                    /* try { // try from 036cd960 to 037cd983 has its CatchHandler @ 036cd864 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036cd918 with catch @ 036cd964
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036cd95c with catch @ 036cd968
                        */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036cd8fc with catch @ 036cd96c
                        */
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_3408,(MethodInfo *)0x0);
  }
  else {
                    /* try { // try from 036cd8fc to 037cd903 has its CatchHandler @ 036cd96c */
    Nekki_SF2_GUI_BaseScrollContent__Clear(__this,method_00);
                    /* try { // try from 036cd918 to 037cd923 has its CatchHandler @ 036cd964 */
                    /* try { // try from 036cd924 to 037cd95b has its CatchHandler @ 036cd864 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
               Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                             ), bVar1) {
      Nekki_SF2_GUI_BaseScrollContent__AddItem
                (__this,(Nekki_SF2_GUI_BaseScrollItem_o *)local_48.fields._current,method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__
              );
  }
                    /* try { // try from 036cd984 to 037cd987 has its CatchHandler @ 036cd9b0 */
                    /* try { // try from 036cd988 to 037cd9b7 has its CatchHandler @ 036cd864 */
  return;
}

