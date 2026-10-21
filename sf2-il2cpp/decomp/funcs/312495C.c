// Nekki.SF2.GUI.Profile.AchievementsController$$PMEHOIIMOHB @ RVA 0x312495C

int32_t Nekki_SF2_GUI_Profile_AchievementsController__PMEHOIIMOHB
                  (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,
                  System_String_o *LHPKDPOMOBM,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *__this_00;
  Il2CppObject *pIVar3;
  int index;
  
  if ((DAT_0456664f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Count__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__);
    DAT_0456664f = 1;
  }
  __this_00 = (__this->fields).OBNPKCCKLIJ;
  if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return -1;
    }
    index = 0;
    do {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__
                         );
      if ((pIVar3 == (Il2CppObject *)0x0) || (pIVar3[1].klass == (Il2CppClass *)0x0)) break;
      bVar2 = System_String__op_Equality
                        (((pIVar3[1].klass)->_1).byval_arg.data,LHPKDPOMOBM,(MethodInfo *)0x0);
      if (bVar2) {
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

