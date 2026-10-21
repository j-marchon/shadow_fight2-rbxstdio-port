// Nekki.SF2.GUI.Profile.AchievementsController$$IsAchievementWithReward @ RVA 0x31244F4

bool Nekki_SF2_GUI_Profile_AchievementsController__IsAchievementWithReward
               (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *__this_00;
  Il2CppObject *pIVar2;
  int index;
  
                    /* catch() { ... } // from try @ 032244e4 with catch @ 032244f8 */
                    /* try { // try from 03224500 to 03324567 has its CatchHandler @ 0322457c */
  if ((DAT_04566649 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Count__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__);
    DAT_04566649 = 1;
  }
  __this_00 = (__this->fields).OBNPKCCKLIJ;
  if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0) {
    index = 0;
    do {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 <= index) {
LAB_03224580:
        return index < iVar1;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__
                         );
      if ((pIVar2 == (Il2CppObject *)0x0) || (pIVar2[1].klass == (Il2CppClass *)0x0)) break;
                    /* try { // try from 03224568 to 03324573 has its CatchHandler @ 0322411c */
      if (*(char *)((long)&((pIVar2[1].klass)->_1).element_class + 3) != '\0') goto LAB_03224580;
      __this_00 = (__this->fields).OBNPKCCKLIJ;
                    /* try { // try from 03224574 to 0332457b has its CatchHandler @ 0322457c */
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03224500 with catch @ 0322457c
                       catch(type#2 @ 00000000) { ... } // from try @ 03224574 with catch @ 0322457c
                        */
  FUN_01bab8c8();
}

