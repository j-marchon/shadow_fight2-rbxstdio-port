// Nekki.SF2.GUI.Profile.AchievementsController$$ScrollToItemWithReward @ RVA 0x31246F8

/* WARNING: Type propagation algorithm not settling */

bool Nekki_SF2_GUI_Profile_AchievementsController__ScrollToItemWithReward
               (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,float PNEIGGOFIOA,
               MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *__this_00;
  Il2CppObject *pIVar2;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  int index;
  
  if ((DAT_0456664d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Count__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__);
    DAT_0456664d = 1;
  }
  __this_00 = (__this->fields).OBNPKCCKLIJ;
  if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return false;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__
                         );
      if ((pIVar2 == (Il2CppObject *)0x0) || (pIVar2[1].klass == (Il2CppClass *)0x0)) break;
      if (*(char *)((long)&((pIVar2[1].klass)->_1).element_class + 3) != '\0') {
        if (index < 0) {
          return false;
        }
        pNVar3 = (__this->fields).super._TableView;
        if (pNVar3 != (Nekki_SF2_GUI_TableView_o *)0x0) {
          iVar1 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar3,(MethodInfo *)0x0);
          if (iVar1 <= index) {
            return false;
          }
          pNVar3 = (__this->fields).super._TableView;
          if (pNVar3 != (Nekki_SF2_GUI_TableView_o *)0x0) {
            Nekki_SF2_GUI_TableView__ScrollToCell(pNVar3,index,PNEIGGOFIOA,(MethodInfo *)0x0);
            return true;
          }
        }
        break;
      }
      __this_00 = (__this->fields).OBNPKCCKLIJ;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

