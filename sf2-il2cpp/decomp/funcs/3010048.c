// Nekki.SF2.GUI.Common.MenuControls.EBHCGCMCBML$$PIMLGDDBIPN @ RVA 0x3010048

bool Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML__PIMLGDDBIPN
               (Nekki_SF2_GUI_Common_MenuControls_EBHCGCMCBML_o *__this,int32_t ABACOMLKIAJ,
               FBBNEILNOKK_array *JALOKGCPLGJ,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_Collections_Generic_List_bool____o *__this_00;
  Il2CppObject *pIVar3;
  bool bVar4;
  uint uVar5;
  
  if ((DAT_04565b9e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<bool[]>_get_Item__);
    DAT_04565b9e = 1;
  }
  if (JALOKGCPLGJ == (FBBNEILNOKK_array *)0x0) {
LAB_0311011c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (uint)JALOKGCPLGJ->max_length;
  if ((int)uVar1 < 1) {
    bVar4 = false;
  }
  else {
    uVar5 = 0;
    bVar4 = false;
    do {
      if (uVar1 <= uVar5) {
LAB_03110120:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      __this_00 = (__this->fields).MFKHOLCJNKE;
      if (__this_00 == (System_Collections_Generic_List_bool____o *)0x0) goto LAB_0311011c;
      uVar2 = JALOKGCPLGJ->m_Items[(int)uVar5];
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,ABACOMLKIAJ,
                          Method_System_Collections_Generic_List<bool[]>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_0311011c;
      if (*(uint *)&pIVar3[1].monitor <= uVar2) goto LAB_03110120;
      uVar1 = (uint)JALOKGCPLGJ->max_length;
      uVar5 = uVar5 + 1;
      bVar4 = (bool)(bVar4 | *(char *)((long)&pIVar3[2].klass + (long)(int)uVar2) != '\0');
    } while ((int)uVar5 < (int)uVar1);
  }
  return bVar4;
}

