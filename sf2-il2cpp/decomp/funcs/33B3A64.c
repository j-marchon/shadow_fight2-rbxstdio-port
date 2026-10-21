// Nekki.SF2.GUI.Scripts.VersionDependentElements$$Awake @ RVA 0x33B3A64

void Nekki_SF2_GUI_Scripts_VersionDependentElements__Awake
               (Nekki_SF2_GUI_Scripts_VersionDependentElements_o *__this,MethodInfo *method)

{
  bool value;
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 034b3a68 to 035b3a6f has its CatchHandler @ 034b4794 */
  if ((DAT_04567d66 & 1) == 0) {
                    /* try { // try from 034b3a80 to 035b3a87 has its CatchHandler @ 034b47a0 */
                    /* try { // try from 034b3a88 to 035b3a93 has its CatchHandler @ 034b47b8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GameObject>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GameObject>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GameObject>_get_Current__);
                    /* try { // try from 034b3aac to 035b3ab3 has its CatchHandler @ 034b4728 */
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_GetEnumerator__);
    DAT_04567d66 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 034b3acc to 035b3acf has its CatchHandler @ 034b46a4 */
                    /* try { // try from 034b3ad0 to 035b3af7 has its CatchHandler @ 034b4734 */
                    /* try { // try from 034b3af8 to 035b3aff has its CatchHandler @ 034b4724 */
                    /* try { // try from 034b3b1c to 035b3b23 has its CatchHandler @ 034b47ec */
                    /* try { // try from 034b3b34 to 035b3b3b has its CatchHandler @ 034b4810 */
                    /* try { // try from 034b3b3c to 035b3b47 has its CatchHandler @ 034b47bc */
                    /* try { // try from 034b3b60 to 035b3b67 has its CatchHandler @ 034b4720 */
  if ((((((((__this->fields).ActiveOnPaid == false) ||
          (iVar2 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0), iVar2 != 0)) &&
         (((__this->fields).ActiveOnFree == false ||
          (iVar2 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0), iVar2 != 1)))) &&
        (((__this->fields).ActiveOnSteam == false ||
         (iVar2 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0), iVar2 != 2)))) &&
       (((__this->fields).ActiveOnSwitch == false ||
        (iVar2 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0), iVar2 != 3)))) &&
      (((((__this->fields).ActiveOnSamsungFree == false ||
         (iVar2 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0), iVar2 != 4)) &&
        (((__this->fields).ActiveOnHuaweiFree == false ||
         (iVar2 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0), iVar2 != 5)))) &&
       (((__this->fields).ActiveOnISBNFree == false ||
        (iVar2 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0), iVar2 != 6)))))) &&
     (((__this->fields).ActiveOnMyGamezFree == false ||
      (iVar2 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0), iVar2 != 7)))) {
                    /* try { // try from 034b3bf0 to 035b3bfb has its CatchHandler @ 034b47e0 */
    if ((__this->fields).ActiveOnChinaFree == false) {
      value = false;
                    /* try { // try from 034b3c10 to 035b3c17 has its CatchHandler @ 034b483c */
    }
    else {
      iVar2 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
      value = iVar2 == 8;
    }
  }
  else {
    value = true;
  }
                    /* try { // try from 034b3b80 to 035b3b83 has its CatchHandler @ 034b46a0 */
  __this_00 = (__this->fields).Elements;
                    /* try { // try from 034b3b84 to 035b3bab has its CatchHandler @ 034b4730 */
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<GameObject>_GetEnumerator__);
    while( true ) {
                    /* try { // try from 034b3bac to 035b3bb3 has its CatchHandler @ 034b471c */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<GameObject>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,Method_System_Collections_Generic_List_Enumerator<GameObject>_Dispose__
                  );
                    /* try { // try from 034b3be8 to 035b3bef has its CatchHandler @ 034b47d4 */
        return;
      }
      if ((UnityEngine_GameObject_o *)local_38.fields._current == (UnityEngine_GameObject_o *)0x0)
      break;
      UnityEngine_GameObject__SetActive
                ((UnityEngine_GameObject_o *)local_38.fields._current,value,(MethodInfo *)0x0);
                    /* try { // try from 034b3bd0 to 035b3bd7 has its CatchHandler @ 034b4840 */
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

