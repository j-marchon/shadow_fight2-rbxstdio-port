// Nekki.SF2.GUI.Dialogs.NotificationsGame$$Update @ RVA 0x30F67CC

void Nekki_SF2_GUI_Dialogs_NotificationsGame__Update
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Menu_MenuScroll_o *pNVar3;
  
  if ((__this->fields).KHHFEDEDJID != false) {
    pNVar3 = (__this->fields)._scroll;
    if (pNVar3 == (Nekki_SF2_GUI_Menu_MenuScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (((pNVar3->fields).KDBFJLCCJHC != false) &&
       ((bVar1 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0), bVar1 ||
        (iVar2 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0), 0 < iVar2)))) {
      method_00 = (MethodInfo *)0x0;
      bVar1 = HPHIGFJMKAC__JMHANNNMOEA
                        ((System_Collections_Generic_IEnumerable_RectTransform__o *)
                         (__this->fields).KGJOFOAOICJ,true,(MethodInfo *)0x0);
      if (bVar1) {
        Nekki_SF2_GUI_Dialogs_NotificationsGame__DDJIEEGPABO(__this,false,method_00);
        return;
      }
    }
  }
  return;
}

