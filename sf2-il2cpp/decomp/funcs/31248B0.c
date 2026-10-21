// Nekki.SF2.GUI.Profile.AchievementsController$$AOIGDMONJNJ @ RVA 0x31248B0

int32_t Nekki_SF2_GUI_Profile_AchievementsController__AOIGDMONJNJ
                  (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,KMJDCOABCCG_o *HKCIMMBPDLP
                  ,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *__this_00;
  Il2CppObject *pIVar2;
  int index;
  
  if ((DAT_04566652 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Count__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__);
    DAT_04566652 = 1;
  }
  __this_00 = (__this->fields).OBNPKCCKLIJ;
  if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return -1;
    }
    index = 0;
    do {
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__
                         );
      if (pIVar2 == (Il2CppObject *)0x0) break;
      if (pIVar2[1].klass == (Il2CppClass *)HKCIMMBPDLP) {
        return index;
      }
      if (iVar1 + -1 == index) {
        return -1;
      }
      __this_00 = (__this->fields).OBNPKCCKLIJ;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

