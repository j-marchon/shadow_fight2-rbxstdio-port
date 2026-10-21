// Nekki.SF2.GUI.Profile.TricksController$$ILAGLJIOOKB @ RVA 0x3154FE0

int32_t Nekki_SF2_GUI_Profile_TricksController__ILAGLJIOOKB
                  (Nekki_SF2_GUI_Profile_TricksController_o *__this,System_String_o *FPAECAOFJEL,
                  MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this_00;
  Il2CppObject *pIVar3;
  int index;
  
                    /* try { // try from 03254ff4 to 0335519f has its CatchHandler @ 03254ff4
                       catch() { ... } // from try @ 03254ff4 with catch @ 03254ff4
                       catch() { ... } // from try @ 032560d8 with catch @ 03254ff4
                       catch() { ... } // from try @ 032561dc with catch @ 03254ff4
                       catch() { ... } // from try @ 03256218 with catch @ 03254ff4
                       catch() { ... } // from try @ 03256254 with catch @ 03254ff4
                       catch() { ... } // from try @ 03256284 with catch @ 03254ff4
                       catch() { ... } // from try @ 032565a8 with catch @ 03254ff4
                       catch() { ... } // from try @ 032565dc with catch @ 03254ff4
                       catch() { ... } // from try @ 032567e4 with catch @ 03254ff4 */
  if ((DAT_04566831 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
    DAT_04566831 = 1;
  }
  __this_00 = (__this->fields).GLNEIGKMPDC;
  if (__this_00 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return -1;
    }
    index = 0;
    do {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar2 = System_String__op_Equality(pIVar3[1].monitor,FPAECAOFJEL,(MethodInfo *)0x0);
      if (bVar2) {
        return index;
      }
      if (iVar1 + -1 == index) {
        return -1;
      }
      __this_00 = (__this->fields).GLNEIGKMPDC;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

